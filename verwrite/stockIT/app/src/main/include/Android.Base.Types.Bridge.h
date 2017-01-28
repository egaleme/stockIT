// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.Exception.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Bridge;}}}}
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Bridge :815
// {
uClassType* Bridge_typeof();
void Bridge__Init_fn();
void Bridge__JavaToUnoType_fn(jobject* javaObj, uType* fallbackType, bool* typeHasFallbackClass, uType** __retval);
void Bridge__RegisterUnoType_fn(const char** typeName_, int* nameLen_, uType* typePtr_);
void Bridge__SetWrapperType_fn(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject* obj_, uType* typePtr_, bool* typeHasFallbackClass_, bool* resolveType_);

struct Bridge : uObject
{
    static jclass _helperCls_;
    static jclass& _helperCls() { return _helperCls_; }
    static bool _inited_;
    static bool& _inited() { return _inited_; }
    static jmethodID _javaToUnoMid_;
    static jmethodID& _javaToUnoMid() { return _javaToUnoMid_; }
    static jmethodID _registerFallbackMid_;
    static jmethodID& _registerFallbackMid() { return _registerFallbackMid_; }
    static jmethodID _registerTypeMid_;
    static jmethodID& _registerTypeMid() { return _registerTypeMid_; }
    static jmethodID _unoToJavaMid_;
    static jmethodID& _unoToJavaMid() { return _unoToJavaMid_; }

    static void Init();
    static uType* JavaToUnoType(jobject javaObj, uType* fallbackType, bool typeHasFallbackClass);
    static void RegisterUnoType(const char* typeName_, int nameLen_, uType* typePtr_);
    static void SetWrapperType(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_);
};
// }

}}}} // ::g::Android::Base::Types
