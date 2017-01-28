// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseReactive_bundle.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.FuseJS.Http.FunctionClosure.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h>
#include <Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.HttpHeaders.h>
#include <Fuse.Reactive.FuseJS.TimerManager.h>
#include <Fuse.Reactive.FuseJS.TimerManager.Timer.h>
#include <Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.EventEmitterModule.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Value.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.StringReader.h>
#include <Uno.IO.TextReader.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpMessageHandler.h>
#include <Uno.Net.Http.HttpMessageHandlerRequest.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStatusReasonPhrase.h>
#include <Uno.Net.Http.InvalidResponseTypeException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[42];
static uType* TYPES[36];

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class Builtins :9
// {
static void Builtins_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Timer");
    ::STRINGS[1] = uString::Const("fuse-builtins: setTimeout");
    ::STRINGS[2] = uString::Const("Could not load setTimout function to context.");
    ::STRINGS[3] = uString::Const("fuse-builtins: es6-promise");
    ::STRINGS[4] = uString::Const("ES6Promise.polyfill();");
    ::STRINGS[5] = uString::Const("FuseJS/Observable");
    ::STRINGS[6] = uString::Const("Polyfills/Window");
    ::TYPES[0] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::FuseJS::TimerModule_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::Module_typeof();
    type->SetFields(0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Reactive::FuseJS::Builtins, EventEmitter), 0,
        ::TYPES[2/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Reactive::FuseJS::Builtins, Observable), 0,
        ::TYPES[1/*Fuse.Reactive.FuseJS.TimerModule*/], (uintptr_t)&::g::Fuse::Reactive::FuseJS::Builtins::_timer_, uFieldFlagsStatic);
}

uType* Builtins_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Builtins);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Builtins", options);
    type->fp_build_ = Builtins_build;
    return type;
}

// internal Builtins(Fuse.Scripting.Context context) :16
void Builtins__ctor__fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private static bool IsModule(object module) :53
void Builtins__IsModule_fn(uObject* module, bool* __retval)
{
    *__retval = Builtins::IsModule(module);
}

// internal Builtins New(Fuse.Scripting.Context context) :16
void Builtins__New1_fn(::g::Fuse::Scripting::Context* context, Builtins** __retval)
{
    *__retval = Builtins::New1(context);
}

// internal void UpdateModules(Fuse.Scripting.Context context) :68
void Builtins__UpdateModules_fn(Builtins* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->UpdateModules(context);
}

uSStrong< ::g::Fuse::Reactive::FuseJS::TimerModule*> Builtins::_timer_;

// internal Builtins(Fuse.Scripting.Context context) [instance] :16
void Builtins::ctor_(::g::Fuse::Scripting::Context* context)
{
    ::g::Fuse::Reactive::DebugLog::Init(context);
    ::g::Fuse::Reactive::Console::Init(context);
    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[0/*"FuseJS/Timer"*/], uDelegate::New(::TYPES[0/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        Builtins::_timer_ = uCast< ::g::Fuse::Reactive::FuseJS::TimerModule*>(res, ::TYPES[1/*Fuse.Reactive.FuseJS.TimerModule*/]);
    else
        Builtins::_timer_ = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();

    ::g::Fuse::Scripting::Function* setTimout = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::STRINGS[1/*"fuse-builti...*/], uPtr(::g::FuseReactive_bundle::setTimeout6c0feef4())->ReadAllText()), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if ((setTimout != NULL) && (Builtins::_timer_ != NULL))
        uPtr(setTimout)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 2, (uObject*)uPtr(Builtins::_timer_)->EvaluateExports(context, ::STRINGS[0/*"FuseJS/Timer"*/]), (::g::Fuse::Scripting::Object*)uPtr(context)->GlobalObject()));
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Could not l...*/]));

    context->Evaluate(::STRINGS[3/*"fuse-builti...*/], uPtr(::g::FuseReactive_bundle::es6promisemin0d5c98cc())->ReadAllText());
    context->Evaluate(::STRINGS[3/*"fuse-builti...*/], ::STRINGS[4/*"ES6Promise....*/]);
    Observable = uCast< ::g::Fuse::Scripting::Function*>(::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(::g::FuseReactive_bundle::Observablea47aebb2()))->EvaluateExports(context, ::STRINGS[5/*"FuseJS/Obse...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);
    EventEmitter = ::g::Fuse::Scripting::EventEmitterModule::GetConstructor(context);
    res = NULL;

    if (::g::Uno::UX::Resource::TryFindGlobal(::STRINGS[6/*"Polyfills/W...*/], uDelegate::New(::TYPES[0/*Uno.Predicate<object>*/], (void*)Builtins__IsModule_fn), &res))
        uPtr(uCast< ::g::Fuse::Scripting::Module*>(res, ::TYPES[4/*Fuse.Scripting.Module*/]))->Evaluate1(context, ::STRINGS[6/*"Polyfills/W...*/]);
}

// internal void UpdateModules(Fuse.Scripting.Context context) [instance] :68
void Builtins::UpdateModules(::g::Fuse::Scripting::Context* context)
{
    if (Builtins::_timer_ != NULL)
        uPtr(Builtins::_timer_)->UpdateModule();
}

// private static bool IsModule(object module) [static] :53
bool Builtins::IsModule(uObject* module)
{
    return uIs(module, ::TYPES[4/*Fuse.Scripting.Module*/]);
}

// internal Builtins New(Fuse.Scripting.Context context) [static] :16
Builtins* Builtins::New1(::g::Fuse::Scripting::Context* context)
{
    Builtins* obj1 = (Builtins*)uNew(Builtins_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TimerModule.CallbackClosure :786
// {
static void TimerModule__CallbackClosure_build(uType* type)
{
    ::STRINGS[7] = uString::Const("func");
    ::STRINGS[8] = uString::Const("args");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _context), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure, _func), 0);
}

uType* TimerModule__CallbackClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TimerModule__CallbackClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerModule.CallbackClosure", options);
    type->fp_build_ = TimerModule__CallbackClosure_build;
    return type;
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :792
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    __this->ctor_(context, func, args);
}

