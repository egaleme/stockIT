// This file was generated based on C:\stockit\stockit\.uno\ux11\stockIT.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stockIT_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class stockIT_FuseElementsElement_Opacity_Property :37
// {
::g::Uno::UX::Property1_type* stockIT_FuseElementsElement_Opacity_Property_typeof();
void stockIT_FuseElementsElement_Opacity_Property__ctor_2_fn(stockIT_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void stockIT_FuseElementsElement_Opacity_Property__Get_fn(stockIT_FuseElementsElement_Opacity_Property* __this, float* __retval);
void stockIT_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, stockIT_FuseElementsElement_Opacity_Property** __retval);
void stockIT_FuseElementsElement_Opacity_Property__get_Object_fn(stockIT_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stockIT_FuseElementsElement_Opacity_Property__Set_fn(stockIT_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin);
void stockIT_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(stockIT_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct stockIT_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static stockIT_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
