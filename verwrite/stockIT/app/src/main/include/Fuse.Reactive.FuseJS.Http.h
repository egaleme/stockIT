// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Http;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// public sealed class Http :227
// {
::g::Fuse::Scripting::NativeModule_type* Http_typeof();
void Http__ctor_2_fn(Http* __this);
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Http__Evaluate_fn(Http* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void Http__New2_fn(Http** __retval);

struct Http : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Http*> _instance_;
    static uSStrong<Http*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* CreateClient(::g::Fuse::Scripting::Context* context, uArray* args);
    static Http* New2();
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
