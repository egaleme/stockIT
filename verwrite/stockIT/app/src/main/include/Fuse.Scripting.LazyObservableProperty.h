// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.ObservableProperty.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct LazyObservableProperty;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class LazyObservableProperty :2017
// {
::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof();
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval);
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval);

struct LazyObservableProperty : ::g::Fuse::Scripting::ObservableProperty
{
    void ctor_1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    uObject* Get(uArray* args);
    static LazyObservableProperty* New2(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Scripting
