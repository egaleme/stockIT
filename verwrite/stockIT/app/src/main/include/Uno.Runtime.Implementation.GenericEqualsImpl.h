// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct GenericEqualsImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class GenericEqualsImpl :691
// {
uClassType* GenericEqualsImpl_typeof();
void GenericEqualsImpl__Equals_fn(uType* __type, void* left, void* right, bool* __retval);

struct GenericEqualsImpl : uObject
{
    template<class T>
    static bool Equals(uType* __type, T left, T right) { bool __retval; return GenericEqualsImpl__Equals_fn(__type, uConstrain(__type->U(0), left), uConstrain(__type->U(0), right), &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Runtime::Implementation
