// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Function :724
// {
::g::Fuse::Scripting::Function_type* Function_typeof();
void Function__ctor_1_fn(Function* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function);
void Function__Call_fn(Function* __this, uArray* args, uObject** __retval);
void Function__Construct_fn(Function* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void Function__Equals2_fn(Function* __this, ::g::Fuse::Scripting::Function* f, bool* __retval);
void Function__GetHashCode_fn(Function* __this, int* __retval);
void Function__GetJSFunction_fn(Function* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSFunction** __retval);
void Function__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSFunction** function, Function** __retval);

struct Function : ::g::Fuse::Scripting::Function
{
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    ::JSFunction* _function;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function);
    ::JSFunction* GetJSFunction(::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static Function* New1(::g::Fuse::Scripting::V8::Context* context, ::JSFunction* function);
};
// }

}}}} // ::g::Fuse::Scripting::V8
