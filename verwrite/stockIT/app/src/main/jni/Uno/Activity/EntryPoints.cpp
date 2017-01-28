#include <uBase/BaseLib.h>
#include <Uno/Activity/EntryPoints.h>
#include <Uno/Activity/AApplication.h>
#include <Uno/JNIHelper.h>
#include <Uno/Graphics/GLHelper.h>
#include <Android.Base.JNI.h>

// Java native methods call here
// If we are not running on the android UI thread we need
// to dispatch the event to the uno thread. If we need the
// java thread to wait until the uno thread has processed
// the event then we use the WAIT_ON_UNO_* and RUN_ON_UNO_*
// commands

//--------------------------------------------------
// state for WAIT_ON_UNO & RUN_ON_UNO commands

int EntryPoints::key = 0;
pthread_cond_t EntryPoints::cond;
pthread_mutex_t EntryPoints::mutex;
bool EntryPointsunoThreadLocked = false;

//--------------------------------------------------

class CTError : public CTAction
{
public:
    uBase::String _message;
    CTError(uBase::String message)
    {
        _message = message;
    }
    virtual void Execute()
    {
        AApplication::cppJavaThrowError(_message);
    }
};

extern "C"
{
    void JNICALL cppJavaThrowError (JNIEnv* env , jobject obj, jint errorCode, jstring errorMessage)
    {
        char const* cerrorMessage = env->GetStringUTFChars(errorMessage, NULL);
        uBase::String message = "XLiError (" + uBase::String(errorCode) + ") - JavaThrown:" + uBase::String(cerrorMessage);
        env->ReleaseStringUTFChars(errorMessage, cerrorMessage);

        JNI_TRY
            AApplication::cppJavaThrowError(message);
        JNI_CATCH
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnReceiveURI (JNIEnv* env , jobject obj, jstring data)
    {
        data = (jstring)::g::Android::Base::JNI::NewGlobalRef1((jobject)data);

        JNI_TRY
            AApplication::cppOnReceiveURI(data);
        JNI_CATCH
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppTimerCallback (JNIEnv* env, jobject obj, jint timerID)
    {
        AApplication::cppTimerCallback(timerID);
    }
}
//--------------------------------------------------

class CTKeyboardResize : public CTAction
{
    int _height;
public:
    CTKeyboardResize(int height)
    {
        _height = height;
    }
    void Execute()
    {
        AApplication::cppOnKeyboardResized(_height);
    }
};

extern "C"
{
    void JNICALL cppOnKeyboardResized (JNIEnv* env, jobject obj, jint height)
    {
        JNI_TRY
            AApplication::cppOnKeyboardResized(height);
        JNI_CATCH
    }
}
//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnTopFrameChanged (JNIEnv* env, jobject obj, jint height)
    {
        JNI_TRY
            AApplication::cppOnTopFrameChanged(height);
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTKeyUp : public CTAction
{
    int _key;
public:
    CTKeyUp(int key) { _key = key; }
    void Execute() { AApplication::cppOnKeyUp(_key); }
};

extern "C"
{
    void JNICALL cppOnKeyUp (JNIEnv* env, jobject obj, jint key)
    {
        JNI_TRY
            AApplication::cppOnKeyUp(key);
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTKeyDown : public CTAction
{
    int _key;
public:
    CTKeyDown(int key) { _key = key; }
    void Execute() { AApplication::cppOnKeyDown(_key); }
};

extern "C"
{
    void JNICALL cppOnKeyDown (JNIEnv* env, jobject obj, jint key)
    {
        JNI_TRY
            AApplication::cppOnKeyDown(key);
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnCreate : public CTAction
{
public:
    CTOnCreate() {}
    void Execute()
    {
        AApplication::cppOnCreate();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnCreate(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnCreate();
        JNI_CATCH
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnStartMainLoop (JNIEnv* env, jobject obj, jboolean _resurrected)
    {
        JNI_TRY
            AApplication::mainLoop((bool)_resurrected);
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnRestart : public CTAction
{
public:
    CTOnRestart() {}
    void Execute()
    {
        AApplication::cppOnRestart();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnRestart(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnRestart();
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnStart : public CTAction
{
public:
    CTOnStart() {}
    void Execute()
    {
        AApplication::cppOnStart();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnStart(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnStart();
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnResume : public CTAction
{
public:
    CTOnResume() {}
    void Execute()
    {
        AApplication::cppOnResume();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnResume(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnResume();
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnPause : public CTAction
{
public:
    CTOnPause() {}
    void Execute()
    {
        AApplication::cppOnPause();
        SIGNAL_DONE_RUNNING_ON_UNO_AND_WAIT();
    }
};
extern "C"
{
    void JNICALL cppOnPause(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnPause();
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnStop : public CTAction
{
public:
    CTOnStop() {}
    void Execute()
    {
        AApplication::cppOnStop();
        SIGNAL_DONE_RUNNING_ON_UNO_AND_WAIT();
    }
};
extern "C"
{
    void JNICALL cppOnStop(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnStop();
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTOnDestroy : public CTAction
{
public:
    CTOnDestroy() {}
    void Execute()
    {
        AApplication::cppOnDestroy();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnDestroy(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnDestroy();
        JNI_CATCH
    }

}

//--------------------------------------------------

class CTOnSaveInstanceState : public CTAction
{
public:
    CTOnSaveInstanceState() {}
    void Execute()
    {
        AApplication::cppOnSaveInstanceState();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnSaveInstanceState(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnSaveInstanceState();
        JNI_CATCH
    }
}
//--------------------------------------------------

class CTOnConfigChanged : public CTAction
{
public:
    CTOnConfigChanged() {}
    void Execute()
    {
        AApplication::cppOnConfigChanged();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnConfigChanged(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnConfigChanged();
        JNI_CATCH
    }
}
//--------------------------------------------------

class CTOnLowMemory : public CTAction
{
public:
    CTOnLowMemory() {}
    void Execute()
    {
        AApplication::cppOnLowMemory();
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnLowMemory(JNIEnv *env , jobject obj)
    {
        JNI_TRY
            AApplication::cppOnLowMemory();
        JNI_CATCH
    }
}
//--------------------------------------------------

class CTOnWindowFocusChanged : public CTAction
{
    bool _hasFocus;
public:
    CTOnWindowFocusChanged(bool hasFocus) { _hasFocus = hasFocus; }
    void Execute()
    {
        AApplication::cppOnWindowFocusChanged(_hasFocus);
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppOnWindowFocusChanged(JNIEnv *env , jobject obj, jboolean hasFocus)
    {
        JNI_TRY
            AApplication::cppOnWindowFocusChanged((bool)hasFocus);
        JNI_CATCH
    }
}

//--------------------------------------------------

class CTForceRedraw : public CTAction
{
    int _forFrames;
public:
    CTForceRedraw(int forFrames) { _forFrames = forFrames; }
    void Execute()
    {
        AApplication::cppForceRedraw(_forFrames);
        SIGNAL_DONE_RUNNING_ON_UNO();
    }
};
extern "C"
{
    void JNICALL cppForceRedraw(JNIEnv *env , jobject obj, jint forFrames)
    {
        JNI_TRY
            AApplication::cppForceRedraw(forFrames);
        JNI_CATCH
    }
}
extern "C"
{
    void JNICALL cppForceRedrawUnsafe(JNIEnv *env , jobject obj)
    {
        AApplication::cppForceRedraw(1);
    }
}

//--------------------------------------------------

void AttachNativeCallbacks(JNIEnv* jni, jclass entryPointClass)
{
    if (false) LOGD("Registering native functions");
    static JNINativeMethod native_activity_funcs[] = {
        {(char* const)"cppOnCreate", (char* const)"(Z)V", (void *)&cppOnCreate},
        {(char* const)"cppOnDestroy", (char* const)"()V", (void *)&cppOnDestroy},
        {(char* const)"cppOnPause", (char* const)"()V", (void *)&cppOnPause},
        {(char* const)"cppOnResume", (char* const)"()V", (void *)&cppOnResume},
        {(char* const)"cppOnRestart", (char* const)"()V", (void *)&cppOnRestart},
        {(char* const)"cppOnStart", (char* const)"()V", (void *)&cppOnStart},
        {(char* const)"cppOnStop", (char* const)"()V", (void *)&cppOnStop},
        {(char* const)"cppOnSaveInstanceState", (char* const)"(Landroid/os/Bundle;)V", (void *)&cppOnSaveInstanceState},
        {(char* const)"cppOnConfigChanged", (char* const)"()V", (void *)&cppOnConfigChanged},
        {(char* const)"cppOnLowMemory", (char* const)"()V", (void *)&cppOnLowMemory},
        {(char* const)"cppOnWindowFocusChanged", (char* const)"(Z)V", (void *)&cppOnWindowFocusChanged},
        {(char* const)"cppOnStartMainLoop", (char* const)"(ZZZ)V", (void *)&cppOnStartMainLoop},
        {(char* const)"cppForceRedraw", (char* const)"(I)V", (void *)&cppForceRedraw},
        {(char* const)"cppForceRedrawUnsafe", (char* const)"()V", (void *)&cppForceRedrawUnsafe},
        {(char* const)"cppJavaThrowError", (char* const)"(ILjava/lang/String;)V", (void *)&cppJavaThrowError},
        {(char* const)"cppOnReceiveURI", (char* const)"(Ljava/lang/String;)V", (void *)&cppOnReceiveURI},
        {(char* const)"cppTimerCallback", (char* const)"(I)V", (void *)&cppTimerCallback},
        {(char* const)"cppOnKeyboardResized", (char* const)"(I)V", (void *)&cppOnKeyboardResized},
        {(char* const)"cppOnTopFrameChanged", (char* const)"(I)V", (void *)&cppOnTopFrameChanged},
        {(char* const)"cppOnKeyUp", (char* const)"(I)V", (void *)&cppOnKeyUp},
        {(char* const)"cppOnKeyDown", (char* const)"(I)V", (void *)&cppOnKeyDown},
    };
    // the last argument is the number of native functions
    int attached = (int)jni->RegisterNatives(entryPointClass, native_activity_funcs, 21);
    if (attached < 0) {
        LOGD("COULD NOT REGISTER NATIVE ACTIVITY FUNCTIONS");
        throw uBase::Exception("COULD NOT REGISTER NATIVE ACTIVITY FUNCTIONS");
    } else {
        if (false) LOGD("Native functions activity registered");
    }
}

static void uInitRuntime()
{
    static uRuntime runtime;
}

// This is the first point we have in the app lifecycle when we are in control
// At this point Xli has been loaded by the Activity.java file and, as specified by
// the JNI spec, when a library is loaded, if there is a JNI_OnLoad method, it will
// be called.
// We use this point to grab the activity class and attach all the lifecycle callbacks
jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    if (false) {
        LOGD ("----------");
        LOGD ("Jni_OnLoad");
    }

    // vm & activityClass
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        LOGD ("&&&&&&& GetEnv failed &&&&&&");
        return -1;
    }
    jclass activityClass = env->FindClass("com/apps/stockit/stockIT");
    jclass entryPointsClass = env->FindClass("com/apps/stockit/ActivityNativeEntryPoints");
    jclass displayClass = env->FindClass("com/apps/stockit/Display");
    jclass nativeExternClass = env->FindClass("com/Bindings/ExternedBlockHost");

    if (!activityClass) {
        LOGD("COULD NOT FIND ACTIVITY CLASS");
        throw uBase::Exception("COULD NOT FIND ACTIVITY CLASS");
    }
    if (!displayClass) {
        LOGD("COULD NOT FIND DISPLAY CLASS");
        throw uBase::Exception("COULD NOT FIND DISPLAY CLASS");
    }
    if (!entryPointsClass) {
        LOGD("COULD NOT FIND ENTRYPOINTS CLASS");
        throw uBase::Exception("COULD NOT FIND ENTRYPOINTS CLASS");
    }
    if (!nativeExternClass) {
        LOGD("COULD NOT FIND NATIVEEXTERNCLASS CLASS");
        throw uBase::Exception("COULD NOT FIND NATIVEEXTERNCLASS CLASS");
    }

    // systems
    JniHelper::Init(vm, env, activityClass, displayClass, nativeExternClass);
    uBase::BaseLib::Init();
    Xli::PlatformSpecific::Android::PostInit();
    AApplication::Init();

    // threading
    pthread_mutex_init(&EntryPoints::mutex, NULL);
    pthread_cond_init(&EntryPoints::cond, NULL);

    // java callbacks
    AttachNativeCallbacks(env, entryPointsClass);

    // uno
    uInitRuntime();

    if (false) LOGD ("----------");
    return JNI_VERSION_1_6;
}
