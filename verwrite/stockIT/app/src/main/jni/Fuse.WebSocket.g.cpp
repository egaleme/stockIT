// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.WebSocket.IWebSocketClient.h>
#include <Fuse.WebSocket.NativeFunctionModule.FunctionClosure.h>
#include <Fuse.WebSocket.NativeFunctionModule.h>
#include <Fuse.WebSocket.WebSocketClient.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <Fuse.WebSocket.WebSocketClientWrapper.h>
#include <Neovisionaries.WebSocketClient.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[11];
static uType* TYPES[14];

namespace g{
namespace Fuse{
namespace WebSocket{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// private sealed class NativeFunctionModule.FunctionClosure :131
// {
static void NativeFunctionModule__FunctionClosure_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(::g::Fuse::WebSocket::NativeFunctionModule__FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::WebSocket::NativeFunctionModule__FunctionClosure, _context), 0);
}

uType* NativeFunctionModule__FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunctionModule__FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.WebSocket.NativeFunctionModule.FunctionClosure", options);
    type->fp_build_ = NativeFunctionModule__FunctionClosure_build;
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :136
void NativeFunctionModule__FunctionClosure__ctor__fn(NativeFunctionModule__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :149
void NativeFunctionModule__FunctionClosure__get_Callback_fn(NativeFunctionModule__FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :142
void NativeFunctionModule__FunctionClosure__function_fn(NativeFunctionModule__FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :136
void NativeFunctionModule__FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, NativeFunctionModule__FunctionClosure** __retval)
{
    *__retval = NativeFunctionModule__FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :136
void NativeFunctionModule__FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :149
uDelegate* NativeFunctionModule__FunctionClosure::Callback()
{
    return uDelegate::New(::TYPES[0/*Fuse.Scripting.Callback*/], (void*)NativeFunctionModule__FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :142
uObject* NativeFunctionModule__FunctionClosure::function(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :136
NativeFunctionModule__FunctionClosure* NativeFunctionModule__FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    NativeFunctionModule__FunctionClosure* obj1 = (NativeFunctionModule__FunctionClosure*)uNew(NativeFunctionModule__FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal abstract interface IWebSocketClient :83
// {
uInterfaceType* IWebSocketClient_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.WebSocket.IWebSocketClient", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class NativeFunctionModule :111
// {
static void NativeFunctionModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("exports");
    ::TYPES[1] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeFunctionModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(NativeFunctionModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::WebSocket::NativeFunctionModule::_instance_, uFieldFlagsStatic);
}

NativeFunctionModule_type* NativeFunctionModule_typeof()
{
    static uSStrong<NativeFunctionModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeFunctionModule);
    options.TypeSize = sizeof(NativeFunctionModule_type);
    type = (NativeFunctionModule_type*)uClassType::New("Fuse.WebSocket.NativeFunctionModule", options);
    type->fp_build_ = NativeFunctionModule_build;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))NativeFunctionModule__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// protected NativeFunctionModule(string name) :115
void NativeFunctionModule__ctor_2_fn(NativeFunctionModule* __this, uString* name)
{
    __this->ctor_2(name);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :124
void NativeFunctionModule__Evaluate_fn(NativeFunctionModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uPtr(uPtr(result)->Object)->Item(::STRINGS[0/*"exports"*/], NativeFunctionModule__FunctionClosure::New1(c, uDelegate::New(::TYPES[1/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], __this, offsetof(NativeFunctionModule_type, fp_Create)))->Callback());
}

uSStrong<NativeFunctionModule*> NativeFunctionModule::_instance_;

// protected NativeFunctionModule(string name) [instance] :115
void NativeFunctionModule::ctor_2(uString* name)
{
    ctor_1();

    if (::g::Uno::String::IsNullOrEmpty(name))
        U_THROW(::g::Uno::ArgumentNullException::New6(name));

    if (NativeFunctionModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(NativeFunctionModule::_instance_ = this, name);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WebSocketClient :8
// {
static void WebSocketClient_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::WebSocket::IWebSocketClient_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, _client), 0,
        ::TYPES[3/*Uno.Action*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, Closed), 0,
        ::TYPES[5/*Uno.Action<byte[]>*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, DataReceived), 0,
        ::TYPES[4/*Uno.Action<string>*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, ErrorReceived), 0,
        ::TYPES[4/*Uno.Action<string>*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, MessageReceived), 0,
        ::TYPES[3/*Uno.Action*/], offsetof(::g::Fuse::WebSocket::WebSocketClient, Opened), 0);
}

uType* WebSocketClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(WebSocketClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.WebSocket.WebSocketClient", options);
    type->fp_build_ = WebSocketClient_build;
    return type;
}

// public WebSocketClient(string uri, string[] protocols) :48
void WebSocketClient__ctor__fn(WebSocketClient* __this, uString* uri, uArray* protocols)
{
    __this->ctor_(uri, protocols);
}

// public void Close() :77
void WebSocketClient__Close_fn(WebSocketClient* __this)
{
    __this->Close();
}

// public void Connect() :72
void WebSocketClient__Connect_fn(WebSocketClient* __this)
{
    __this->Connect();
}

// public WebSocketClient New(string uri, string[] protocols) :48
void WebSocketClient__New1_fn(uString* uri, uArray* protocols, WebSocketClient** __retval)
{
    *__retval = WebSocketClient::New1(uri, protocols);
}

// private void OnClose() :24
void WebSocketClient__OnClose_fn(WebSocketClient* __this)
{
    __this->OnClose();
}

// private void OnError(string error) :42
void WebSocketClient__OnError_fn(WebSocketClient* __this, uString* error)
{
    __this->OnError(error);
}

// private void OnOpen() :18
void WebSocketClient__OnOpen_fn(WebSocketClient* __this)
{
    __this->OnOpen();
}

// private void OnReceiveData(byte[] data) :36
void WebSocketClient__OnReceiveData_fn(WebSocketClient* __this, uArray* data)
{
    __this->OnReceiveData(data);
}

// private void OnReceiveMessage(string message) :30
void WebSocketClient__OnReceiveMessage_fn(WebSocketClient* __this, uString* message)
{
    __this->OnReceiveMessage(message);
}

// public void Send(byte[] data) :67
void WebSocketClient__Send_fn(WebSocketClient* __this, uArray* data)
{
    __this->Send(data);
}

// public void Send(string data) :62
void WebSocketClient__Send1_fn(WebSocketClient* __this, uString* data)
{
    __this->Send1(data);
}

// public WebSocketClient(string uri, string[] protocols) [instance] :48
void WebSocketClient::ctor_(uString* uri, uArray* protocols)
{
    _client = (uObject*)::g::Neovisionaries::WebSocketClient::New1();
    ::g::Fuse::WebSocket::IWebSocketClient::Create(uInterface(uPtr(_client), ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/]), uri, protocols, uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebSocketClient__OnOpen_fn, this), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebSocketClient__OnClose_fn, this), uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)WebSocketClient__OnError_fn, this), uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)WebSocketClient__OnReceiveMessage_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<byte[]>*/], (void*)WebSocketClient__OnReceiveData_fn, this));
}

