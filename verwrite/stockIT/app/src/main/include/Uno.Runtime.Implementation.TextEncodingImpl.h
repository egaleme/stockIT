// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct TextEncodingImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// internal static class TextEncodingImpl :1312
// {
uClassType* TextEncodingImpl_typeof();
void TextEncodingImpl__DecodeAscii_fn(uArray* value, uString** __retval);
void TextEncodingImpl__DecodeBase64_fn(uString* value, uArray** __retval);
void TextEncodingImpl__DecodeUtf8_fn(uArray* value, uString** __retval);
void TextEncodingImpl__EncodeAscii_fn(uString* value, uArray** __retval);
void TextEncodingImpl__EncodeBase64_fn(uArray* value, uString** __retval);
void TextEncodingImpl__EncodeUtf8_fn(uString* value, uArray** __retval);

struct TextEncodingImpl : uObject
{
    static uString* DecodeAscii(uArray* value);
    static uArray* DecodeBase64(uString* value);
    static uString* DecodeUtf8(uArray* value);
    static uArray* EncodeAscii(uString* value);
    static uString* EncodeBase64(uArray* value);
    static uArray* EncodeUtf8(uString* value);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