// public void Callback() :802
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this)
{
    __this->Callback();
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) :792
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval)
{
    *__retval = TimerModule__CallbackClosure::New1(context, func, args);
}

// public CallbackClosure(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [instance] :792
void TimerModule__CallbackClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    if (func == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"func"*/]));

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"args"*/]));

    _context = context;
    _func = func;
    _args = args;
}

// public void Callback() [instance] :802
void TimerModule__CallbackClosure::Callback()
{
    uPtr(_func)->Call(_args);
}

// public CallbackClosure New(Fuse.Scripting.Context context, Fuse.Scripting.Function func, object[] args) [static] :792
TimerModule__CallbackClosure* TimerModule__CallbackClosure::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args)
{
    TimerModule__CallbackClosure* obj1 = (TimerModule__CallbackClosure*)uNew(TimerModule__CallbackClosure_typeof());
    obj1->ctor_(context, func, args);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// private sealed class Http.FunctionClosure :246
// {
static void Http__FunctionClosure_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(::g::Fuse::Reactive::FuseJS::Http__FunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FunctionClosure, _context), 0);
}

uType* Http__FunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Http__FunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FunctionClosure", options);
    type->fp_build_ = Http__FunctionClosure_build;
    return type;
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :251
void Http__FunctionClosure__ctor__fn(Http__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    __this->ctor_(context, callback);
}

// public Fuse.Scripting.Callback get_Callback() :264
void Http__FunctionClosure__get_Callback_fn(Http__FunctionClosure* __this, uDelegate** __retval)
{
    *__retval = __this->Callback();
}

// private object function(object[] args) :257
void Http__FunctionClosure__function_fn(Http__FunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->function(args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) :251
void Http__FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, Http__FunctionClosure** __retval)
{
    *__retval = Http__FunctionClosure::New1(context, callback);
}

// public FunctionClosure(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [instance] :251
void Http__FunctionClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    _context = context;
    _callback = callback;
}

// public Fuse.Scripting.Callback get_Callback() [instance] :264
uDelegate* Http__FunctionClosure::Callback()
{
    return uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FunctionClosure__function_fn, this);
}

// private object function(object[] args) [instance] :257
uObject* Http__FunctionClosure::function(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public FunctionClosure New(Fuse.Scripting.Context context, Uno.Func<Fuse.Scripting.Context, object[], object> callback) [static] :251
Http__FunctionClosure* Http__FunctionClosure::New1(::g::Fuse::Scripting::Context* context, uDelegate* callback)
{
    Http__FunctionClosure* obj1 = (Http__FunctionClosure*)uNew(Http__FunctionClosure_typeof());
    obj1->ctor_(context, callback);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// private sealed class Http.FuseJSHttpClient :268
// {
static void Http__FuseJSHttpClient_build(uType* type)
{
    ::STRINGS[9] = uString::Const("createRequest");
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[6] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _client), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient, _Obj), 0);
}

uType* Http__FuseJSHttpClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Http__FuseJSHttpClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpClient", options);
    type->fp_build_ = Http__FuseJSHttpClient_build;
    return type;
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) :275
void Http__FuseJSHttpClient__ctor__fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(context);
}

// private object CreateRequest(object[] args) :284
void Http__FuseJSHttpClient__CreateRequest_fn(Http__FuseJSHttpClient* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateRequest(args);
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) :275
void Http__FuseJSHttpClient__New1_fn(::g::Fuse::Scripting::Context* context, Http__FuseJSHttpClient** __retval)
{
    *__retval = Http__FuseJSHttpClient::New1(context);
}

// public generated Fuse.Scripting.Object get_Obj() :270
void Http__FuseJSHttpClient__get_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :270
void Http__FuseJSHttpClient__set_Obj_fn(Http__FuseJSHttpClient* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// public FuseJSHttpClient(Fuse.Scripting.Context context) [instance] :275
void Http__FuseJSHttpClient::ctor_(::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _client = ::g::Uno::Net::Http::HttpMessageHandler::New1();
    Obj(uPtr(context)->NewObject());
    uPtr(Obj())->Item(::STRINGS[9/*"createRequest"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpClient__CreateRequest_fn, this));
}

// private object CreateRequest(object[] args) [instance] :284
uObject* Http__FuseJSHttpClient::CreateRequest(uArray* args)
{
    uString* method = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[6/*string*/]);
    uString* url = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[6/*string*/]);
    return ::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest::New1(_context, uPtr(_client)->CreateRequest1(method, url, uPtr(_context)->Dispatcher()))->Obj();
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :270
::g::Fuse::Scripting::Object* Http__FuseJSHttpClient::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :270
void Http__FuseJSHttpClient::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// public FuseJSHttpClient New(Fuse.Scripting.Context context) [static] :275
Http__FuseJSHttpClient* Http__FuseJSHttpClient::New1(::g::Fuse::Scripting::Context* context)
{
    Http__FuseJSHttpClient* obj1 = (Http__FuseJSHttpClient*)uNew(Http__FuseJSHttpClient_typeof());
    obj1->ctor_(context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// private sealed class Http.FuseJSHttpRequest :293
// {
static void Http__FuseJSHttpRequest_build(uType* type)
{
    ::STRINGS[10] = uString::Const("enableCache");
    ::STRINGS[11] = uString::Const("setTimeout");
    ::STRINGS[12] = uString::Const("setResponseType");
    ::STRINGS[13] = uString::Const("getResponseType");
    ::STRINGS[14] = uString::Const("sendAsync");
    ::STRINGS[15] = uString::Const("abort");
    ::STRINGS[16] = uString::Const("setHeader");
    ::STRINGS[17] = uString::Const("getResponseHeader");
    ::STRINGS[18] = uString::Const("getResponseHeaders");
    ::STRINGS[19] = uString::Const("getState");
    ::STRINGS[20] = uString::Const("getResponseStatus");
    ::STRINGS[21] = uString::Const("getResponseReasonPhrase");
    ::STRINGS[22] = uString::Const("getResponseContentString");
    ::STRINGS[23] = uString::Const("getResponseContentByteArray");
    ::STRINGS[24] = uString::Const("This operation is illegal after request has finished");
    ::STRINGS[25] = uString::Const("Unable to get header.");
    ::STRINGS[26] = uString::Const("onabort");
    ::STRINGS[27] = uString::Const("ondone");
    ::STRINGS[28] = uString::Const("onerror");
    ::STRINGS[29] = uString::Const("onprogress");
    ::STRINGS[30] = uString::Const("onstatechanged");
    ::STRINGS[31] = uString::Const("ontimeout");
    ::STRINGS[32] = uString::Const("buffer");
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(0/*FromAction<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Action_typeof();
    ::TYPES[13] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(1/*FromAction<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(3/*FromFunc<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2/*FromFunc<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(2/*FromFunc<int>*/, ::g::Uno::Int_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Exception_typeof();
    ::TYPES[22] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[6] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[24] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _cachedResponseContent), 0,
        ::TYPES[6/*string*/], offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _cachedResponseHeaders), 0,
        ::TYPES[24/*int*/], offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _cachedResponseStatus), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _cachedResponseType), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _finalState), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _req), 0,
        ::TYPES[23/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest, _Obj), 0);
}

