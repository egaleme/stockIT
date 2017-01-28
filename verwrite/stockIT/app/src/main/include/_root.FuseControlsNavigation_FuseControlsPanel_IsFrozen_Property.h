// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\.uno\ux11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property;}

namespace g{

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :297
// {
::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof();
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* __retval);
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval);
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* v, uObject* origin);
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, bool* __retval);

struct FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_2(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
