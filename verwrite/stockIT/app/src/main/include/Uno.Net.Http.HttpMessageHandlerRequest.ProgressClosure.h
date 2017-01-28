// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__ProgressClosure;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.ProgressClosure :380
// {
uType* HttpMessageHandlerRequest__ProgressClosure_typeof();
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal);
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval);
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this);

struct HttpMessageHandlerRequest__ProgressClosure : uObject
{
    uStrong<uDelegate*> _action;
    int _current;
    bool _hasTotal;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    int _state;
    int _total;

    void ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
    void Run();
    static HttpMessageHandlerRequest__ProgressClosure* New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
};
// }

}}}} // ::g::Uno::Net::Http
