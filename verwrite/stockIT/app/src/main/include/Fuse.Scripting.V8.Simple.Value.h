// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Value;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class Value :1236
// {
uClassType* Value_typeof();
void Value__AsArray_fn(::JSValue** value, int* error, ::JSArray** __retval);
void Value__AsBool_fn(::JSValue** value, int* error, bool* __retval);
void Value__AsDouble_fn(::JSValue** value, int* error, double* __retval);
void Value__AsExternal_fn(::JSValue** value, int* error, ::JSExternal** __retval);
void Value__AsFunction_fn(::JSValue** value, int* error, ::JSFunction** __retval);
void Value__AsInt_fn(::JSValue** value, int* error, int* __retval);
void Value__AsObject_fn(::JSValue** value, int* error, ::JSObject** __retval);
void Value__AsString_fn(::JSValue** value, int* error, ::JSString** __retval);
void Value__AsValue_fn(::JSArray** arr, ::JSValue** __retval);
void Value__AsValue1_fn(::JSExternal** external, ::JSValue** __retval);
void Value__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval);
void Value__AsValue3_fn(::JSObject** obj, ::JSValue** __retval);
void Value__AsValue4_fn(::JSString** str, ::JSValue** __retval);
void Value__CallCreate_fn(::JSContext** context, ::JSFunction** function, ::JSObject** thisObject, uArray* args, int* numArgs, ::JSScriptException** error, ::JSValue** __retval);
void Value__ConstructCreate_fn(::JSContext** context, ::JSFunction** function, uArray* args, int* numArgs, ::JSScriptException** error, ::JSObject** __retval);
void Value__CopyOwnPropertyNames_fn(::JSContext** context, ::JSObject** obj, ::JSScriptException** error, ::JSArray** __retval);
void Value__CopyProperty_fn(::JSContext** context, ::JSArray** arr, int* index, ::JSScriptException** error, ::JSValue** __retval);
void Value__CopyProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, ::JSValue** __retval);
void Value__CreateBool_fn(bool* value, ::JSValue** __retval);
void Value__CreateDouble_fn(double* value, ::JSValue** __retval);
void Value__CreateExternal_fn(::JSContext** context, void** value, ::JSExternal** __retval);
void Value__CreateExternalArrayBuffer_fn(::JSContext** context, void** data, int* byteLength, ::JSObject** __retval);
void Value__CreateInt_fn(int* value, ::JSValue** __retval);
void Value__CreateString_fn(::JSContext** context, uString* buffer, int* length, int* error, ::JSString** __retval);
void Value__GetArrayBufferData_fn(::JSContext** context, ::JSObject** obj, int* outError, void** __retval);
void Value__GetExternalValue_fn(::JSContext** context, ::JSExternal** external, void** __retval);
void Value__GetType_fn(::JSValue** value, int* __retval);
void Value__HasProperty_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, bool* __retval);
void Value__JSNull_fn(::JSValue** __retval);
void Value__Length_fn(::JSContext** context, ::JSArray** arr, int* __retval);
void Value__Length1_fn(::JSContext** context, ::JSString** str, int* __retval);
void Value__Release_fn(::JSContext** context, ::JSValue** value);
void Value__Retain_fn(::JSContext** context, ::JSValue** value);
void Value__SetProperty_fn(::JSContext** context, ::JSArray** arr, int* index, ::JSValue** value, ::JSScriptException** error);
void Value__SetProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSValue** value, ::JSScriptException** error);
void Value__ToString_fn(::JSContext** context, ::JSString** str, uString** __retval);

struct Value : uObject
{
    static ::JSArray* AsArray(::JSValue* value, int* error);
    static bool AsBool(::JSValue* value, int* error);
    static double AsDouble(::JSValue* value, int* error);
    static ::JSExternal* AsExternal(::JSValue* value, int* error);
    static ::JSFunction* AsFunction(::JSValue* value, int* error);
    static int AsInt(::JSValue* value, int* error);
    static ::JSObject* AsObject(::JSValue* value, int* error);
    static ::JSString* AsString(::JSValue* value, int* error);
    static ::JSValue* AsValue(::JSArray* arr);
    static ::JSValue* AsValue1(::JSExternal* external);
    static ::JSValue* AsValue2(::JSFunction* fun);
    static ::JSValue* AsValue3(::JSObject* obj);
    static ::JSValue* AsValue4(::JSString* str);
    static ::JSValue* CallCreate(::JSContext* context, ::JSFunction* function, ::JSObject* thisObject, uArray* args, int numArgs, ::JSScriptException** error);
    static ::JSObject* ConstructCreate(::JSContext* context, ::JSFunction* function, uArray* args, int numArgs, ::JSScriptException** error);
    static ::JSArray* CopyOwnPropertyNames(::JSContext* context, ::JSObject* obj, ::JSScriptException** error);
    static ::JSValue* CopyProperty(::JSContext* context, ::JSArray* arr, int index, ::JSScriptException** error);
    static ::JSValue* CopyProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error);
    static ::JSValue* CreateBool(bool value);
    static ::JSValue* CreateDouble(double value);
    static ::JSExternal* CreateExternal(::JSContext* context, void* value);
    static ::JSObject* CreateExternalArrayBuffer(::JSContext* context, void* data, int byteLength);
    static ::JSValue* CreateInt(int value);
    static ::JSString* CreateString(::JSContext* context, uString* buffer, int length, int* error);
    static void* GetArrayBufferData(::JSContext* context, ::JSObject* obj, int* outError);
    static void* GetExternalValue(::JSContext* context, ::JSExternal* external);
    static int GetType(::JSValue* value);
    static bool HasProperty(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error);
    static ::JSValue* JSNull();
    static int Length(::JSContext* context, ::JSArray* arr);
    static int Length1(::JSContext* context, ::JSString* str);
    static void Release(::JSContext* context, ::JSValue* value);
    static void Retain(::JSContext* context, ::JSValue* value);
    static void SetProperty(::JSContext* context, ::JSArray* arr, int index, ::JSValue* value, ::JSScriptException** error);
    static void SetProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSValue* value, ::JSScriptException** error);
    static uString* ToString(::JSContext* context, ::JSString* str);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
