// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class WebView :125
// {
struct WebView_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Controls::IWebView interface13;
    ::g::Fuse::Triggers::IProgress interface14;
    ::g::Fuse::Navigation::IBaseNavigation interface15;
    ::g::Fuse::Controls::ISourceReceiver interface16;
};

WebView_type* WebView_typeof();
void WebView__applyFallbackCalls_fn(WebView* __this, uObject* client);
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval);
void WebView__set_BaseUrl_fn(WebView* __this, uString* value);
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval);
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval);
void WebView__CreateNativeView_fn(WebView* __this, uObject** __retval);
void WebView__Eval_fn(WebView* __this, uString* js);
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler);
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval);
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value);
void WebView__GoBack_fn(WebView* __this);
void WebView__GoForward_fn(WebView* __this);
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value);
void WebView__loadHtml_fn(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
void WebView__LoadHtml_fn(WebView* __this, uString* html);
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl);
void WebView__LoadUrl_fn(WebView* __this, uString* url);
void WebView__OnBeginLoading_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnHistoryChanged_fn(WebView* __this);
void WebView__OnPageChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnPageLoaded_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnProgressChanged_fn(WebView* __this, uObject* sender, ::g::Uno::EventArgs* args);
void WebView__OnRooted_fn(WebView* __this);
void WebView__OnUnrooted_fn(WebView* __this);
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__get_Progress_fn(WebView* __this, double* __retval);
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__Reload_fn(WebView* __this);
void WebView__setBaseUrl_fn(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
void WebView__setUrl_fn(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
void WebView__SetUrl_fn(WebView* __this, uString* value, uObject* origin);
void WebView__get_Source_fn(WebView* __this, uString** __retval);
void WebView__set_Source_fn(WebView* __this, uString* value);
void WebView__Stop_fn(WebView* __this);
void WebView__UpdateRestState_fn(WebView* __this);
void WebView__get_Url_fn(WebView* __this, uString** __retval);
void WebView__set_Url_fn(WebView* __this, uString* value);
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value);
void WebView__get_WebViewClient_fn(WebView* __this, uObject** __retval);
void WebView__set_WebViewClient_fn(WebView* __this, uObject* value);

struct WebView : ::g::Fuse::Controls::Panel
{
    uStrong<uObject*> _fallbackClient;
    static ::g::Uno::UX::Selector _urlName_;
    static ::g::Uno::UX::Selector& _urlName() { return WebView_typeof()->Init(), _urlName_; }
    uStrong<uObject*> _webViewClient;
    uStrong<uDelegate*> BeginLoading1;
    uStrong<uDelegate*> HistoryChanged1;
    uStrong<uDelegate*> PageLoaded1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> UrlChanged1;

    void applyFallbackCalls(uObject* client);
    uString* BaseUrl();
    void BaseUrl(uString* value);
    void add_BeginLoading(uDelegate* value);
    void remove_BeginLoading(uDelegate* value);
    bool CanGoBack();
    bool CanGoForward();
    void Eval(uString* js);
    void Eval1(uString* js, uDelegate* resultHandler);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void GoBack();
    void GoForward();
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    void LoadHtml(uString* html);
    void LoadHtml1(uString* html, uString* baseUrl);
    void LoadUrl(uString* url);
    void OnBeginLoading(uObject* sender, ::g::Uno::EventArgs* args);
    void OnHistoryChanged();
    void OnPageChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnPageLoaded(uObject* sender, ::g::Uno::EventArgs* args);
    void OnProgressChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void add_PageLoaded(uDelegate* value);
    void remove_PageLoaded(uDelegate* value);
    double Progress();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Reload();
    void SetUrl(uString* value, uObject* origin);
    uString* Source();
    void Source(uString* value);
    void Stop();
    void UpdateRestState();
    uString* Url();
    void Url(uString* value);
    void add_UrlChanged(uDelegate* value);
    void remove_UrlChanged(uDelegate* value);
    uObject* WebViewClient();
    void WebViewClient(uObject* value);
    static void loadHtml(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
    static void setBaseUrl(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
    static void setUrl(::g::Fuse::Scripting::Context* c, WebView* view, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
