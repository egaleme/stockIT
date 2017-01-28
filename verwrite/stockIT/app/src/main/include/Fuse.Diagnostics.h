// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Fuse{struct Diagnostics;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public static class Diagnostics :702
// {
uClassType* Diagnostics_typeof();
void Diagnostics__Deprecated_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__add_DiagnosticReported_fn(uDelegate* value);
void Diagnostics__remove_DiagnosticReported_fn(uDelegate* value);
void Diagnostics__InternalError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Report_fn(::g::Fuse::Diagnostic* d);
void Diagnostics__UnknownException_fn(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__Unsupported_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__UserError_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__UserRootError_fn(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__UserScriptError_fn(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__UserSuccess_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);
void Diagnostics__UserTypeOf_fn(uObject* a, uString** __retval);
void Diagnostics__UserWarning_fn(uString* msg, uObject* obj, uString* filePath, int* lineNumber, uString* memberName);

struct Diagnostics : uObject
{
    static uSStrong<uDelegate*> DiagnosticReported1_;
    static uSStrong<uDelegate*>& DiagnosticReported1() { return DiagnosticReported1_; }

    static void Deprecated(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void InternalError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void Report(::g::Fuse::Diagnostic* d);
    static void UnknownException(uString* msg, ::g::Uno::Exception* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void Unsupported(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void UserError(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void UserRootError(uString* expectedType, uObject* actualParent, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void UserScriptError(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void UserSuccess(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static uString* UserTypeOf(uObject* a);
    static void UserWarning(uString* msg, uObject* obj, uString* filePath, int lineNumber, uString* memberName);
    static void add_DiagnosticReported(uDelegate* value);
    static void remove_DiagnosticReported(uDelegate* value);
};
// }

}} // ::g::Fuse
