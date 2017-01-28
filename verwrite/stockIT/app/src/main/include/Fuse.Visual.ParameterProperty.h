// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__ParameterProperty;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// private sealed class Visual.ParameterProperty :7160
// {
::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof();
void Visual__ParameterProperty__ctor_2_fn(Visual__ParameterProperty* __this, ::g::Fuse::Visual* visual);
void Visual__ParameterProperty__Get_fn(Visual__ParameterProperty* __this, uString** __retval);
void Visual__ParameterProperty__New1_fn(::g::Fuse::Visual* visual, Visual__ParameterProperty** __retval);
void Visual__ParameterProperty__get_Object_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void Visual__ParameterProperty__Set_fn(Visual__ParameterProperty* __this, uString* value, uObject* origin);
void Visual__ParameterProperty__get_SupportsOriginSetter_fn(Visual__ParameterProperty* __this, bool* __retval);

struct Visual__ParameterProperty : ::g::Uno::UX::Property1
{
    static ::g::Uno::UX::Selector _name1_;
    static ::g::Uno::UX::Selector& _name1() { return Visual__ParameterProperty_typeof()->Init(), _name1_; }
    uStrong< ::g::Fuse::Visual*> _visual;

    void ctor_2(::g::Fuse::Visual* visual);
    static Visual__ParameterProperty* New1(::g::Fuse::Visual* visual);
};
// }

}} // ::g::Fuse
