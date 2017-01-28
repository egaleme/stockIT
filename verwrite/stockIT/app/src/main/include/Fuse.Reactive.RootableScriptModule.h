// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct RootableScriptModule;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class RootableScriptModule :2023
// {
::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof();
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args);
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this);
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval);
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval);

struct RootableScriptModule : ::g::Fuse::Scripting::ScriptModule
{
    uStrong< ::g::Fuse::Scripting::ClassInstance*> _classInstance;
    uStrong< ::g::Uno::UX::NameTable*> _names;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
    void EnsureClassInstanceRooted();
    static RootableScriptModule* New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
};
// }

}}} // ::g::Fuse::Reactive