// public void Close() [instance] :77
void WebSocketClient::Close()
{
    ::g::Fuse::WebSocket::IWebSocketClient::Close(uInterface(uPtr(_client), ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/]));
}

// public void Connect() [instance] :72
void WebSocketClient::Connect()
{
    ::g::Fuse::WebSocket::IWebSocketClient::Connect(uInterface(uPtr(_client), ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/]));
}

// private void OnClose() [instance] :24
void WebSocketClient::OnClose()
{
    if (::g::Uno::Delegate::op_Inequality(Closed, NULL))
        uPtr(Closed)->InvokeVoid();
}

// private void OnError(string error) [instance] :42
void WebSocketClient::OnError(uString* error)
{
    if (::g::Uno::Delegate::op_Inequality(ErrorReceived, NULL))
        uPtr(ErrorReceived)->InvokeVoid(error);
}

// private void OnOpen() [instance] :18
void WebSocketClient::OnOpen()
{
    if (::g::Uno::Delegate::op_Inequality(Opened, NULL))
        uPtr(Opened)->InvokeVoid();
}

// private void OnReceiveData(byte[] data) [instance] :36
void WebSocketClient::OnReceiveData(uArray* data)
{
    if (::g::Uno::Delegate::op_Inequality(DataReceived, NULL))
        uPtr(DataReceived)->InvokeVoid(data);
}

