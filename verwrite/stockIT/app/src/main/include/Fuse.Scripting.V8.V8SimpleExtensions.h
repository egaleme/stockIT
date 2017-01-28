// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct V8SimpleExtensions;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class V8SimpleExtensions :1332
// {
uClassType* V8SimpleExtensions_typeof();
void V8SimpleExtensions__AsArray_fn(::JSValue** value, ::JSArray** __retval);
void V8SimpleExtensions__AsBool_fn(::JSValue** value, bool* __retval);
void V8SimpleExtensions__AsDouble_fn(::JSValue** value, double* __retval);
void V8SimpleExtensions__AsExternal_fn(::JSValue** value, ::JSExternal** __retval);
void V8SimpleExtensions__AsFunction_fn(::JSValue** value, ::JSFunction** __retval);
void V8SimpleExtensions__AsInt_fn(::JSValue** value, int* __retval);
void V8SimpleExtensions__AsObject_fn(::JSValue** value, ::JSObject** __retval);
void V8SimpleExtensions__AsString_fn(::JSValue** value, ::JSString** __retval);
void V8SimpleExtensions__AsValue_fn(::JSArray** arr, ::JSValue** __retval);
void V8SimpleExtensions__AsValue1_fn(::JSExternal** ext, ::JSValue** __retval);
void V8SimpleExtensions__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval);
void V8SimpleExtensions__AsValue3_fn(::JSObject** obj, ::JSValue** __retval);
void V8SimpleExtensions__AsValue4_fn(::JSString** str, ::JSValue** __retval);
void V8SimpleExtensions__Call_fn(::JSFunction** fun, ::JSContext** context, ::JSObject** thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval);
void V8SimpleExtensions__CilCallbackImpl_fn(::JSContext** context, void** data, uArray* args, int* numArgs, ::JSValue** error, ::JSValue** __retval);
void V8SimpleExtensions__Construct_fn(::JSFunction** fun, ::JSContext** context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSObject** __retval);
void V8SimpleExtensions__CreateCallback_fn(::JSContext** context, uDelegate* callback, ::JSScriptException** error, ::JSFunction** __retval);
void V8SimpleExtensions__Evaluate_fn(::JSContext** context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval);
void V8SimpleExtensions__GetException_fn(::JSScriptException** jse, ::JSValue** __retval);
void V8SimpleExtensions__GetFileName_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval);
void V8SimpleExtensions__GetGlobalObject_fn(::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval);
void V8SimpleExtensions__GetJSType_fn(::JSValue** value, int* __retval);
void V8SimpleExtensions__GetLineNumber_fn(::JSScriptException** jse, int* __retval);
void V8SimpleExtensions__GetMessage_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval);
void V8SimpleExtensions__GetOwnPropertyNames_fn(::JSObject** obj, ::JSContext** context, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSArray** __retval);
void V8SimpleExtensions__GetProperty_fn(::JSArray** arr, ::JSContext** context, int* index, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval);
void V8SimpleExtensions__GetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSValue** __retval);
void V8SimpleExtensions__GetSourceLine_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval);
void V8SimpleExtensions__GetStackTrace_fn(::JSScriptException** jse, ::JSContext** context, uString** __retval);
void V8SimpleExtensions__GetValue_fn(::JSExternal** ext, ::JSContext** context, void** __retval);
void V8SimpleExtensions__HasProperty_fn(::JSObject** obj, ::JSContext** context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, bool* __retval);
void V8SimpleExtensions__Length_fn(::JSArray** arr, ::JSContext** context, int* __retval);
void V8SimpleExtensions__NewBool_fn(bool* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval);
void V8SimpleExtensions__NewCallback_fn(::JSContext** context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler, ::JSFunction** __retval);
void V8SimpleExtensions__NewDouble_fn(double* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval);
void V8SimpleExtensions__NewExternal_fn(::JSContext** context, void** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSExternal** __retval);
void V8SimpleExtensions__NewExternalArrayBuffer_fn(::JSContext** context, void** data, int* byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval);
void V8SimpleExtensions__NewInt_fn(int* value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSValue** __retval);
void V8SimpleExtensions__NewString_fn(::JSContext** context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSString** __retval);
void V8SimpleExtensions__Null_fn(::JSValue** __retval);
void V8SimpleExtensions__Release_fn(::JSContext** context);
void V8SimpleExtensions__Release1_fn(::JSScriptException** jse, ::JSContext** context);
void V8SimpleExtensions__Release2_fn(::JSValue** value, ::JSContext** context, ::JSValue** __retval);
void V8SimpleExtensions__Retain2_fn(::JSValue** value, ::JSContext** context, ::JSValue** __retval);
void V8SimpleExtensions__SetProperty_fn(::JSArray** arr, ::JSContext** context, int* index, ::JSValue** value, uDelegate* errorHandler);
void V8SimpleExtensions__SetProperty1_fn(::JSObject** obj, ::JSContext** context, uString* key, ::JSValue** value, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, uDelegate* errorHandler);
void V8SimpleExtensions__ToStr_fn(::JSString** str, ::JSContext** context, uString** __retval);
void V8SimpleExtensions__TryGetArrayBufferData_fn(::JSObject** obj, ::JSContext** context, void** __retval);

