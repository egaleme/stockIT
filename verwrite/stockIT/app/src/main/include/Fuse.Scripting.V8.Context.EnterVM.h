// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context__EnterVM;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal struct Context.EnterVM :139
// {
struct Context__EnterVM_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

Context__EnterVM_type* Context__EnterVM_typeof();
void Context__EnterVM__ctor__fn(Context__EnterVM* __this, ::g::Fuse::Scripting::V8::Context* context);
void Context__EnterVM__Dispose_fn(Context__EnterVM* __this);
void Context__EnterVM__New1_fn(::g::Fuse::Scripting::V8::Context* context, Context__EnterVM* __retval);

struct Context__EnterVM
{
    uStrong< ::g::Fuse::Scripting::V8::Context*> _context;

    void ctor_(::g::Fuse::Scripting::V8::Context* context);
    void Dispose();
};

Context__EnterVM Context__EnterVM__New1(::g::Fuse::Scripting::V8::Context* context);
// }

}}}} // ::g::Fuse::Scripting::V8
