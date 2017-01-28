// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.JavaVMPtr.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[3];

namespace g{
namespace Android{
namespace Base{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public static extern class AndroidBindingMacros :28
// {
static void AndroidBindingMacros_build(uType* type)
{
}

uClassType* AndroidBindingMacros_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.AndroidBindingMacros", options);
    type->fp_build_ = AndroidBindingMacros_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public static extern class JNI :31
// {
// static JNI() :41
static void JNI__cctor__fn(uType* __type)
{
    JNI::Init();
}

static void JNI_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Java method id for ");
    ::STRINGS[1] = uString::Const(" is null");
    ::STRINGS[2] = uString::Const("\n"
        "");
    type->SetFields(0,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::_getUnoRefMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::_helperCls_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Android::Base::JNI::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Wrappers::JWrapper_typeof(), (uintptr_t)&::g::Android::Base::JNI::_rootActivityWrapped_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::Activity_getClassLoader_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::Base::JNI::ClassLoader_loadClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::Base::JNI::exceptionClass_, uFieldFlagsStatic);
}

uClassType* JNI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.JNI", options);
    type->fp_build_ = JNI_build;
    type->fp_cctor_ = JNI__cctor__fn;
    return type;
}

// public static extern void CheckException() :194
void JNI__CheckException_fn()
{
    JNI::CheckException();
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) :182
void JNI__CheckException1_fn(JNIEnv** jni)
{
    JNI::CheckException1(*jni);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :187
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage)
{
    JNI::CheckException2(*jni, appendMessage);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) :157
void JNI__DeleteGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteGlobalRef(*obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) :253
void JNI__DeleteLocalRef_fn(jclass* obj)
{
    JNI::DeleteLocalRef(*obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) :247
void JNI__DeleteLocalRef1_fn(jobject* obj)
{
    JNI::DeleteLocalRef1(*obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) :160
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteWeakGlobalRef(*obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() :59
void JNI__GetActivityClass_fn(jclass* __retval)
{
    *__retval = JNI::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() :56
void JNI__GetActivityObject_fn(jobject* __retval)
{
    *__retval = JNI::GetActivityObject();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) :276
void JNI__GetArrayLength_fn(jobject* array_, int* __retval)
{
    *__retval = JNI::GetArrayLength(*array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() :267
void JNI__GetDefaultObject_fn(jobject* __retval)
{
    *__retval = JNI::GetDefaultObject();
}

// public static extern Uno.Type GetDefaultType() :270
void JNI__GetDefaultType_fn(uType** __retval)
{
    *__retval = JNI::GetDefaultType();
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() :50
void JNI__GetEnvPtr_fn(JNIEnv** __retval)
{
    *__retval = JNI::GetEnvPtr();
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :202
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetMethodID(*cls, methodName, methodSig);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) :77
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType(*jni, *obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) :82
void JNI__GetRefType1_fn(jobject* obj, int* __retval)
{
    *__retval = JNI::GetRefType1(*obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) :226
void JNI__GetStaticMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetStaticMethodID(*cls, methodName, methodSig);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) :273
void JNI__GetUnoRef_fn(jobject* obj_, int64_t* __retval)
{
    *__retval = JNI::GetUnoRef(*obj_);
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() :53
void JNI__GetVM_fn(JavaVM** __retval)
{
    *__retval = JNI::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() :61
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval)
{
    *__retval = JNI::GetWrappedActivityObject();
}

// public static extern void Init() :47
void JNI__Init_fn()
{
    JNI::Init();
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) :163
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval)
{
    *__retval = JNI::IsSameObject(*objA_, *objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) :70
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval)
{
    *__retval = JNI::LoadClass(*jni, *name);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) :87
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass1(*jni, *name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) :106
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass2(*jni, name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) :114
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass3(name, *systemClass);
}

// public static extern Android.Base.Primitives.ujobject NewBooleanArray(int len) :278
void JNI__NewBooleanArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewBooleanArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewByteArray(int len) :280
void JNI__NewByteArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewByteArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewCharArray(int len) :282
void JNI__NewCharArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewCharArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewDoubleArray(int len) :292
void JNI__NewDoubleArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewDoubleArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) :290
void JNI__NewFloatArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewFloatArray(*len_);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) :123
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::NewGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) :120
void JNI__NewGlobalRef1_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewGlobalRef1(*obj_);
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) :286
void JNI__NewIntArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewIntArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewLongArray(int len) :288
void JNI__NewLongArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewLongArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewObjectArray(Android.Base.Primitives.ujclass cls, int len) :294
void JNI__NewObjectArray_fn(jclass* cls_, int* len_, jobject* __retval)
{
    *__retval = JNI::NewObjectArray(*cls_, *len_);
}

// public static extern Android.Base.Primitives.ujobject NewShortArray(int len) :284
void JNI__NewShortArray_fn(int* len_, jobject* __retval)
{
    *__retval = JNI::NewShortArray(*len_);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) :154
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewWeakGlobalRef(*obj_);
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len]) :334
void JNI__SetBooleanArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetBooleanArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len]) :350
void JNI__SetByteArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetByteArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len]) :342
void JNI__SetByteArrayRegion1_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetByteArrayRegion1(*javaArr, unoArr, *start, *len);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len]) :358
void JNI__SetCharArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetCharArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len]) :398
void JNI__SetDoubleArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetDoubleArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len]) :390
void JNI__SetFloatArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetFloatArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len]) :374
void JNI__SetIntArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetIntArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len]) :382
void JNI__SetLongArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetLongArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len]) :366
void JNI__SetShortArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len)
{
    JNI::SetShortArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static extern void ThrowNewException(string message) :200
void JNI__ThrowNewException_fn(uString* message_)
{
    JNI::ThrowNewException(message_);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) :165
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval)
{
    *__retval = JNI::TryGetException(*jni, appendMessage);
}

