// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct BufferImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class BufferImpl :181
// {
uClassType* BufferImpl_typeof();
void BufferImpl__GetInt_fn(uArray* buffer, int* offset, bool* littleEndian, int* __retval);
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian);
void BufferImpl__SetInt_fn(uArray* buffer, int* offset, int* value, bool* littleEndian);
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian);

struct BufferImpl : uObject
{
    static int GetInt(uArray* buffer, int offset, bool littleEndian);
    static void SetFloat(uArray* buffer, int offset, float value, bool littleEndian);
    static void SetInt(uArray* buffer, int offset, int value, bool littleEndian);
    static void SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