// private void OnReceiveMessage(string message) [instance] :30
void WebSocketClient::OnReceiveMessage(uString* message)
{
    if (::g::Uno::Delegate::op_Inequality(MessageReceived, NULL))
        uPtr(MessageReceived)->InvokeVoid(message);
}

// public void Send(byte[] data) [instance] :67
void WebSocketClient::Send(uArray* data)
{
    ::g::Fuse::WebSocket::IWebSocketClient::Send(uInterface(uPtr(_client), ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/]), data);
}

// public void Send(string data) [instance] :62
void WebSocketClient::Send1(uString* data)
{
    ::g::Fuse::WebSocket::IWebSocketClient::Send1(uInterface(uPtr(_client), ::TYPES[2/*Fuse.WebSocket.IWebSocketClient*/]), data);
}

// public WebSocketClient New(string uri, string[] protocols) [static] :48
WebSocketClient* WebSocketClient::New1(uString* uri, uArray* protocols)
{
    WebSocketClient* obj1 = (WebSocketClient*)uNew(WebSocketClient_typeof());
    obj1->ctor_(uri, protocols);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WebSocketClientModule :155
// {
static void WebSocketClientModule_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJS/WebSocketClient");
    ::TYPES[6] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::WebSocket::NativeFunctionModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::WebSocket::NativeFunctionModule_type, interface1));
    type->SetFields(4);
}

::g::Fuse::WebSocket::NativeFunctionModule_type* WebSocketClientModule_typeof()
{
    static uSStrong< ::g::Fuse::WebSocket::NativeFunctionModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::WebSocket::NativeFunctionModule_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSocketClientModule);
    options.TypeSize = sizeof(::g::Fuse::WebSocket::NativeFunctionModule_type);
    type = (::g::Fuse::WebSocket::NativeFunctionModule_type*)uClassType::New("Fuse.WebSocket.WebSocketClientModule", options);
    type->fp_build_ = WebSocketClientModule_build;
    type->fp_ctor_ = (void*)WebSocketClientModule__New2_fn;
    type->fp_Create = (void(*)(::g::Fuse::WebSocket::NativeFunctionModule*, ::g::Fuse::Scripting::Context*, uArray*, uObject**))WebSocketClientModule__Create_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public WebSocketClientModule() :157
void WebSocketClientModule__ctor_3_fn(WebSocketClientModule* __this)
{
    __this->ctor_3();
}

// protected override sealed object Create(Fuse.Scripting.Context context, object[] args) :166
void WebSocketClientModule__Create_fn(WebSocketClientModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    return *__retval = ::g::Fuse::WebSocket::WebSocketClientWrapper::New3(args)->EvaluateExports(context, NULL), void();
}

// public WebSocketClientModule New() :157
void WebSocketClientModule__New2_fn(WebSocketClientModule** __retval)
{
    *__retval = WebSocketClientModule::New2();
}

// public void OnReset(object o, Uno.EventArgs e) :162
void WebSocketClientModule__OnReset_fn(WebSocketClientModule* __this, uObject* o, ::g::Uno::EventArgs* e)
{
    __this->OnReset(o, e);
}

// public WebSocketClientModule() [instance] :157
void WebSocketClientModule::ctor_3()
{
    ctor_2(::STRINGS[1/*"FuseJS/WebS...*/]);
    add_Reset(uDelegate::New(::TYPES[6/*Uno.EventHandler*/], (void*)WebSocketClientModule__OnReset_fn, this));
}

// public void OnReset(object o, Uno.EventArgs e) [instance] :162
void WebSocketClientModule::OnReset(uObject* o, ::g::Uno::EventArgs* e)
{
}

