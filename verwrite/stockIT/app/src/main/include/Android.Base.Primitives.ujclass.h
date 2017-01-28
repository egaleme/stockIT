// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\uno\base\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// public extern struct ujclass :604
// {
uStructType* ujclass_typeof();
void ujclass__get_Null_fn(jclass* __retval);
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval);

struct ujclass
{
    static bool op_Equality(jclass lhs, jclass rhs);
    static jclass Null();
};
// }

}}}} // ::g::Android::Base::Primitives
