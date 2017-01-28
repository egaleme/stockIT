// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting.V8\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal extern struct JSScriptException :1181
// {
uStructType* JSScriptException_typeof();
void JSScriptException__Equals_fn(::JSScriptException** __this, uType* __type, uObject* that, bool* __retval);
void JSScriptException__GetHashCode_fn(::JSScriptException** __this, uType* __type, int* __retval);
void JSScriptException__op_Equality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval);
void JSScriptException__op_Inequality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval);

struct JSScriptException
{
    void* _handle;

    static bool Equals(::JSScriptException* __this, uType* __type, uObject* that) { bool __retval; return JSScriptException__Equals_fn(&__this, __type, that, &__retval), __retval; }
    static int GetHashCode(::JSScriptException* __this, uType* __type) { int __retval; return JSScriptException__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool op_Equality(::JSScriptException* e1, ::JSScriptException* e2);
    static bool op_Inequality(::JSScriptException* e1, ::JSScriptException* e2);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
