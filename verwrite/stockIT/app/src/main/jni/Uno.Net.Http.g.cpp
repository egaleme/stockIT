// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpDefaultDispatcher.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandler.StaticData.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Net.Http.InvalidStateException.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[52];
static uType* TYPES[15];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure :332
// {
static void HttpMessageHandlerRequest__DispatchClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :338
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :338
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run() :345
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance] :338
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance] :345
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    if (uPtr(_arg)->IsComplete())
        return;

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static] :338
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :355
// {
static void HttpMessageHandlerRequest__DispatchClosure1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0), NULL), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure1_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :362
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    int state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :362
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    int state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run() :370
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance] :370
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    if (uPtr(_arg0)->IsComplete())
        return;

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// internal sealed class HttpDefaultDispatcher :846
// {
static void HttpDefaultDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
}

HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_build_ = HttpDefaultDispatcher_build;
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    return type;
}

// public HttpDefaultDispatcher() :848
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :853
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New() :848
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance] :848
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :853
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static] :848
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public static class HttpMessageCache :5
// {
// static HttpMessageCache() :36
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform2::Application::add_Started(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

static void HttpMessageCache_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&::g::Uno::Net::Http::HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_build_ = HttpMessageCache_build;
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    return type;
}

// public static void Init() :47
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() :13
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value) :14
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) :42
void HttpMessageCache__OnApplicationStarted_fn(int* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isCacheDisabled_;
bool HttpMessageCache::_isInitialized_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static] :47
void HttpMessageCache::Init()
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        return;

    HttpMessageCache::_isInitialized() = true;
    ::g::Uno::Platform2::Application::remove_Started(uDelegate::New(::TYPES[0/*Uno.Platform2.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));

    if (!HttpMessageCache::IsCacheEnabled())
        return;

    int64_t cacheSize = (HttpMessageCache::_maxCacheSizeInBytes() != 0LL) ? HttpMessageCache::_maxCacheSizeInBytes() : 20971520LL;
    ::g::Android::com::fuse::ExperimentalHttp::HttpRequest::InstallCache((uObject*)::g::Android::Base::JNI::GetWrappedActivityObject(), cacheSize);
}

// private static void OnApplicationStarted(Uno.Platform2.ApplicationState state) [static] :42
void HttpMessageCache::OnApplicationStarted(int state)
{
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static] :13
bool HttpMessageCache::IsCacheEnabled()
{
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled();
}

// public static void set_IsCacheEnabled(bool value) [static] :14
void HttpMessageCache::IsCacheEnabled(bool value)
{
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized())
        ;
    else
        HttpMessageCache::_isCacheDisabled() = !value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public sealed class HttpMessageHandler :92
// {
static void HttpMessageHandler_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandler, _defaultDispatcher), 0,
        ::TYPES[1/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandler, _pendingRequests), 0);
}

HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_build_ = HttpMessageHandler_build;
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    return type;
}

// public HttpMessageHandler() :124
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :175
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) :156
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose() :135
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New() :124
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance] :124
void HttpMessageHandler::ctor_()
{
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>*/]));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :175
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :156
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance] :135
void HttpMessageHandler::Dispose()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]); )
    {
        ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::TYPES[2/*Uno.Collections.List<Uno.Net.Http.HttpMessageHandlerRequest>.Enumerator*/]);

        if (request != NULL)
            uPtr(request)->Dispose();
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static] :124
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public sealed class HttpMessageHandlerRequest :202
// {
// ~HttpMessageHandlerRequest() :259
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

