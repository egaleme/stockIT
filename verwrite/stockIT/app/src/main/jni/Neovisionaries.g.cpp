// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Java.Object.h>
#include <jni.h>
#include <Neovisionaries.WebSocketClient.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Neovisionaries{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\android\neovisionaries\$.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed extern class WebSocketClient :15
// {
static void WebSocketClient_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::WebSocket::IWebSocketClient_typeof(), offsetof(WebSocketClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebSocketClient_type, interface1));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Neovisionaries::WebSocketClient, _webSocket), 0);
}

WebSocketClient_type* WebSocketClient_typeof()
{
    static uSStrong<WebSocketClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(WebSocketClient_type);
    type = (WebSocketClient_type*)uClassType::New("Neovisionaries.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    type->fp_ctor_ = (void*)WebSocketClient__New1_fn;
    type->interface0.fp_Create = (void(*)(uObject*, uString*, uArray*, uDelegate*, uDelegate*, uDelegate*, uDelegate*, uDelegate*))WebSocketClient__Create_fn;
    type->interface0.fp_Send1 = (void(*)(uObject*, uString*))WebSocketClient__Send1_fn;
    type->interface0.fp_Send = (void(*)(uObject*, uArray*))WebSocketClient__Send_fn;
    type->interface0.fp_Connect = (void(*)(uObject*))WebSocketClient__Connect_fn;
    type->interface0.fp_Close = (void(*)(uObject*))WebSocketClient__Close_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebSocketClient__Dispose_fn;
    return type;
}

// public generated WebSocketClient() :15
void WebSocketClient__ctor__fn(WebSocketClient* __this)
{
    __this->ctor_();
}

// public void Close() :78
void WebSocketClient__Close_fn(WebSocketClient* __this)
{
    __this->Close();
}

// public void Connect() :71
void WebSocketClient__Connect_fn(WebSocketClient* __this)
{
    __this->Connect();
}

// public void Create(string url, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler) :20
void WebSocketClient__Create_fn(WebSocketClient* __this, uString* url, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler)
{
    __this->Create(url, protocols, open, close, error, receiveMessageHandler, receiveDataHandler);
}

// public void Dispose() :105
void WebSocketClient__Dispose_fn(WebSocketClient* __this)
{
    __this->Dispose();
}

// public generated WebSocketClient New() :15
void WebSocketClient__New1_fn(WebSocketClient** __retval)
{
    *__retval = WebSocketClient::New1();
}

// public void Send(byte[] data) :92
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data)
{
    __this->Send(data);
}

// public void Send(string data) :85
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data)
{
    __this->Send1(data);
}

// public generated WebSocketClient() [instance] :15
void WebSocketClient::ctor_()
{
}

// public void Close() [instance] :78
void WebSocketClient::Close()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Close289", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Connect() [instance] :71
void WebSocketClient::Connect()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Connect291", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Create(string url, string[] protocols, Uno.Action open, Uno.Action close, Uno.Action<string> error, Uno.Action<string> receiveMessageHandler, Uno.Action<byte[]> receiveDataHandler) [instance] :20
void WebSocketClient::Create(uString* url, uArray* protocols, uDelegate* open, uDelegate* close, uDelegate* error, uDelegate* receiveMessageHandler, uDelegate* receiveDataHandler)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create292", "(Lcom/uno/UnoObject;Ljava/lang/String;Lcom/uno/StringArray;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_String;Lcom/foreign/Uno/Action_ByteArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uString* _uurl=url;
        jstring _url = JniHelper::UnoToJavaString(_uurl);
        uArray* _uprotocols=protocols;
        jobject _protocols = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_uprotocols);
        uDelegate* _uopen=open;
        jobject _open = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uopen, "com.foreign.Uno.Action");
        uDelegate* _uclose=close;
        jobject _close = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uclose, "com.foreign.Uno.Action");
        uDelegate* _uerror=error;
        jobject _error = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uerror, "com.foreign.Uno.Action_String");
        uDelegate* _ureceiveMessageHandler=receiveMessageHandler;
        jobject _receiveMessageHandler = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureceiveMessageHandler, "com.foreign.Uno.Action_String");
        uDelegate* _ureceiveDataHandler=receiveDataHandler;
        jobject _receiveDataHandler = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ureceiveDataHandler, "com.foreign.Uno.Action_ByteArray");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_url,_protocols,_open,_close,_error,_receiveMessageHandler,_receiveDataHandler);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_url!=NULL) { U_JNIVAR->DeleteLocalRef(_url); }
        if (_protocols!=NULL) { U_JNIVAR->DeleteLocalRef(_protocols); }
        if (_open!=NULL) { U_JNIVAR->DeleteLocalRef(_open); }
        if (_close!=NULL) { U_JNIVAR->DeleteLocalRef(_close); }
        if (_error!=NULL) { U_JNIVAR->DeleteLocalRef(_error); }
        if (_receiveMessageHandler!=NULL) { U_JNIVAR->DeleteLocalRef(_receiveMessageHandler); }
        if (_receiveDataHandler!=NULL) { U_JNIVAR->DeleteLocalRef(_receiveDataHandler); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Dispose() [instance] :105
void WebSocketClient::Dispose()
{
    _webSocket = NULL;
}

// public void Send(byte[] data) [instance] :92
void WebSocketClient::Send(uArray* data)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Send293", "(Lcom/uno/UnoObject;Lcom/uno/ByteArray;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uArray* _udata=data;
        jobject _data = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box1(_udata);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_data);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_data!=NULL) { U_JNIVAR->DeleteLocalRef(_data); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Send(string data) [instance] :85
void WebSocketClient::Send1(uString* data)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Send1294", "(Lcom/uno/UnoObject;Ljava/lang/String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uString* _udata=data;
        jstring _data = JniHelper::UnoToJavaString(_udata);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_data);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_data!=NULL) { U_JNIVAR->DeleteLocalRef(_data); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated WebSocketClient New() [static] :15
WebSocketClient* WebSocketClient::New1()
{
    WebSocketClient* obj1 = (WebSocketClient*)uNew(WebSocketClient_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}} // ::g::Neovisionaries
