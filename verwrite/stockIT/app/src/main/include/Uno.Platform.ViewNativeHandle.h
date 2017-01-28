// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno/Platform2.h>

namespace g{
namespace Uno{
namespace Platform{

// public extern struct ViewNativeHandle :797
// {
uStructType* ViewNativeHandle_typeof();
void ViewNativeHandle__Equals_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, uObject* obj, bool* __retval);
void ViewNativeHandle__GetHashCode_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, int* __retval);
void ViewNativeHandle__IsSameView_fn(uPlatform2::ViewNativeHandle* handle1, uPlatform2::ViewNativeHandle* handle2, bool* __retval);
void ViewNativeHandle__op_Equality_fn(uPlatform2::ViewNativeHandle* lhs, uPlatform2::ViewNativeHandle* rhs, bool* __retval);

struct ViewNativeHandle
{
    static bool Equals(uPlatform2::ViewNativeHandle __this, uType* __type, uObject* obj) { bool __retval; return ViewNativeHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int GetHashCode(uPlatform2::ViewNativeHandle __this, uType* __type) { int __retval; return ViewNativeHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool IsSameView(uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2);
    static bool op_Equality(uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs);
};
// }

}}} // ::g::Uno::Platform