static void HttpMessageHandlerRequest_build(uType* type)
{
    ::STRINGS[0] = uString::Const("handler");
    ::STRINGS[1] = uString::Const("method");
    ::STRINGS[2] = uString::Const("url");
    ::STRINGS[3] = uString::Const("dispatcher");
    ::STRINGS[4] = uString::Const("HttpMessageHandlerRequest");
    ::STRINGS[5] = uString::Const("");
    ::STRINGS[6] = uString::Const("GET");
    ::STRINGS[7] = uString::Const("HEAD");
    ::STRINGS[8] = uString::Const("Not allowed to set header \"");
    ::STRINGS[9] = uString::Const("\" on this target.");
    ::TYPES[3] = ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof();
    ::TYPES[4] = ::g::Uno::IDisposable_typeof();
    ::TYPES[5] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[7] = ::g::Uno::Action_typeof();
    ::TYPES[8] = HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Net::Http::Implementation::AndroidHttpRequest_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(type, NULL);
    ::TYPES[11] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL);
    type->SetInterfaces(
        ::TYPES[4/*Uno.IDisposable*/], offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::TYPES[6/*Uno.Threading.IDispatcher*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _method), 0,
        ::TYPES[5/*byte[]*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, _url), 0,
        ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Aborted1), 0,
        ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Done1), 0,
        ::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Error1), 0,
        ::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Progress1), 0,
        ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, StateChanged1), 0,
        ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest, Timeout1), 0);
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_build_ = HttpMessageHandlerRequest_build;
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :216
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public void Abort() :567
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this)
{
    __this->Abort();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :325
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :325
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed() :267
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest() :284
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose() :273
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :328
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :328
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public void EnableCache(bool enableCache) :458
void HttpMessageHandlerRequest__EnableCache_fn(HttpMessageHandlerRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :326
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :326
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// private void FireSetHeadersReceived() :446
void HttpMessageHandlerRequest__FireSetHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->FireSetHeadersReceived();
}

// public byte[] GetResponseContentByteArray() :629
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :615
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name) :592
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders() :603
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :581
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() :295
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) :296
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete() :409
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value) :644
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// public string get_Method() :290
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Method();
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :216
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted() :414
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone() :435
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage) :421
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnHeadersReceived() :442
void HttpMessageHandlerRequest__OnHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnHeadersReceived();
}

// internal void OnProgress(int current, int total, bool hasTotal) :451
void HttpMessageHandlerRequest__OnProgress_fn(HttpMessageHandlerRequest* __this, int* current, int* total, bool* hasTotal)
{
    __this->OnProgress(*current, *total, *hasTotal);
}

// internal void OnStateChanged() :312
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout() :428
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :330
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :330
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync() :554
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(byte[] data) :508
void HttpMessageHandlerRequest__SendAsync1_fn(HttpMessageHandlerRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data) :536
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value) :470
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :493
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int* responseType)
{
    __this->SetResponseType(*responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) :483
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() :301
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value) :302
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :329
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :327
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :327
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :216
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"handler"*/]));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"method"*/]));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"url"*/]));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"dispatcher"*/]));

    method = ::g::Uno::String::ToUpper(uPtr(method));
    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::AndroidHttpRequest::New3(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public void Abort() [instance] :567
void HttpMessageHandlerRequest::Abort()
{
    CheckDisposed();

    if (State() >= 5)
        return;

    ::g::Uno::Net::Http::Implementation::IHttpRequest::Abort(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    OnAborted();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :325
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :325
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// private void CheckDisposed() [instance] :267
void HttpMessageHandlerRequest::CheckDisposed()
{
    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(::STRINGS[4/*"HttpMessage...*/]));
}

// internal void CompleteRequest() [instance] :284
void HttpMessageHandlerRequest::CompleteRequest()
{
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance] :273
void HttpMessageHandlerRequest::Dispose()
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::TYPES[4/*Uno.IDisposable*/]));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :328
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :328
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public void EnableCache(bool enableCache) [instance] :458
void HttpMessageHandlerRequest::EnableCache(bool enableCache)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::EnableCache(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :326
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :326
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[11/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/]);
}

// private void FireSetHeadersReceived() [instance] :446
void HttpMessageHandlerRequest::FireSetHeadersReceived()
{
    State(3);
}

// public byte[] GetResponseContentByteArray() [instance] :629
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::TYPES[5/*byte[]*/], 0);

    uArray* ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind2 != NULL) ? ind2 : uArray::New(::TYPES[5/*byte[]*/], 0);
}

// public string GetResponseContentString() [instance] :615
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return ::STRINGS[5/*""*/];

    uString* ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    return (ind1 != NULL) ? ind1 : ::STRINGS[5/*""*/];
}

// public string GetResponseHeader(string name) [instance] :592
uString* HttpMessageHandlerRequest::GetResponseHeader(uString* name)
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return ::STRINGS[5/*""*/];

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), name);
}

// public string GetResponseHeaders() [instance] :603
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return ::STRINGS[5/*""*/];

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public int GetResponseStatus() [instance] :581
int HttpMessageHandlerRequest::GetResponseStatus()
{
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance] :295
int HttpMessageHandlerRequest::HttpResponseType()
{
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance] :296
void HttpMessageHandlerRequest::HttpResponseType(int value)
{
    SetResponseType(value);
}

// private bool IsComplete() [instance] :409
bool HttpMessageHandlerRequest::IsComplete()
{
    return State() >= 5;
}

// public string get_Method() [instance] :290
uString* HttpMessageHandlerRequest::Method()
{
    return _method;
}

