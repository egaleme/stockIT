// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Char :1071
// {
uStructType* Char_typeof();
void Char__Equals_fn(uChar* __this, uType* __type, uObject* o, bool* __retval);
void Char__GetHashCode_fn(uChar* __this, uType* __type, int* __retval);
void Char__IsWhiteSpace_fn(uChar* c, bool* __retval);
void Char__ToLower_fn(uChar* c, uChar* __retval);
void Char__ToString_fn(uChar* __this, uType* __type, uString** __retval);
void Char__ToUpper_fn(uChar* c, uChar* __retval);

struct Char
{
    static bool Equals(uChar __this, uType* __type, uObject* o) { bool __retval; return Char__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int GetHashCode(uChar __this, uType* __type) { int __retval; return Char__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uChar __this, uType* __type) { uString* __retval; return Char__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool IsWhiteSpace(uChar c);
    static uChar ToLower(uChar c);
    static uChar ToUpper(uChar c);
};
// }

}} // ::g::Uno
