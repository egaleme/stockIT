// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract class WebViewNavAction :599
// {
struct WebViewNavAction_type : ::g::Fuse::Triggers::Actions::TriggerAction_type
{
    void(*fp_Execute)(::g::Fuse::Triggers::Actions::WebViewNavAction*, ::g::Fuse::Controls::WebView*);
};

WebViewNavAction_type* WebViewNavAction_typeof();
void WebViewNavAction__Perform_fn(WebViewNavAction* __this, ::g::Fuse::Node* target);

struct WebViewNavAction : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void Execute(::g::Fuse::Controls::WebView* webview) { (((WebViewNavAction_type*)__type)->fp_Execute)(this, webview); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