uType* Http__FuseJSHttpRequest_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Http__FuseJSHttpRequest);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest", options);
    type->fp_build_ = Http__FuseJSHttpRequest_build;
    return type;
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :306
void Http__FuseJSHttpRequest__ctor__fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    __this->ctor_(context, req);
}

// private void Abort() :369
void Http__FuseJSHttpRequest__Abort_fn(Http__FuseJSHttpRequest* __this)
{
    __this->Abort();
}

// private void CheckIsAttached() :395
void Http__FuseJSHttpRequest__CheckIsAttached_fn(Http__FuseJSHttpRequest* __this)
{
    __this->CheckIsAttached();
}

// private void DetachRequest() :335
void Http__FuseJSHttpRequest__DetachRequest_fn(Http__FuseJSHttpRequest* __this)
{
    __this->DetachRequest();
}

// private object EnableCache(object[] args) :535
void Http__FuseJSHttpRequest__EnableCache_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->EnableCache(args);
}

// private object GetResponseContentByteArray(object[] args) :441
void Http__FuseJSHttpRequest__GetResponseContentByteArray_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseContentByteArray(args);
}

// private string GetResponseContentString(object[] args) :426
void Http__FuseJSHttpRequest__GetResponseContentString_fn(Http__FuseJSHttpRequest* __this, uArray* args, uString** __retval)
{
    *__retval = __this->GetResponseContentString(args);
}

// private string GetResponseHeader(string key) :411
void Http__FuseJSHttpRequest__GetResponseHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetResponseHeader(key);
}

// private string GetResponseHeaders() :401
void Http__FuseJSHttpRequest__GetResponseHeaders_fn(Http__FuseJSHttpRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// private object GetResponseReasonPhrase(object[] args) :562
void Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseReasonPhrase(args);
}

// private int GetResponseStatus() :552
void Http__FuseJSHttpRequest__GetResponseStatus_fn(Http__FuseJSHttpRequest* __this, int* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// private object GetResponseType(object[] args) :580
void Http__FuseJSHttpRequest__GetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetResponseType(args);
}

// private object GetState(object[] args) :547
void Http__FuseJSHttpRequest__GetState_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetState(args);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) :306
void Http__FuseJSHttpRequest__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req, Http__FuseJSHttpRequest** __retval)
{
    *__retval = Http__FuseJSHttpRequest::New1(context, req);
}

// public generated Fuse.Scripting.Object get_Obj() :295
void Http__FuseJSHttpRequest__get_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Obj();
}

// private generated void set_Obj(Fuse.Scripting.Object value) :295
void Http__FuseJSHttpRequest__set_Obj_fn(Http__FuseJSHttpRequest* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->Obj(value);
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) :456
void Http__FuseJSHttpRequest__OnAbort_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnAbort(res);
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) :487
void Http__FuseJSHttpRequest__OnDone_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnDone(res);
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) :464
void Http__FuseJSHttpRequest__OnError_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    __this->OnError(res, error);
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) :495
void Http__FuseJSHttpRequest__OnProgress_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int* current, int* total, bool* hastotal)
{
    __this->OnProgress(res, *current, *total, *hastotal);
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) :480
void Http__FuseJSHttpRequest__OnStateChanged_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnStateChanged(res);
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) :472
void Http__FuseJSHttpRequest__OnTimeout_fn(Http__FuseJSHttpRequest* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    __this->OnTimeout(res);
}

// private object SendAsync(object[] args) :502
void Http__FuseJSHttpRequest__SendAsync_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SendAsync(args);
}

// private void SetHeader(string key, string value) :383
void Http__FuseJSHttpRequest__SetHeader_fn(Http__FuseJSHttpRequest* __this, uString* key, uString* value)
{
    __this->SetHeader(key, value);
}

// private object SetResponseType(object[] args) :567
void Http__FuseJSHttpRequest__SetResponseType_fn(Http__FuseJSHttpRequest* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetResponseType(args);
}

// private void SetTimeout(int timeout) :389
void Http__FuseJSHttpRequest__SetTimeout_fn(Http__FuseJSHttpRequest* __this, int* timeout)
{
    __this->SetTimeout(*timeout);
}