// internal void OnAborted() [instance] :414
void HttpMessageHandlerRequest::OnAborted()
{
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance] :435
void HttpMessageHandlerRequest::OnDone()
{
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance] :421
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(::TYPES[8/*Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure<string>*/], uCRef<int>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnHeadersReceived() [instance] :442
void HttpMessageHandlerRequest::OnHeadersReceived()
{
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__FireSetHeadersReceived_fn, this));
}

// internal void OnProgress(int current, int total, bool hasTotal) [instance] :451
void HttpMessageHandlerRequest::OnProgress(int current, int total, bool hasTotal)
{
    uDelegate* handler = Progress1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__ProgressClosure__Run_fn, HttpMessageHandlerRequest__ProgressClosure::New1(4, handler, this, current, total, hasTotal)));
}

// internal void OnStateChanged() [instance] :312
void HttpMessageHandlerRequest::OnStateChanged()
{
    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance] :428
void HttpMessageHandlerRequest::OnTimeout()
{
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::TYPES[6/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[7/*Uno.Action*/], (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :330
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :330
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::TYPES[12/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/]);
}

// public void SendAsync() [instance] :554
void HttpMessageHandlerRequest::SendAsync()
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    OnStateChanged();
}

// public void SendAsync(byte[] data) [instance] :508
void HttpMessageHandlerRequest::SendAsync1(uArray* data)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), ::STRINGS[6/*"GET"*/]) || ::g::Uno::String::op_Equality(Method(), ::STRINGS[7/*"HEAD"*/])) || (data == NULL)) || (uPtr(data)->Length() == 0))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    else
    {
        _optionalPayloadCache = data;
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync1(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), data);
    }

    OnStateChanged();
}

// public void SendAsync(string data) [instance] :536
void HttpMessageHandlerRequest::SendAsync2(uString* data)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), ::STRINGS[6/*"GET"*/]) || ::g::Uno::String::op_Equality(Method(), ::STRINGS[7/*"HEAD"*/])) || ::g::Uno::String::op_Equality(data, NULL)) || ::g::Uno::String::op_Equality(data, ::STRINGS[5/*""*/]))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]));
    else
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync2(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), data);

    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance] :470
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"Not allowed...*/], name), ::STRINGS[9/*"\" on this ...*/])));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :493
void HttpMessageHandlerRequest::SetResponseType(int responseType)
{
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
    uPtr(uAs< ::g::Uno::Net::Http::Implementation::AndroidHttpRequest*>(_httpRequest, ::TYPES[9/*Uno.Net.Http.Implementation.AndroidHttpRequest*/]))->SetResponseType1(responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) [instance] :483
void HttpMessageHandlerRequest::SetTimeout(int timeoutInMilliseconds)
{
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(uInterface(uPtr(_httpRequest), ::TYPES[3/*Uno.Net.Http.Implementation.IHttpRequest*/]), timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance] :301
int HttpMessageHandlerRequest::State()
{
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance] :302
void HttpMessageHandlerRequest::State(int value)
{
    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :329
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :327
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :327
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::TYPES[10/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/]);
}

// private static bool IsHeaderValid(string name, string value) [static] :644
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static] :216
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public enum HttpRequestState :711
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public enum HttpResponseType :735
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public static class HttpStatusReasonPhrase :749
// {
// static HttpStatusReasonPhrase() :749
static void HttpStatusReasonPhrase__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::Dictionary* collection5;
    ::g::Uno::Collections::Dictionary* collection4;
    ::g::Uno::Collections::Dictionary* collection3;
    ::g::Uno::Collections::Dictionary* collection2;
    ::g::Uno::Collections::Dictionary* collection1;
    HttpStatusReasonPhrase::Informational_ = (uObject*)(collection5 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(100), ::STRINGS[10/*"Continue"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int>(101), ::STRINGS[11/*"Switching P...*/]), collection5);
    HttpStatusReasonPhrase::Success_ = (uObject*)(collection4 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(200), ::STRINGS[12/*"OK"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(201), ::STRINGS[13/*"Created"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(202), ::STRINGS[14/*"Accepted"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(203), ::STRINGS[15/*"Non-Authori...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(204), ::STRINGS[16/*"No Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(205), ::STRINGS[17/*"Reset Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int>(206), ::STRINGS[18/*"Partial Con...*/]), collection4);
    HttpStatusReasonPhrase::Redirection_ = (uObject*)(collection3 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(300), ::STRINGS[19/*"Multiple Ch...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(301), ::STRINGS[20/*"Moved Perma...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(302), ::STRINGS[21/*"Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(303), ::STRINGS[22/*"See Other"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(304), ::STRINGS[23/*"Not Modified"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(305), ::STRINGS[24/*"Use Proxy"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int>(307), ::STRINGS[25/*"Temporary R...*/]), collection3);
    HttpStatusReasonPhrase::ClientErrors_ = (uObject*)(collection2 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(400), ::STRINGS[26/*"Bad Request"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(401), ::STRINGS[27/*"Unauthorized"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(402), ::STRINGS[28/*"Payment Req...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(403), ::STRINGS[29/*"Forbidden"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(404), ::STRINGS[30/*"Not Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(405), ::STRINGS[31/*"Method Not ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(406), ::STRINGS[32/*"Not Accepta...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(407), ::STRINGS[33/*"Proxy Authe...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(408), ::STRINGS[34/*"Request Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(409), ::STRINGS[35/*"Conflict"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(410), ::STRINGS[36/*"Gone"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(411), ::STRINGS[37/*"Length Requ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(412), ::STRINGS[38/*"Preconditio...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(413), ::STRINGS[39/*"Request Ent...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(414), ::STRINGS[40/*"Request-URI...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(415), ::STRINGS[41/*"Unsupported...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(416), ::STRINGS[42/*"Requested r...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int>(417), ::STRINGS[43/*"Expectation...*/]), collection2);
    HttpStatusReasonPhrase::ServerErrors_ = (uObject*)(collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[13/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(500), ::STRINGS[44/*"Internal Se...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(501), ::STRINGS[45/*"Not Impleme...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(502), ::STRINGS[46/*"Bad Gateway"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(503), ::STRINGS[47/*"Service Una...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(504), ::STRINGS[48/*"Gateway Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int>(505), ::STRINGS[49/*"HTTP Versio...*/]), collection1);
}

