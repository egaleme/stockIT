// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
//~
#define MAYBEPROXIFYARG(NUM,ID,NEW) bool subclassed ## NUM = (!ID) ? false : (::g::Android::Base::Wrappers::IJWrapper::_IsSubclassed(uInterface(ID, ::g::Android::Base::Wrappers::IJWrapper_typeof()))); jobject _iProx ## NUM = (!ID) ? NULL : (subclassed ## NUM ? NEW : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(ID, ::g::Android::Base::Wrappers::IJWrapper_typeof())));

#define FREEPROXIED(NUM)if (subclassed ## NUM) { U_JNIVAR->DeleteLocalRef(_iProx ## NUM); }

#define UNOCALLANDRETURN(CALL) JNIEnv* _cb_jni = ::g::Android::Base::JNI::GetEnvPtr();::g::Android::Base::Wrappers::JWrapper* _res = (::g::Android::Base::Wrappers::JWrapper*)CALL;if (_res) { return _cb_jni->NewLocalRef(_res->_javaObject); } else { return NULL; }

#define NEW_UNO(LINE,RETURNVAR,TYPEOF,UNOTYPE,FALLBACK,RESOLVE) U_JOBJECT tmpRes = LINE; ::g::Android::Base::JNI::CheckException(); int64_t unoRef = ::g::Android::Base::JNI::GetUnoRef(tmpRes); if (unoRef==0) { RETURNVAR = NULL; } else if (unoRef>0) { RETURNVAR = (UNOTYPE)uLoadWeak((uWeakObject*)unoRef); JNIEnv* __cb_jni = ::g::Android::Base::JNI::GetEnvPtr(); if (__cb_jni->GetObjectRefType(tmpRes)==JNILocalRefType) { __cb_jni->DeleteLocalRef(tmpRes); }} else { RETURNVAR = ((UNOTYPE)::g::Android::Base::Wrappers::JWrapper::New1(tmpRes, (uType*)TYPEOF, FALLBACK, RESOLVE)); }
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// public extern class JWrapper :1074
// {
struct JWrapper_type : uType
{
    ::g::Android::Base::Wrappers::IJWrapper interface0;
    ::g::Uno::IDisposable interface1;
};

JWrapper_type* JWrapper_typeof();
void JWrapper__ctor_1_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType);
void JWrapper__ctor_2_fn(JWrapper* __this, jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg);
void JWrapper___DisposeJavaObject_fn(JWrapper* __this);
void JWrapper___GetJavaObject_fn(JWrapper* __this, jobject* __retval);
void JWrapper___IsSubclassed_fn(JWrapper* __this, bool* __retval);
void JWrapper__Dispose_fn(JWrapper* __this, bool* disposing);
void JWrapper__New1_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, JWrapper** __retval);
void JWrapper__New2_fn(jobject* obj, uType* typePtr, bool* typeHasFallbackClass, bool* resolveType, bool* stackArg, JWrapper** __retval);
void JWrapper__op_Equality_fn(JWrapper* a, JWrapper* b, bool* __retval);
void JWrapper__SetInternalObj_fn(JWrapper* __this, jobject* obj, bool* stackArg);
void JWrapper__UnoIDisposableDispose_fn(JWrapper* __this);
void JWrapper__Wrap_fn(jobject* obj, bool* resolveType, bool* typeHasFallbackClass, JWrapper** __retval);

struct JWrapper : ::g::Java::Object
{
    jobject _javaObject;
    bool _subclassed;
    uWeakObject* _weakptr;
    bool disposed;

    void ctor_1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType);
    void ctor_2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg);
    void _DisposeJavaObject();
    jobject _GetJavaObject();
    bool _IsSubclassed();
    void Dispose(bool disposing);
    void SetInternalObj(jobject obj, bool stackArg);
    static JWrapper* New1(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType);
    static JWrapper* New2(jobject obj, uType* typePtr, bool typeHasFallbackClass, bool resolveType, bool stackArg);
    static bool op_Equality(JWrapper* a, JWrapper* b);
    static JWrapper* Wrap(jobject obj, bool resolveType, bool typeHasFallbackClass);
};
// }

}}}} // ::g::Android::Base::Wrappers