// public FuseJSHttpRequest(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [instance] :306
void Http__FuseJSHttpRequest::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    _req = req;
    Obj(uPtr(context)->NewObject());
    uPtr(_req)->add_Aborted(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAbort_fn, this));
    uPtr(_req)->add_Error(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->add_Timeout(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->add_Done(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->add_StateChanged(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->add_Progress(uDelegate::New(::TYPES[9/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(Obj())->Item(::STRINGS[10/*"enableCache"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__EnableCache_fn, this));
    uPtr(Obj())->Item(::STRINGS[11/*"setTimeout"*/], ::g::Fuse::Scripting::JSCallback::FromAction1(::TYPES[10/*Fuse.Scripting.JSCallback.FromAction<int>*/], uDelegate::New(::TYPES[11/*Uno.Action<int>*/], (void*)Http__FuseJSHttpRequest__SetTimeout_fn, this)));
    uPtr(Obj())->Item(::STRINGS[12/*"setResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SetResponseType_fn, this));
    uPtr(Obj())->Item(::STRINGS[13/*"getResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseType_fn, this));
    uPtr(Obj())->Item(::STRINGS[14/*"sendAsync"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__SendAsync_fn, this));
    uPtr(Obj())->Item(::STRINGS[15/*"abort"*/], ::g::Fuse::Scripting::JSCallback::FromAction(uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)Http__FuseJSHttpRequest__Abort_fn, this)));
    uPtr(Obj())->Item(::STRINGS[16/*"setHeader"*/], ::g::Fuse::Scripting::JSCallback::FromAction2(::TYPES[13/*Fuse.Scripting.JSCallback.FromAction<string, string>*/], uDelegate::New(::TYPES[14/*Uno.Action<string, string>*/], (void*)Http__FuseJSHttpRequest__SetHeader_fn, this)));
    uPtr(Obj())->Item(::STRINGS[17/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc1(::TYPES[15/*Fuse.Scripting.JSCallback.FromFunc<string, string>*/], uDelegate::New(::TYPES[16/*Uno.Func<string, string>*/], (void*)Http__FuseJSHttpRequest__GetResponseHeader_fn, this)));
    uPtr(Obj())->Item(::STRINGS[18/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[17/*Fuse.Scripting.JSCallback.FromFunc<string>*/], uDelegate::New(::TYPES[18/*Uno.Func<string>*/], (void*)Http__FuseJSHttpRequest__GetResponseHeaders_fn, this)));
    uPtr(Obj())->Item(::STRINGS[19/*"getState"*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetState_fn, this));
    uPtr(Obj())->Item(::STRINGS[20/*"getResponse...*/], ::g::Fuse::Scripting::JSCallback::FromFunc(::TYPES[19/*Fuse.Scripting.JSCallback.FromFunc<int>*/], uDelegate::New(::TYPES[20/*Uno.Func<int>*/], (void*)Http__FuseJSHttpRequest__GetResponseStatus_fn, this)));
    uPtr(Obj())->Item(::STRINGS[21/*"getResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseReasonPhrase_fn, this));
    uPtr(Obj())->Item(::STRINGS[22/*"getResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseContentString_fn, this));
    uPtr(Obj())->Item(::STRINGS[23/*"getResponse...*/], uDelegate::New(::TYPES[5/*Fuse.Scripting.Callback*/], (void*)Http__FuseJSHttpRequest__GetResponseContentByteArray_fn, this));
}

// private void Abort() [instance] :369
void Http__FuseJSHttpRequest::Abort()
{
    if (_req == NULL)
        return;

    if (uPtr(_req)->State() < 5)
    {
        try
        {
            uPtr(_req)->Abort();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* exception_ = __t.Exception;
        }
    }
}

// private void CheckIsAttached() [instance] :395
void Http__FuseJSHttpRequest::CheckIsAttached()
{
    if (_req == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[24/*"This operat...*/]));
}

// private void DetachRequest() [instance] :335
void Http__FuseJSHttpRequest::DetachRequest()
{
    _finalState = uPtr(_req)->State();
    _cachedResponseType = uPtr(_req)->HttpResponseType();

    if (_finalState == 5)
    {
        GetResponseHeaders();
        GetResponseStatus();

        switch (uPtr(_req)->HttpResponseType())
        {
            case 1:
            {
                GetResponseContentByteArray(NULL);
                break;
            }
            case 0:
            {
                GetResponseContentString(NULL);
                break;
            }
        }
    }

    uPtr(_req)->remove_Aborted(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnAbort_fn, this));
    uPtr(_req)->remove_Error(uDelegate::New(::TYPES[8/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)Http__FuseJSHttpRequest__OnError_fn, this));
    uPtr(_req)->remove_Timeout(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnTimeout_fn, this));
    uPtr(_req)->remove_Done(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnDone_fn, this));
    uPtr(_req)->remove_StateChanged(uDelegate::New(::TYPES[7/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)Http__FuseJSHttpRequest__OnStateChanged_fn, this));
    uPtr(_req)->remove_Progress(uDelegate::New(::TYPES[9/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>*/], (void*)Http__FuseJSHttpRequest__OnProgress_fn, this));
    uPtr(_req)->Dispose();
    _req = NULL;
    Obj(NULL);
}

// private object EnableCache(object[] args) [instance] :535
uObject* Http__FuseJSHttpRequest::EnableCache(uArray* args)
{
    if (uPtr(args)->Length() > 0)
        uPtr(_req)->EnableCache(uUnbox<bool>(::g::Uno::Bool_typeof(), uPtr(args)->Strong<uObject*>(0)));

    return NULL;
}

// private object GetResponseContentByteArray(object[] args) [instance] :441
uObject* Http__FuseJSHttpRequest::GetResponseContentByteArray(uArray* args)
{
    if (_cachedResponseContent == NULL)
    {
        CheckIsAttached();
        _cachedResponseContent = uPtr(_req)->GetResponseContentByteArray();
    }

    uArray* contentAsBytes = uAs<uArray*>(_cachedResponseContent, ::TYPES[22/*byte[]*/]);

    if (contentAsBytes == NULL)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    return contentAsBytes;
}

// private string GetResponseContentString(object[] args) [instance] :426
uString* Http__FuseJSHttpRequest::GetResponseContentString(uArray* args)
{
    if (_cachedResponseContent == NULL)
    {
        CheckIsAttached();
        _cachedResponseContent = uPtr(_req)->GetResponseContentString();
    }

    uString* contentAsString = uAs<uString*>(_cachedResponseContent, ::TYPES[6/*string*/]);

    if (::g::Uno::String::op_Equality(contentAsString, NULL))
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    return contentAsString;
}

// private string GetResponseHeader(string key) [instance] :411
uString* Http__FuseJSHttpRequest::GetResponseHeader(uString* key)
{
    if (_req != NULL)
        return uPtr(_req)->GetResponseHeader(key);

    if (::g::Uno::String::op_Equality(_cachedResponseHeaders, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[25/*"Unable to g...*/]));

    return ::g::Fuse::Reactive::FuseJS::HttpHeaders::New1(_cachedResponseHeaders)->GetValue(key);
}

// private string GetResponseHeaders() [instance] :401
uString* Http__FuseJSHttpRequest::GetResponseHeaders()
{
    if (::g::Uno::String::op_Equality(_cachedResponseHeaders, NULL))
    {
        CheckIsAttached();
        _cachedResponseHeaders = uPtr(_req)->GetResponseHeaders();
    }

    return _cachedResponseHeaders;
}

// private object GetResponseReasonPhrase(object[] args) [instance] :562
uObject* Http__FuseJSHttpRequest::GetResponseReasonPhrase(uArray* args)
{
    return ::g::Uno::Net::Http::HttpStatusReasonPhrase::GetFromStatusCode(GetResponseStatus());
}

// private int GetResponseStatus() [instance] :552
int Http__FuseJSHttpRequest::GetResponseStatus()
{
    if (_cachedResponseStatus == 0)
    {
        CheckIsAttached();
        _cachedResponseStatus = uPtr(_req)->GetResponseStatus();
    }

    return _cachedResponseStatus;
}

// private object GetResponseType(object[] args) [instance] :580
uObject* Http__FuseJSHttpRequest::GetResponseType(uArray* args)
{
    if (_req == NULL)
        return uBox<int>(::TYPES[24/*int*/], _cachedResponseType);

    return uBox<int>(::TYPES[24/*int*/], uPtr(_req)->HttpResponseType());
}

// private object GetState(object[] args) [instance] :547
uObject* Http__FuseJSHttpRequest::GetState(uArray* args)
{
    return uBox<int>(::TYPES[24/*int*/], (_req != NULL) ? uPtr(_req)->State() : _finalState);
}

// public generated Fuse.Scripting.Object get_Obj() [instance] :295
::g::Fuse::Scripting::Object* Http__FuseJSHttpRequest::Obj()
{
    return _Obj;
}

// private generated void set_Obj(Fuse.Scripting.Object value) [instance] :295
void Http__FuseJSHttpRequest::Obj(::g::Fuse::Scripting::Object* value)
{
    _Obj = value;
}

// private void OnAbort(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :456
void Http__FuseJSHttpRequest::OnAbort(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[26/*"onabort"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private void OnDone(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :487
void Http__FuseJSHttpRequest::OnDone(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[27/*"ondone"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private void OnError(Uno.Net.Http.HttpMessageHandlerRequest res, string error) [instance] :464
void Http__FuseJSHttpRequest::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, uString* error)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[28/*"onerror"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, error));

    DetachRequest();
}

// private void OnProgress(Uno.Net.Http.HttpMessageHandlerRequest res, int current, int total, bool hastotal) [instance] :495
void Http__FuseJSHttpRequest::OnProgress(::g::Uno::Net::Http::HttpMessageHandlerRequest* res, int current, int total, bool hastotal)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[29/*"onprogress"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 3, uBox<int>(::TYPES[24/*int*/], current), uBox<int>(::TYPES[24/*int*/], total), uBox(::g::Uno::Bool_typeof(), hastotal)));
}

