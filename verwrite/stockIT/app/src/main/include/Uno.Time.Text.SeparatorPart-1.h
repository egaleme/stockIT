// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\time\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Char.h>
#include <Uno.Object.h>
#include <Uno.Time.Text.IPatternPart-1.h>
#include <Uno.Time.Text.PatternPart-2.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct SeparatorPart;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// internal sealed class SeparatorPart<T> :1009
// {
::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();
void SeparatorPart__ctor_1_fn(SeparatorPart* __this, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__ctor_2_fn(SeparatorPart* __this, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified);
void SeparatorPart__New1_fn(uType* __type, bool* obligatory, bool* show, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval);
void SeparatorPart__New2_fn(uType* __type, bool* obligatory, uChar* separator, int* skipNextPartsCountIfThisNotSpecified, SeparatorPart** __retval);
void SeparatorPart__Write_fn(SeparatorPart* __this, void* value, uString** __retval);

struct SeparatorPart : ::g::Uno::Time::Text::PatternPart
{
    uChar _separator;
    bool _show;

    void ctor_1(bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified);
    void ctor_2(bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified);
    static SeparatorPart* New1(uType* __type, bool obligatory, bool show, uChar separator, int skipNextPartsCountIfThisNotSpecified);
    static SeparatorPart* New2(uType* __type, bool obligatory, uChar separator, int skipNextPartsCountIfThisNotSpecified);
};
// }

}}}} // ::g::Uno::Time::Text
