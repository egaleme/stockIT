// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
#include <XliPlatform/PlatformSpecific/Android.h>
namespace g{namespace Android{namespace Base{namespace Types{struct ByteBuffer;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class ByteBuffer :871
// {
uClassType* ByteBuffer_typeof();
void ByteBuffer__NewDirectByteBuffer_fn(uArray* data_, jobject* __retval);

struct ByteBuffer : uObject
{
    static jobject NewDirectByteBuffer(uArray* data_);
};
// }

}}}} // ::g::Android::Base::Types