// private void OnStateChanged(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :480
void Http__FuseJSHttpRequest::OnStateChanged(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[30/*"onstatechan...*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[3/*object[]*/], 1, uBox<int>(::TYPES[24/*int*/], uPtr(_req)->State())));
}

// private void OnTimeout(Uno.Net.Http.HttpMessageHandlerRequest res) [instance] :472
void Http__FuseJSHttpRequest::OnTimeout(::g::Uno::Net::Http::HttpMessageHandlerRequest* res)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(Obj())->Item(::STRINGS[31/*"ontimeout"*/]), ::TYPES[2/*Fuse.Scripting.Function*/]);

    if (func != NULL)
        uPtr(func)->Call(uArray::New(::TYPES[3/*object[]*/], 0));

    DetachRequest();
}

// private object SendAsync(object[] args) [instance] :502
uObject* Http__FuseJSHttpRequest::SendAsync(uArray* args)
{
    if ((args != NULL) && (uPtr(args)->Length() > 0))
    {
        uObject* a = uPtr(args)->Strong<uObject*>(0);

        if (uIs(a, ::TYPES[6/*string*/]))
        {
            uPtr(_req)->SendAsync2(uAs<uString*>(a, ::TYPES[6/*string*/]));
            return NULL;
        }
        else if (uIs(a, ::TYPES[22/*byte[]*/]))
        {
            uArray* b = uAs<uArray*>(a, ::TYPES[22/*byte[]*/]);
            uPtr(_req)->SendAsync1(b);
            return NULL;
        }
        else
        {
            ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(a, ::TYPES[23/*Fuse.Scripting.Object*/]);

            if ((obj != NULL) && (uPtr(obj)->Item(::STRINGS[32/*"buffer"*/]) != NULL))
            {
                uArray* b1 = uAs<uArray*>(uPtr(obj)->Item(::STRINGS[32/*"buffer"*/]), ::TYPES[22/*byte[]*/]);
                uPtr(_req)->SendAsync1(b1);
                return NULL;
            }
        }
    }

    uPtr(_req)->SendAsync();
    return NULL;
}

// private void SetHeader(string key, string value) [instance] :383
void Http__FuseJSHttpRequest::SetHeader(uString* key, uString* value)
{
    CheckIsAttached();
    uPtr(_req)->SetHeader(key, value);
}

// private object SetResponseType(object[] args) [instance] :567
uObject* Http__FuseJSHttpRequest::SetResponseType(uArray* args)
{
    CheckIsAttached();

    if (uPtr(args)->Length() > 0)
    {
        uObject* arg = uPtr(args)->Strong<uObject*>(0);
        int value = uIs(arg, ::TYPES[24/*int*/]) ? uUnbox<int>(::TYPES[24/*int*/], arg) : (int)uUnbox<double>(::g::Uno::Double_typeof(), arg);
        uPtr(_req)->SetResponseType(value);
    }

    return NULL;
}

