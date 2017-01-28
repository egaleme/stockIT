// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Text.Decoder.h>
namespace g{namespace Uno{namespace Text{struct UTF8Decoder;}}}

namespace g{
namespace Uno{
namespace Text{

// internal sealed class UTF8Decoder :152
// {
::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();
void UTF8Decoder__ctor_1_fn(UTF8Decoder* __this);
void UTF8Decoder__ConvertInternal_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* charCount, int* __retval);
void UTF8Decoder__GetChars_fn(UTF8Decoder* __this, uArray* bytes, int* byteIndex, int* byteCount, uArray* chars, int* charIndex, int* __retval);
void UTF8Decoder__New1_fn(UTF8Decoder** __retval);

struct UTF8Decoder : ::g::Uno::Text::Decoder
{
    int _state;

    void ctor_1();
    int ConvertInternal(uArray* bytes, int byteIndex, int byteCount, uArray* chars, int charIndex, int charCount);
    static UTF8Decoder* New1();
};
// }

}}} // ::g::Uno::Text
