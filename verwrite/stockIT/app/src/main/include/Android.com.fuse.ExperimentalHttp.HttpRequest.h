// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Http\0.43.8\implementation\android\experimentalhttp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace com{namespace fuse{namespace ExperimentalHttp{struct HttpRequest;}}}}}

namespace g{
namespace Android{
namespace com{
namespace fuse{
namespace ExperimentalHttp{

// public abstract extern class HttpRequest :9
// {
struct HttpRequest_type : ::g::Android::Base::Wrappers::JWrapper_type
{
    void(*fp_OnAborted)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    void(*fp_OnDataReceived)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, uObject*, int*);
    void(*fp_OnDone)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    void(*fp_OnError)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, uObject*);
    void(*fp_OnHeadersReceived)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
    void(*fp_OnProgress)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*, int*, int*, bool*);
    void(*fp_OnTimeout)(::g::Android::com::fuse::ExperimentalHttp::HttpRequest*);
};

HttpRequest_type* HttpRequest_typeof();
void HttpRequest__ctor_4_fn(HttpRequest* __this, uObject* arg0, uObject* arg1, uObject* arg2);
void HttpRequest___Init1_fn();
void HttpRequest___InitProxy1_fn();
void HttpRequest___IsThisType1_fn(uObject* obj_, bool* __retval);
void HttpRequest__Abort_fn(HttpRequest* __this);
void HttpRequest__Abort_IMPL_44305_fn(bool* arg0_, jobject* arg1_);
void HttpRequest__GetResponseHeader_fn(HttpRequest* __this, uObject* arg0, uObject** __retval);
void HttpRequest__GetResponseHeader_IMPL_44307_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject** __retval);
void HttpRequest__GetResponseHeaders_fn(HttpRequest* __this, uObject** __retval);
void HttpRequest__GetResponseHeaders_IMPL_44308_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void HttpRequest__GetResponseStatus_fn(HttpRequest* __this, int* __retval);
void HttpRequest__GetResponseStatus_IMPL_44306_fn(bool* arg0_, jobject* arg1_, int* __retval);
void HttpRequest__GetResponseString_fn(HttpRequest* __this, uObject** __retval);
void HttpRequest__GetResponseString_IMPL_44297_fn(bool* arg0_, jobject* arg1_, uObject** __retval);
void HttpRequest__HttpRequest_IMPL_44284_fn(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_, jobject* __retval);
void HttpRequest__InstallCache_fn(uObject* arg0, int64_t* arg1, bool* __retval);
void HttpRequest__InstallCache_IMPL_44279_fn(uObject* arg0_, int64_t* arg1_, bool* __retval);
void HttpRequest__SendAsync_fn(HttpRequest* __this);
void HttpRequest__SendAsync_IMPL_44299_fn(bool* arg0_, jobject* arg1_);
void HttpRequest__SendAsyncBuf_fn(HttpRequest* __this, uObject* arg0);
void HttpRequest__SendAsyncBuf_IMPL_44300_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HttpRequest__SendAsyncStr_fn(HttpRequest* __this, uObject* arg0);
void HttpRequest__SendAsyncStr_IMPL_44301_fn(bool* arg0_, jobject* arg1_, uObject* arg2_);
void HttpRequest__SetCaching_fn(HttpRequest* __this, bool* arg0);
void HttpRequest__SetCaching_IMPL_44295_fn(bool* arg0_, jobject* arg1_, bool* arg2_);
void HttpRequest__SetHeader_fn(HttpRequest* __this, uObject* arg0, uObject* arg1);
void HttpRequest__SetHeader_IMPL_44293_fn(bool* arg0_, jobject* arg1_, uObject* arg2_, uObject* arg3_);
void HttpRequest__SetResponseType_fn(HttpRequest* __this, int* arg0);
void HttpRequest__SetResponseType_IMPL_44292_fn(bool* arg0_, jobject* arg1_, int* arg2_);
void HttpRequest__SetTimeout_fn(HttpRequest* __this, int* arg0);
void HttpRequest__SetTimeout_IMPL_44294_fn(bool* arg0_, jobject* arg1_, int* arg2_);

struct HttpRequest : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jclass _javaProxyClass1_;
    static jclass& _javaProxyClass1() { return _javaProxyClass1_; }
    static jmethodID Abort_44305_ID_;
    static jmethodID& Abort_44305_ID() { return Abort_44305_ID_; }
    static jmethodID GetResponseHeader_44307_ID_;
    static jmethodID& GetResponseHeader_44307_ID() { return GetResponseHeader_44307_ID_; }
    static jmethodID GetResponseHeaders_44308_ID_;
    static jmethodID& GetResponseHeaders_44308_ID() { return GetResponseHeaders_44308_ID_; }
    static jmethodID GetResponseStatus_44306_ID_;
    static jmethodID& GetResponseStatus_44306_ID() { return GetResponseStatus_44306_ID_; }
    static jmethodID GetResponseString_44297_ID_;
    static jmethodID& GetResponseString_44297_ID() { return GetResponseString_44297_ID_; }
    static jmethodID HttpRequest_44284_ID_c_;
    static jmethodID& HttpRequest_44284_ID_c() { return HttpRequest_44284_ID_c_; }
    static jmethodID HttpRequest_44284_ID_c_prox_;
    static jmethodID& HttpRequest_44284_ID_c_prox() { return HttpRequest_44284_ID_c_prox_; }
    static jmethodID InstallCache_44279_ID_;
    static jmethodID& InstallCache_44279_ID() { return InstallCache_44279_ID_; }
    static jmethodID SendAsync_44299_ID_;
    static jmethodID& SendAsync_44299_ID() { return SendAsync_44299_ID_; }
    static jmethodID SendAsyncBuf_44300_ID_;
    static jmethodID& SendAsyncBuf_44300_ID() { return SendAsyncBuf_44300_ID_; }
    static jmethodID SendAsyncStr_44301_ID_;
    static jmethodID& SendAsyncStr_44301_ID() { return SendAsyncStr_44301_ID_; }
    static jmethodID SetCaching_44295_ID_;
    static jmethodID& SetCaching_44295_ID() { return SetCaching_44295_ID_; }
    static jmethodID SetHeader_44293_ID_;
    static jmethodID& SetHeader_44293_ID() { return SetHeader_44293_ID_; }
    static jmethodID SetResponseType_44292_ID_;
    static jmethodID& SetResponseType_44292_ID() { return SetResponseType_44292_ID_; }
    static jmethodID SetTimeout_44294_ID_;
    static jmethodID& SetTimeout_44294_ID() { return SetTimeout_44294_ID_; }