// private void SetTimeout(int timeout) [instance] :389
void Http__FuseJSHttpRequest::SetTimeout(int timeout)
{
    CheckIsAttached();
    uPtr(_req)->SetTimeout(timeout);
}

// public FuseJSHttpRequest New(Fuse.Scripting.Context context, Uno.Net.Http.HttpMessageHandlerRequest req) [static] :306
Http__FuseJSHttpRequest* Http__FuseJSHttpRequest::New1(::g::Fuse::Scripting::Context* context, ::g::Uno::Net::Http::HttpMessageHandlerRequest* req)
{
    Http__FuseJSHttpRequest* obj1 = (Http__FuseJSHttpRequest*)uNew(Http__FuseJSHttpRequest_typeof());
    obj1->ctor_(context, req);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class Http :227
// {
static void Http_build(uType* type)
{
    ::STRINGS[33] = uString::Const("FuseJS/Http");
    ::STRINGS[34] = uString::Const("exports");
    ::TYPES[25] = ::g::Uno::Func2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Reactive::FuseJS::Http::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Http_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Http);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.Http", options);
    type->fp_build_ = Http_build;
    type->fp_ctor_ = (void*)Http__New2_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))Http__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Http() :230
void Http__ctor_2_fn(Http* __this)
{
    __this->ctor_2();
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) :241
void Http__CreateClient_fn(Http* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateClient(context, args);
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :236
void Http__Evaluate_fn(Http* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uPtr(uPtr(result)->Object)->Item(::STRINGS[34/*"exports"*/], Http__FunctionClosure::New1(c, uDelegate::New(::TYPES[25/*Uno.Func<Fuse.Scripting.Context, object[], object>*/], (void*)Http__CreateClient_fn, __this))->Callback());
}

// public Http New() :230
void Http__New2_fn(Http** __retval)
{
    *__retval = Http::New2();
}

uSStrong<Http*> Http::_instance_;

// public Http() [instance] :230
void Http::ctor_2()
{
    ctor_1();

    if (Http::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Http::_instance_ = this, ::STRINGS[33/*"FuseJS/Http"*/]);
}

// private object CreateClient(Fuse.Scripting.Context context, object[] args) [instance] :241
uObject* Http::CreateClient(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return Http__FuseJSHttpClient::New1(context)->Obj();
}

// public Http New() [static] :230
Http* Http::New2()
{
    Http* obj1 = (Http*)uNew(Http_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class HttpHeaders :591
// {
static void HttpHeaders_build(uType* type)
{
    ::STRINGS[35] = uString::Const(", ");
    ::STRINGS[36] = uString::Const("");
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[27] = ::g::Uno::IDisposable_typeof();
    ::TYPES[28] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[26/*Uno.Collections.Dictionary<string, Uno.Collections.IList<string>>*/], offsetof(::g::Fuse::Reactive::FuseJS::HttpHeaders, _headers), 0);
}

uType* HttpHeaders_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HttpHeaders);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.HttpHeaders", options);
    type->fp_build_ = HttpHeaders_build;
    return type;
}

// internal HttpHeaders(string headers) :595
void HttpHeaders__ctor__fn(HttpHeaders* __this, uString* headers)
{
    __this->ctor_(headers);
}

// public string GetValue(string key) :608
void HttpHeaders__GetValue_fn(HttpHeaders* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetValue(key);
}

// internal HttpHeaders New(string headers) :595
void HttpHeaders__New1_fn(uString* headers, HttpHeaders** __retval)
{
    *__retval = HttpHeaders::New1(headers);
}

// private void ParseHeader(string headerLine) :618
void HttpHeaders__ParseHeader_fn(HttpHeaders* __this, uString* headerLine)
{
    __this->ParseHeader(headerLine);
}

// internal HttpHeaders(string headers) [instance] :595
void HttpHeaders::ctor_(uString* headers)
{
    _headers = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[26/*Uno.Collections.Dictionary<string, Uno.Collections.IList<string>>*/]));
    ::g::Uno::IO::StringReader* reader = ::g::Uno::IO::StringReader::New1(headers);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)reader), ::TYPES[27/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uString* headerLine = uPtr(reader)->ReadLine();

        while (::g::Uno::String::op_Inequality(headerLine, NULL))
        {
            ParseHeader(headerLine);
            headerLine = uPtr(reader)->ReadLine();
        }
    }
}

// public string GetValue(string key) [instance] :608
uString* HttpHeaders::GetValue(uString* key)
{
    bool ret6;
    uObject* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_headers), ::g::Uno::String::ToLower(uPtr(key)), (void**)(&list), &ret6), ret6))
        return ::g::Uno::String::Join(::STRINGS[35/*", "*/], (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[28/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], list));

    return ::STRINGS[36/*""*/];
}

// private void ParseHeader(string headerLine) [instance] :618
void HttpHeaders::ParseHeader(uString* headerLine)
{
    bool ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret8;
    uObject* ret9;

    if (::g::Uno::String::IsNullOrEmpty(headerLine))
        return;

    int colon = ::g::Uno::String::IndexOf(uPtr(headerLine), ':', 0);

    if (colon == -1)
        return;

    uString* name = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(headerLine, 0, colon)))));
    uArray* strings = ::g::Uno::String::Split(uPtr(::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(headerLine, colon + 1, headerLine->Length() - (colon + 1))))), uArray::Init<int>(::TYPES[29/*char[]*/], 1, ';'));
    ::g::Uno::Collections::List* values = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<string>*/]);

    for (int index2 = 0, length3 = uPtr(strings)->Length(); index2 < length3; ++index2)
    {
        uString* s = uPtr(strings)->Strong<uString*>(index2);
        ::g::Uno::Collections::List__Add_fn(uPtr(values), ::g::Uno::String::Trim(uPtr(s)));
    }

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_headers), name, &ret7), ret7))

        for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(values), &ret8), ret8); enum4.MoveNext(::TYPES[31/*Uno.Collections.List<string>.Enumerator*/]); )
        {
            uString* value = enum4.Current(::TYPES[31/*Uno.Collections.List<string>.Enumerator*/]);
            ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_headers), name, &ret9), ret9)), ::TYPES[32/*Uno.Collections.ICollection<string>*/]), value);
        }
    else
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_headers), name, (uObject*)values);
}