static void HttpStatusReasonPhrase_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Continue");
    ::STRINGS[11] = uString::Const("Switching Protocols");
    ::STRINGS[12] = uString::Const("OK");
    ::STRINGS[13] = uString::Const("Created");
    ::STRINGS[14] = uString::Const("Accepted");
    ::STRINGS[15] = uString::Const("Non-Authoritative Information");
    ::STRINGS[16] = uString::Const("No Content");
    ::STRINGS[17] = uString::Const("Reset Content");
    ::STRINGS[18] = uString::Const("Partial Content");
    ::STRINGS[19] = uString::Const("Multiple Choices");
    ::STRINGS[20] = uString::Const("Moved Permanently");
    ::STRINGS[21] = uString::Const("Found");
    ::STRINGS[22] = uString::Const("See Other");
    ::STRINGS[23] = uString::Const("Not Modified");
    ::STRINGS[24] = uString::Const("Use Proxy");
    ::STRINGS[25] = uString::Const("Temporary Redirect");
    ::STRINGS[26] = uString::Const("Bad Request");
    ::STRINGS[27] = uString::Const("Unauthorized");
    ::STRINGS[28] = uString::Const("Payment Required");
    ::STRINGS[29] = uString::Const("Forbidden");
    ::STRINGS[30] = uString::Const("Not Found");
    ::STRINGS[31] = uString::Const("Method Not Allowed");
    ::STRINGS[32] = uString::Const("Not Acceptable");
    ::STRINGS[33] = uString::Const("Proxy Authentication Required");
    ::STRINGS[34] = uString::Const("Request Time-out");
    ::STRINGS[35] = uString::Const("Conflict");
    ::STRINGS[36] = uString::Const("Gone");
    ::STRINGS[37] = uString::Const("Length Required");
    ::STRINGS[38] = uString::Const("Precondition Failed");
    ::STRINGS[39] = uString::Const("Request Entity Too Large");
    ::STRINGS[40] = uString::Const("Request-URI Too Large");
    ::STRINGS[41] = uString::Const("Unsupported Media Type");
    ::STRINGS[42] = uString::Const("Requested range not satisfiable");
    ::STRINGS[43] = uString::Const("Expectation Failed");
    ::STRINGS[44] = uString::Const("Internal Server Error");
    ::STRINGS[45] = uString::Const("Not Implemented");
    ::STRINGS[46] = uString::Const("Bad Gateway");
    ::STRINGS[47] = uString::Const("Service Unavailable");
    ::STRINGS[48] = uString::Const("Gateway Time-out");
    ::STRINGS[49] = uString::Const("HTTP Version not supported");
    ::TYPES[13] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::ClientErrors_, uFieldFlagsStatic,
        ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Informational_, uFieldFlagsStatic,
        ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Redirection_, uFieldFlagsStatic,
        ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::ServerErrors_, uFieldFlagsStatic,
        ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&::g::Uno::Net::Http::HttpStatusReasonPhrase::Success_, uFieldFlagsStatic);
}