    void ctor_4(uObject* arg0, uObject* arg1, uObject* arg2);
    void Abort();
    uObject* GetResponseHeader(uObject* arg0);
    uObject* GetResponseHeaders();
    int GetResponseStatus();
    uObject* GetResponseString();
    void OnAborted() { (((HttpRequest_type*)__type)->fp_OnAborted)(this); }
    void OnDataReceived(uObject* arg0, int arg1) { (((HttpRequest_type*)__type)->fp_OnDataReceived)(this, arg0, &arg1); }
    void OnDone() { (((HttpRequest_type*)__type)->fp_OnDone)(this); }
    void OnError(uObject* arg0) { (((HttpRequest_type*)__type)->fp_OnError)(this, arg0); }
    void OnHeadersReceived() { (((HttpRequest_type*)__type)->fp_OnHeadersReceived)(this); }
    void OnProgress(int arg0, int arg1, bool arg2) { (((HttpRequest_type*)__type)->fp_OnProgress)(this, &arg0, &arg1, &arg2); }
    void OnTimeout() { (((HttpRequest_type*)__type)->fp_OnTimeout)(this); }
    void SendAsync();
    void SendAsyncBuf(uObject* arg0);
    void SendAsyncStr(uObject* arg0);
    void SetCaching(bool arg0);
    void SetHeader(uObject* arg0, uObject* arg1);
    void SetResponseType(int arg0);
    void SetTimeout(int arg0);
    static void _Init1();
    static void _InitProxy1();
    static bool _IsThisType1(uObject* obj_);
    static void Abort_IMPL_44305(bool arg0_, jobject arg1_);
    static uObject* GetResponseHeader_IMPL_44307(bool arg0_, jobject arg1_, uObject* arg2_);
    static uObject* GetResponseHeaders_IMPL_44308(bool arg0_, jobject arg1_);
    static int GetResponseStatus_IMPL_44306(bool arg0_, jobject arg1_);
    static uObject* GetResponseString_IMPL_44297(bool arg0_, jobject arg1_);
    static jobject HttpRequest_IMPL_44284(uObject* arg0_, uObject* arg1_, uObject* arg2_, uObject* arg3_);
    static bool InstallCache(uObject* arg0, int64_t arg1);
    static bool InstallCache_IMPL_44279(uObject* arg0_, int64_t arg1_);
    static void SendAsync_IMPL_44299(bool arg0_, jobject arg1_);
    static void SendAsyncBuf_IMPL_44300(bool arg0_, jobject arg1_, uObject* arg2_);
    static void SendAsyncStr_IMPL_44301(bool arg0_, jobject arg1_, uObject* arg2_);
    static void SetCaching_IMPL_44295(bool arg0_, jobject arg1_, bool arg2_);
    static void SetHeader_IMPL_44293(bool arg0_, jobject arg1_, uObject* arg2_, uObject* arg3_);
    static void SetResponseType_IMPL_44292(bool arg0_, jobject arg1_, int arg2_);
    static void SetTimeout_IMPL_44294(bool arg0_, jobject arg1_, int arg2_);
};
// }

}}}}} // ::g::Android::com::fuse::ExperimentalHttp
