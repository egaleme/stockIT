// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Element_Opacity_Property;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class Element_Opacity_Property :1775
// {
::g::Uno::UX::Property1_type* Element_Opacity_Property_typeof();
void Element_Opacity_Property__ctor_2_fn(Element_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj);
void Element_Opacity_Property__Get_fn(Element_Opacity_Property* __this, float* __retval);
void Element_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, Element_Opacity_Property** __retval);
void Element_Opacity_Property__get_Object_fn(Element_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Element_Opacity_Property__Set_fn(Element_Opacity_Property* __this, float* v, uObject* origin);
void Element_Opacity_Property__get_SupportsOriginSetter_fn(Element_Opacity_Property* __this, bool* __retval);

struct Element_Opacity_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj);
    static Element_Opacity_Property* New1(::g::Fuse::Elements::Element* obj);
};
// }

}}} // ::g::Fuse::Controls