// internal HttpHeaders New(string headers) [static] :595
HttpHeaders* HttpHeaders::New1(uString* headers)
{
    HttpHeaders* obj5 = (HttpHeaders*)uNew(HttpHeaders_typeof());
    obj5->ctor_(headers);
    return obj5;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// private sealed class TimerManager.Timer :884
// {
static void TimerManager__Timer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _callback), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _isRunning), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _repeat), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _startTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, _timeout), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, ID), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL), offsetof(::g::Fuse::Reactive::FuseJS::TimerManager__Timer, OnStop), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerManager__Timer::_id_, uFieldFlagsStatic);
}

uType* TimerManager__Timer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TimerManager__Timer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager.Timer", options);
    type->fp_build_ = TimerManager__Timer_build;
    return type;
}

// public Timer(double ms, Uno.Action callback, bool repeat) :899
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat)
{
    __this->ctor_(*ms, callback, *repeat);
}

// public static double GetMilliseconds() :944
void TimerManager__Timer__GetMilliseconds_fn(double* __retval)
{
    *__retval = TimerManager__Timer::GetMilliseconds();
}

// public Timer New(double ms, Uno.Action callback, bool repeat) :899
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval)
{
    *__retval = TimerManager__Timer::New1(*ms, callback, *repeat);
}

// private void Start() :908
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this)
{
    __this->Start();
}

// public void Stop() :914
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this)
{
    __this->Stop();
}

// internal void Update() :921
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this)
{
    __this->Update();
}

int TimerManager__Timer::_id_;

// public Timer(double ms, Uno.Action callback, bool repeat) [instance] :899
void TimerManager__Timer::ctor_(double ms, uDelegate* callback, bool repeat)
{
    ID = (TimerManager__Timer::_id_++);
    _timeout = ms;
    _callback = callback;
    _repeat = repeat;
    Start();
}

// private void Start() [instance] :908
void TimerManager__Timer::Start()
{
    _startTime = TimerManager__Timer::GetMilliseconds();
    _isRunning = true;
}

// public void Stop() [instance] :914
void TimerManager__Timer::Stop()
{
    _isRunning = false;

    if (::g::Uno::Delegate::op_Inequality(OnStop, NULL))
        uPtr(OnStop)->InvokeVoid(uCRef<int>(ID));
}

// internal void Update() [instance] :921
void TimerManager__Timer::Update()
{
    if (!_isRunning)
        return;

    double now = TimerManager__Timer::GetMilliseconds();
    double elapsed = now - _startTime;

    if (_timeout < elapsed)
    {
        {
            const auto __finally_fun = [&]()
            {
                if (_repeat)
                    _startTime = now;
                else
                    Stop();
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (::g::Uno::Delegate::op_Inequality(_callback, NULL))
                uPtr(_callback)->InvokeVoid();
        }
    }
}

// public static double GetMilliseconds() [static] :944
double TimerManager__Timer::GetMilliseconds()
{
    return (double)(::g::Uno::Diagnostics::Clock::GetTicks() / 10000LL);
}

// public Timer New(double ms, Uno.Action callback, bool repeat) [static] :899
TimerManager__Timer* TimerManager__Timer::New1(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* obj1 = (TimerManager__Timer*)uNew(TimerManager__Timer_typeof());
    obj1->ctor_(ms, callback, repeat);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class TimerManager :809
// {
static void TimerManager_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Collections::List_typeof()->MakeType(TimerManager__Timer_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[33/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/], offsetof(::g::Fuse::Reactive::FuseJS::TimerManager, _timers), 0);
}

uType* TimerManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TimerManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FuseJS.TimerManager", options);
    type->fp_build_ = TimerManager_build;
    type->fp_ctor_ = (void*)TimerManager__New1_fn;
    return type;
}

// public generated TimerManager() :809
void TimerManager__ctor__fn(TimerManager* __this)
{
    __this->ctor_();
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) :830
void TimerManager__AddTimer_fn(TimerManager* __this, double* ms, uDelegate* callback, bool* repeat, int* __retval)
{
    *__retval = __this->AddTimer(*ms, callback, *repeat);
}

// public void DeleteAllTimers() :838
void TimerManager__DeleteAllTimers_fn(TimerManager* __this)
{
    __this->DeleteAllTimers();
}

// public bool DeleteTimer(int id) :846
void TimerManager__DeleteTimer_fn(TimerManager* __this, int* id, bool* __retval)
{
    *__retval = __this->DeleteTimer(*id);
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) :866
void TimerManager__GetTimer_fn(TimerManager* __this, int* id, TimerManager__Timer** __retval)
{
    *__retval = __this->GetTimer(*id);
}

// public generated TimerManager New() :809
void TimerManager__New1_fn(TimerManager** __retval)
{
    *__retval = TimerManager::New1();
}

// private void RemoveTimer(int id) :857
void TimerManager__RemoveTimer_fn(TimerManager* __this, int* id)
{
    __this->RemoveTimer(*id);
}

// public void Tick() :876
void TimerManager__Tick_fn(TimerManager* __this)
{
    __this->Tick();
}

// public generated TimerManager() [instance] :809
void TimerManager::ctor_()
{
    _timers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[33/*Uno.Collections.List<Fuse.Reactive.FuseJS.TimerManager.Timer>*/]));
}

// public int AddTimer(double ms, Uno.Action callback, [bool repeat]) [instance] :830
int TimerManager::AddTimer(double ms, uDelegate* callback, bool repeat)
{
    TimerManager__Timer* t = TimerManager__Timer::New1(ms, callback, repeat);
    t->OnStop = uDelegate::New(::TYPES[11/*Uno.Action<int>*/], (void*)TimerManager__RemoveTimer_fn, this);
    ::g::Uno::Collections::List__Add_fn(uPtr(_timers), t);
    return t->ID;
}