// public WebSocketClientModule New() [static] :157
WebSocketClientModule* WebSocketClientModule::New2()
{
    WebSocketClientModule* obj1 = (WebSocketClientModule*)uNew(WebSocketClientModule_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class WebSocketClientWrapper :172
// {
static void WebSocketClientWrapper_build(uType* type)
{
    ::STRINGS[2] = uString::Const("open");
    ::STRINGS[3] = uString::Const("error");
    ::STRINGS[4] = uString::Const("close");
    ::STRINGS[5] = uString::Const("receive");
    ::STRINGS[6] = uString::Const("Could not get uri to service");
    ::STRINGS[7] = uString::Const("connect");
    ::STRINGS[8] = uString::Const("send");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("buffer");
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Uno::String_typeof();
    ::TYPES[9] = ::TYPES[8/*string*/]->Array();
    ::TYPES[10] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[8/*string*/], NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[12] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[13] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::g::Fuse::WebSocket::WebSocketClient_typeof(), offsetof(::g::Fuse::WebSocket::WebSocketClientWrapper, _client), 0);
}

::g::Fuse::Scripting::NativeModule_type* WebSocketClientWrapper_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebSocketClientWrapper);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.WebSocket.WebSocketClientWrapper", options);
    type->fp_build_ = WebSocketClientWrapper_build;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public WebSocketClientWrapper(object[] args) :176
void WebSocketClientWrapper__ctor_3_fn(WebSocketClientWrapper* __this, uArray* args)
{
    __this->ctor_3(args);
}

// private object Close(Fuse.Scripting.Context c, object[] args) :245
void WebSocketClientWrapper__Close_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Close(c, args);
}

// private void Closed() :261
void WebSocketClientWrapper__Closed_fn(WebSocketClientWrapper* __this)
{
    __this->Closed();
}

// private object Connect(Fuse.Scripting.Context c, object[] args) :211
void WebSocketClientWrapper__Connect_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Connect(c, args);
}

// private void DataReceived(byte[] data) :271
void WebSocketClientWrapper__DataReceived_fn(WebSocketClientWrapper* __this, uArray* data)
{
    __this->DataReceived(data);
}

// private void ErrorReceived(string message) :256
void WebSocketClientWrapper__ErrorReceived_fn(WebSocketClientWrapper* __this, uString* message)
{
    __this->ErrorReceived(message);
}

// private void MessageReceived(string message) :266
void WebSocketClientWrapper__MessageReceived_fn(WebSocketClientWrapper* __this, uString* message)
{
    __this->MessageReceived(message);
}

// public WebSocketClientWrapper New(object[] args) :176
void WebSocketClientWrapper__New3_fn(uArray* args, WebSocketClientWrapper** __retval)
{
    *__retval = WebSocketClientWrapper::New3(args);
}

// private void Opened() :251
void WebSocketClientWrapper__Opened_fn(WebSocketClientWrapper* __this)
{
    __this->Opened();
}

// private object Send(Fuse.Scripting.Context c, object[] args) :217
void WebSocketClientWrapper__Send_fn(WebSocketClientWrapper* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Send(c, args);
}

// public WebSocketClientWrapper(object[] args) [instance] :176
void WebSocketClientWrapper::ctor_3(uArray* args)
{
    ctor_2(false, uArray::Init<uObject*>(::TYPES[7/*object[]*/], 4, ::STRINGS[2/*"open"*/], ::STRINGS[3/*"error"*/], ::STRINGS[4/*"close"*/], ::STRINGS[5/*"receive"*/]));
    uString* uri = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[8/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(uri, NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Could not g...*/]));

    uArray* protocols = uArray::New(::TYPES[9/*string[]*/], 0);

    if (args->Length() > 1)
    {
        uObject* p = uPtr(args)->Strong<uObject*>(1);

        if (uIs(p, ::TYPES[8/*string*/]))
            protocols = uArray::Init<uString*>(::TYPES[9/*string[]*/], 1, uAs<uString*>(p, ::TYPES[8/*string*/]));
        else if (uIs(p, ::TYPES[10/*Fuse.Scripting.Array*/]))
        {
            ::g::Fuse::Scripting::Array* arr = uAs< ::g::Fuse::Scripting::Array*>(p, ::TYPES[10/*Fuse.Scripting.Array*/]);
            protocols = uArray::New(::TYPES[9/*string[]*/], uPtr(arr)->Length());

            for (int i = 0; i < arr->Length(); i++)
                uPtr(protocols)->Strong<uString*>(i) = uAs<uString*>(uPtr(arr)->Item(i), ::TYPES[8/*string*/]);
        }
    }

    _client = ::g::Fuse::WebSocket::WebSocketClient::New1(uri, protocols);
    uPtr(_client)->MessageReceived = uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)WebSocketClientWrapper__MessageReceived_fn, this);
    uPtr(_client)->DataReceived = uDelegate::New(::TYPES[5/*Uno.Action<byte[]>*/], (void*)WebSocketClientWrapper__DataReceived_fn, this);
    uPtr(_client)->Opened = uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebSocketClientWrapper__Opened_fn, this);
    uPtr(_client)->ErrorReceived = uDelegate::New(::TYPES[4/*Uno.Action<string>*/], (void*)WebSocketClientWrapper__ErrorReceived_fn, this);
    uPtr(_client)->Closed = uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebSocketClientWrapper__Closed_fn, this);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"connect"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.NativeCallback*/], (void*)WebSocketClientWrapper__Connect_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"send"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.NativeCallback*/], (void*)WebSocketClientWrapper__Send_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"close"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.NativeCallback*/], (void*)WebSocketClientWrapper__Close_fn, this)));
}

