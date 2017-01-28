// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal extern struct AutoReleasePool :1600
// {
struct AutoReleasePool_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

AutoReleasePool_type* AutoReleasePool_typeof();
void AutoReleasePool__ctor__fn(AutoReleasePool* __this, ::JSContext** context);
void AutoReleasePool__AutoRelease_fn(AutoReleasePool* __this, ::JSArray** value, ::JSArray** __retval);
void AutoReleasePool__AutoRelease1_fn(AutoReleasePool* __this, ::JSExternal** value, ::JSExternal** __retval);
void AutoReleasePool__AutoRelease2_fn(AutoReleasePool* __this, ::JSFunction** value, ::JSFunction** __retval);
void AutoReleasePool__AutoRelease3_fn(AutoReleasePool* __this, ::JSObject** value, ::JSObject** __retval);
void AutoReleasePool__AutoRelease4_fn(AutoReleasePool* __this, ::JSString** value, ::JSString** __retval);
void AutoReleasePool__AutoRelease5_fn(AutoReleasePool* __this, ::JSValue** value, ::JSValue** __retval);
void AutoReleasePool__Dispose_fn(AutoReleasePool* __this);
void AutoReleasePool__New1_fn(::JSContext** context, AutoReleasePool* __retval);

struct AutoReleasePool
{
    ::JSContext* _context;
    uStrong< ::g::Uno::Collections::List*> _pool;

    void ctor_(::JSContext* context);
    ::JSArray* AutoRelease(::JSArray* value);
    ::JSExternal* AutoRelease1(::JSExternal* value);
    ::JSFunction* AutoRelease2(::JSFunction* value);
    ::JSObject* AutoRelease3(::JSObject* value);
    ::JSString* AutoRelease4(::JSString* value);
    ::JSValue* AutoRelease5(::JSValue* value);
    void Dispose();
};

AutoReleasePool AutoReleasePool__New1(::JSContext* context);
// }

}}}} // ::g::Fuse::Scripting::V8