// public void DeleteAllTimers() [instance] :838
void TimerManager::DeleteAllTimers()
{
    TimerManager__Timer* ret2;

    for (int i = uPtr(_timers)->Count() - 1; i >= 0; i--)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret2), ret2))->Stop();
}

// public bool DeleteTimer(int id) [instance] :846
bool TimerManager::DeleteTimer(int id)
{
    TimerManager__Timer* timer = GetTimer(id);

    if (timer != NULL)
    {
        uPtr(timer)->Stop();
        return true;
    }

    return false;
}

// private Fuse.Reactive.FuseJS.TimerManager.Timer GetTimer(int id) [instance] :866
TimerManager__Timer* TimerManager::GetTimer(int id)
{
    TimerManager__Timer* ret4;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
    {
        TimerManager__Timer* timer = (::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret4), ret4);

        if (uPtr(timer)->ID == id)
            return timer;
    }

    return NULL;
}

// private void RemoveTimer(int id) [instance] :857
void TimerManager::RemoveTimer(int id)
{
    TimerManager__Timer* ret5;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret5), ret5))->ID == id)
            uPtr(_timers)->RemoveAt(i);
}

// public void Tick() [instance] :876
void TimerManager::Tick()
{
    TimerManager__Timer* ret6;

    for (int i = 0; i < uPtr(_timers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_timers), uCRef<int>(i), &ret6), ret6))->Update();
}

// public generated TimerManager New() [static] :809
TimerManager* TimerManager::New1()
{
    TimerManager* obj1 = (TimerManager*)uNew(TimerManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class TimerModule :674
// {
static void TimerModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Timer");
    ::STRINGS[37] = uString::Const("create");
    ::STRINGS[38] = uString::Const("delete");
    ::STRINGS[39] = uString::Const("create(): requires at least three arguments");
    ::STRINGS[40] = uString::Const("create(): first argument must be a function");
    ::STRINGS[41] = uString::Const("delete(): requires one argument");
    ::TYPES[34] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[35] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[3] = uObject_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Reactive::FuseJS::TimerManager_typeof(), offsetof(::g::Fuse::Reactive::FuseJS::TimerModule, _tm), 0,
        type, (uintptr_t)&::g::Fuse::Reactive::FuseJS::TimerModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TimerModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Reactive.FuseJS.TimerModule", options);
    type->fp_build_ = TimerModule_build;
    type->fp_ctor_ = (void*)TimerModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public TimerModule() :691
void TimerModule__ctor_2_fn(TimerModule* __this)
{
    __this->ctor_2();
}

// private object Create(Fuse.Scripting.Context context, object[] args) :728
void TimerModule__Create_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Create(context, args);
}

// private object Delete(Fuse.Scripting.Context context, object[] args) :769
void TimerModule__Delete_fn(TimerModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->Delete(context, args);
}

// public TimerModule New() :691
void TimerModule__New2_fn(TimerModule** __retval)
{
    *__retval = TimerModule::New2();
}

// private void OnReset(object sender, Uno.EventArgs args) :704
void TimerModule__OnReset_fn(TimerModule* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnReset(sender, args);
}

// internal void UpdateModule() :779
void TimerModule__UpdateModule_fn(TimerModule* __this)
{
    __this->UpdateModule();
}

uSStrong<TimerModule*> TimerModule::_instance_;

// public TimerModule() [instance] :691
void TimerModule::ctor_2()
{
    ctor_1();

    if (TimerModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(TimerModule::_instance_ = this, ::STRINGS[0/*"FuseJS/Timer"*/]);
    _tm = ::g::Fuse::Reactive::FuseJS::TimerManager::New1();
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[37/*"create"*/], uDelegate::New(::TYPES[34/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Create_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[38/*"delete"*/], uDelegate::New(::TYPES[34/*Fuse.Scripting.NativeCallback*/], (void*)TimerModule__Delete_fn, this)));
    add_Reset(uDelegate::New(::TYPES[35/*Uno.EventHandler*/], (void*)TimerModule__OnReset_fn, this));
}

// private object Create(Fuse.Scripting.Context context, object[] args) [instance] :728
uObject* TimerModule::Create(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 3)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[39/*"create(): r...*/]));

    if (!uIs((uObject*)uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*Fuse.Scripting.Function*/]))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[40/*"create(): f...*/]));

    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*Fuse.Scripting.Function*/]);
    double ms = ::g::Fuse::Scripting::Value::ToNumber(args->Strong<uObject*>(1));
    bool repeat = uUnbox<bool>(::g::Uno::Bool_typeof(), args->Strong<uObject*>(2));
    uArray* innerArgs = uArray::New(::TYPES[3/*object[]*/], args->Length() - 3);

    for (int i = 0; i < innerArgs->Length(); i++)
        uPtr(innerArgs)->Strong<uObject*>(i) = uPtr(args)->Strong<uObject*>(3 + i);

    return uBox<int>(::TYPES[24/*int*/], uPtr(_tm)->AddTimer(ms, uDelegate::New(::TYPES[12/*Uno.Action*/], (void*)TimerModule__CallbackClosure__Callback_fn, TimerModule__CallbackClosure::New1(context, func, innerArgs)), repeat));
}

// private object Delete(Fuse.Scripting.Context context, object[] args) [instance] :769
uObject* TimerModule::Delete(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[41/*"delete(): r...*/]));

    uPtr(_tm)->DeleteTimer(::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(0)));
    return NULL;
}

// private void OnReset(object sender, Uno.EventArgs args) [instance] :704
void TimerModule::OnReset(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (_tm != NULL)
        uPtr(_tm)->DeleteAllTimers();
}

// internal void UpdateModule() [instance] :779
void TimerModule::UpdateModule()
{
    if (_tm != NULL)
        uPtr(_tm)->Tick();
}

// public TimerModule New() [static] :691
TimerModule* TimerModule::New2()
{
    TimerModule* obj1 = (TimerModule*)uNew(TimerModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Reactive::FuseJS