jmethodID JNI::_getUnoRefMid_;
jclass JNI::_helperCls_;
bool JNI::_inited_;
uSStrong< ::g::Android::Base::Wrappers::JWrapper*> JNI::_rootActivityWrapped_;
jmethodID JNI::Activity_getClassLoader_;
jmethodID JNI::ClassLoader_loadClass_;
jclass JNI::exceptionClass_;

// public static extern void CheckException() [static] :194
void JNI::CheckException()
{
    JNI_typeof()->Init();
    JNI::CheckException1(JNI::GetEnvPtr());
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) [static] :182
void JNI::CheckException1(JNIEnv* jni)
{
    JNI_typeof()->Init();
    JNI::CheckException2(jni, NULL);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :187
void JNI::CheckException2(JNIEnv* jni, uString* appendMessage)
{
    JNI_typeof()->Init();
    ::g::Uno::Exception* excep = JNI::TryGetException(jni, appendMessage);

    if (excep != NULL)
        U_THROW(excep);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) [static] :157
void JNI::DeleteGlobalRef(jobject obj_)
{
    JNI_typeof()->Init();
    JNI::GetEnvPtr()->DeleteGlobalRef(obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) [static] :253
void JNI::DeleteLocalRef(jclass obj)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) [static] :247
void JNI::DeleteLocalRef1(jobject obj)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :160
void JNI::DeleteWeakGlobalRef(jobject obj_)
{
    JNI_typeof()->Init();
    JNI::GetEnvPtr()->DeleteWeakGlobalRef(obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() [static] :59
jclass JNI::GetActivityClass()
{
    JNI_typeof()->Init();
    JniHelper jni;
    return JniHelper::GetActivityClass();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() [static] :56
jobject JNI::GetActivityObject()
{
    JNI_typeof()->Init();
    JniHelper jni;
    return JniHelper::GetActivity();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) [static] :276
int JNI::GetArrayLength(jobject array_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    return (int)jni->GetArrayLength((jarray)array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() [static] :267
jobject JNI::GetDefaultObject()
{
    JNI_typeof()->Init();
    return (jobject)0;
}

// public static extern Uno.Type GetDefaultType() [static] :270
uType* JNI::GetDefaultType()
{
    JNI_typeof()->Init();
    return (uType*)0;
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() [static] :50
JNIEnv* JNI::GetEnvPtr()
{
    JNI_typeof()->Init();
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, NULL);
    return jni;
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :202
jmethodID JNI::GetMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    JNI_typeof()->Init();
    const char* cMethodName = uAllocCStr(methodName);
    const char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    JNI::CheckException();

    if ((mid==0))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Java method...*/], methodName), ::STRINGS[1/*" is null"*/])));

    return mid;
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) [static] :77
int JNI::GetRefType(JNIEnv* jni, jobject obj)
{
    JNI_typeof()->Init();
    return (int)jni->GetObjectRefType(obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) [static] :82
int JNI::GetRefType1(jobject obj)
{
    JNI_typeof()->Init();
    return JNI::GetRefType(JNI::GetEnvPtr(), obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static] :226
jmethodID JNI::GetStaticMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    JNI_typeof()->Init();
    const char* cMethodName = uAllocCStr(methodName);
    const char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetStaticMethodID(cls,cMethodName,cMethodSig);
    uFreeCStr(cMethodName);
    uFreeCStr(cMethodSig);
    return mid;
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) [static] :273
int64_t JNI::GetUnoRef(jobject obj_)
{
    JNI_typeof()->Init();
    JNI::Init();
    if (obj_) {
        JNIEnv* jni = JNI::GetEnvPtr();
        return (int64_t)jni->CallStaticLongMethod(JNI::_helperCls(), JNI::_getUnoRefMid(), obj_);
    } else {
        return 0;
    }
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() [static] :53
JavaVM* JNI::GetVM()
{
    JNI_typeof()->Init();
    return JniHelper::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() [static] :61
::g::Android::Base::Wrappers::JWrapper* JNI::GetWrappedActivityObject()
{
    JNI_typeof()->Init();
    jobject activityObj = JNI::GetActivityObject();

    if (::g::Android::Base::Wrappers::JWrapper::op_Equality(JNI::_rootActivityWrapped(), NULL) || !JNI::IsSameObject(uPtr(JNI::_rootActivityWrapped())->_GetJavaObject(), activityObj))
        JNI::_rootActivityWrapped() = ::g::Android::Base::Wrappers::JWrapper::New1(activityObj, NULL, false, false);

    return JNI::_rootActivityWrapped();
}

// public static extern void Init() [static] :47
void JNI::Init()
{
    JNI_typeof()->Init();
    if (!JNI::_inited())
    {
    JNI::_inited() = true;
        JNIEnv* jni = JNI::GetEnvPtr();
        JNI::Activity_getClassLoader() = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        JNI::ClassLoader_loadClass() = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        JNI::CheckException1(jni);
        JNI::_helperCls() = reinterpret_cast<jclass>(jni->NewGlobalRef(JNI::LoadClass1(JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
        if (!JNI::_helperCls()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
        }
        JNI::exceptionClass() = reinterpret_cast<jclass>(jni->NewGlobalRef(jni->FindClass("java/lang/RuntimeException")));
        JNI::_getUnoRefMid() = jni->GetStaticMethodID(JNI::_helperCls(), "GetUnoObjectRef", "(Ljava/lang/Object;)J");
        if (!JNI::_getUnoRefMid()) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache getUnoRefMid", 37)));
        }
    }
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) [static] :163
bool JNI::IsSameObject(jobject objA_, jobject objB_)
{
    JNI_typeof()->Init();
    return (bool)JNI::GetEnvPtr()->IsSameObject(objA_,objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) [static] :70
jclass JNI::LoadClass(JNIEnv* jni, const char* name)
{
    JNI_typeof()->Init();
    return JNI::LoadClass1(jni, name, false);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) [static] :87
jclass JNI::LoadClass1(JNIEnv* jni, const char* name, bool systemClass)
{
    JNI_typeof()->Init();
    JNI::Init();
    jclass result;
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
        result = jni->FindClass(name);
    else
    {
        jclass classLoader = (jclass)jni->CallObjectMethod(JNI::GetActivityObject(), JNI::Activity_getClassLoader());
        result = (jclass)jni->CallObjectMethod(classLoader, JNI::ClassLoader_loadClass(), jname);
        jni->DeleteLocalRef(classLoader);
    }

    jni->DeleteLocalRef(jname);
    JNI::CheckException1(jni);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) [static] :106
jclass JNI::LoadClass2(JNIEnv* jni, uString* name, bool systemClass)
{
    JNI_typeof()->Init();
    const char* cname = (const char*)uAllocCStr(name);
    jclass result = JNI::LoadClass1(JNI::GetEnvPtr(), cname, systemClass);
    uFreeCStr(cname);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) [static] :114
jclass JNI::LoadClass3(uString* name, bool systemClass)
{
    JNI_typeof()->Init();
    return JNI::LoadClass2(JNI::GetEnvPtr(), name, systemClass);
}

// public static extern Android.Base.Primitives.ujobject NewBooleanArray(int len) [static] :278
jobject JNI::NewBooleanArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewBooleanArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewByteArray(int len) [static] :280
jobject JNI::NewByteArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewByteArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewCharArray(int len) [static] :282
jobject JNI::NewCharArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewCharArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewDoubleArray(int len) [static] :292
jobject JNI::NewDoubleArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewDoubleArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewFloatArray(int len) [static] :290
jobject JNI::NewFloatArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewFloatArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) [static] :123
jclass JNI::NewGlobalRef(jclass obj)
{
    JNI_typeof()->Init();
    return reinterpret_cast<jclass>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) [static] :120
jobject JNI::NewGlobalRef1(jobject obj_)
{
    JNI_typeof()->Init();
    return reinterpret_cast<jobject>(JNI::GetEnvPtr()->NewGlobalRef(obj_));
}

// public static extern Android.Base.Primitives.ujobject NewIntArray(int len) [static] :286
jobject JNI::NewIntArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewIntArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewLongArray(int len) [static] :288
jobject JNI::NewLongArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewLongArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewObjectArray(Android.Base.Primitives.ujclass cls, int len) [static] :294
jobject JNI::NewObjectArray(jclass cls_, int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewObjectArray((jsize)len_, cls_, NULL);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewShortArray(int len) [static] :284
jobject JNI::NewShortArray(int len_)
{
    JNI_typeof()->Init();
    JNIEnv* jni = JNI::GetEnvPtr();
    jobject rtn = jni->NewShortArray((jsize)len_);
    jobject newArray = reinterpret_cast<jobject>(jni->NewGlobalRef(rtn));
    jni->DeleteLocalRef(rtn);
    return newArray;
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static] :154
jobject JNI::NewWeakGlobalRef(jobject obj_)
{
    JNI_typeof()->Init();
    return (jobject)reinterpret_cast<jweak>(JNI::GetEnvPtr()->NewWeakGlobalRef(obj_));
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len]) [static] :334
void JNI::SetBooleanArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetBooleanArrayRegion((jbooleanArray)javaArr,start,len,(jboolean*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len]) [static] :350
void JNI::SetByteArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len]) [static] :342
void JNI::SetByteArrayRegion1(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len]) [static] :358
void JNI::SetCharArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetCharArrayRegion((jcharArray)javaArr,start,len,(jchar*)unoArr->_ptr);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len]) [static] :398
void JNI::SetDoubleArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetDoubleArrayRegion((jdoubleArray)javaArr,start,len,(jdouble*)unoArr->_ptr);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len]) [static] :390
void JNI::SetFloatArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetFloatArrayRegion((jfloatArray)javaArr,start,len,(jfloat*)unoArr->_ptr);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len]) [static] :374
void JNI::SetIntArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetIntArrayRegion((jintArray)javaArr,start,len,(jint*)unoArr->_ptr);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len]) [static] :382
void JNI::SetLongArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetLongArrayRegion((jlongArray)javaArr,start,len,(jlong*)unoArr->_ptr);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len]) [static] :366
void JNI::SetShortArrayRegion(jobject javaArr, uArray* unoArr, int start, int len)
{
    JNI_typeof()->Init();

    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetShortArrayRegion((jshortArray)javaArr,start,len,(jshort*)unoArr->_ptr);
}

// public static extern void ThrowNewException(string message) [static] :200
void JNI::ThrowNewException(uString* message_)
{
    JNI_typeof()->Init();
    const char* message = uAllocCStr(message_);
    LOGD("%s", message);
    JNI::GetEnvPtr()->ThrowNew(JNI::exceptionClass(), message);
    uFreeCStr(message);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static] :165
::g::Uno::Exception* JNI::TryGetException(JNIEnv* jni, uString* appendMessage)
{
    JNI_typeof()->Init();
    jthrowable err = jni->ExceptionOccurred();

    if ((err != NULL))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);

        if (::g::Uno::String::op_Inequality(appendMessage, NULL))
            x = ::g::Uno::String::op_Addition2(x, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(x, ::STRINGS[2/*"\n"*/]), appendMessage));

        return ::g::Uno::Exception::New2(x);
    }

    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public enum JNI.RefType :75
uEnumType* JNI__RefType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Android.Base.JNI.RefType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);
    return type;
}

}}} // ::g::Android::Base
