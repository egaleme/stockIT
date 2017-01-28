// This file was generated based on C:\stockit\stockit\.uno\ux11\stockIT.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct stockIT_FuseControlsShape_Color_Property;}

namespace g{

// internal sealed class stockIT_FuseControlsShape_Color_Property :28
// {
::g::Uno::UX::Property1_type* stockIT_FuseControlsShape_Color_Property_typeof();
void stockIT_FuseControlsShape_Color_Property__ctor_2_fn(stockIT_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void stockIT_FuseControlsShape_Color_Property__Get_fn(stockIT_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* __retval);
void stockIT_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, stockIT_FuseControlsShape_Color_Property** __retval);
void stockIT_FuseControlsShape_Color_Property__get_Object_fn(stockIT_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void stockIT_FuseControlsShape_Color_Property__Set_fn(stockIT_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin);
void stockIT_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(stockIT_FuseControlsShape_Color_Property* __this, bool* __retval);

struct stockIT_FuseControlsShape_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static stockIT_FuseControlsShape_Color_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
