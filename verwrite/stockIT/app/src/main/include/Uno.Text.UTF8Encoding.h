// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Text.Encoding.h>
namespace g{namespace Uno{namespace Text{struct Decoder;}}}
namespace g{namespace Uno{namespace Text{struct UTF8Encoding;}}}

namespace g{
namespace Uno{
namespace Text{

// public sealed class UTF8Encoding :414
// {
::g::Uno::Text::Encoding_type* UTF8Encoding_typeof();
void UTF8Encoding__ctor_1_fn(UTF8Encoding* __this);
void UTF8Encoding__GetDecoder_fn(UTF8Encoding* __this, ::g::Uno::Text::Decoder** __retval);
void UTF8Encoding__New1_fn(UTF8Encoding** __retval);

struct UTF8Encoding : ::g::Uno::Text::Encoding
{
    void ctor_1();
    static UTF8Encoding* New1();
};
// }

}}} // ::g::Uno::Text
