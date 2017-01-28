// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.Arrays.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.Implementation.AndroidHttpRequest.h>
#include <Uno.Net.Http.Implementation.IHttpRequest.h>
#include <Uno.String.h>
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Net{
namespace Http{
namespace Implementation{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\implementation\android\$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed extern class AndroidHttpRequest :13
// {
static void AndroidHttpRequest_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[1/*byte[]*/], NULL);
    ::TYPES[3] = ::g::Uno::Array_typeof()->MakeMethod(0/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    ::TYPES[4] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetInterfaces(
        ::TYPES[4/*Android.Base.Wrappers.IJWrapper*/], offsetof(AndroidHttpRequest_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(AndroidHttpRequest_type, interface1),
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(AndroidHttpRequest_type, interface2));
    type->SetFields(4,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Uno::Net::Http::Implementation::AndroidHttpRequest, _request), 0,
        ::TYPES[0/*Uno.Collections.List<byte[]>*/], offsetof(::g::Uno::Net::Http::Implementation::AndroidHttpRequest, _responseData), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::Http::Implementation::AndroidHttpRequest, _responseLength), 0,
        ::TYPES[1/*byte[]*/], offsetof(::g::Uno::Net::Http::Implementation::AndroidHttpRequest, _result), 0);
}

AndroidHttpRequest_type* AndroidHttpRequest_typeof()
{
    static uSStrong<AndroidHttpRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(AndroidHttpRequest);
    options.TypeSize = sizeof(AndroidHttpRequest_type);
    type = (AndroidHttpRequest_type*)uClassType::New("Uno.Net.Http.Implementation.AndroidHttpRequest", options);
    type->fp_build_ = AndroidHttpRequest_build;
    type->fp_OnAborted = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnAborted_fn;
    type->fp_OnDataReceived = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, uObject*, int*))AndroidHttpRequest__OnDataReceived_fn;
    type->fp_OnDone = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnDone_fn;
    type->fp_OnError = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, uObject*))AndroidHttpRequest__OnError_fn;
    type->fp_OnHeadersReceived = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnHeadersReceived_fn;
    type->fp_OnProgress = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, int*, int*, bool*))AndroidHttpRequest__OnProgress_fn;
    type->fp_OnTimeout = (void(*)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*))AndroidHttpRequest__OnTimeout_fn;
    type->interface2.fp_EnableCache = (void(*)(uObject*, bool*))AndroidHttpRequest__EnableCache_fn;
    type->interface2.fp_SetHeader = (void(*)(uObject*, uString*, uString*))AndroidHttpRequest__SetHeader1_fn;
    type->interface2.fp_SetTimeout = (void(*)(uObject*, int*))::g::Android::com::fuse::ExperimentalHttp::HttpRequest__SetTimeout_fn;
    type->interface2.fp_SendAsync1 = (void(*)(uObject*, uArray*))AndroidHttpRequest__SendAsync1_fn;
    type->interface2.fp_SendAsync2 = (void(*)(uObject*, uString*))AndroidHttpRequest__SendAsync2_fn;
    type->interface2.fp_SendAsync = (void(*)(uObject*))::g::Android::com::fuse::ExperimentalHttp::HttpRequest__SendAsync_fn;
    type->interface2.fp_Abort = (void(*)(uObject*))::g::Android::com::fuse::ExperimentalHttp::HttpRequest__Abort_fn;
    type->interface2.fp_GetResponseStatus = (void(*)(uObject*, int*))::g::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseStatus_fn;
    type->interface2.fp_GetResponseHeader = (void(*)(uObject*, uString*, uString**))AndroidHttpRequest__GetResponseHeader1_fn;
    type->interface2.fp_GetResponseHeaders = (void(*)(uObject*, uString**))AndroidHttpRequest__GetResponseHeaders1_fn;
    type->interface2.fp_GetResponseContentString = (void(*)(uObject*, uString**))AndroidHttpRequest__GetResponseContentString_fn;
    type->interface2.fp_GetResponseContentByteArray = (void(*)(uObject*, uArray**))AndroidHttpRequest__GetResponseContentByteArray_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))AndroidHttpRequest__Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// internal AndroidHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) :20
