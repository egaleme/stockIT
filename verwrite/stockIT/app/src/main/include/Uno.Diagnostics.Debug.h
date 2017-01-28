// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\diagnostics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug :75
// {
uClassType* Debug_typeof();
void Debug__EmitLog_fn(uString* message, int* type);
void Debug__Log4_fn(uString* message, int* type);

struct Debug : uObject
{
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return Debug_typeof()->Init(), _indentStr_; }
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return Debug_typeof()->Init(), _logHandler_; }

    static void EmitLog(uString* message, int type);
    static void Log4(uString* message, int type);
};
// }

}}} // ::g::Uno::Diagnostics