// private object Close(Fuse.Scripting.Context c, object[] args) [instance] :245
uObject* WebSocketClientWrapper::Close(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_client)->Close();
    return NULL;
}

// private void Closed() [instance] :261
void WebSocketClientWrapper::Closed()
{
    Emit(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, ::STRINGS[4/*"close"*/], ::STRINGS[9/*""*/]));
}

// private object Connect(Fuse.Scripting.Context c, object[] args) [instance] :211
uObject* WebSocketClientWrapper::Connect(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uPtr(_client)->Connect();
    return NULL;
}

// private void DataReceived(byte[] data) [instance] :271
void WebSocketClientWrapper::DataReceived(uArray* data)
{
    Emit(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, ::STRINGS[5/*"receive"*/], data));
}

// private void ErrorReceived(string message) [instance] :256
void WebSocketClientWrapper::ErrorReceived(uString* message)
{
    Emit(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, ::STRINGS[3/*"error"*/], message));
}

// private void MessageReceived(string message) [instance] :266
void WebSocketClientWrapper::MessageReceived(uString* message)
{
    Emit(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, ::STRINGS[5/*"receive"*/], message));
}

// private void Opened() [instance] :251
void WebSocketClientWrapper::Opened()
{
    Emit(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, ::STRINGS[2/*"open"*/], ::STRINGS[9/*""*/]));
}

// private object Send(Fuse.Scripting.Context c, object[] args) [instance] :217
uObject* WebSocketClientWrapper::Send(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if ((args != NULL) && (uPtr(args)->Length() > 0))
    {
        uObject* a = uPtr(args)->Strong<uObject*>(0);

        if (uIs(a, ::TYPES[8/*string*/]))
            uPtr(_client)->Send1(uAs<uString*>(a, ::TYPES[8/*string*/]));
        else if (uIs(a, ::TYPES[12/*byte[]*/]))
        {
            uArray* b = uAs<uArray*>(a, ::TYPES[12/*byte[]*/]);
            uPtr(_client)->Send(b);
        }
        else
        {
            ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(a, ::TYPES[13/*Fuse.Scripting.Object*/]);

            if ((obj != NULL) && (uPtr(obj)->Item(::STRINGS[10/*"buffer"*/]) != NULL))
            {
                uArray* b1 = uAs<uArray*>(uPtr(obj)->Item(::STRINGS[10/*"buffer"*/]), ::TYPES[12/*byte[]*/]);
                uPtr(_client)->Send(b1);
            }
        }
    }

    return NULL;
}

// public WebSocketClientWrapper New(object[] args) [static] :176
WebSocketClientWrapper* WebSocketClientWrapper::New3(uArray* args)
{
    WebSocketClientWrapper* obj1 = (WebSocketClientWrapper*)uNew(WebSocketClientWrapper_typeof());
    obj1->ctor_3(args);
    return obj1;
}
// }

}}} // ::g::Fuse::WebSocket
