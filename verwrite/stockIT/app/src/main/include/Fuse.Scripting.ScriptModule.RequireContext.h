// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule__RequireContext;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptModule.RequireContext :158
// {
uType* ScriptModule__RequireContext_typeof();
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant);
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ScriptModule__RequireContext** __retval);
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, uArray* args, uObject** __retval);
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, uString* id, uObject** __retval);

struct ScriptModule__RequireContext : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _c;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _dependant;
    static uSStrong<uString*> _lastErrorPath_;
    static uSStrong<uString*>& _lastErrorPath() { return _lastErrorPath_; }
    uStrong< ::g::Fuse::Scripting::ScriptModule*> _m;

    void ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant);
    uObject* Require(uArray* args);
    uObject* Require1(uString* id);
    static ScriptModule__RequireContext* New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant);
};
// }

}}} // ::g::Fuse::Scripting
