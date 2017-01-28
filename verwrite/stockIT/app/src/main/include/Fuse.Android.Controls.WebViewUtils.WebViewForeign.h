// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.WebView\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{struct WebViewForeign;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{
namespace WebViewUtils{

// public static class WebViewForeign :288
// {
uClassType* WebViewForeign_typeof();
void WebViewForeign__AddJavascriptInterface_fn(::g::Java::Object* handle, uString* name, uDelegate* resultHandler);
void WebViewForeign__CanGoBack_fn(::g::Java::Object* handle, bool* __retval);
void WebViewForeign__CanGoForward_fn(::g::Java::Object* handle, bool* __retval);
void WebViewForeign__CreateAndSetWebChromeClient_fn(::g::Java::Object* webViewHandle, uDelegate* onProgress, ::g::Java::Object** __retval);
void WebViewForeign__CreateAndSetWebViewClient_fn(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed, ::g::Java::Object** __retval);
void WebViewForeign__CreateWebView_fn(::g::Java::Object** __retval);
void WebViewForeign__GetProgress_fn(::g::Java::Object* handle, double* __retval);
void WebViewForeign__GetUrl_fn(::g::Java::Object* handle, uString** __retval);
void WebViewForeign__GoBack_fn(::g::Java::Object* handle);
void WebViewForeign__GoForward_fn(::g::Java::Object* handle);
void WebViewForeign__LoadHtml_fn(::g::Java::Object* handle, uString* html, uString* baseUrl);
void WebViewForeign__LoadUrl_fn(::g::Java::Object* handle, uString* url);
void WebViewForeign__Reload_fn(::g::Java::Object* handle);
void WebViewForeign__StopLoading_fn(::g::Java::Object* handle);

struct WebViewForeign : uObject
{
    static void AddJavascriptInterface(::g::Java::Object* handle, uString* name, uDelegate* resultHandler);
    static bool CanGoBack(::g::Java::Object* handle);
    static bool CanGoForward(::g::Java::Object* handle);
    static ::g::Java::Object* CreateAndSetWebChromeClient(::g::Java::Object* webViewHandle, uDelegate* onProgress);
    static ::g::Java::Object* CreateAndSetWebViewClient(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed);
    static ::g::Java::Object* CreateWebView();
    static double GetProgress(::g::Java::Object* handle);
    static uString* GetUrl(::g::Java::Object* handle);
    static void GoBack(::g::Java::Object* handle);
    static void GoForward(::g::Java::Object* handle);
    static void LoadHtml(::g::Java::Object* handle, uString* html, uString* baseUrl);
    static void LoadUrl(::g::Java::Object* handle, uString* url);
    static void Reload(::g::Java::Object* handle);
    static void StopLoading(::g::Java::Object* handle);
};
// }

}}}}} // ::g::Fuse::Android::Controls::WebViewUtils