struct V8SimpleExtensions : uObject
{
    static uSStrong<uDelegate*> CilCallback_;
    static uSStrong<uDelegate*>& CilCallback() { return V8SimpleExtensions_typeof()->Init(), CilCallback_; }

    static ::JSArray* AsArray(::JSValue* value);
    static bool AsBool(::JSValue* value);
    static double AsDouble(::JSValue* value);
    static ::JSExternal* AsExternal(::JSValue* value);
    static ::JSFunction* AsFunction(::JSValue* value);
    static int AsInt(::JSValue* value);
    static ::JSObject* AsObject(::JSValue* value);
    static ::JSString* AsString(::JSValue* value);
    static ::JSValue* AsValue(::JSArray* arr);
    static ::JSValue* AsValue1(::JSExternal* ext);
    static ::JSValue* AsValue2(::JSFunction* fun);
    static ::JSValue* AsValue3(::JSObject* obj);
    static ::JSValue* AsValue4(::JSString* str);
    static ::JSValue* Call(::JSFunction* fun, ::JSContext* context, ::JSObject* thisObject, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSValue* CilCallbackImpl(::JSContext* context, void* data, uArray* args, int numArgs, ::JSValue** error);
    static ::JSObject* Construct(::JSFunction* fun, ::JSContext* context, uArray* args, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSFunction* CreateCallback(::JSContext* context, uDelegate* callback, ::JSScriptException** error);
    static ::JSValue* Evaluate(::JSContext* context, uString* fileName, uString* code, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSValue* GetException(::JSScriptException* jse);
    static uString* GetFileName(::JSScriptException* jse, ::JSContext* context);
    static ::JSObject* GetGlobalObject(::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static int GetJSType(::JSValue* value);
    static int GetLineNumber(::JSScriptException* jse);
    static uString* GetMessage(::JSScriptException* jse, ::JSContext* context);
    static ::JSArray* GetOwnPropertyNames(::JSObject* obj, ::JSContext* context, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSValue* GetProperty(::JSArray* arr, ::JSContext* context, int index, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSValue* GetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static uString* GetSourceLine(::JSScriptException* jse, ::JSContext* context);
    static uString* GetStackTrace(::JSScriptException* jse, ::JSContext* context);
    static void* GetValue(::JSExternal* ext, ::JSContext* context);
    static bool HasProperty(::JSObject* obj, ::JSContext* context, uString* key, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static int Length(::JSArray* arr, ::JSContext* context);
    static ::JSValue* NewBool(bool value, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSFunction* NewCallback(::JSContext* context, uDelegate* callback, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static ::JSValue* NewDouble(double value, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSExternal* NewExternal(::JSContext* context, void* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSObject* NewExternalArrayBuffer(::JSContext* context, void* data, int byteLength, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSValue* NewInt(int value, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSString* NewString(::JSContext* context, uString* str, ::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static ::JSValue* Null();
    static void Release(::JSContext* context);
    static void Release1(::JSScriptException* jse, ::JSContext* context);
    static ::JSValue* Release2(::JSValue* value, ::JSContext* context);
    static ::JSValue* Retain2(::JSValue* value, ::JSContext* context);
    static void SetProperty(::JSArray* arr, ::JSContext* context, int index, ::JSValue* value, uDelegate* errorHandler);
    static void SetProperty1(::JSObject* obj, ::JSContext* context, uString* key, ::JSValue* value, ::g::Fuse::Scripting::V8::AutoReleasePool pool, uDelegate* errorHandler);
    static uString* ToStr(::JSString* str, ::JSContext* context);
    static void* TryGetArrayBufferData(::JSObject* obj, ::JSContext* context);
};
// }

}}}} // ::g::Fuse::Scripting::V8
