// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct ArrayHandle;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class ArrayHandle :851
// {
uType* ArrayHandle_typeof();
void ArrayHandle__ctor__fn(ArrayHandle* __this, uArray* array);
void ArrayHandle__CopyToArray_fn(void** ptr, int* length, uArray** __retval);
void ArrayHandle__GetIntPtr_fn(ArrayHandle* __this, void** __retval);
void ArrayHandle__New1_fn(uArray* array, ArrayHandle** __retval);

struct ArrayHandle : uObject
{
    uStrong<uArray*> Array;

    void ctor_(uArray* array);
    void* GetIntPtr();
    static uArray* CopyToArray(void* ptr, int length);
    static ArrayHandle* New1(uArray* array);
};
// }

}}}} // ::g::Fuse::Scripting::V8
