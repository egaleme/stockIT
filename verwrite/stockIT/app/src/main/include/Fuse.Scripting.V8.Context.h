// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// public sealed extern class Context :94
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* worker);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__New1_fn(uObject* worker, Context** __retval);
void Context__OnScriptException_fn(Context* __this, ::JSScriptException** e);
void Context__ThrowPendingExceptions_fn(Context* __this);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Uno::Exception*> _cachedException;
    ::JSContext* _context;
    uStrong<uDelegate*> _errorHandler;
    uStrong< ::g::Fuse::Scripting::V8::Function*> _instanceOf;
    int _vmDepth;

    void ctor_1(uObject* worker);
    void OnScriptException(::JSScriptException* e);
    void ThrowPendingExceptions();
    static Context* New1(uObject* worker);
};
// }

}}}} // ::g::Fuse::Scripting::V8
