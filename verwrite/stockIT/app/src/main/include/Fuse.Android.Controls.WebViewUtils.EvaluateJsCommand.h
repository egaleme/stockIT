// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{struct EvaluateJsCommand;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{
namespace WebViewUtils{

// internal sealed extern class EvaluateJsCommand :14
// {
uType* EvaluateJsCommand_typeof();
void EvaluateJsCommand__ctor__fn(EvaluateJsCommand* __this, uString* javaScript, uDelegate* handler);
void EvaluateJsCommand__Execute_fn(EvaluateJsCommand* __this, ::g::Java::Object* webViewHandle, uString* expression);
void EvaluateJsCommand__HandleResult_fn(EvaluateJsCommand* __this, uString* result);
void EvaluateJsCommand__New1_fn(uString* javaScript, uDelegate* handler, EvaluateJsCommand** __retval);

struct EvaluateJsCommand : uObject
{
    uStrong<uDelegate*> _handler;
    uStrong<uString*> JavaScript;

    void ctor_(uString* javaScript, uDelegate* handler);
    void Execute(::g::Java::Object* webViewHandle, uString* expression);
    void HandleResult(uString* result);
    static EvaluateJsCommand* New1(uString* javaScript, uDelegate* handler);
};
// }

}}}}} // ::g::Fuse::Android::Controls::WebViewUtils
