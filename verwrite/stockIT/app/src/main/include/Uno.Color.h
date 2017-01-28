// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Color;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public static class Color :1335
// {
uClassType* Color_typeof();
void Color__FromHex_fn(uString* hex, ::g::Uno::Float4* __retval);
void Color__FromRgba32_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval);
void Color__FromRgba321_fn(uint32_t* rgba, ::g::Uno::Float4* __retval);
void Color__Rgba32FromHex_fn(uString* hex, ::g::Uno::Int4* __retval);

struct Color : uObject
{
    static ::g::Uno::Float3x3 ToYCbCrMat_;
    static ::g::Uno::Float3x3& ToYCbCrMat() { return Color_typeof()->Init(), ToYCbCrMat_; }
    static ::g::Uno::Float3x3 ToYCbCrMatInv_;
    static ::g::Uno::Float3x3& ToYCbCrMatInv() { return Color_typeof()->Init(), ToYCbCrMatInv_; }

    static ::g::Uno::Float4 FromHex(uString* hex);
    static ::g::Uno::Float4 FromRgba32(::g::Uno::Int4 rgba);
    static ::g::Uno::Float4 FromRgba321(uint32_t rgba);
    static ::g::Uno::Int4 Rgba32FromHex(uString* hex);
};
// }

}} // ::g::Uno
