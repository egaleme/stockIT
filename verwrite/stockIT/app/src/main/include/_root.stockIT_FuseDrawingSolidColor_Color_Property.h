// This file was generated based on C:\stockit\stockit\.uno\ux11\stockIT.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stockIT_FuseDrawingSolidColor_Color_Property;}

namespace g{

// internal sealed class stockIT_FuseDrawingSolidColor_Color_Property :46
// {
::g::Uno::UX::Property1_type* stockIT_FuseDrawingSolidColor_Color_Property_typeof();
void stockIT_FuseDrawingSolidColor_Color_Property__ctor_2_fn(stockIT_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name);
void stockIT_FuseDrawingSolidColor_Color_Property__Get_fn(stockIT_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval);
void stockIT_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, stockIT_FuseDrawingSolidColor_Color_Property** __retval);
void stockIT_FuseDrawingSolidColor_Color_Property__get_Object_fn(stockIT_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stockIT_FuseDrawingSolidColor_Color_Property__Set_fn(stockIT_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void stockIT_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(stockIT_FuseDrawingSolidColor_Color_Property* __this, bool* __retval);

struct stockIT_FuseDrawingSolidColor_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::SolidColor*> _obj;

    void ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
    static stockIT_FuseDrawingSolidColor_Color_Property* New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