void AndroidHttpRequest__ctor_5_fn(AndroidHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    __this->ctor_5(request, method, url);
}

// public void Dispose() :31
void AndroidHttpRequest__Dispose1_fn(AndroidHttpRequest* __this)
{
    __this->Dispose1();
}

// public void EnableCache(bool enableCache) :36
void AndroidHttpRequest__EnableCache_fn(AndroidHttpRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public byte[] GetResponseContentByteArray() :81
void AndroidHttpRequest__GetResponseContentByteArray_fn(AndroidHttpRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :76
void AndroidHttpRequest__GetResponseContentString_fn(AndroidHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name) :65
void AndroidHttpRequest__GetResponseHeader1_fn(AndroidHttpRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader1(name);
}

// public new string GetResponseHeaders() :71
void AndroidHttpRequest__GetResponseHeaders1_fn(AndroidHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders1();
}

// internal AndroidHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) :20
void AndroidHttpRequest__New3_fn(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url, AndroidHttpRequest** __retval)
{
    *__retval = AndroidHttpRequest::New3(request, method, url);
}

// public override sealed void OnAborted() :86
void AndroidHttpRequest__OnAborted_fn(AndroidHttpRequest* __this)
{
    uPtr(__this->_request)->OnAborted();
}

// public override sealed void OnDataReceived(Android.Base.Wrappers.IJWrapper arg0, int arg1) :111
void AndroidHttpRequest__OnDataReceived_fn(AndroidHttpRequest* __this, uObject* arg0, int* arg1)
{
    int arg1_ = *arg1;
    ::g::Uno::Collections::List__Enumerator<uStrong<uArray*> > ret4;

    if (arg1_ == -1)
    {
        if (__this->_responseLength == 0)
            return;

        __this->_result = uArray::New(::TYPES[1/*byte[]*/], __this->_responseLength);
        int pos = 0;

        for (::g::Uno::Collections::List__Enumerator<uStrong<uArray*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_responseData), &ret4), ret4); enum1.MoveNext(::TYPES[2/*Uno.Collections.List<byte[]>.Enumerator*/]); )
        {
            uArray* chunk = enum1.Current(::TYPES[2/*Uno.Collections.List<byte[]>.Enumerator*/]);
            int chunkLength = uPtr(chunk)->Length();
            ::g::Uno::Array::Copy(::TYPES[3/*Uno.Array.Copy<byte>*/], chunk, 0, __this->_result, pos, chunkLength);
            pos = pos + chunkLength;
        }
    }
    else
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_responseData), ::g::Android::Base::Types::Arrays::JavaToUnoByteArray1(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(arg0), ::TYPES[4/*Android.Base.Wrappers.IJWrapper*/])), (int64_t)arg1_));
        __this->_responseLength = (__this->_responseLength + arg1_);
    }
}

// public override sealed void OnDone() :96
void AndroidHttpRequest__OnDone_fn(AndroidHttpRequest* __this)
{
    uPtr(__this->_request)->OnDone();
}

// public override sealed void OnError(Android.Base.Wrappers.IJWrapper arg0) :130
void AndroidHttpRequest__OnError_fn(AndroidHttpRequest* __this, uObject* arg0)
{
    uPtr(__this->_request)->OnError(::g::Android::Base::Types::String::JavaToUno2(arg0));
}

// public override sealed void OnHeadersReceived() :101
void AndroidHttpRequest__OnHeadersReceived_fn(AndroidHttpRequest* __this)
{
    uPtr(__this->_request)->OnHeadersReceived();
}

// public override sealed void OnProgress(int current, int total, bool hasTotal) :106
void AndroidHttpRequest__OnProgress_fn(AndroidHttpRequest* __this, int* current, int* total, bool* hasTotal)
{
    int current_ = *current;
    int total_ = *total;
    bool hasTotal_ = *hasTotal;
    uPtr(__this->_request)->OnProgress(current_, total_, hasTotal_);
}

// public override sealed void OnTimeout() :91
void AndroidHttpRequest__OnTimeout_fn(AndroidHttpRequest* __this)
{
    uPtr(__this->_request)->OnTimeout();
}

