// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ConstCharPtr.h>
#include <Android.Base.Primitives.JavaVMPtr.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.JNINativeMethod.h>
#include <Android.Base.Primitives.jweak.h>
#include <Android.Base.Primitives.ujboolean.h>
#include <Android.Base.Primitives.ujbyte.h>
#include <Android.Base.Primitives.ujchar.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujdouble.h>
#include <Android.Base.Primitives.ujfloat.h>
#include <Android.Base.Primitives.ujint.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujshort.h>
#include <Android.Base.Primitives.ujstring.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Primitives.uweakptr.h>
#include <Uno.Bool.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ConstCharPtr :468
// {
static void ConstCharPtr_build(uType* type)
{
}

uStructType* ConstCharPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(const char*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ConstCharPtr", options);
    type->fp_build_ = ConstCharPtr_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct JavaVMPtr :471
// {
static void JavaVMPtr_build(uType* type)
{
}

uStructType* JavaVMPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JavaVM*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JavaVMPtr", options);
    type->fp_build_ = JavaVMPtr_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct jfieldID :601
// {
static void jfieldID_build(uType* type)
{
}

uStructType* jfieldID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfieldID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jfieldID", options);
    type->fp_build_ = jfieldID_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct jmethodID :598
// {
static void jmethodID_build(uType* type)
{
}

uStructType* jmethodID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jmethodID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jmethodID", options);
    type->fp_build_ = jmethodID_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct JNIEnvPtr :474
// {
static void JNIEnvPtr_build(uType* type)
{
}

uStructType* JNIEnvPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNIEnv*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNIEnvPtr", options);
    type->fp_build_ = JNIEnvPtr_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct JNINativeMethod :595
// {
static void JNINativeMethod_build(uType* type)
{
}

uStructType* JNINativeMethod_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(JNINativeMethod);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNINativeMethod", options);
    type->fp_build_ = JNINativeMethod_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct jweak :477
// {
static void jweak_build(uType* type)
{
}

uStructType* jweak_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jweak);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jweak", options);
    type->fp_build_ = jweak_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujboolean :483
// {
static void ujboolean_build(uType* type)
{
}

uStructType* ujboolean_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jboolean);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujboolean", options);
    type->fp_build_ = ujboolean_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujbyte :497
// {
static void ujbyte_build(uType* type)
{
}

uStructType* ujbyte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jbyte);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujbyte", options);
    type->fp_build_ = ujbyte_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujchar :511
// {
static void ujchar_build(uType* type)
{
}

uStructType* ujchar_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jchar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujchar", options);
    type->fp_build_ = ujchar_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujclass :604
// {
static void ujclass_build(uType* type)
{
}

uStructType* ujclass_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jclass);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujclass", options);
    type->fp_build_ = ujclass_build;
    return type;
}

// public static Android.Base.Primitives.ujclass get_Null() :608
void ujclass__get_Null_fn(jclass* __retval)
{
    *__retval = ujclass::Null();
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) :611
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval)
{
    *__retval = ujclass::op_Equality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) [static] :611
bool ujclass::op_Equality(jclass lhs, jclass rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(::g::Android::Base::Primitives::ujobject::op_Implicit(lhs), ::g::Android::Base::Primitives::ujobject::op_Implicit(rhs));
}

// public static Android.Base.Primitives.ujclass get_Null() [static] :608
jclass ujclass::Null()
{
    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujdouble :581
// {
static void ujdouble_build(uType* type)
{
}

uStructType* ujdouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jdouble);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujdouble", options);
    type->fp_build_ = ujdouble_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujfloat :567
// {
static void ujfloat_build(uType* type)
{
}

uStructType* ujfloat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jfloat);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujfloat", options);
    type->fp_build_ = ujfloat_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujint :539
// {
static void ujint_build(uType* type)
{
}

uStructType* ujint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujint", options);
    type->fp_build_ = ujint_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujlong :553
// {
static void ujlong_build(uType* type)
{
}

uStructType* ujlong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jlong);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujlong", options);
    type->fp_build_ = ujlong_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujobject :632
// {
static void ujobject_build(uType* type)
{
}

uStructType* ujobject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jobject);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujobject", options);
    type->fp_build_ = ujobject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject get_Null() :636
void ujobject__get_Null_fn(jobject* __retval)
{
    *__retval = ujobject::Null();
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :659
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Equality(*lhs, *rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) :639
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval)
{
    *__retval = ujobject::op_Implicit(*v);
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :664
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Inequality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :659
bool ujobject::op_Equality(jobject lhs, jobject rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(lhs, rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) [static] :639
jobject ujobject::op_Implicit(jclass v)
{
    return (jobject)v;
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :664
bool ujobject::op_Inequality(jobject lhs, jobject rhs)
{
    return !ujobject::op_Equality(lhs, rhs);
}

// public static Android.Base.Primitives.ujobject get_Null() [static] :636
jobject ujobject::Null()
{
    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujshort :525
// {
static void ujshort_build(uType* type)
{
}

uStructType* ujshort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jshort);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujshort", options);
    type->fp_build_ = ujshort_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujstring :623
// {
static void ujstring_build(uType* type)
{
}

uStructType* ujstring_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jstring);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujstring", options);
    type->fp_build_ = ujstring_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct ujvalue :672
// {
static void ujvalue_build(uType* type)
{
}

uStructType* ujvalue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(jvalue);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujvalue", options);
    type->fp_build_ = ujvalue_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno
// --------------------------------------------------------------------------------------------------

// public extern struct uweakptr :480
// {
static void uweakptr_build(uType* type)
{
}

uStructType* uweakptr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uWeakObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.uweakptr", options);
    type->fp_build_ = uweakptr_build;
    return type;
}
// }

}}}} // ::g::Android::Base::Primitives
