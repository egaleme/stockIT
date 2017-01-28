// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context__PropertyClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Context.PropertyClosure :348
// {
uType* Context__PropertyClosure_typeof();
void Context__PropertyClosure__ctor__fn(Context__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context);
void Context__PropertyClosure__GetObservable_fn(Context__PropertyClosure* __this, uArray* args, uObject** __retval);
void Context__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context, Context__PropertyClosure** __retval);

struct Context__PropertyClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Scripting::ScriptProperty*> _p;

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context);
    uObject* GetObservable(uArray* args);
    static Context__PropertyClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context);
};
// }

}}} // ::g::Fuse::Scripting
