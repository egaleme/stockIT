// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Tuple;}}
namespace g{namespace Uno{struct Tuple2;}}

namespace g{
namespace Uno{

// public static class Tuple :7318
// {
uClassType* Tuple_typeof();
void Tuple__Create1_fn(uType* __type, void* item1, void* item2, ::g::Uno::Tuple2** __retval);

struct Tuple : uObject
{
    template<class T1, class T2>
    static ::g::Uno::Tuple2* Create1(uType* __type, T1 item1, T2 item2) { ::g::Uno::Tuple2* __retval; return Tuple__Create1_fn(__type, uConstrain(__type->U(0), item1), uConstrain(__type->U(1), item2), &__retval), __retval; }
};
// }

}} // ::g::Uno