uClassType* HttpStatusReasonPhrase_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpStatusReasonPhrase", options);
    type->fp_build_ = HttpStatusReasonPhrase_build;
    type->fp_cctor_ = HttpStatusReasonPhrase__cctor__fn;
    return type;
}

// public static string GetFromStatusCode(int statusCode) :816
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int* statusCode, uString** __retval)
{
    *__retval = HttpStatusReasonPhrase::GetFromStatusCode(*statusCode);
}

uSStrong<uObject*> HttpStatusReasonPhrase::ClientErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Informational_;
uSStrong<uObject*> HttpStatusReasonPhrase::Redirection_;
uSStrong<uObject*> HttpStatusReasonPhrase::ServerErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::Success_;

// public static string GetFromStatusCode(int statusCode) [static] :816
uString* HttpStatusReasonPhrase::GetFromStatusCode(int statusCode)
{
    HttpStatusReasonPhrase_typeof()->Init();
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uString* description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Informational()), ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret6), ret6))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Success()), ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret7), ret7))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Redirection()), ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret8), ret8))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ClientErrors()), ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret9), ret9))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ServerErrors()), ::TYPES[14/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int>(statusCode), (void**)(&description), &ret10), ret10))
        return description;

    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public sealed class InvalidResponseTypeException :690
// {
static void InvalidResponseTypeException_build(uType* type)
{
    ::STRINGS[50] = uString::Const("Response type is invalid.");
    type->SetFields(3);
}

::g::Uno::Exception_type* InvalidResponseTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->fp_build_ = InvalidResponseTypeException_build;
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    return type;
}

// public InvalidResponseTypeException() :692
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New() :692
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance] :692
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[50/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static] :692
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// public sealed class InvalidStateException :696
// {
static void InvalidStateException_build(uType* type)
{
    ::STRINGS[51] = uString::Const("The object is in an invalid state.");
    type->SetFields(3);
}

::g::Uno::Exception_type* InvalidStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->fp_build_ = InvalidStateException_build;
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    return type;
}

// public InvalidStateException() :698
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException New() :698
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException() [instance] :698
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[51/*"The object ...*/]);
}

// public InvalidStateException New() [static] :698
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.ProgressClosure :380
// {
static void HttpMessageHandlerRequest__ProgressClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _action), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _current), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _hasTotal), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _request), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _state), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure, _total), 0);
}

uType* HttpMessageHandlerRequest__ProgressClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__ProgressClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__ProgressClosure_build;
    return type;
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :389
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal)
{
    __this->ctor_(*state, action, request, *current, *total, *hasTotal);
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :389
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__ProgressClosure::New1(*state, action, request, *current, *total, *hasTotal);
}

// public void Run() :399
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this)
{
    __this->Run();
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [instance] :389
void HttpMessageHandlerRequest__ProgressClosure::ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    _action = action;
    _request = request;
    _current = current;
    _total = total;
    _hasTotal = hasTotal;
    _state = state;
}

// public void Run() [instance] :399
void HttpMessageHandlerRequest__ProgressClosure::Run()
{
    if (uPtr(_request)->IsComplete())
        return;

    uPtr(_request)->State(_state);
    uPtr(_action)->Invoke(4, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_request, uCRef<int>(_current), uCRef<int>(_total), uCRef(_hasTotal));
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [static] :389
HttpMessageHandlerRequest__ProgressClosure* HttpMessageHandlerRequest__ProgressClosure::New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal)
{
    HttpMessageHandlerRequest__ProgressClosure* obj1 = (HttpMessageHandlerRequest__ProgressClosure*)uNew(HttpMessageHandlerRequest__ProgressClosure_typeof());
    obj1->ctor_(state, action, request, current, total, hasTotal);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\$.uno
// ------------------------------------------------------------------------------

// internal static class HttpMessageHandler.StaticData :94
// {
static void HttpMessageHandler__StaticData_build(uType* type)
{
}

uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    type->fp_build_ = HttpMessageHandler__StaticData_build;
    return type;
}

// internal static void DecrementPendingRequests() :105
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests() :98
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

// internal static void DecrementPendingRequests() [static] :105
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
}

// internal static void IncrementPendingRequests() [static] :98
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
}
// }

}}}} // ::g::Uno::Net::Http
