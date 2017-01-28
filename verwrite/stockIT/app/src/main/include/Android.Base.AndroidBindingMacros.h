// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Type.h>
#include <Uno.Exception.h>

#define U_JNIVAR jni
#define U_JOBJECT jobject
#define U_JCLASS jclass
#define U_JMETHODID jmethodID
#define U_JFIELDID jfieldID

#define UNO_TO_JAVA_EXCEPTION(VAR) uString* str = uString::Ansi("Unknown Uno Exception", 21); if (VAR.Exception && VAR.Exception->Message()) { str = VAR.Exception->Message(); } ::g::Android::Base::JNI::ThrowNewException(str);

#define BEGIN_REG_MTD(COUNT) JNINativeMethod funcs[COUNT]; JNINativeMethod tmp; int count = 0;

#define COMMIT_REG_MTD(PROXYCLASS) if (count > 0) { bool attached = ((jni->RegisterNatives(PROXYCLASS, funcs, (jint)count)) == 0); if (!attached) { THROW_UNO_EXCEPTION("Could not attach native callbacks", 33); } }

#define REG_MTD(ID,NAMESTR,SIGSTR,CBFUNC) JNINativeMethod tmp ## ID = {(char* const)NAMESTR, (char* const)SIGSTR, (void *)&CBFUNC}; funcs[count] = tmp ## ID; count += 1;

#define INITCALLBACK(PTRNAME,UNOTYPE) if (!ujPtr) THROW_UNO_EXCEPTION("Callback recieved null ptr from proxy", 37); INIT_JNI; uAutoReleasePool pool; UNOTYPE PTRNAME = (UNOTYPE)uLoadWeak((uWeakObject*)ujPtr);

#define INIT_JNI JNIEnv* U_JNIVAR = ::g::Android::Base::JNI::GetEnvPtr()

#define LOAD_SYS_CLASS(CLASSSIG) ::g::Android::Base::JNI::LoadClass1(U_JNIVAR, CLASSSIG, false)

#define LOAD_CLASS(CLASSSIG) ::g::Android::Base::JNI::LoadClass1(U_JNIVAR, CLASSSIG, false)

#define CHECK_JNI_EXCEPTIONS ::g::Android::Base::JNI::CheckException1(U_JNIVAR)

#define THROW_UNO_EXCEPTION(MSGSTRING,MSGLEN) U_THROW(::g::Uno::Exception::New2(uString::Utf8( MSGSTRING, MSGLEN)))

#define NEW_GLOBAL_REF(TYPE,LINE) reinterpret_cast<TYPE>(U_JNIVAR->NewGlobalRef(LINE))

#define CLASS_INIT(CLASS,INITCALL) if (uEnterCriticalIfNull(&CLASS)) { INITCALL; uExitCritical(); }

#define JARG_TO_UNO(ARG,UNOTYPE,NEWUNO) UNOTYPE tmp ## ARG = (ARG==0 ? NULL : (ARG == -1 ? NEWUNO : (UNOTYPE)uLoadWeak((uWeakObject*)ARG)));

#define JNFUN(RETURNTYPE,FUNCNAME,...) RETURNTYPE JNICALL FUNCNAME(JNIEnv *env, jclass clazz, ##__VA_ARGS__)

#define JTRY try{
#define JCATCH } catch (const uThrowable& __t) { uAutoReleasePool pool; JniHelper jni; jni->ExceptionClear(); uString* message; if (uIs(__t.Exception, ::g::Uno::Exception_typeof())) { ::g::Uno::Exception* e = (::g::Uno::Exception*)__t.Exception; message = e->ToString(); } else { message = uString::Ansi("Unhandled c++ error"); } ::g::Android::Base::JNI::ThrowNewException(message); } catch (...) { uAutoReleasePool pool; JniHelper jni; jni->ExceptionClear(); uString* message = uString::Ansi("Unhandled c++ error"); ::g::Android::Base::JNI::ThrowNewException(message); }

#define CACHE_FALLBACK_METHOD(ID,CLSSIGSTR,NAMESTR,SIGSTR,MTDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (uEnterCriticalIfNull(&ID)) { U_JCLASS jcls = (jclass)NEW_GLOBAL_REF(jclass, LOAD_CLASS(CLSSIGSTR)); ID = U_JNIVAR->MTDGETFUNC (jcls, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } uExitCritical(); }

#define CACHE_METHOD(ID,CLASSFIELD,NAMESTR,SIGSTR,MTDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (uEnterCriticalIfNull(&ID)) { ID = U_JNIVAR->MTDGETFUNC (CLASSFIELD, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } uExitCritical(); }

#define CACHE_FIELD(ID,CLASSFIELD,NAMESTR,SIGSTR,FLDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) if (uEnterCriticalIfNull(&ID)) { ID = U_JNIVAR->FLDGETFUNC(CLASSFIELD, NAMESTR, SIGSTR); CHECK_JNI_EXCEPTIONS; if (((long)ID) == 0) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } uExitCritical(); }

#define STATICACHE_FIELD(ID,CLASSFIELD,NAMESTR,SIGSTR,FLDGETFUNC,MTDEXCEPTIONMSG,MTDEXCEPTIONLEN) static jfieldID ID = U_JNIVAR->FLDGETFUNC(CLASSFIELD, NAMESTR, SIGSTR); if (uEnterCriticalIfNull(&ID)) { CHECK_JNI_EXCEPTIONS; if (!ID) { THROW_UNO_EXCEPTION(MTDEXCEPTIONMSG,MTDEXCEPTIONLEN); } uExitCritical(); }
#include <Uno.h>
namespace g{namespace Android{namespace Base{struct AndroidBindingMacros;}}}

namespace g{
namespace Android{
namespace Base{

// public static extern class AndroidBindingMacros :28
// {
uClassType* AndroidBindingMacros_typeof();

struct AndroidBindingMacros : uObject
{
};
// }

}}} // ::g::Android::Base
