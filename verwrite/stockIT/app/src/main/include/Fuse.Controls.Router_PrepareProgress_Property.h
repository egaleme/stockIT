// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Router_PrepareProgress_Property;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class Router_PrepareProgress_Property :933
// {
::g::Uno::UX::Property1_type* Router_PrepareProgress_Property_typeof();
void Router_PrepareProgress_Property__ctor_2_fn(Router_PrepareProgress_Property* __this, ::g::Fuse::Navigation::Router* obj);
void Router_PrepareProgress_Property__Get_fn(Router_PrepareProgress_Property* __this, double* __retval);
void Router_PrepareProgress_Property__New1_fn(::g::Fuse::Navigation::Router* obj, Router_PrepareProgress_Property** __retval);
void Router_PrepareProgress_Property__get_Object_fn(Router_PrepareProgress_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Router_PrepareProgress_Property__Set_fn(Router_PrepareProgress_Property* __this, double* v, uObject* origin);
void Router_PrepareProgress_Property__get_SupportsOriginSetter_fn(Router_PrepareProgress_Property* __this, bool* __retval);

struct Router_PrepareProgress_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Navigation::Router*> _obj;

    void ctor_2(::g::Fuse::Navigation::Router* obj);
    static Router_PrepareProgress_Property* New1(::g::Fuse::Navigation::Router* obj);
};
// }

}}} // ::g::Fuse::Controls
