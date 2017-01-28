// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct String;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class String :901
// {
uClassType* String_typeof();
void String__JavaToUno_fn(JNIEnv** jni_, jobject* jstr_, uString** __retval);
void String__JavaToUno1_fn(jobject* jstr, uString** __retval);
void String__JavaToUno2_fn(uObject* jstr, uString** __retval);
void String__UnoToJava_fn(JNIEnv** jni_, uString* str_, jobject* __retval);
void String__UnoToJava1_fn(uString* str, jobject* __retval);

struct String : uObject
{
    static uString* JavaToUno(JNIEnv* jni_, jobject jstr_);
    static uString* JavaToUno1(jobject jstr);
    static uString* JavaToUno2(uObject* jstr);
    static jobject UnoToJava(JNIEnv* jni_, uString* str_);
    static jobject UnoToJava1(uString* str);
};
// }

}}}} // ::g::Android::Base::Types
