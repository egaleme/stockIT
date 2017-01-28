// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Text{struct Ascii;}}}

namespace g{
namespace Uno{
namespace Text{

// public static class Ascii :7
// {
uClassType* Ascii_typeof();
void Ascii__GetBytes_fn(uString* value, uArray** __retval);
void Ascii__GetString_fn(uArray* value, uString** __retval);

struct Ascii : uObject
{
    static uArray* GetBytes(uString* value);
    static uString* GetString(uArray* value);
};
// }

}}} // ::g::Uno::Text
