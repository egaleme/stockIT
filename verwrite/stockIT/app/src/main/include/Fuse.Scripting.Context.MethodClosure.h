// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context__MethodClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Context.MethodClosure :389
// {
uType* Context__MethodClosure_typeof();
void Context__MethodClosure__ctor__fn(Context__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context);
void Context__MethodClosure__Callback_fn(Context__MethodClosure* __this, uArray* args, uObject** __retval);
void Context__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval);
void Context__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context, Context__MethodClosure** __retval);

struct Context__MethodClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return Context__MethodClosure_typeof()->Init(), _emptyArgs_; }
    uStrong< ::g::Fuse::Scripting::ScriptMethod*> _m;

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context);
    uObject* Callback(uArray* args);
    static uArray* CopyArgs(::g::Fuse::Scripting::Array* args);
    static Context__MethodClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context);
};
// }

}}} // ::g::Fuse::Scripting
