// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Object;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Marshaller :230
// {
uClassType* Marshaller_typeof();
void Marshaller__NewArrayBuffer_fn(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval);
void Marshaller__ToInt_fn(uObject* o, int* __retval);
void Marshaller__TryGetArrayBufferData_fn(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o, uArray** __retval);
void Marshaller__Unwrap_fn(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval);
void Marshaller__UnwrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uArray** __retval);
void Marshaller__Wrap_fn(::g::Fuse::Scripting::V8::Context* context, ::JSValue** val, uObject** __retval);
void Marshaller__WrapArray_fn(::g::Fuse::Scripting::V8::Context* context, uArray* values, uArray** __retval);

struct Marshaller : uObject
{
    static ::JSValue* NewArrayBuffer(::g::Fuse::Scripting::V8::Context* context, uArray* data, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static int ToInt(uObject* o);
    static uArray* TryGetArrayBufferData(::g::Fuse::Scripting::V8::Context* context, ::g::Fuse::Scripting::V8::Object* o);
    static ::JSValue* Unwrap(::g::Fuse::Scripting::V8::Context* context, uObject* obj, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static uArray* UnwrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static uObject* Wrap(::g::Fuse::Scripting::V8::Context* context, ::JSValue* val);
    static uArray* WrapArray(::g::Fuse::Scripting::V8::Context* context, uArray* values);
};
// }

}}}} // ::g::Fuse::Scripting::V8
