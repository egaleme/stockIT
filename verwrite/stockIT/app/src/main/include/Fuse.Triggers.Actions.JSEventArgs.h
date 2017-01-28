// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct JSEventArgs;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class JSEventArgs :795
// {
struct JSEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

JSEventArgs_type* JSEventArgs_typeof();
void JSEventArgs__ctor_1_fn(JSEventArgs* __this, uString* resultJson);
void JSEventArgs__FuseScriptingIScriptEventSerialize_fn(JSEventArgs* __this, uObject* s);
void JSEventArgs__New2_fn(uString* resultJson, JSEventArgs** __retval);

struct JSEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> ResultJson;

    void ctor_1(uString* resultJson);
    static JSEventArgs* New2(uString* resultJson);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
