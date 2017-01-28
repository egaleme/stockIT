// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class Builtins :9
// {
uType* Builtins_typeof();
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context);
void Builtins__IsModule_fn(uObject* module, bool* __retval);
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval);
void Builtins__UpdateModules_fn(Builtins* __this, ::g::Fuse::Scripting::Context* context);

struct Builtins : uObject
{
    static uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> _timer_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*>& _timer() { return _timer_; }
    uStrong< ::g::Fuse::Scripting::Function*> EventEmitter;
    uStrong< ::g::Fuse::Scripting::Function*> Observable;

    void ctor_(::g::Fuse::Scripting::Context* context);
    void UpdateModules(::g::Fuse::Scripting::Context* context);
    static bool IsModule(uObject* module);
    static Builtins* New1(::g::Fuse::Scripting::Context* context);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
