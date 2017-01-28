// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\implementation\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Uno.IDisposable.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct AndroidHttpRequest;}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// internal sealed extern class AndroidHttpRequest :13
// {
struct AndroidHttpRequest_type : ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_type
{
    ::g::Uno::Net::Http::Implementation::IHttpRequest interface2;
};

AndroidHttpRequest_type* AndroidHttpRequest_typeof();
void AndroidHttpRequest__ctor_5_fn(AndroidHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
void AndroidHttpRequest__Dispose1_fn(AndroidHttpRequest* __this);
void AndroidHttpRequest__EnableCache_fn(AndroidHttpRequest* __this, bool* enableCache);
void AndroidHttpRequest__GetResponseContentByteArray_fn(AndroidHttpRequest* __this, uArray** __retval);
void AndroidHttpRequest__GetResponseContentString_fn(AndroidHttpRequest* __this, uString** __retval);
void AndroidHttpRequest__GetResponseHeader1_fn(AndroidHttpRequest* __this, uString* name, uString** __retval);
void AndroidHttpRequest__GetResponseHeaders1_fn(AndroidHttpRequest* __this, uString** __retval);
void AndroidHttpRequest__New3_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, AndroidHttpRequest** __retval);
void AndroidHttpRequest__OnAborted_fn(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnDataReceived_fn(AndroidHttpRequest* __this, uObject* arg0, int* arg1);
void AndroidHttpRequest__OnDone_fn(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnError_fn(AndroidHttpRequest* __this, uObject* arg0);
void AndroidHttpRequest__OnHeadersReceived_fn(AndroidHttpRequest* __this);
void AndroidHttpRequest__OnProgress_fn(AndroidHttpRequest* __this, int* current, int* total, bool* hasTotal);
void AndroidHttpRequest__OnTimeout_fn(AndroidHttpRequest* __this);
void AndroidHttpRequest__SendAsync1_fn(AndroidHttpRequest* __this, uArray* data);
void AndroidHttpRequest__SendAsync2_fn(AndroidHttpRequest* __this, uString* data);
void AndroidHttpRequest__SetHeader1_fn(AndroidHttpRequest* __this, uString* name, uString* value);
void AndroidHttpRequest__SetResponseType1_fn(AndroidHttpRequest* __this, int* responseType);

struct AndroidHttpRequest : ::g::Android::com::fuse::ExperimentalHttp::HttpRequest
{
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    uStrong< ::g::Uno::Collections::List*> _responseData;
    int _responseLength;
    uStrong<uArray*> _result;

    void ctor_5(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
    void Dispose1();
    void EnableCache(bool enableCache);
    uArray* GetResponseContentByteArray();
    uString* GetResponseContentString();
    uString* GetResponseHeader1(uString* name);
    uString* GetResponseHeaders1();
    void SendAsync1(uArray* data);
    void SendAsync2(uString* data);
    void SetHeader1(uString* name, uString* value);
    void SetResponseType1(int responseType);
    static AndroidHttpRequest* New3(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url);
};
// }

}}}}} // ::g::Uno::Net::Http::Implementation
