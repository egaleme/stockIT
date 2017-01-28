// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Text{struct StringBuilderElement;}}}

namespace g{
namespace Uno{
namespace Text{

// internal sealed class StringBuilderElement :129
// {
uType* StringBuilderElement_typeof();
void StringBuilderElement__ctor__fn(StringBuilderElement* __this);
void StringBuilderElement__New1_fn(StringBuilderElement** __retval);

struct StringBuilderElement : uObject
{
    uStrong<uArray*> chars;
    uStrong<StringBuilderElement*> next;

    void ctor_();
    static StringBuilderElement* New1();
};
// }

}}} // ::g::Uno::Text