// public void SendAsync(byte[] data) :53
void AndroidHttpRequest__SendAsync1_fn(AndroidHttpRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data) :59
void AndroidHttpRequest__SendAsync2_fn(AndroidHttpRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value) :41
void AndroidHttpRequest__SetHeader1_fn(AndroidHttpRequest* __this, uString* name, uString* value)
{
    __this->SetHeader1(name, value);
}

// internal void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :48
void AndroidHttpRequest__SetResponseType1_fn(AndroidHttpRequest* __this, int* responseType)
{
    __this->SetResponseType1(*responseType);
}

// internal AndroidHttpRequest(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [instance] :20
void AndroidHttpRequest::ctor_5(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    ctor_4((uObject*)::g::Android::Base::JNI::GetWrappedActivityObject(), (uObject*)::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(url), false, false), (uObject*)::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(method), false, false));
    _request = request;
    _responseData = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<byte[]>*/]));
    _responseLength = 0;
    _result = uArray::New(::TYPES[1/*byte[]*/], 0);
}

// public void Dispose() [instance] :31
void AndroidHttpRequest::Dispose1()
{
}

// public void EnableCache(bool enableCache) [instance] :36
void AndroidHttpRequest::EnableCache(bool enableCache)
{
    SetCaching(enableCache);
}

// public byte[] GetResponseContentByteArray() [instance] :81
uArray* AndroidHttpRequest::GetResponseContentByteArray()
{
    return _result;
}

// public string GetResponseContentString() [instance] :76
uString* AndroidHttpRequest::GetResponseContentString()
{
    return ::g::Android::Base::Types::String::JavaToUno2(GetResponseString());
}

// public string GetResponseHeader(string name) [instance] :65
uString* AndroidHttpRequest::GetResponseHeader1(uString* name)
{
    ::g::Android::Base::Wrappers::JWrapper* jName = ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(name), false, false);
    return ::g::Android::Base::Types::String::JavaToUno2(GetResponseHeader((uObject*)jName));
}

// public new string GetResponseHeaders() [instance] :71
uString* AndroidHttpRequest::GetResponseHeaders1()
{
    uObject* ret3;
    return ::g::Android::Base::Types::String::JavaToUno2((::g::Android::com::fuse::ExperimentalHttp::HttpRequest__GetResponseHeaders_fn(this, &ret3), ret3));
}

// public void SendAsync(byte[] data) [instance] :53
void AndroidHttpRequest::SendAsync1(uArray* data)
{
    ::g::Android::Base::Wrappers::JWrapper* tmp = ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::ByteBuffer::NewDirectByteBuffer(data), false, false);
    SendAsyncBuf((uObject*)tmp);
}

// public void SendAsync(string data) [instance] :59
void AndroidHttpRequest::SendAsync2(uString* data)
{
    ::g::Android::Base::Wrappers::JWrapper* jData = ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(data), false, false);
    SendAsyncStr((uObject*)jData);
}

// public void SetHeader(string name, string value) [instance] :41
void AndroidHttpRequest::SetHeader1(uString* name, uString* value)
{
    ::g::Android::Base::Wrappers::JWrapper* jName = ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(name), false, false);
    ::g::Android::Base::Wrappers::JWrapper* jValue = ::g::Android::Base::Wrappers::JWrapper::Wrap(::g::Android::Base::Types::String::UnoToJava1(value), false, false);
    SetHeader((uObject*)jName, (uObject*)jValue);
}

// internal void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :48
void AndroidHttpRequest::SetResponseType1(int responseType)
{
    SetResponseType(responseType);
}

// internal AndroidHttpRequest New(Uno.Net.Http.HttpMessageHandlerRequest request, string method, string url) [static] :20
AndroidHttpRequest* AndroidHttpRequest::New3(::g::Uno::Net::Http::HttpMessageHandlerRequest* request, uString* method, uString* url)
{
    AndroidHttpRequest* obj2 = (AndroidHttpRequest*)uNew(AndroidHttpRequest_typeof());
    obj2->ctor_5(request, method, url);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\implementation\$.uno
// ---------------------------------------------------------------------------------------------

// public abstract interface IHttpRequest :9
// {
uInterfaceType* IHttpRequest_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Net.Http.Implementation.IHttpRequest", 0, 0);
    return type;
}
// }

}}}}} // ::g::Uno::Net::Http::Implementation
