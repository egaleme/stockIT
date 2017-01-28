// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public class Delegate :1669
// {
uType* Delegate_typeof();
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval);
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval);
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__GetHashCode_fn(uDelegate* __this, int* __retval);
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval);
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval);

struct Delegate
{
    static uDelegate* Combine(uDelegate* source, uDelegate* value);
    static bool EqualsImpl(uDelegate* left, uDelegate* right);
    static bool op_Equality(uDelegate* left, uDelegate* right);
    static bool op_Inequality(uDelegate* left, uDelegate* right);
    static uDelegate* Remove(uDelegate* source, uDelegate* value);
};
// }

}} // ::g::Uno
