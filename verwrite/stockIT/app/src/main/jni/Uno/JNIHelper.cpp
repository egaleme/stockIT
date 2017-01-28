#include <stdarg.h>
#include <Uno/JNIHelper.h>
#include <XliPlatform/PlatformSpecific/Android.h>

JavaVM* JniHelper::VM;
jobject JniHelper::ActivityObject = 0;
jclass JniHelper::ActivityClass = 0;
jclass JniHelper::DisplayClass = 0;
jclass JniHelper::NativeExternClass = 0;
pthread_key_t JniHelper::JniThreadKey;

void JniHelper::JniDestroyThread(void* value)
{
    if (false) LOGD("JNI: Detaching current thread");
    JNIEnv* env = (JNIEnv*)value;
    VM->DetachCurrentThread();
    pthread_setspecific(JniThreadKey, NULL);
}

void JniHelper::Init(JavaVM* vm, JNIEnv* env, jclass activityClass, jclass displayClass, jclass nativeExternClass)
{
    VM = vm;
    if (pthread_key_create(&JniThreadKey, JniDestroyThread))
        LOGD("JNI ERROR: Unable to create pthread key"); // Not fatal

    ActivityClass = reinterpret_cast<jclass>(env->NewGlobalRef(activityClass));
    DisplayClass = reinterpret_cast<jclass>(env->NewGlobalRef(displayClass));
    NativeExternClass = reinterpret_cast<jclass>(env->NewGlobalRef(nativeExternClass));
    pthread_setspecific(JniThreadKey, (void*)env);

    Xli::PlatformSpecific::Android::PreInit(vm, env, ActivityClass);
}

JniHelper::JniHelper()
{
    int status_ = (int)VM->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6);
    if (status_ != JNI_OK)
    {
        status_ = (int)VM->AttachCurrentThread(&env, NULL);
        if (status_ != JNI_OK)
            throw uBase::Exception("JNI ERROR: Failed to attach current thread");
    }
    if (!pthread_getspecific(JniThreadKey))
    {
        pthread_setspecific(JniThreadKey, (void*)env);
    }

    if (ActivityObject==0)
    {
        UpdateActivityObject();
    }
}

void JniHelper::UpdateActivityObject()
{
    if (ActivityObject) {
        env->DeleteGlobalRef(ActivityObject);
        ActivityObject = 0;
    }
    // fetch from activityClass
    jmethodID getActivity = env->GetStaticMethodID(ActivityClass, "GetRootActivity", "()Landroid/app/Activity;");
    if (!getActivity) throw uBase::Exception("Cannot cache mid for getActivity.");
    jobject _activity = env->CallStaticObjectMethod(ActivityClass, getActivity);

    if (_activity==0)
    {
        throw uBase::Exception("JNI ERROR: Failed to grab activity object");
    }

    // cache it
    ActivityObject = reinterpret_cast<jclass>(env->NewGlobalRef(_activity));
}

jclass JniHelper::GetActivityClass()
{
    return ActivityClass;
}

jclass JniHelper::GetDisplayClass()
{
    return DisplayClass;
}

jclass JniHelper::GetNativeExternClass()
{
    return NativeExternClass;
}

JavaVM* JniHelper::GetVM()
{
    return VM;
}

JNIEnv* JniHelper::GetEnv()
{
    return env;
}

JNIEnv* JniHelper::operator->()
{
    // TODO: Check jni exceptions
    return env;
}

jobject JniHelper::GetActivity()
{
    if (!ActivityObject)
    {
        LOGD("JNI ERROR: ActivityObject not cached before first request");
        throw uBase::Exception("JNI ERROR: ActivityObject not cached before first request");
    }
    return ActivityObject;
}

uBase::String JniHelper::GetString(jobject str)
{
    JniHelper jni;
    const char* utf8 = jni->GetStringUTFChars((jstring)str, NULL);
    uBase::String result = utf8;
    jni->ReleaseStringUTFChars((jstring)str, utf8);
    return result;
}

uString* JniHelper::JavaToUnoString(jstring jstr)
{
    JniHelper jni;
    if (!jstr) { return NULL; }
    jobject str = jni->NewLocalRef(jstr);
    const jchar* raw =  jni->GetStringChars((jstring)str, NULL);
    int len = jni->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = uString::New(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni->ReleaseStringChars((jstring)str, raw);
    jni->DeleteLocalRef(str);
    return result;
}

jstring JniHelper::UnoToJavaString(uString* ustr)
{
    if (!ustr)
        return NULL;

    JniHelper jni;
    return (jni->NewString(ustr->_ptr, ustr->_length));
}

float JniHelper::GetDensity()
{
    jclass cls = JniHelper::GetDisplayClass();
    WITH_STATIC_JAVA_METHOD(getDisplayMetrics, cls, "GetDisplayMetrics", "()Landroid/util/DisplayMetrics;");
    static float density = 0.0;
    if (density==0.0)
    {
        JniHelper jni;
        jclass metricsClass = jni->FindClass("android/util/DisplayMetrics");
        jfieldID jd = jni->GetFieldID( metricsClass, "density", "F" );
        jobject result = jni->CallStaticObjectMethod(cls, getDisplayMetrics);
        jfloat d = (jfloat)jni->GetFloatField(result, jd);
        jni->DeleteLocalRef(result);
        jni->DeleteLocalRef(metricsClass);
        density = (float)d;
    }
    return density;
}
