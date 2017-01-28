// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Scripting.AppInitialized.Closure.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.ArrayMirror.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.ClassInstance.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Context.MethodClosure.h>
#include <Fuse.Scripting.Context.PropertyClosure.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.EventEmitterModule.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.FactoryClosure-1.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.FileSourceConverter.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IObject.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JSCallback.ActionClosure.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-1.h>
#include <Fuse.Scripting.JSCallback.ActionClosure-2.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-1.h>
#include <Fuse.Scripting.JSCallback.FuncClosure-2.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.JSCallback.NumberConverter.h>
#include <Fuse.Scripting.JSFileSource.h>
#include <Fuse.Scripting.Json.h>
#include <Fuse.Scripting.LazyObservableProperty.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Marshal.IConverter.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeEventEmitterModule.EmitClosure.h>
#include <Fuse.Scripting.NativeEventEmitterModule.h>
#include <Fuse.Scripting.NativeEventEmitterModule.OnClosure.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeFunction.NativeFunctionClosure.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.ContextClosure.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativePromise-2.PromiseClosure.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ObjectMirror.h>
#include <Fuse.Scripting.Observable.Add.h>
#include <Fuse.Scripting.Observable.Clear.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.InsertAll.h>
#include <Fuse.Scripting.Observable.InsertAt.h>
#include <Fuse.Scripting.Observable.NewAll.h>
#include <Fuse.Scripting.Observable.NewAt.h>
#include <Fuse.Scripting.Observable.Operation.h>
#include <Fuse.Scripting.Observable.RemoveAt.h>
#include <Fuse.Scripting.Observable.RemoveRange.h>
#include <Fuse.Scripting.Observable.Set.h>
#include <Fuse.Scripting.Observable.Subscription.h>
#include <Fuse.Scripting.ObservableProperty.h>
#include <Fuse.Scripting.ObservableProperty.PushCapture.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.CallClosure.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptModule.RequireContext.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.ScriptProperty-2.h>
#include <Fuse.Scripting.StringChangedArgs.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.ArgumentException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Value.h>
static uString* STRINGS[132];
static uType* TYPES[107];

namespace g{
namespace Fuse{
namespace Scripting{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class JSCallback.ActionClosure :1120
// {
static void JSCallback__ActionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure, _action), 0);
}

uType* JSCallback__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure", options);
    type->fp_build_ = JSCallback__ActionClosure_build;
    return type;
}

// public ActionClosure(Uno.Action action) :1124
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :1124
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval)
{
    *__retval = JSCallback__ActionClosure::New1(action);
}

// public object Run(object[] args) :1129
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action action) [instance] :1124
void JSCallback__ActionClosure::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :1129
uObject* JSCallback__ActionClosure::Run(uArray* args)
{
    uPtr(_action)->InvokeVoid();
    return NULL;
}

// public ActionClosure New(Uno.Action action) [static] :1124
JSCallback__ActionClosure* JSCallback__ActionClosure::New1(uDelegate* action)
{
    JSCallback__ActionClosure* obj1 = (JSCallback__ActionClosure*)uNew(JSCallback__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T> :1136
// {
static void JSCallback__ActionClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::STRINGS[1] = uString::Const(" value was ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure1, _action), 0);
}

uType* JSCallback__ActionClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__ActionClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`1", options);
    type->fp_build_ = JSCallback__ActionClosure1_build;
    return type;
}

// public ActionClosure(Uno.Action<T> action) :1140
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T> action) :1140
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval)
{
    *__retval = JSCallback__ActionClosure1::New1(__type, action);
}

// public object Run(object[] args) :1145
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T> action) [instance] :1140
void JSCallback__ActionClosure1::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :1145
uObject* JSCallback__ActionClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<T>*/),
    };
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[1], args, &arg, uCRef<int>(0), &ret2), ret2))
        uPtr(_action)->InvokeVoid(arg);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0]), ::STRINGS[1/*" value was "*/]), uPtr(args)->Strong<uObject*>(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T> action) [static] :1140
JSCallback__ActionClosure1* JSCallback__ActionClosure1::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure1* obj1 = (JSCallback__ActionClosure1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T1, T2> :1157
// {
static void JSCallback__ActionClosure2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0),
        type->T(1),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T1>*/, type->T(0), NULL),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T2>*/, type->T(1), NULL));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::JSCallback__ActionClosure2, _action), 0);
}

uType* JSCallback__ActionClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(JSCallback__ActionClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`2", options);
    type->fp_build_ = JSCallback__ActionClosure2_build;
    return type;
}

// public ActionClosure(Uno.Action<T1, T2> action) :1161
void JSCallback__ActionClosure2__ctor__fn(JSCallback__ActionClosure2* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T1, T2> action) :1161
void JSCallback__ActionClosure2__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure2** __retval)
{
    *__retval = JSCallback__ActionClosure2::New1(__type, action);
}

// public object Run(object[] args) :1166
void JSCallback__ActionClosure2__Run_fn(JSCallback__ActionClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T1, T2> action) [instance] :1161
void JSCallback__ActionClosure2::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :1166
uObject* JSCallback__ActionClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*T1*/),
        __type->Precalced(1/*T2*/),
        __type->Precalced(2/*Fuse.Scripting.JSCallback.GetArg<T1>*/),
        __type->Precalced(3/*Fuse.Scripting.JSCallback.GetArg<T2>*/),
    };
    uT arg(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg1(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret2;
    bool ret3;
    arg = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));
    arg1 = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[3], args, &arg1, uCRef<int>(1), &ret3), ret3))
        uPtr(_action)->Invoke(2, (void*)arg, (void*)arg1);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[0])));

    return NULL;
}

// public ActionClosure New(Uno.Action<T1, T2> action) [static] :1161
JSCallback__ActionClosure2* JSCallback__ActionClosure2::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure2* obj1 = (JSCallback__ActionClosure2*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.Add :1875
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::Observable__Add, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Scripting.Observable obs, object value) :1879
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Scripting.Observable obs, object value) :1879
void Observable__Add__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1884
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Scripting::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_value);
}

// public Add(Fuse.Scripting.Observable obs, object value) [instance] :1879
void Observable__Add::ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Scripting.Observable obs, object value) [static] :1879
Observable__Add* Observable__Add::New1(::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// internal static class AppInitialized :374
// {
static void AppInitialized_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Scripting::AppInitialized::_initialized_, uFieldFlagsStatic);
}

uClassType* AppInitialized_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.AppInitialized", options);
    type->fp_build_ = AppInitialized_build;
    return type;
}

// public static void On(Fuse.Scripting.Context context, Uno.Action action) :378
void AppInitialized__On_fn(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized::On(context, action);
}

// internal static void Reset() :390
void AppInitialized__Reset_fn()
{
    AppInitialized::Reset();
}

bool AppInitialized::_initialized_;

// public static void On(Fuse.Scripting.Context context, Uno.Action action) [static] :378
void AppInitialized::On(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    if (AppInitialized::_initialized_)
        uPtr(action)->InvokeVoid();
    else
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[5/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)AppInitialized__Closure__Run_fn, AppInitialized__Closure::New1(context, action)));
}

// internal static void Reset() [static] :390
void AppInitialized::Reset()
{
    AppInitialized::_initialized_ = false;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Array :2443
// {
static void Array_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(Array_type, interface0));
}

Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    return type;
}

// protected generated Array() :2443
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :2450
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :2456
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Array() [instance] :2443
void Array::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ArrayMirror :8
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Scripting::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface0));
    type->SetFields(1,
        ::TYPES[7/*object[]*/], offsetof(::g::Fuse::Scripting::ArrayMirror, _items), 0);
}

::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ListMirror_type);
    type = (::g::Fuse::Scripting::ListMirror_type*)uClassType::New("Fuse.Scripting.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    return type;
}

// internal ArrayMirror(Fuse.Scripting.Context context, Fuse.Scripting.Array arr) :12
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_2(context, arr);
}

// public override sealed object get_Item(int index) :32
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// internal object[] get_ItemsReadonly() :19
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :37
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// internal ArrayMirror New(Fuse.Scripting.Context context, Fuse.Scripting.Array arr) :12
void ArrayMirror__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New1(context, arr);
}

// public override sealed void Unsubscribe() :21
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>(uPtr(__this->_items)->Strong<uObject*>(i), ::TYPES[8/*Fuse.Scripting.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Scripting.Context context, Fuse.Scripting.Array arr) [instance] :12
void ArrayMirror::ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr)
{
    ctor_1(arr);
    _items = uArray::New(::TYPES[7/*object[]*/], uPtr(arr)->Length());

    for (int i = 0; i < uPtr(_items)->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(context)->Reflect(uPtr(arr)->Item(i));
}

// internal object[] get_ItemsReadonly() [instance] :19
uArray* ArrayMirror::ItemsReadonly()
{
    return _items;
}

// internal ArrayMirror New(Fuse.Scripting.Context context, Fuse.Scripting.Array arr) [static] :12
ArrayMirror* ArrayMirror::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj1 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj1->ctor_2(context, arr);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class BoolChangedArgs :806
// {
static void BoolChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[9] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(BoolChangedArgs_type, interface0));
    type->SetFields(1);
}

BoolChangedArgs_type* BoolChangedArgs_typeof()
{
    static uSStrong<BoolChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(BoolChangedArgs_type);
    type = (BoolChangedArgs_type*)uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->fp_build_ = BoolChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public BoolChangedArgs(bool value) :808
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value)
{
    __this->ctor_2(*value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :812
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s)
{
    bool ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddBool(uInterface(uPtr(s), ::TYPES[9/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public BoolChangedArgs New(bool value) :808
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value);
}

// public BoolChangedArgs(bool value) [instance] :808
void BoolChangedArgs::ctor_2(bool value)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value));
}

// public BoolChangedArgs New(bool value) [static] :808
BoolChangedArgs* BoolChangedArgs::New3(bool value)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public delegate object Callback(object[] args) :2560
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class ScriptMethod<T>.CallClosure :2284
// {
static void ScriptMethod1__CallClosure_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::ScriptMethod1__CallClosure, _args), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethod1__CallClosure, _context), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(::g::Fuse::Scripting::ScriptMethod1__CallClosure, _method), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethod1__CallClosure, _obj), 0);
}

uType* ScriptMethod1__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethod`1.CallClosure", options);
    type->fp_build_ = ScriptMethod1__CallClosure_build;
    return type;
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :2291
void ScriptMethod1__CallClosure__ctor__fn(ScriptMethod1__CallClosure* __this, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    __this->ctor_(method, c, obj, args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :2291
void ScriptMethod1__CallClosure__New1_fn(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, ScriptMethod1__CallClosure** __retval)
{
    *__retval = ScriptMethod1__CallClosure::New1(__type, method, c, obj, args);
}

// public void Run() :2299
void ScriptMethod1__CallClosure__Run_fn(ScriptMethod1__CallClosure* __this)
{
    __this->Run();
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [instance] :2291
void ScriptMethod1__CallClosure::ctor_(uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    _method = method;
    _context = c;
    _obj = obj;
    _args = args;
}

// public void Run() [instance] :2299
void ScriptMethod1__CallClosure::Run()
{
    uPtr(_method)->Invoke(3, (::g::Fuse::Scripting::Context*)_context, (void*)uUnboxAny(__type->T(0), _obj), (uArray*)_args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [static] :2291
ScriptMethod1__CallClosure* ScriptMethod1__CallClosure::New1(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    ScriptMethod1__CallClosure* obj1 = (ScriptMethod1__CallClosure*)uNew(__type);
    obj1->ctor_(method, c, obj, args);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class ClassInstance :53
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[3] = uString::Const("_tempMethod");
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::ObservableProperty_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ClassInstance, _context), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::ClassInstance, _obj), 0,
        ::TYPES[11/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>*/], offsetof(::g::Fuse::Scripting::ClassInstance, _properties), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Scripting::ClassInstance, _rootTable), 0,
        ::TYPES[12/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Scripting::ClassInstance, _self), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Scripting.Context context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) :80
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(method, args);
}

// private void DispatchUnroot() :117
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :112
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted() :88
void ClassInstance__EnsureRooted_fn(ClassInstance* __this)
{
    __this->EnsureRooted();
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) :124
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(p);
}

// internal ClassInstance New(Fuse.Scripting.Context context, object obj, Uno.UX.NameTable rootTable) :72
void ClassInstance__New1_fn(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot() :137
void ClassInstance__Unroot_fn(ClassInstance* __this)
{
    __this->Unroot();
}

// internal ClassInstance(Fuse.Scripting.Context context, object obj, Uno.UX.NameTable rootTable) [instance] :72
void ClassInstance::ctor_(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _context = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) [instance] :80
void ClassInstance::CallMethod(::g::Fuse::Scripting::Function* method, uArray* args)
{
    uPtr(_self)->Item(::STRINGS[3/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(::STRINGS[3/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :117
void ClassInstance::DispatchUnroot()
{
    ::g::Fuse::Node* n = uCast< ::g::Fuse::Node*>(uPtr(_rootTable)->This(), ::TYPES[10/*Fuse.Node*/]);
    uPtr(n)->remove_Unrooted(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_context)->Invoke(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :112
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>*/]));
}

// public void EnsureRooted() [instance] :88
void ClassInstance::EnsureRooted()
{
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(_obj, ::TYPES[10/*Fuse.Node*/]);

    if (n != NULL)
        uPtr(n)->add_Unrooted(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_context)->Unwrap(_obj), ::TYPES[12/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[13/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[14/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Scripting::LazyObservableProperty::New2(_context, _self, p));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) [instance] :124
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Uno::UX::Property* p)
{
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Scripting::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Scripting::ObservableProperty::New1(_context, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable())->Object();
}

// private void Unroot() [instance] :137
void ClassInstance::Unroot()
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)

        for (::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8); enum2.MoveNext(::TYPES[15/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]); )
        {
            ::g::Fuse::Scripting::ObservableProperty* p = enum2.Current(::TYPES[15/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]);
            uPtr(p)->Reset();
        }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Scripting.Context context, object obj, Uno.UX.NameTable rootTable) [static] :72
ClassInstance* ClassInstance::New1(::g::Fuse::Scripting::Context* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.Clear :1788
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__Clear, _origin), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__Clear__Unsubscribe_fn;
    return type;
}

// public Clear(Fuse.Scripting.Observable obs, int origin) :1792
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Scripting::Observable* obs, int* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Scripting.Observable obs, int origin) :1792
void Observable__Clear__New1_fn(::g::Fuse::Scripting::Observable* obs, int* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1801
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Scripting::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]));
}

// protected override sealed void Unsubscribe() :1797
void Observable__Clear__Unsubscribe_fn(Observable__Clear* __this)
{
}

// public Clear(Fuse.Scripting.Observable obs, int origin) [instance] :1792
void Observable__Clear::ctor_1(::g::Fuse::Scripting::Observable* obs, int origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Scripting.Observable obs, int origin) [static] :1792
Observable__Clear* Observable__Clear::New1(::g::Fuse::Scripting::Observable* obs, int origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class AppInitialized.Closure :395
// {
static void AppInitialized__Closure_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Uno.Action>*/, ::g::Uno::Action_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Scripting::AppInitialized__Closure, _action), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::AppInitialized__Closure, _context), 0);
}

uType* AppInitialized__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AppInitialized__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.AppInitialized.Closure", options);
    type->fp_build_ = AppInitialized__Closure_build;
    return type;
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) :400
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    __this->ctor_(context, action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) :400
void AppInitialized__Closure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* action, AppInitialized__Closure** __retval)
{
    *__retval = AppInitialized__Closure::New1(context, action);
}

// public void Run() :406
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this)
{
    __this->Run();
}

// private static void RunJS(Uno.Action action) :411
void AppInitialized__Closure__RunJS_fn(uDelegate* action)
{
    AppInitialized__Closure::RunJS(action);
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) [instance] :400
void AppInitialized__Closure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    _context = context;
    _action = action;
}

// public void Run() [instance] :406
void AppInitialized__Closure::Run()
{
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[16/*Uno.Threading.IDispatcherExtensions.Invoke1<Uno.Action>*/], uPtr(_context)->Dispatcher(), uDelegate::New(::TYPES[17/*Uno.Action<Uno.Action>*/], (void*)AppInitialized__Closure__RunJS_fn), _action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) [static] :400
AppInitialized__Closure* AppInitialized__Closure::New1(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized__Closure* obj1 = (AppInitialized__Closure*)uNew(AppInitialized__Closure_typeof());
    obj1->ctor_(context, action);
    return obj1;
}

// private static void RunJS(Uno.Action action) [static] :411
void AppInitialized__Closure::RunJS(uDelegate* action)
{
    ::g::Fuse::Scripting::AppInitialized::_initialized_ = true;
    uPtr(action)->InvokeVoid();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public interfacemodifiers class Context :162
// {
// static Context() :268
static void Context__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(uObject_typeof(), uArray::New(::TYPES[18/*Fuse.Scripting.ScriptMember[]*/], 0));
}

static void Context_build(uType* type)
{
    ::STRINGS[4] = uString::Const("(Context)");
    ::STRINGS[5] = uString::Const("(function(x) { return x; })");
    ::STRINGS[6] = uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly.");
    ::STRINGS[7] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\FuseCore\\0.43.11\\scripting\\$.uno");
    ::STRINGS[8] = uString::Const("CreateMirror");
    ::STRINGS[9] = uString::Const("Cannot use object of type '");
    ::STRINGS[10] = uString::Const("' as 'this' in JavaScript module; must be 'Node' or 'App'");
    ::STRINGS[11] = uString::Const("(function(count) { return new Array(count); })");
    ::STRINGS[12] = uString::Const("(function() { return new Object; })");
    ::STRINGS[13] = uString::Const("(function(obj, name, getCallback, setCallback, e, c) { Object.defineProperty(obj, name, { get: getCallback, ");
    ::STRINGS[14] = uString::Const(" set: setCallback,");
    ::STRINGS[15] = uString::Const("");
    ::STRINGS[16] = uString::Const(" enumerable: e, configurable: c }); })");
    ::STRINGS[17] = uString::Const("(function(obj, name, value, e, c) { Object.defineProperty(obj, name, { value: value, enumerable: e, configurable: c }); })");
    ::STRINGS[18] = uString::Const("JSON.parse");
    ::STRINGS[19] = uString::Const("external_object");
    ::STRINGS[20] = uString::Const(" (ScriptClass)");
    ::STRINGS[21] = uString::Const("(function(external_object) { this.external_object = external_object; })");
    ::STRINGS[22] = uString::Const("(set-superclass)");
    ::STRINGS[23] = uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })");
    ::STRINGS[24] = uString::Const(".");
    ::STRINGS[25] = uString::Const(" (ScriptMethod)");
    ::STRINGS[26] = uString::Const("(function(cl, Observable) { cl.prototype.");
    ::STRINGS[27] = uString::Const(" = ");
    ::STRINGS[28] = uString::Const("; })");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::Observable__Operation_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Threading::ConcurrentDictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[23] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[10] = ::g::Fuse::Node_typeof();
    ::TYPES[24] = ::g::Fuse::Scripting::ClassInstance_typeof();
    ::TYPES[25] = ::g::Fuse::AppBase_typeof();
    ::TYPES[5] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::ScriptMethodInline_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::ScriptMethod_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::ScriptProperty_typeof();
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::ValueMirror_typeof();
    ::TYPES[32] = ::g::Uno::Float2_typeof();
    ::TYPES[33] = ::g::Uno::Float3_typeof();
    ::TYPES[34] = ::g::Uno::Float4_typeof();
    ::TYPES[35] = ::g::Uno::Int2_typeof();
    ::TYPES[36] = ::g::Uno::Int3_typeof();
    ::TYPES[37] = ::g::Uno::Int4_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[40] = ::g::Uno::UInt_typeof();
    ::TYPES[41] = ::g::Fuse::Scripting::IScriptObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::TYPES[24/*Fuse.Scripting.ClassInstance*/], offsetof(::g::Fuse::Scripting::Context, _app), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(::g::Fuse::Scripting::Context, _classInstanceProperty), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::Context, _identity), 0,
        ::TYPES[19/*Uno.Collections.List<Fuse.Scripting.Observable.Operation>*/], offsetof(::g::Fuse::Scripting::Context, _messages), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::Context, _messagesMutex), 0,
        ::TYPES[21/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/], offsetof(::g::Fuse::Scripting::Context, _moduleResults), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::Context, _newArray), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::Context, _newObject), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::Context, _parseJson), 0,
        ::TYPES[39/*int*/], offsetof(::g::Fuse::Scripting::Context, _reflectionDepth), 0,
        ::TYPES[20/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/], offsetof(::g::Fuse::Scripting::Context, _registeredClasses), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::Context, _setSuperclass), 0,
        ::TYPES[26/*Fuse.Scripting.IThreadWorker*/], offsetof(::g::Fuse::Scripting::Context, _worker), 0);
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    type->fp_build_ = Context_build;
    type->fp_cctor_ = Context__cctor__fn;
    return type;
}

// protected Context(Fuse.Scripting.IThreadWorker worker) :540
void Context__ctor__fn(Context* __this, uObject* worker)
{
    __this->ctor_(worker);
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) :561
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->CallbackToFunction(c);
}

// private Fuse.Scripting.ValueMirror CreateMirror(object obj) :224
void Context__CreateMirror_fn(Context* __this, uObject* obj, ::g::Fuse::Scripting::ValueMirror** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) :513
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr)
{
    __this->DeleteGlobalModuleResult(mr);
}

// public Uno.Threading.IDispatcher get_Dispatcher() :547
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->Dispatcher();
}

// internal void Enqueue(Fuse.Scripting.Observable.Operation op) :179
void Context__Enqueue_fn(Context* __this, ::g::Fuse::Scripting::Observable__Operation* op)
{
    __this->Enqueue(op);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :463
void Context__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = Context::FindRootTable(names);
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :295
void Context__GetClass_fn(Context* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :434
void Context__GetClassInstance_fn(Context* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Scripting::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :426
void Context__GetClassInstance1_fn(Context* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Scripting::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public void Invoke(Uno.Action action) :549
void Context__Invoke_fn(Context* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public Fuse.Scripting.Array NewArray(object[] values) :608
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->NewArray(values);
}

// public Fuse.Scripting.Object NewObject() :601
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) :569
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty(obj, name, getProperty, setProperty, *enumerable, *configurable);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) :576
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty1(obj, name, value, *enumerable, *configurable);
}

// public Fuse.Scripting.Function get_Observable() :556
void Context__get_Observable_fn(Context* __this, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->Observable();
}

// public object ParseJson(string json) :592
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval)
{
    *__retval = __this->ParseJson(json);
}

// public void ProcessUIMessages() :186
void Context__ProcessUIMessages_fn(Context* __this)
{
    __this->ProcessUIMessages();
}

// public object Reflect(object obj) :200
void Context__Reflect_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :306
void Context__RegisterClass_fn(Context* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) :498
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->RegisterGlobalModuleResult(result);
}

// private Uno.Collections.List<Fuse.Scripting.Observable.Operation> TakeMessages() :167
void Context__TakeMessages_fn(Context* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->TakeMessages();
}

// private Fuse.Scripting.Array ToArray(float2 v) :683
void Context__ToArray_fn(Context* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray(*v);
}

// private Fuse.Scripting.Array ToArray(float3 v) :688
void Context__ToArray1_fn(Context* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray1(*v);
}

// private Fuse.Scripting.Array ToArray(float4 v) :693
void Context__ToArray2_fn(Context* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray2(*v);
}

// private Fuse.Scripting.Array ToArray(int2 v) :698
void Context__ToArray3_fn(Context* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray3(*v);
}

// private Fuse.Scripting.Array ToArray(int3 v) :703
void Context__ToArray4_fn(Context* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray4(*v);
}

// private Fuse.Scripting.Array ToArray(int4 v) :708
void Context__ToArray5_fn(Context* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray5(*v);
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) :505
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->TryGetGlobalModuleResult(id);
}

// public object Unwrap(object dc) :666
void Context__Unwrap_fn(Context* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :645
void Context__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = Context::Wrap(obj);
}

// private object WrapScriptClass(object obj) :274
void Context__WrapScriptClass_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

// protected Context(Fuse.Scripting.IThreadWorker worker) [instance] :540
void Context::ctor_(uObject* worker)
{
    _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Fuse.Scripting.Observable.Operation>*/]));
    _messagesMutex = ::g::Uno::Object::New();
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<Fuse.Scripting.ScriptClass, Fuse.Scripting.Function>*/]));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    _moduleResults = ((::g::Uno::Threading::ConcurrentDictionary*)::g::Uno::Threading::ConcurrentDictionary::New1(::TYPES[21/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/]));
    _worker = worker;
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) [instance] :561
::g::Fuse::Scripting::Function* Context::CallbackToFunction(uDelegate* c)
{
    if (_identity == NULL)
        _identity = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[4/*"(Context)"*/], ::STRINGS[5/*"(function(x...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Function*>(uPtr(_identity)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, c)), ::TYPES[22/*Fuse.Scripting.Function*/]);
}

// private Fuse.Scripting.ValueMirror CreateMirror(object obj) [instance] :224
::g::Fuse::Scripting::ValueMirror* Context::CreateMirror(uObject* obj)
{
    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[6/*"JavaScript ...*/], this, ::STRINGS[7/*"C:\\Users\\...*/], 228, ::STRINGS[8/*"CreateMirror"*/]);
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[23/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Scripting::ArrayMirror::New1(this, a);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[12/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(Observable()))
            return ::g::Fuse::Scripting::Observable::New1(this, o, false);
        else
            return ::g::Fuse::Scripting::ObjectMirror::New1(this, o);
    }

    return NULL;
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) [instance] :513
void Context::DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr)
{
    bool ret1;
    bool ret2;

    if (::g::Uno::String::op_Equality(uPtr(mr)->Id, NULL))
        return;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret1), ret1))
        ::g::Uno::Threading::ConcurrentDictionary__Remove_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret2);
}

// public Uno.Threading.IDispatcher get_Dispatcher() [instance] :547
uObject* Context::Dispatcher()
{
    return ::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[26/*Fuse.Scripting.IThreadWorker*/]));
}

// internal void Enqueue(Fuse.Scripting.Observable.Operation op) [instance] :179
void Context::Enqueue(::g::Fuse::Scripting::Observable__Operation* op)
{
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_messages), op);
    }
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :295
::g::Fuse::Scripting::Function* Context::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :434
::g::Fuse::Scripting::ClassInstance* Context::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ::g::Fuse::Node* n = uAs< ::g::Fuse::Node*>(obj, ::TYPES[10/*Fuse.Node*/]);

    if (n != NULL)
    {
        ::g::Fuse::Scripting::ClassInstance* ni = uAs< ::g::Fuse::Scripting::ClassInstance*>(uPtr(uPtr(n)->Properties())->Get(_classInstanceProperty), ::TYPES[24/*Fuse.Scripting.ClassInstance*/]);

        if (ni == NULL)
        {
            ni = ::g::Fuse::Scripting::ClassInstance::New1(this, obj, rootTable);
            uPtr(uPtr(n)->Properties())->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(obj, ::TYPES[25/*Fuse.AppBase*/]);

    if (app != NULL)
    {
        if (_app == NULL)
            _app = ::g::Fuse::Scripting::ClassInstance::New1(this, obj, rootTable);

        return _app;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"Cannot use ...*/], ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), ::STRINGS[10/*"' as 'this'...*/])));
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :426
::g::Fuse::Scripting::ClassInstance* Context::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    ::g::Uno::UX::NameTable* rootTable = Context::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// public void Invoke(Uno.Action action) [instance] :549
void Context::Invoke(uDelegate* action)
{
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[26/*Fuse.Scripting.IThreadWorker*/]))), ::TYPES[5/*Uno.Threading.IDispatcher*/]), action);
}

// public Fuse.Scripting.Array NewArray(object[] values) [instance] :608
::g::Fuse::Scripting::Array* Context::NewArray(uArray* values)
{
    if (_newArray == NULL)
        _newArray = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[4/*"(Context)"*/], ::STRINGS[11/*"(function(c...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

    ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(uPtr(_newArray)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBox<int>(::TYPES[39/*int*/], uPtr(values)->Length()))), ::TYPES[23/*Fuse.Scripting.Array*/]);

    for (int i = 0; i < values->Length(); i++)
        uPtr(a)->Item(i, uPtr(values)->Strong<uObject*>(i));

    return a;
}

// public Fuse.Scripting.Object NewObject() [instance] :601
::g::Fuse::Scripting::Object* Context::NewObject()
{
    if (_newObject == NULL)
        _newObject = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[4/*"(Context)"*/], ::STRINGS[12/*"(function()...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Object*>(uPtr(_newObject)->Call(uArray::New(::TYPES[7/*object[]*/], 0)), ::TYPES[12/*Fuse.Scripting.Object*/]);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) [instance] :569
void Context::ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[13/*"(function(o...*/], ::g::Uno::Delegate::op_Inequality(setProperty, NULL) ? ::STRINGS[14/*" set: setCa...*/] : ::STRINGS[15/*""*/]), ::STRINGS[16/*" enumerable...*/])), ::TYPES[22/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 6, obj, name, getProperty, setProperty, uBox(::TYPES[56/*bool*/], enumerable), uBox(::TYPES[56/*bool*/], configurable)));
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) [instance] :576
void Context::ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::STRINGS[17/*"(function(o...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 5, obj, name, value, uBox(::TYPES[56/*bool*/], enumerable), uBox(::TYPES[56/*bool*/], configurable)));
}

// public Fuse.Scripting.Function get_Observable() [instance] :556
::g::Fuse::Scripting::Function* Context::Observable()
{
    return ::g::Fuse::Scripting::IThreadWorker::Observable(uInterface(uPtr(_worker), ::TYPES[26/*Fuse.Scripting.IThreadWorker*/]));
}

// public object ParseJson(string json) [instance] :592
uObject* Context::ParseJson(uString* json)
{
    if (_parseJson == NULL)
        _parseJson = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[4/*"(Context)"*/], ::STRINGS[18/*"JSON.parse"*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

    return uPtr(_parseJson)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, json));
}

// public void ProcessUIMessages() [instance] :186
void Context::ProcessUIMessages()
{
    ::g::Fuse::Scripting::Observable__Operation* ret4;
    ::g::Uno::Collections::List* msgs = TakeMessages();

    if (msgs == NULL)
        return;

    for (int i = 0; i < uPtr(msgs)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(msgs), uCRef<int>(i), &ret4), ret4))->Perform();
}

// public object Reflect(object obj) [instance] :200
uObject* Context::Reflect(uObject* obj)
{
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[27/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[12/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(::STRINGS[19/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[19/*"external_ob...*/]), ::TYPES[27/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    ::g::Fuse::Scripting::ValueMirror* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :306
::g::Fuse::Scripting::Function* Context::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[20/*" (ScriptCla...*/]), ::STRINGS[21/*"(function(e...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = RegisterClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[22/*"(set-superc...*/], ::STRINGS[23/*"(function(c...*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[28/*Fuse.Scripting.ScriptMethodInline*/]);

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[24/*"."*/]), uPtr(inlineMethod)->Name), ::STRINGS[25/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[26/*"(function(c...*/], uPtr(inlineMethod)->Name), ::STRINGS[27/*" = "*/]), uPtr(inlineMethod)->Code), ::STRINGS[28/*"; })"*/])), ::TYPES[22/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)Observable()));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[29/*Fuse.Scripting.ScriptMethod*/]);

        if (method != NULL)
        {
            Context__MethodClosure::New1(cl, method, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::TYPES[30/*Fuse.Scripting.ScriptProperty*/]);

        if (property != NULL)
        {
            Context__PropertyClosure::New1(cl, property, this);
            continue;
        }
    }

    return cl;
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) [instance] :498
void Context::RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result)
{
    if (::g::Uno::String::op_Equality(uPtr(result)->Id, NULL))
        return;

    ::g::Uno::Threading::ConcurrentDictionary__Add_fn(uPtr(_moduleResults), uPtr(result)->Id, result);
}

// private Uno.Collections.List<Fuse.Scripting.Observable.Operation> TakeMessages() [instance] :167
::g::Uno::Collections::List* Context::TakeMessages()
{
    ::g::Uno::Threading::Monitor::Enter(_messagesMutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_messagesMutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(_messages)->Count() == 0)
            return NULL;

        ::g::Uno::Collections::List* msgs = _messages;
        _messages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Fuse.Scripting.Observable.Operation>*/]));
        return msgs;
    }
}

// private Fuse.Scripting.Array ToArray(float2 v) [instance] :683
::g::Fuse::Scripting::Array* Context::ToArray(::g::Uno::Float2 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(float3 v) [instance] :688
::g::Fuse::Scripting::Array* Context::ToArray1(::g::Uno::Float3 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 3, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y), uBox(::TYPES[55/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(float4 v) [instance] :693
::g::Fuse::Scripting::Array* Context::ToArray2(::g::Uno::Float4 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 4, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y), uBox(::TYPES[55/*double*/], (double)v.Z), uBox(::TYPES[55/*double*/], (double)v.W)));
}

// private Fuse.Scripting.Array ToArray(int2 v) [instance] :698
::g::Fuse::Scripting::Array* Context::ToArray3(::g::Uno::Int2 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(int3 v) [instance] :703
::g::Fuse::Scripting::Array* Context::ToArray4(::g::Uno::Int3 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 3, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y), uBox(::TYPES[55/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(int4 v) [instance] :708
::g::Fuse::Scripting::Array* Context::ToArray5(::g::Uno::Int4 v)
{
    return NewArray(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 4, uBox(::TYPES[55/*double*/], (double)v.X), uBox(::TYPES[55/*double*/], (double)v.Y), uBox(::TYPES[55/*double*/], (double)v.Z), uBox(::TYPES[55/*double*/], (double)v.W)));
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) [instance] :505
::g::Fuse::Scripting::ModuleResult* Context::TryGetGlobalModuleResult(uString* id)
{
    bool ret5;
    ::g::Fuse::Scripting::ModuleResult* ret6;

    if (::g::Uno::String::op_Equality(id, NULL))
        return NULL;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), id, &ret5), ret5))
        return (::g::Uno::Threading::ConcurrentDictionary__get_Item_fn(uPtr(_moduleResults), id, &ret6), ret6);

    return NULL;
}

// public object Unwrap(object dc) [instance] :666
uObject* Context::Unwrap(uObject* dc)
{
    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[31/*string*/]))
        return dc;
    else if (uIs(dc, ::TYPES[8/*Fuse.Scripting.ValueMirror*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::ValueMirror*>(dc, ::TYPES[8/*Fuse.Scripting.ValueMirror*/]))->Raw();
    else if (uIs(dc, ::TYPES[22/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[32/*float2*/]))
        return ToArray(uUnbox< ::g::Uno::Float2>(::TYPES[32/*float2*/], dc));
    else if (uIs(dc, ::TYPES[33/*float3*/]))
        return ToArray1(uUnbox< ::g::Uno::Float3>(::TYPES[33/*float3*/], dc));
    else if (uIs(dc, ::TYPES[34/*float4*/]))
        return ToArray2(uUnbox< ::g::Uno::Float4>(::TYPES[34/*float4*/], dc));
    else if (uIs(dc, ::TYPES[35/*int2*/]))
        return ToArray3(uUnbox< ::g::Uno::Int2>(::TYPES[35/*int2*/], dc));
    else if (uIs(dc, ::TYPES[36/*int3*/]))
        return ToArray4(uUnbox< ::g::Uno::Int3>(::TYPES[36/*int3*/], dc));
    else if (uIs(dc, ::TYPES[37/*int4*/]))
        return ToArray5(uUnbox< ::g::Uno::Int4>(::TYPES[37/*int4*/], dc));
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :274
uObject* Context::WrapScriptClass(uObject* obj)
{
    uObject* so = uAs<uObject*>(obj, ::TYPES[41/*Fuse.Scripting.IScriptObject*/]);

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[41/*Fuse.Scripting.IScriptObject*/])) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::TYPES[41/*Fuse.Scripting.IScriptObject*/]));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::TYPES[41/*Fuse.Scripting.IScriptObject*/]), res, this);

    return res;
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :463
::g::Uno::UX::NameTable* Context::FindRootTable(::g::Uno::UX::NameTable* names)
{
    Context_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// public static object Wrap(object obj) [static] :645
uObject* Context::Wrap(uObject* obj)
{
    Context_typeof()->Init();

    if (uIs(obj, ::TYPES[27/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[27/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[12/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[12/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->ContainsKey(::STRINGS[19/*"external_ob...*/]))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(::STRINGS[19/*"external_ob...*/]), ::TYPES[27/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[38/*float*/]))
        return uBox(::TYPES[55/*double*/], (double)uUnbox<float>(::TYPES[38/*float*/], obj));

    if (uIs(obj, ::TYPES[39/*int*/]))
        return uBox(::TYPES[55/*double*/], (double)uUnbox<int>(::TYPES[39/*int*/], obj));

    if (uIs(obj, ::TYPES[40/*uint*/]))
        return uBox(::TYPES[55/*double*/], (double)uUnbox<uint32_t>(::TYPES[40/*uint*/], obj));

    return obj;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.ContextClosure :800
// {
static void NativePromise__ContextClosure_build(uType* type)
{
    ::STRINGS[29] = uString::Const("Promise");
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[43] = ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _converter), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::NativePromise__ContextClosure, _factory), 0);
}

uType* NativePromise__ContextClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NativePromise__ContextClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.ContextClosure", options);
    type->fp_build_ = NativePromise__ContextClosure_build;
    return type;
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :805
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    __this->ctor_(c, factory, converter);
}

// internal object CreatePromise(object[] args) :811
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreatePromise(args);
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :805
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval)
{
    *__retval = NativePromise__ContextClosure::New1(__type, c, factory, converter);
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :805
void NativePromise__ContextClosure::ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    _c = c;
    _factory = factory;
    _converter = converter;
}

// internal object CreatePromise(object[] args) [instance] :811
uObject* NativePromise__ContextClosure::CreatePromise(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.NativePromise<T, TJSResult>.PromiseClosure*/),
    };
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_c)->GlobalObject())->Item(::STRINGS[29/*"Promise"*/]), ::TYPES[22/*Fuse.Scripting.Function*/]);
    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(_factory)->Invoke(1, args);
    return uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativePromise__PromiseClosure__Run_fn, ::g::Fuse::Scripting::NativePromise__PromiseClosure::New1(__types[0], _c, future, _converter))));
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :805
NativePromise__ContextClosure* NativePromise__ContextClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    NativePromise__ContextClosure* obj1 = (NativePromise__ContextClosure*)uNew(__type);
    obj1->ctor_(c, factory, converter);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.EmitClosure :585
// {
static void NativeEventEmitterModule__EmitClosure_build(uType* type)
{
    ::STRINGS[30] = uString::Const("emit");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule__EmitClosure, _args), 0);
}

uType* NativeEventEmitterModule__EmitClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule__EmitClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.EmitClosure", options);
    type->fp_build_ = NativeEventEmitterModule__EmitClosure_build;
    return type;
}

// public EmitClosure(object[] args) :589
void NativeEventEmitterModule__EmitClosure__ctor__fn(NativeEventEmitterModule__EmitClosure* __this, uArray* args)
{
    __this->ctor_(args);
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :594
void NativeEventEmitterModule__EmitClosure__Emit_fn(NativeEventEmitterModule__EmitClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->Emit(c, o);
}

// public EmitClosure New(object[] args) :589
void NativeEventEmitterModule__EmitClosure__New1_fn(uArray* args, NativeEventEmitterModule__EmitClosure** __retval)
{
    *__retval = NativeEventEmitterModule__EmitClosure::New1(args);
}

// public EmitClosure(object[] args) [instance] :589
void NativeEventEmitterModule__EmitClosure::ctor_(uArray* args)
{
    _args = args;
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :594
void NativeEventEmitterModule__EmitClosure::Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[30/*"emit"*/], _args);
}

// public EmitClosure New(object[] args) [static] :589
NativeEventEmitterModule__EmitClosure* NativeEventEmitterModule__EmitClosure::New1(uArray* args)
{
    NativeEventEmitterModule__EmitClosure* obj1 = (NativeEventEmitterModule__EmitClosure*)uNew(NativeEventEmitterModule__EmitClosure_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Error :2514
// {
static void Error_build(uType* type)
{
    type->SetFields(3);
}

::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public Error(string message) :2516
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :2516
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :2516
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :2516
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// internal static class EventEmitterModule :660
// {
static void EventEmitterModule_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Fuse.Reactive");
    ::STRINGS[32] = uString::Const("FuseJS/EventEmitter.js");
    ::STRINGS[33] = uString::Const("FuseJS/EventEmitter");
    ::STRINGS[34] = uString::Const("Unable to get a FuseJS/EventEmitter instance");
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    type->SetFields(0,
        ::TYPES[22/*Fuse.Scripting.Function*/], (uintptr_t)&::g::Fuse::Scripting::EventEmitterModule::_instance_, uFieldFlagsStatic);
}

uClassType* EventEmitterModule_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.EventEmitterModule", options);
    type->fp_build_ = EventEmitterModule_build;
    return type;
}

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) :663
void EventEmitterModule__GetConstructor_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = EventEmitterModule::GetConstructor(c);
}

uSStrong< ::g::Fuse::Scripting::Function*> EventEmitterModule::_instance_;

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) [static] :663
::g::Fuse::Scripting::Function* EventEmitterModule::GetConstructor(::g::Fuse::Scripting::Context* c)
{
    if (EventEmitterModule::_instance_ == NULL)
    {
        ::g::Uno::IO::BundleFile* fileSource = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[31/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[32/*"FuseJS/Even...*/]);
        uObject* exports = ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(fileSource))->EvaluateExports(c, ::STRINGS[33/*"FuseJS/Even...*/]);
        EventEmitterModule::_instance_ = uAs< ::g::Fuse::Scripting::Function*>(exports, ::TYPES[22/*Fuse.Scripting.Function*/]);

        if (EventEmitterModule::_instance_ == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[34/*"Unable to g...*/]));
    }

    return EventEmitterModule::_instance_;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public enum ExecutionThread :2176
uEnumType* ExecutionThread_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.ExecutionThread", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "JavaScript", 1LL,
        "MainThread", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class External :2535
// {
static void External_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::External, Object), 0);
}

uType* External_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.External", options);
    type->fp_build_ = External_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))External__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))External__GetHashCode_fn;
    return type;
}

// public External(object o) :2539
void External__ctor__fn(External* __this, uObject* o)
{
    __this->ctor_(o);
}

// public override sealed bool Equals(object o) :2544
void External__Equals_fn(External* __this, uObject* o, bool* __retval)
{
    External* that = uAs<External*>(o, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uPtr(__this->Object), uPtr(that)->Object), void();
}

// public override sealed int GetHashCode() :2550
void External__GetHashCode_fn(External* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object)), void();
}

// public External New(object o) :2539
void External__New1_fn(uObject* o, External** __retval)
{
    *__retval = External::New1(o);
}

// public External(object o) [instance] :2539
void External::ctor_(uObject* o)
{
    Object = o;
}

// public External New(object o) [static] :2539
External* External::New1(uObject* o)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_(o);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// internal sealed class FactoryClosure<T> :739
// {
static void FactoryClosure_build(uType* type)
{
    ::TYPES[44] = ::g::Uno::Exception_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(::g::Fuse::Scripting::FactoryClosure, _args), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::FactoryClosure, _factory), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::FactoryClosure, _promise), 0);
}

uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    type->fp_build_ = FactoryClosure_build;
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :745
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :745
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :752
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :745
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :752
void FactoryClosure::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT res(__types[0], U_ALLOCA(__types[0]->ValueSize));
    res = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :745
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public class FileModule :349
// {
static void FileModule_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(7);
}

::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->fp_build_ = FileModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :351
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_2(fs);
}

// public FileModule New(Uno.UX.FileSource fs) :351
void FileModule__New2_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval)
{
    *__retval = FileModule::New2(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :351
void FileModule::ctor_2(::g::Uno::UX::FileSource* fs)
{
    ctor_1();
    File(fs);
}

// public FileModule New(Uno.UX.FileSource fs) [static] :351
FileModule* FileModule::New2(::g::Uno::UX::FileSource* fs)
{
    FileModule* obj1 = (FileModule*)uNew(FileModule_typeof());
    obj1->ctor_2(fs);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class FileSourceConverter :967
// {
static void FileSourceConverter_build(uType* type)
{
    ::STRINGS[35] = uString::Const("path");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[48] = ::g::Fuse::Scripting::IObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::Marshal__IConverter_typeof(), offsetof(FileSourceConverter_type, interface0));
}

FileSourceConverter_type* FileSourceConverter_typeof()
{
    static uSStrong<FileSourceConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileSourceConverter);
    options.TypeSize = sizeof(FileSourceConverter_type);
    type = (FileSourceConverter_type*)uClassType::New("Fuse.Scripting.FileSourceConverter", options);
    type->fp_build_ = FileSourceConverter_build;
    type->fp_ctor_ = (void*)FileSourceConverter__New1_fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))FileSourceConverter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))FileSourceConverter__TryConvert_fn;
    return type;
}

// public generated FileSourceConverter() :967
void FileSourceConverter__ctor__fn(FileSourceConverter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t) :969
void FileSourceConverter__CanConvert_fn(FileSourceConverter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated FileSourceConverter New() :967
void FileSourceConverter__New1_fn(FileSourceConverter** __retval)
{
    *__retval = FileSourceConverter::New1();
}

// public object TryConvert(Uno.Type t, object obj) :970
void FileSourceConverter__TryConvert_fn(FileSourceConverter* __this, uType* t, uObject* obj, uObject** __retval)
{
    *__retval = __this->TryConvert(t, obj);
}

// public generated FileSourceConverter() [instance] :967
void FileSourceConverter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance] :969
bool FileSourceConverter::CanConvert(uType* t)
{
    return ::g::Uno::Type::op_Equality(t, ::g::Uno::UX::FileSource_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Uno::UX::FileSource_typeof());
}

// public object TryConvert(Uno.Type t, object obj) [instance] :970
uObject* FileSourceConverter::TryConvert(uType* t, uObject* obj)
{
    ::g::Uno::IO::BundleFile* ret3;

    if (!CanConvert(t))
        return NULL;

    if (uIs(obj, ::TYPES[31/*string*/]))
    {
        uString* path = uCast<uString*>(obj, ::TYPES[31/*string*/]);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[47/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret3), ret3);

            if (::g::Uno::String::op_Equality(uPtr(f)->SourcePath(), path))
                return ::g::Uno::UX::BundleFileSource::New1(f);
        }

        return ::g::Fuse::Scripting::JSFileSource::New1(uCast<uString*>(obj, ::TYPES[31/*string*/]));
    }
    else if (uIs(obj, ::TYPES[48/*Fuse.Scripting.IObject*/]))
        return ::g::Fuse::Scripting::JSFileSource::New1(uAs<uString*>(::g::Fuse::Scripting::IObject::Item(uInterface(uPtr((uObject*)obj), ::TYPES[48/*Fuse.Scripting.IObject*/]), ::STRINGS[35/*"path"*/]), ::TYPES[31/*string*/]));

    return NULL;
}

// public generated FileSourceConverter New() [static] :967
FileSourceConverter* FileSourceConverter::New1()
{
    FileSourceConverter* obj2 = (FileSourceConverter*)uNew(FileSourceConverter_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TResult> :1179
// {
static void JSCallback__FuncClosure_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure, _method), 0);
}

uType* JSCallback__FuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`1", options);
    type->fp_build_ = JSCallback__FuncClosure_build;
    return type;
}

// public FuncClosure(Uno.Func<TResult> method) :1183
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TResult> method) :1183
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval)
{
    *__retval = JSCallback__FuncClosure::New1(__type, method);
}

// public object Run(object[] args) :1188
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TResult> method) [instance] :1183
void JSCallback__FuncClosure::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :1188
uObject* JSCallback__FuncClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*TResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret2), ret2));
}

// public FuncClosure New(Uno.Func<TResult> method) [static] :1183
JSCallback__FuncClosure* JSCallback__FuncClosure::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure* obj1 = (JSCallback__FuncClosure*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TResult> :1194
// {
static void JSCallback__FuncClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    type->SetPrecalc(
        type->T(1),
        type->T(0),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<TArg>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::JSCallback__FuncClosure1, _method), 0);
}

uType* JSCallback__FuncClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(JSCallback__FuncClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`2", options);
    type->fp_build_ = JSCallback__FuncClosure1_build;
    return type;
}

// public FuncClosure(Uno.Func<TArg, TResult> method) :1198
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) :1198
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval)
{
    *__retval = JSCallback__FuncClosure1::New1(__type, method);
}

// public object Run(object[] args) :1203
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TResult> method) [instance] :1198
void JSCallback__FuncClosure1::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :1203
uObject* JSCallback__FuncClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*TResult*/),
        __type->Precalced(1/*TArg*/),
        __type->Precalced(2/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT arg(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;

    if (::g::Uno::Type::op_Equality(__types[1], ::TYPES[7/*object[]*/]))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret2, 1, (void*)uUnboxAny(__types[1], args)), ret2));

    arg = uT(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[2], args, &arg, uCRef<int>(0), &ret3), ret3))
        return uBoxPtr(__types[0], (uPtr(_method)->Invoke(&ret4, 1, (void*)arg), ret4));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __types[1])));
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) [static] :1198
JSCallback__FuncClosure1* JSCallback__FuncClosure1::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure1* obj1 = (JSCallback__FuncClosure1*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Function :2492
// {
static void Function_build(uType* type)
{
}

Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// protected generated Function() :2492
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :2498
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    Function* a = uAs<Function*>(o, Function_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :2504
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :2492
void Function::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :736
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL),
        uObject_typeof()->Array());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IArray :2427
// {
uInterfaceType* IArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IArray", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface Marshal.IConverter :1160
// {
uInterfaceType* Marshal__IConverter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.Marshal.IConverter", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IEventSerializer :747
// {
uInterfaceType* IEventSerializer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IEventSerializer", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public abstract interface IModuleProvider :12
// {
uInterfaceType* IModuleProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IModuleProvider", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.InsertAll :1974
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__InsertAll, _index), 0,
        ::g::Fuse::Scripting::ArrayMirror_typeof(), offsetof(::g::Fuse::Scripting::Observable__InsertAll, _items), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) :1979
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) :1979
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1990
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Scripting::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :1985
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) [instance] :1979
void Observable__InsertAll::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) [static] :1979
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.InsertAt :1946
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::Observable__InsertAt, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Scripting.Observable obs, int index, object value) :1951
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Scripting.Observable obs, int index, object value) :1951
void Observable__InsertAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1962
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Scripting::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :1957
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Scripting.Observable obs, int index, object value) [instance] :1951
void Observable__InsertAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Scripting.Observable obs, int index, object value) [static] :1951
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IObject :2433
// {
uInterfaceType* IObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IObject", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IObserver :720
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IObserver", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IScriptEvent :769
// {
uInterfaceType* IScriptEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptEvent", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IScriptObject :757
// {
uInterfaceType* IScriptObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptObject", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract interface IThreadWorker :488
// {
uInterfaceType* IThreadWorker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IThreadWorker", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public static class JSCallback :1088
// {
static void JSCallback_build(uType* type)
{
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[49] = JSCallback__ActionClosure1_typeof();
    ::TYPES[50] = JSCallback__ActionClosure2_typeof();
    ::TYPES[51] = JSCallback__FuncClosure_typeof();
    ::TYPES[52] = JSCallback__FuncClosure1_typeof();
    ::TYPES[53] = JSCallback__NumberConverter_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[49/*Fuse.Scripting.JSCallback.ActionClosure`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[50/*Fuse.Scripting.JSCallback.ActionClosure`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[51/*Fuse.Scripting.JSCallback.FuncClosure`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[52/*Fuse.Scripting.JSCallback.FuncClosure`2*/]->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[53/*Fuse.Scripting.JSCallback.NumberConverter*/]->MakeMethod(1/*TryConvert<T>*/, type->MethodTypes[4]->U(0), NULL));
}

uClassType* JSCallback_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(2, 1);
    type->MethodTypes[2] = type->NewMethodType(1, 1);
    type->MethodTypes[3] = type->NewMethodType(2, 1);
    type->MethodTypes[4] = type->NewMethodType(1, 1);
    type->fp_build_ = JSCallback_build;
    return type;
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) :1090
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction(action);
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) :1095
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction1(__type, action);
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) :1100
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction2(__type, action);
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) :1105
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) :1110
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc1(__type, func);
}

// private static bool GetArg<T>(object[] args, T& arg, int index) :1235
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.TryConvert<T>*/),
    };
    int index_ = *index;
    bool ret1;
    arg.Default(__type->U(0));

    if (uPtr(args)->Length() > index_)
    {
        if ((JSCallback__NumberConverter__TryConvert_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), arg, &ret1), ret1))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) [static] :1090
uDelegate* JSCallback::FromAction(uDelegate* action)
{
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure__Run_fn, JSCallback__ActionClosure::New1(action));
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) [static] :1095
uDelegate* JSCallback::FromAction1(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T>*/),
    };
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure1__Run_fn, (JSCallback__ActionClosure1*)JSCallback__ActionClosure1::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) [static] :1100
uDelegate* JSCallback::FromAction2(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T1, T2>*/),
    };
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure2__Run_fn, (JSCallback__ActionClosure2*)JSCallback__ActionClosure2::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) [static] :1105
uDelegate* JSCallback::FromFunc(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<TResult>*/),
    };
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure__Run_fn, (JSCallback__FuncClosure*)JSCallback__FuncClosure::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) [static] :1110
uDelegate* JSCallback::FromFunc1(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<T, TResult>*/),
    };
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure1__Run_fn, (JSCallback__FuncClosure1*)JSCallback__FuncClosure1::New1(__types[0], func));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class JSFileSource :990
// {
static void JSFileSource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::JSFileSource, _path), 0);
}

::g::Uno::UX::FileSource_type* JSFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JSFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Scripting.JSFileSource", options);
    type->fp_build_ = JSFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))JSFileSource__OpenRead_fn;
    return type;
}

// public JSFileSource(string path) :994
void JSFileSource__ctor_1_fn(JSFileSource* __this, uString* path)
{
    __this->ctor_1(path);
}

// public JSFileSource New(string path) :994
void JSFileSource__New1_fn(uString* path, JSFileSource** __retval)
{
    *__retval = JSFileSource::New1(path);
}

// public override sealed Uno.IO.Stream OpenRead() :999
void JSFileSource__OpenRead_fn(JSFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->_path), void();
}

// public JSFileSource(string path) [instance] :994
void JSFileSource::ctor_1(uString* path)
{
    ctor_(path);
    _path = path;
}

// public JSFileSource New(string path) [static] :994
JSFileSource* JSFileSource::New1(uString* path)
{
    JSFileSource* obj1 = (JSFileSource*)uNew(JSFileSource_typeof());
    obj1->ctor_1(path);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public static class Json :828
// {
static void Json_build(uType* type)
{
    ::STRINGS[36] = uString::Const("\\\"");
    ::STRINGS[37] = uString::Const("\\\\");
    ::STRINGS[38] = uString::Const("\\n");
    ::STRINGS[39] = uString::Const("Json.Stringify(): object can not contain cycles");
    ::STRINGS[40] = uString::Const("{");
    ::STRINGS[41] = uString::Const(",");
    ::STRINGS[42] = uString::Const(":");
    ::STRINGS[43] = uString::Const("}");
    ::STRINGS[44] = uString::Const("[");
    ::STRINGS[45] = uString::Const("]");
    ::STRINGS[46] = uString::Const("null");
    ::STRINGS[47] = uString::Const("true");
    ::STRINGS[48] = uString::Const("false");
    ::STRINGS[49] = uString::Const("\"");
    ::TYPES[54] = ::g::Uno::Collections::HashSet_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[55] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[56] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[57] = ::TYPES[31/*string*/]->Array();
    ::TYPES[58] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<string>*/, ::TYPES[31/*string*/], NULL);
    ::TYPES[59] = ::g::Uno::Array_typeof()->MakeMethod(3/*Sort<string>*/, ::TYPES[31/*string*/], NULL);
    ::TYPES[60] = ::g::Uno::Comparison_typeof()->MakeType(::TYPES[31/*string*/], NULL);
    ::TYPES[23] = ::g::Fuse::Scripting::Array_typeof();
}

uClassType* Json_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Json", options);
    type->fp_build_ = Json_build;
    return type;
}

// public static void Escape(string s, Uno.Text.StringBuilder sb) :901
void Json__Escape1_fn(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    Json::Escape1(s, sb);
}

// public static string Stringify(object value, [bool normalized]) :833
void Json__Stringify_fn(uObject* value, bool* normalized, uString** __retval)
{
    *__retval = Json::Stringify(value, *normalized);
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) :840
void Json__Stringify1_fn(uObject* value, bool* normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    Json::Stringify1(value, *normalized, sb, visitedSet);
}

// public static string ToLiteral(bool b) :949
void Json__ToLiteral_fn(bool* b, uString** __retval)
{
    *__retval = Json::ToLiteral(*b);
}

// public static string ToLiteral(double s) :942
void Json__ToLiteral1_fn(double* s, uString** __retval)
{
    *__retval = Json::ToLiteral1(*s);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) :934
void Json__ToLiteral3_fn(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    Json::ToLiteral3(s, sb);
}

// public static void Escape(string s, Uno.Text.StringBuilder sb) [static] :901
void Json::Escape1(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    for (int i = 0; i < uPtr(s)->Length(); i++)
        if (uPtr(s)->Item(i) == '"')
        {
            if (sb == NULL)
                sb = ::g::Uno::Text::StringBuilder::New1();

            uPtr(sb)->Append2(::STRINGS[36/*"\\\""*/]);
        }
        else if (uPtr(s)->Item(i) == '\\')
        {
            if (sb == NULL)
                sb = ::g::Uno::Text::StringBuilder::New1();

            uPtr(sb)->Append2(::STRINGS[37/*"\\\\"*/]);
        }
        else if (uPtr(s)->Item(i) == 10)
        {
            if (sb == NULL)
                sb = ::g::Uno::Text::StringBuilder::New1();

            uPtr(sb)->Append2(::STRINGS[38/*"\\n"*/]);
        }
        else
            uPtr(sb)->Append(uPtr(s)->Item(i));
}

// public static string Stringify(object value, [bool normalized]) [static] :833
uString* Json::Stringify(uObject* value, bool normalized)
{
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    Json::Stringify1(value, normalized, sb, (::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[54/*Uno.Collections.HashSet<object>*/]));
    return sb->ToString();
}

// private static void Stringify(object value, bool normalized, Uno.Text.StringBuilder sb, Uno.Collections.HashSet<object> visitedSet) [static] :840
void Json::Stringify1(uObject* value, bool normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet)
{
    bool ret1;
    bool ret2;
    bool ret3;
    bool ret4;

    if (uIs(value, ::TYPES[31/*string*/]))
        Json::ToLiteral3(uCast<uString*>(value, ::TYPES[31/*string*/]), sb);
    else if (uIs(value, ::TYPES[55/*double*/]))
        uPtr(sb)->Append2(Json::ToLiteral1(uUnbox<double>(::TYPES[55/*double*/], value)));
    else if (uIs(value, ::TYPES[38/*float*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<float>(::TYPES[38/*float*/], value)));
    else if (uIs(value, ::TYPES[39/*int*/]))
        uPtr(sb)->Append2(Json::ToLiteral1((double)uUnbox<int>(::TYPES[39/*int*/], value)));
    else if (uIs(value, ::TYPES[56/*bool*/]))
        uPtr(sb)->Append2(Json::ToLiteral(uUnbox<bool>(::TYPES[56/*bool*/], value)));
    else if (uIs(value, ::TYPES[12/*Fuse.Scripting.Object*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret1), ret1))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret2);
        ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(value, ::TYPES[12/*Fuse.Scripting.Object*/]);
        uPtr(sb)->Append2(::STRINGS[40/*"{"*/]);
        uArray* keys = uArray::New(::TYPES[57/*string[]*/], uPtr(uPtr(obj)->Keys())->Length());
        ::g::Uno::Array::Copy1(::TYPES[58/*Uno.Array.Copy<string>*/], obj->Keys(), keys, uPtr(obj->Keys())->Length());

        if (normalized)
            ::g::Uno::Array::Sort1(::TYPES[59/*Uno.Array.Sort<string>*/], keys, uDelegate::New(::TYPES[60/*Uno.Comparison<string>*/], (void*)::g::Uno::String__Compare_fn));

        for (int i = 0; i < keys->Length(); i++)
        {
            if (i > 0)
                uPtr(sb)->Append2(::STRINGS[41/*","*/]);

            Json::ToLiteral3(uPtr(keys)->Strong<uString*>(i), sb);
            uPtr(sb)->Append2(::STRINGS[42/*":"*/]);
            Json::Stringify1(uPtr(obj)->Item(keys->Strong<uString*>(i)), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[43/*"}"*/]);
    }
    else if (uIs(value, ::TYPES[23/*Fuse.Scripting.Array*/]))
    {
        if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(visitedSet), value, &ret3), ret3))
            U_THROW(::g::Uno::Exception::New2(::STRINGS[39/*"Json.String...*/]));

        ::g::Uno::Collections::HashSet__Add_fn(uPtr(visitedSet), value, &ret4);
        ::g::Fuse::Scripting::Array* arr = uAs< ::g::Fuse::Scripting::Array*>(value, ::TYPES[23/*Fuse.Scripting.Array*/]);
        uPtr(sb)->Append2(::STRINGS[44/*"["*/]);

        for (int i1 = 0; i1 < uPtr(arr)->Length(); i1++)
        {
            if (i1 > 0)
                uPtr(sb)->Append2(::STRINGS[41/*","*/]);

            Json::Stringify1(uPtr(arr)->Item(i1), normalized, sb, visitedSet);
        }

        sb->Append2(::STRINGS[45/*"]"*/]);
    }
    else
        uPtr(sb)->Append2(::STRINGS[46/*"null"*/]);
}

// public static string ToLiteral(bool b) [static] :949
uString* Json::ToLiteral(bool b)
{
    if (b)
        return ::STRINGS[47/*"true"*/];
    else
        return ::STRINGS[48/*"false"*/];
}

// public static string ToLiteral(double s) [static] :942
uString* Json::ToLiteral1(double s)
{
    if ((double)(int)s == s)
        return ::g::Uno::Int::ToString((int)s, ::TYPES[39/*int*/]);

    return ::g::Uno::Double::ToString(s, ::TYPES[55/*double*/]);
}

// public static void ToLiteral(string s, Uno.Text.StringBuilder sb) [static] :934
void Json::ToLiteral3(uString* s, ::g::Uno::Text::StringBuilder* sb)
{
    uPtr(sb)->Append2(::STRINGS[49/*"\""*/]);
    Json::Escape1(s, sb);
    sb->Append2(::STRINGS[49/*"\""*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :2017
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[61] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ObservableProperty_type);
    type = (::g::Fuse::Scripting::ObservableProperty_type*)uClassType::New("Fuse.Scripting.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Scripting::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) :2019
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_1(c, obj, p);
}

// private object Get(object[] args) :2024
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) :2019
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(c, obj, p);
}

// public LazyObservableProperty(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :2019
void LazyObservableProperty::ctor_1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ctor_(c, obj, p);
    uPtr(c)->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[61/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :2024
uObject* LazyObservableProperty::Get(uArray* args)
{
    return uPtr(_context)->Unwrap(GetObservable());
}

// public LazyObservableProperty New(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :2019
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(c, obj, p);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ListMirror :2598
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(ListMirror_type, interface0));
    type->SetFields(1);
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ValueMirror_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Scripting.ListMirror", options);
    type->fp_build_ = ListMirror_build;
    return type;
}

// protected ListMirror(object raw) :2603
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// protected ListMirror(object raw) [instance] :2603
void ListMirror::ctor_1(uObject* raw)
{
    ctor_(raw);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public static class Marshal :1005
// {
// static Marshal() :1007
static void Marshal__cctor__fn(uType* __type)
{
    Marshal::_converters_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[62/*Uno.Collections.List<Fuse.Scripting.Marshal.IConverter>*/]));
    Marshal::AddConverter((uObject*)::g::Fuse::Scripting::FileSourceConverter::New1());
}

static void Marshal_build(uType* type)
{
    ::STRINGS[50] = uString::Const("Unable to convert ");
    ::STRINGS[51] = uString::Const(" to bool");
    ::STRINGS[52] = uString::Const("#");
    ::STRINGS[53] = uString::Const(" to float4");
    ::STRINGS[54] = uString::Const("Unable to parse selector value: ");
    ::STRINGS[55] = uString::Const("%");
    ::STRINGS[56] = uString::Const("px");
    ::STRINGS[57] = uString::Const("pt");
    ::STRINGS[58] = uString::Const("Unable to parse size value: ");
    ::STRINGS[59] = uString::Const("Unable to parse size vector: ");
    ::STRINGS[60] = uString::Const("Unable to convert '");
    ::STRINGS[61] = uString::Const("' to type ");
    ::TYPES[62] = ::g::Uno::Collections::List_typeof()->MakeType(Marshal__IConverter_typeof(), NULL);
    ::TYPES[63] = Marshal__IConverter_typeof();
    ::TYPES[56] = ::g::Uno::Bool_typeof();
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[55] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[64] = ::g::Fuse::Scripting::IArray_typeof();
    ::TYPES[61] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[65] = ::g::Uno::UX::Size_typeof();
    ::TYPES[66] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[67] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->MethodTypes[0]->SetPrecalc(
        type->MakeMethod(1/*TryConvertTo<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::TYPES[62/*Uno.Collections.List<Fuse.Scripting.Marshal.IConverter>*/], (uintptr_t)&::g::Fuse::Scripting::Marshal::_converters_, uFieldFlagsStatic);
}

uClassType* Marshal_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Marshal", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 0);
    type->fp_build_ = Marshal_build;
    type->fp_cctor_ = Marshal__cctor__fn;
    return type;
}

// public static void AddConverter(Fuse.Scripting.Marshal.IConverter conv) :1167
void Marshal__AddConverter_fn(uObject* conv)
{
    Marshal::AddConverter(conv);
}

// public static bool CanConvertClass(Uno.Type t) :1213
void Marshal__CanConvertClass_fn(uType* t, bool* __retval)
{
    *__retval = Marshal::CanConvertClass(t);
}

// public static bool ToBool(object obj) :1129
void Marshal__ToBool_fn(uObject* obj, bool* __retval)
{
    *__retval = Marshal::ToBool(obj);
}

// public static double ToDouble(object o) :1012
void Marshal__ToDouble_fn(uObject* o, double* __retval)
{
    *__retval = Marshal::ToDouble(o);
}

// public static float ToFloat(object o) :1034
void Marshal__ToFloat_fn(uObject* o, float* __retval)
{
    *__retval = Marshal::ToFloat(o);
}

// public static float4 ToFloat4(Fuse.Scripting.IArray values) :1102
void Marshal__ToFloat4_fn(uObject* values, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat4(values);
}

// public static float4 ToFloat4(object o) :1112
void Marshal__ToFloat41_fn(uObject* o, ::g::Uno::Float4* __retval)
{
    *__retval = Marshal::ToFloat41(o);
}

// public static int ToInt(object o) :1029
void Marshal__ToInt_fn(uObject* o, int* __retval)
{
    *__retval = Marshal::ToInt(o);
}

// public static Uno.UX.Selector ToSelector(object o) :1039
void Marshal__ToSelector_fn(uObject* o, ::g::Uno::UX::Selector* __retval)
{
    *__retval = Marshal::ToSelector(o);
}

// public static Uno.UX.Size ToSize(object o) :1053
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval)
{
    *__retval = Marshal::ToSize(o);
}

// public static Uno.UX.Size2 ToSize2(object o) :1072
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval)
{
    *__retval = Marshal::ToSize2(o);
}

// public static T ToType<T>(object o) :1200
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    __type->Base->Init();
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;

    if ((Marshal__TryConvertTo1_fn(__types[1], o, &value, &ret4), ret4))
        return __retval.Store(value), void();
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[60/*"Unable to c...*/], o), ::STRINGS[61/*"' to type "*/]), __types[0])));
}

// public static object TryConvertTo(Uno.Type t, object o) :1172
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** __retval)
{
    *__retval = Marshal::TryConvertTo(t, o);
}

// public static bool TryConvertTo<T>(object obj, T& value) :1145
void Marshal__TryConvertTo1_fn(uType* __type, uObject* obj, uTRef value, bool* __retval)
{
    __type->Base->Init();
    uObject* res = Marshal::TryConvertTo(__type->U(0), obj);

    if (res != NULL)
    {
        value.Store(__type->U(0), uUnboxAny(__type->U(0), res));
        return *__retval = true, void();
    }
    else
    {
        value.Default(__type->U(0));
        return *__retval = false, void();
    }
}

uSStrong< ::g::Uno::Collections::List*> Marshal::_converters_;

// public static void AddConverter(Fuse.Scripting.Marshal.IConverter conv) [static] :1167
void Marshal::AddConverter(uObject* conv)
{
    Marshal_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Marshal::_converters()), conv);
}

// public static bool CanConvertClass(Uno.Type t) [static] :1213
bool Marshal::CanConvertClass(uType* t)
{
    Marshal_typeof()->Init();
    uObject* ret3;

    for (int i = 0; i < uPtr(Marshal::_converters())->Count(); i++)
        if (Marshal__IConverter::CanConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters()), uCRef<int>(i), &ret3), ret3)), ::TYPES[63/*Fuse.Scripting.Marshal.IConverter*/]), t))
            return true;

    return false;
}

// public static bool ToBool(object obj) [static] :1129
bool Marshal::ToBool(uObject* obj)
{
    Marshal_typeof()->Init();

    if (uIs(obj, ::TYPES[56/*bool*/]))
        return uUnbox<bool>(::TYPES[56/*bool*/], obj);
    else if (uIs(obj, ::TYPES[31/*string*/]))
        return ::g::Uno::Bool::Parse(uCast<uString*>(obj, ::TYPES[31/*string*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[50/*"Unable to c...*/], obj), ::STRINGS[51/*" to bool"*/])));
}

// public static double ToDouble(object o) [static] :1012
double Marshal::ToDouble(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[55/*double*/]))
        return uUnbox<double>(::TYPES[55/*double*/], o);
    else if (uIs(o, ::TYPES[38/*float*/]))
        return (double)uUnbox<float>(::TYPES[38/*float*/], o);
    else if (uIs(o, ::TYPES[39/*int*/]))
        return (double)uUnbox<int>(::TYPES[39/*int*/], o);
    else if (o == NULL)
        return 0.0;
    else if (uIs(o, ::TYPES[31/*string*/]))
        return ::g::Uno::Double::Parse(uCast<uString*>(o, ::TYPES[31/*string*/]));
    else
        return 0.0;
}

// public static float ToFloat(object o) [static] :1034
float Marshal::ToFloat(uObject* o)
{
    Marshal_typeof()->Init();
    return (float)Marshal::ToDouble(o);
}

// public static float4 ToFloat4(Fuse.Scripting.IArray values) [static] :1102
::g::Uno::Float4 Marshal::ToFloat4(uObject* values)
{
    Marshal_typeof()->Init();
    float r = (::g::Fuse::Scripting::IArray::Length(uInterface(uPtr(values), ::TYPES[64/*Fuse.Scripting.IArray*/])) > 0) ? Marshal::ToFloat(::g::Fuse::Scripting::IArray::Item(uInterface(uPtr(values), ::TYPES[64/*Fuse.Scripting.IArray*/]), 0)) : 0.0f;
    float g = (::g::Fuse::Scripting::IArray::Length(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/])) > 1) ? Marshal::ToFloat(::g::Fuse::Scripting::IArray::Item(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/]), 1)) : r;
    float b = (::g::Fuse::Scripting::IArray::Length(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/])) > 2) ? Marshal::ToFloat(::g::Fuse::Scripting::IArray::Item(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/]), 2)) : r;
    float a = (::g::Fuse::Scripting::IArray::Length(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/])) > 3) ? Marshal::ToFloat(::g::Fuse::Scripting::IArray::Item(uInterface(values, ::TYPES[64/*Fuse.Scripting.IArray*/]), 3)) : 1.0f;
    return ::g::Uno::Float4__New2(r, g, b, a);
}

// public static float4 ToFloat4(object o) [static] :1112
::g::Uno::Float4 Marshal::ToFloat41(uObject* o)
{
    Marshal_typeof()->Init();
    uObject* aa = uAs<uObject*>(o, ::TYPES[64/*Fuse.Scripting.IArray*/]);

    if (aa != NULL)
        return Marshal::ToFloat4(aa);

    if (uIs(o, ::TYPES[31/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[31/*string*/]);

        if (::g::Uno::String::StartsWith(uPtr(s), ::STRINGS[52/*"#"*/]))
            return ::g::Uno::Color::FromHex(s);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[50/*"Unable to c...*/], o), ::STRINGS[53/*" to float4"*/])));
}

// public static int ToInt(object o) [static] :1029
int Marshal::ToInt(uObject* o)
{
    Marshal_typeof()->Init();
    return (int)Marshal::ToDouble(o);
}

// public static Uno.UX.Selector ToSelector(object o) [static] :1039
::g::Uno::UX::Selector Marshal::ToSelector(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[61/*Uno.UX.Selector*/]))
        return uUnbox< ::g::Uno::UX::Selector>(::TYPES[61/*Uno.UX.Selector*/], o);
    else if (uIs(o, ::TYPES[31/*string*/]))
        return ::g::Uno::UX::Selector__op_Implicit(uCast<uString*>(o, ::TYPES[31/*string*/]));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[54/*"Unable to p...*/], o)));
}

// public static Uno.UX.Size ToSize(object o) [static] :1053
::g::Uno::UX::Size Marshal::ToSize(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[65/*Uno.UX.Size*/]))
        return uUnbox< ::g::Uno::UX::Size>(::TYPES[65/*Uno.UX.Size*/], o);

    if (uIs(o, ::TYPES[31/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[31/*string*/]);

        if (::g::Uno::String::IsNullOrEmpty(s))
            return ::g::Uno::UX::Size__Auto();
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[55/*"%"*/]))
            return ::g::Uno::UX::Size__Percent(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 1)));
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[56/*"px"*/]))
            return ::g::Uno::UX::Size__Pixels(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2)));
        else if (::g::Uno::String::EndsWith(uPtr(s), ::STRINGS[57/*"pt"*/]))
            return ::g::Uno::UX::Size__Points(::g::Uno::Float::Parse(::g::Uno::String::Substring1(uPtr(s), 0, uPtr(s)->Length() - 2)));
        else
            return ::g::Uno::UX::Size__Points(::g::Uno::Float::Parse(s));
    }
    else
        return ::g::Uno::UX::Size__Points((float)Marshal::ToDouble(o));

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[58/*"Unable to p...*/], o)));
}

// public static Uno.UX.Size2 ToSize2(object o) [static] :1072
::g::Uno::UX::Size2 Marshal::ToSize2(uObject* o)
{
    Marshal_typeof()->Init();

    if (uIs(o, ::TYPES[66/*Uno.UX.Size2*/]))
        return uUnbox< ::g::Uno::UX::Size2>(::TYPES[66/*Uno.UX.Size2*/], o);

    if (uIs(o, ::TYPES[31/*string*/]))
    {
        uString* s = uCast<uString*>(o, ::TYPES[31/*string*/]);

        if (::g::Uno::String::IsNullOrEmpty(s))
            return ::g::Uno::UX::Size2__Auto();

        uArray* parts = ::g::Uno::String::Split(uPtr(s), uArray::Init<int>(::TYPES[67/*char[]*/], 1, ','));

        if (uPtr(parts)->Length() == 1)
        {
            ::g::Uno::UX::Size m = Marshal::ToSize(::g::Uno::String::Trim(uPtr(uPtr(parts)->Strong<uString*>(0))));
            return ::g::Uno::UX::Size2__New1(m, m);
        }

        if (uPtr(parts)->Length() == 2)
        {
            ::g::Uno::UX::Size x = Marshal::ToSize(::g::Uno::String::Trim(uPtr(uPtr(parts)->Strong<uString*>(0))));
            ::g::Uno::UX::Size y = Marshal::ToSize(::g::Uno::String::Trim(uPtr(parts->Strong<uString*>(1))));
            return ::g::Uno::UX::Size2__New1(x, y);
        }
    }

    if (uIs(o, ::TYPES[64/*Fuse.Scripting.IArray*/]))
    {
        uObject* a = (uObject*)o;
        return ::g::Uno::UX::Size2__New1(Marshal::ToSize(::g::Fuse::Scripting::IArray::Item(uInterface(uPtr(a), ::TYPES[64/*Fuse.Scripting.IArray*/]), 0)), Marshal::ToSize(::g::Fuse::Scripting::IArray::Item(uInterface(uPtr(a), ::TYPES[64/*Fuse.Scripting.IArray*/]), 1)));
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[59/*"Unable to p...*/], o)));
}

// public static object TryConvertTo(Uno.Type t, object o) [static] :1172
uObject* Marshal::TryConvertTo(uType* t, uObject* o)
{
    Marshal_typeof()->Init();
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    uObject* ret5;

    if (o == NULL)
        return NULL;
    else if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Value_typeof()))
        return ::g::Uno::UX::Value::ToAbstract(o);
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[56/*bool*/]))
        return uBox(::TYPES[56/*bool*/], Marshal::ToBool(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[38/*float*/]))
        return uBox(::TYPES[38/*float*/], Marshal::ToFloat(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[55/*double*/]))
        return uBox(::TYPES[55/*double*/], Marshal::ToDouble(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[39/*int*/]))
        return uBox<int>(::TYPES[39/*int*/], Marshal::ToInt(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[31/*string*/]))
        return ::g::Uno::Object::ToString(uPtr(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[61/*Uno.UX.Selector*/]))
        return uBox(::TYPES[61/*Uno.UX.Selector*/], Marshal::ToSelector(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[34/*float4*/]))
        return uBox(::TYPES[34/*float4*/], Marshal::ToFloat41(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[33/*float3*/]))
        return uBox(::TYPES[33/*float3*/], (ind1 = Marshal::ToFloat41(o), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[32/*float2*/]))
        return uBox(::TYPES[32/*float2*/], (ind2 = Marshal::ToFloat41(o), ::g::Uno::Float2__New2(ind2.X, ind2.Y)));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[65/*Uno.UX.Size*/]))
        return uBox(::TYPES[65/*Uno.UX.Size*/], Marshal::ToSize(o));
    else if (::g::Uno::Type::op_Equality(t, ::TYPES[66/*Uno.UX.Size2*/]))
        return uBox(::TYPES[66/*Uno.UX.Size2*/], Marshal::ToSize2(o));
    else if (::g::Uno::Type::IsEnum(uPtr(t)) && uIs(o, ::TYPES[31/*string*/]))
        return ::g::Uno::Enum::Parse(t, uCast<uString*>(o, ::TYPES[31/*string*/]));
    else

        for (int i = 0; i < uPtr(Marshal::_converters())->Count(); i++)
        {
            uObject* res = Marshal__IConverter::TryConvert(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Marshal::_converters()), uCRef<int>(i), &ret5), ret5)), ::TYPES[63/*Fuse.Scripting.Marshal.IConverter*/]), t, o);

            if (res != NULL)
                return res;
        }

    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Context.MethodClosure :389
// {
// static MethodClosure() :389
static void Context__MethodClosure__cctor__fn(uType* __type)
{
    Context__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[7/*object[]*/], 0);
}

static void Context__MethodClosure_build(uType* type)
{
    ::STRINGS[25] = uString::Const(" (ScriptMethod)");
    ::STRINGS[62] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[63] = uString::Const(" = function() { callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::Context__MethodClosure, _context), 0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(::g::Fuse::Scripting::Context__MethodClosure, _m), 0,
        ::TYPES[7/*object[]*/], (uintptr_t)&::g::Fuse::Scripting::Context__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* Context__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Context__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Context.MethodClosure", options);
    type->fp_build_ = Context__MethodClosure_build;
    type->fp_cctor_ = Context__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.Context context) :393
void Context__MethodClosure__ctor__fn(Context__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(cl, m, context);
}

// private object Callback(object[] args) :406
void Context__MethodClosure__Callback_fn(Context__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :414
void Context__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = Context__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.Context context) :393
void Context__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context, Context__MethodClosure** __retval)
{
    *__retval = Context__MethodClosure::New1(cl, m, context);
}

uSStrong<uArray*> Context__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.Context context) [instance] :393
void Context__MethodClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context)
{
    _m = m;
    _context = context;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(_context)->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[25/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[62/*"(function (...*/], uPtr(m)->Name), ::STRINGS[63/*" = function...*/])), ::TYPES[22/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, cl, uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)Context__MethodClosure__Callback_fn, this)));
}

// private object Callback(object[] args) [instance] :406
uObject* Context__MethodClosure::Callback(uArray* args)
{
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[27/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = Context__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[23/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_context)->Unwrap(uPtr(_m)->Call(_context, self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :414
uArray* Context__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    Context__MethodClosure_typeof()->Init();
    uArray* res = uArray::New(::TYPES[7/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Scripting::Context::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.Context context) [static] :393
Context__MethodClosure* Context__MethodClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::Context* context)
{
    Context__MethodClosure* obj1 = (Context__MethodClosure*)uNew(Context__MethodClosure_typeof());
    obj1->ctor_(cl, m, context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Module :1233
// {
static void Module_build(uType* type)
{
    ::STRINGS[64] = uString::Const("exports");
    ::STRINGS[65] = uString::Const("disposed");
    ::STRINGS[66] = uString::Const("id");
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[68] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Module_type, interface0));
    type->SetFields(0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Scripting::Module, _evaluated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Module, _isEvaluated), 0);
}

Module_type* Module_typeof()
{
    static uSStrong<Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Module);
    options.TypeSize = sizeof(Module_type);
    type = (Module_type*)uClassType::New("Fuse.Scripting.Module", options);
    type->fp_build_ = Module_build;
    type->fp_CreateExportsObject = Module__CreateExportsObject_fn;
    type->fp_GetFile = Module__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Module__Dispose_fn;
    return type;
}

// protected generated Module() :1233
void Module__ctor__fn(Module* __this)
{
    __this->ctor_();
}

// private virtual object CreateExportsObject(Fuse.Scripting.Context c) :1302
void Module__CreateExportsObject_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    return *__retval = uPtr(c)->NewObject(), void();
}

// public void Dispose() :1307
void Module__Dispose_fn(Module* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) :1241
void Module__Evaluate1_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->Evaluate1(c, id);
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) :1235
void Module__EvaluateExports_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, uObject** __retval)
{
    *__retval = __this->EvaluateExports(c, id);
}

// public virtual Uno.UX.FileSource GetFile() :1297
void Module__GetFile_fn(Module* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = NULL, void();
}

// protected bool get_IsEvaluated() :1267
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval)
{
    *__retval = __this->IsEvaluated();
}

// private void MarkEvaluated() :1283
void Module__MarkEvaluated_fn(Module* __this)
{
    __this->MarkEvaluated();
}

// protected generated Module() [instance] :1233
void Module::ctor_()
{
}

// public void Dispose() [instance] :1307
void Module::Dispose()
{
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) [instance] :1241
::g::Fuse::Scripting::ModuleResult* Module::Evaluate1(::g::Fuse::Scripting::Context* c, uString* id)
{
    ::g::Fuse::Scripting::ModuleResult* mr = uPtr(c)->TryGetGlobalModuleResult(id);

    if (mr != NULL)
        return mr;

    ::g::Fuse::Scripting::Object* module = c->NewObject();
    uPtr(module)->Item(::STRINGS[64/*"exports"*/], CreateExportsObject(c));
    module->Item(::STRINGS[65/*"disposed"*/], c->NewArray(uArray::New(::TYPES[7/*object[]*/], 0)));
    ::g::Fuse::Scripting::ModuleResult* result = ::g::Fuse::Scripting::ModuleResult::New1(c, id, this, module);

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(c)->RegisterGlobalModuleResult(result);

    try
    {
        Evaluate(c, result);
        MarkEvaluated();
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[68/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(result)->Error(e);
        }
        else throw __t;
    }

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(module)->Item(::STRINGS[66/*"id"*/], id);

    return result;
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) [instance] :1235
uObject* Module::EvaluateExports(::g::Fuse::Scripting::Context* c, uString* id)
{
    uObject* r = uPtr(uPtr(Evaluate1(c, id))->Object)->Item(::STRINGS[64/*"exports"*/]);
    return r;
}

// protected bool get_IsEvaluated() [instance] :1267
bool Module::IsEvaluated()
{
    return _isEvaluated;
}

// private void MarkEvaluated() [instance] :1283
void Module::MarkEvaluated()
{
    _isEvaluated = true;
    uDelegate* handler = _evaluated;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
        _evaluated = NULL;
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ModuleResult :1323
// {
static void ModuleResult_build(uType* type)
{
    ::STRINGS[65] = uString::Const("disposed");
    ::STRINGS[67] = uString::Const("(unknown module)");
    ::TYPES[69] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[70] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, _fileListening), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, _globalKeyListening), 0,
        ::TYPES[69/*Uno.Collections.List<Uno.Action>*/], offsetof(::g::Fuse::Scripting::ModuleResult, _invalidateCallbacks), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Context), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Id), 0,
        ::g::Fuse::Scripting::Module_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Module), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, Object), 0,
        ::g::Fuse::Scripting::ScriptException_typeof(), offsetof(::g::Fuse::Scripting::ModuleResult, _Error), 0);
}

uType* ModuleResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(ModuleResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ModuleResult", options);
    type->fp_build_ = ModuleResult_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ModuleResult__ToString_fn;
    return type;
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :1336
void ModuleResult__ctor__fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(context, id, mod, obj);
}

// public void AddDependency(Uno.Action invalidateCallback) :1368
void ModuleResult__AddDependency_fn(ModuleResult* __this, uDelegate* invalidateCallback)
{
    __this->AddDependency(invalidateCallback);
}

// public void Dispose() :1401
void ModuleResult__Dispose_fn(ModuleResult* __this)
{
    __this->Dispose();
}

// public generated Fuse.Scripting.ScriptException get_Error() :1331
void ModuleResult__get_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException** __retval)
{
    *__retval = __this->Error();
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) :1331
void ModuleResult__set_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException* value)
{
    __this->Error(value);
}

// public void Invalidate() :1388
void ModuleResult__Invalidate_fn(ModuleResult* __this)
{
    __this->Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :1336
void ModuleResult__New1_fn(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj, ModuleResult** __retval)
{
    *__retval = ModuleResult::New1(context, id, mod, obj);
}

// private void OnDataChanged(object sender, Uno.EventArgs args) :1373
void ModuleResult__OnDataChanged_fn(ModuleResult* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataChanged(sender, args);
}

// private void OnDisposed() :1420
void ModuleResult__OnDisposed_fn(ModuleResult* __this)
{
    __this->OnDisposed();
}

// private void OnGlobalKeyChanged(string key) :1361
void ModuleResult__OnGlobalKeyChanged_fn(ModuleResult* __this, uString* key)
{
    __this->OnGlobalKeyChanged(key);
}

// public override sealed string ToString() :1378
void ModuleResult__ToString_fn(ModuleResult* __this, uString** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->Id, NULL))
        return *__retval = __this->Id, void();

    if (uPtr(__this->Module)->GetFile() != NULL)
        return *__retval = uPtr(uPtr(__this->Module)->GetFile())->Name, void();

    return *__retval = ::STRINGS[67/*"(unknown mo...*/], void();
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [instance] :1336
void ModuleResult::ctor_(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    _invalidateCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[69/*Uno.Collections.List<Uno.Action>*/]));
    Context = context;
    Module = mod;
    Object = obj;
    Id = id;

    if (::g::Uno::String::op_Inequality(Id, NULL))
    {
        _globalKeyListening = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[70/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
    }

    if (uPtr(Module)->GetFile() != NULL)
    {
        uPtr(uPtr(Module)->GetFile())->add_DataChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = true;
    }
}

// public void AddDependency(Uno.Action invalidateCallback) [instance] :1368
void ModuleResult::AddDependency(uDelegate* invalidateCallback)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_invalidateCallbacks), invalidateCallback);
}

// public void Dispose() [instance] :1401
void ModuleResult::Dispose()
{
    if (_fileListening)
    {
        uPtr(uPtr(Module)->GetFile())->remove_DataChanged(uDelegate::New(::TYPES[71/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = false;
    }

    if (_globalKeyListening)
    {
        ::g::Uno::UX::Resource::RemoveGlobalKeyListener(uDelegate::New(::TYPES[70/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
        _globalKeyListening = false;
    }

    if (::g::Uno::String::op_Inequality(Id, NULL))
        uPtr(Context)->DeleteGlobalModuleResult(this);

    uPtr(Context)->Invoke(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ModuleResult__OnDisposed_fn, this));
}

// public generated Fuse.Scripting.ScriptException get_Error() [instance] :1331
::g::Fuse::Scripting::ScriptException* ModuleResult::Error()
{
    return _Error;
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) [instance] :1331
void ModuleResult::Error(::g::Fuse::Scripting::ScriptException* value)
{
    _Error = value;
}

// public void Invalidate() [instance] :1388
void ModuleResult::Invalidate()
{
    Dispose();
    uArray* callbacks = (uArray*)uPtr(_invalidateCallbacks)->ToArray();
    uPtr(_invalidateCallbacks)->Clear();

    for (int index2 = 0, length3 = uPtr(callbacks)->Length(); index2 < length3; ++index2)
    {
        uDelegate* c = uPtr(callbacks)->Strong<uDelegate*>(index2);
        uPtr(c)->InvokeVoid();
    }
}

// private void OnDataChanged(object sender, Uno.EventArgs args) [instance] :1373
void ModuleResult::OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Invalidate();
}

// private void OnDisposed() [instance] :1420
void ModuleResult::OnDisposed()
{
    if (uPtr(Object)->ContainsKey(::STRINGS[65/*"disposed"*/]))
    {
        ::g::Fuse::Scripting::Array* disposed = uAs< ::g::Fuse::Scripting::Array*>(uPtr(Object)->Item(::STRINGS[65/*"disposed"*/]), ::TYPES[23/*Fuse.Scripting.Array*/]);

        if (disposed != NULL)

            for (int i = 0; i < uPtr(disposed)->Length(); i++)
            {
                ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(disposed)->Item(i), ::TYPES[22/*Fuse.Scripting.Function*/]);

                if (func != NULL)
                    uPtr(func)->Call(uArray::New(::TYPES[7/*object[]*/], 0));
            }
    }
}

// private void OnGlobalKeyChanged(string key) [instance] :1361
void ModuleResult::OnGlobalKeyChanged(uString* key)
{
    if (::g::Uno::String::op_Equality(key, Id))
        Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [static] :1336
ModuleResult* ModuleResult::New1(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    ModuleResult* obj4 = (ModuleResult*)uNew(ModuleResult_typeof());
    obj4->ctor_(context, id, mod, obj);
    return obj4;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :915
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public sealed class NativeEvent :964
// {
static void NativeEvent_build(uType* type)
{
    ::TYPES[72] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array(), NULL);
    ::TYPES[73] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1/*Invoke1<object[], object>*/, uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[74] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof()->Array(), uObject_typeof(), NULL);
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL));
    type->SetFields(8,
        ::TYPES[72/*Uno.Collections.Queue<object[]>*/], offsetof(::g::Fuse::Scripting::NativeEvent, _eventArgsQueue), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _jsFunction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeEvent, _queueEventsBeforeEvaluation), 0);
}

::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeProperty_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeProperty_type);
    type = (::g::Fuse::Scripting::NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->fp_build_ = NativeEvent_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::NativeProperty*, uTRef))NativeEvent__GetProperty_fn;
    type->fp_SetProperty1 = (void(*)(::g::Fuse::Scripting::NativeProperty*, void*))NativeEvent__SetProperty1_fn;
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :970
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// private void DispatchQueue() :987
void NativeEvent__DispatchQueue_fn(NativeEvent* __this)
{
    __this->DispatchQueue();
}

// protected override sealed Fuse.Scripting.Function GetProperty() :982
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = __this->_jsFunction, void();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :970
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// internal object RaiseSync(object[] args) :1001
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->RaiseSync(args);
}

// protected override sealed void SetProperty(Fuse.Scripting.Function function) :976
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function)
{
    __this->_jsFunction = function;
    __this->DispatchQueue();
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :970
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[72/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// private void DispatchQueue() [instance] :987
void NativeEvent::DispatchQueue()
{
    uArray* ret2;

    while ((uPtr(_eventArgsQueue)->Count() > 0) && (_jsFunction != NULL))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[73/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[74/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_eventArgsQueue), &ret2), ret2));
}

// internal object RaiseSync(object[] args) [instance] :1001
uObject* NativeEvent::RaiseSync(uArray* args)
{
    if (_jsFunction != NULL)
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[73/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[74/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), args);

    return NULL;
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :970
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public class NativeEventEmitterModule :431
// {
static void NativeEventEmitterModule_build(uType* type)
{
    ::STRINGS[68] = uString::Const("removeAllListeners");
    ::TYPES[75] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL);
    ::TYPES[76] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL), NULL);
    ::TYPES[77] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[78] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2/*Invoke2<Fuse.Scripting.Context, Fuse.Scripting.Object>*/, ::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[79] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[80] = ::g::Uno::Tuple_typeof()->MakeMethod(0/*Create<object, Fuse.Scripting.Callback>*/, uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL);
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[5] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[81] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[42/*Fuse.Scripting.Callback*/], NULL), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _context), 0,
        ::TYPES[7/*object[]*/], offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _eventNames), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _initialized), 0,
        ::TYPES[75/*Uno.Collections.List<Uno.Tuple<object, Fuse.Scripting.Callback>>*/], offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _listeningCallbacks), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _mutex), 0,
        ::TYPES[76/*Uno.Collections.Queue<Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object>>*/], offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _queuedEvents), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _queueEventsBeforeInit), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule, _this), 0);
}

::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeEventEmitterModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Scripting.NativeEventEmitterModule", options);
    type->fp_build_ = NativeEventEmitterModule_build;
    type->fp_CreateExportsObject = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**))NativeEventEmitterModule__CreateExportsObject_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) :447
void NativeEventEmitterModule__ctor_2_fn(NativeEventEmitterModule* __this, bool* queueEventsBeforeInit, uArray* eventNames)
{
    __this->ctor_2(*queueEventsBeforeInit, eventNames);
}

// private override sealed object CreateExportsObject(Fuse.Scripting.Context c) :477
void NativeEventEmitterModule__CreateExportsObject_fn(NativeEventEmitterModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    __this->_context = c;
    __this->_this = uPtr(::g::Fuse::Scripting::EventEmitterModule::GetConstructor(__this->_context))->Construct(__this->_eventNames);
    ::g::Fuse::Scripting::AppInitialized::On(c, uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, __this));
    return *__retval = __this->_this, void();
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) :549
void NativeEventEmitterModule__Dispatch_fn(NativeEventEmitterModule* __this, uDelegate* action, bool* alwaysQueueEventBeforeInit)
{
    __this->Dispatch(action, *alwaysQueueEventBeforeInit);
}

// protected void Emit(object[] args) :503
void NativeEventEmitterModule__Emit_fn(NativeEventEmitterModule* __this, uArray* args)
{
    __this->Emit(args);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) :578
void NativeEventEmitterModule__On_fn(NativeEventEmitterModule* __this, uObject* eventName, uDelegate* listener)
{
    __this->On(eventName, listener);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) :569
void NativeEventEmitterModule__On1_fn(NativeEventEmitterModule* __this, uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    __this->On1(eventName, nativeEvent);
}

// private void OnAppInitialized() :487
void NativeEventEmitterModule__OnAppInitialized_fn(NativeEventEmitterModule* __this)
{
    __this->OnAppInitialized();
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) :455
void NativeEventEmitterModule__ResetListeners_fn(NativeEventEmitterModule* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->ResetListeners(sender, eventArgs);
}

// private void ResetListenersJS() :467
void NativeEventEmitterModule__ResetListenersJS_fn(NativeEventEmitterModule* __this)
{
    __this->ResetListenersJS();
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) [instance] :447
void NativeEventEmitterModule::ctor_2(bool queueEventsBeforeInit, uArray* eventNames)
{
    _listeningCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[75/*Uno.Collections.List<Uno.Tuple<object, Fuse.Scripting.Callback>>*/]));
    _mutex = ::g::Uno::Object::New();
    _queuedEvents = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[76/*Uno.Collections.Queue<Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object>>*/]));
    ctor_1();
    _queueEventsBeforeInit = queueEventsBeforeInit;
    _eventNames = eventNames;
    add_Reset(uDelegate::New(::TYPES[77/*Uno.EventHandler*/], (void*)NativeEventEmitterModule__ResetListeners_fn, this));
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) [instance] :549
void NativeEventEmitterModule::Dispatch(uDelegate* action, bool alwaysQueueEventBeforeInit)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (!_initialized)
        {
            if (alwaysQueueEventBeforeInit || _queueEventsBeforeInit)
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_queuedEvents), action);

            return;
        }
    }

    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::TYPES[78/*Uno.Threading.IDispatcherExtensions.Invoke2<Fuse.Scripting.Context, Fuse.Scripting.Object>*/], uPtr(_context)->Dispatcher(), action, _context, _this);
}

// protected void Emit(object[] args) [instance] :503
void NativeEventEmitterModule::Emit(uArray* args)
{
    Dispatch(uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object>*/], (void*)NativeEventEmitterModule__EmitClosure__Emit_fn, NativeEventEmitterModule__EmitClosure::New1(args)), false);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) [instance] :578
void NativeEventEmitterModule::On(uObject* eventName, uDelegate* listener)
{
    ::g::Uno::Tuple2* ret4;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(_listeningCallbacks), (::g::Uno::Tuple__Create1_fn(::TYPES[80/*Uno.Tuple.Create<object, Fuse.Scripting.Callback>*/], eventName, listener, &ret4), ret4));
    }

    Dispatch(uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object>*/], (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1(eventName, listener)), true);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) [instance] :569
void NativeEventEmitterModule::On1(uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    On(eventName, uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativeEvent__RaiseSync_fn, uPtr(nativeEvent)));
}

// private void OnAppInitialized() [instance] :487
void NativeEventEmitterModule::OnAppInitialized()
{
    uDelegate* ret5;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _initialized = true;

        while (uPtr(_queuedEvents)->Count() > 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_queuedEvents), &ret5), ret5))->Invoke(2, (::g::Fuse::Scripting::Context*)_context, (::g::Fuse::Scripting::Object*)_this);
    }
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) [instance] :455
void NativeEventEmitterModule::ResetListeners(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _initialized = false;
        uPtr(_queuedEvents)->Clear();
    }

    if (_context != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::TYPES[5/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)NativeEventEmitterModule__ResetListenersJS_fn, this));
}

// private void ResetListenersJS() [instance] :467
void NativeEventEmitterModule::ResetListenersJS()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > ret6;
    uObject* ret7;
    uDelegate* ret8;
    uPtr(_this)->CallMethod(::STRINGS[68/*"removeAllLi...*/], uArray::New(::TYPES[7/*object[]*/], 0));
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_listeningCallbacks), &ret6), ret6); enum1.MoveNext(::TYPES[81/*Uno.Collections.List<Uno.Tuple<object, Fuse.Scripting.Callback>>.Enumerator*/]); )
        {
            ::g::Uno::Tuple2* l = enum1.Current(::TYPES[81/*Uno.Collections.List<Uno.Tuple<object, Fuse.Scripting.Callback>>.Enumerator*/]);
            Dispatch(uDelegate::New(::TYPES[79/*Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object>*/], (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1((::g::Uno::Tuple2__get_Item1_fn(uPtr(l), &ret7), ret7), (::g::Uno::Tuple2__get_Item2_fn(uPtr(l), &ret8), ret8))), true);
        }
    }

    ::g::Fuse::Scripting::AppInitialized::On(_context, uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, this));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public sealed class NativeFunction :917
// {
static void NativeFunction_build(uType* type)
{
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetFields(3,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction, _nativeCallback), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->fp_build_ = NativeFunction_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeFunction__CreateObject_fn;
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :931
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// internal Fuse.Scripting.Callback CreateCallback() :926
void NativeFunction__CreateCallback_fn(NativeFunction* __this, uDelegate** __retval)
{
    *__retval = __this->CreateCallback();
}

// protected override sealed object CreateObject() :921
void NativeFunction__CreateObject_fn(NativeFunction* __this, uObject** __retval)
{
    return *__retval = __this->CreateCallback(), void();
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :931
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :931
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    ctor_(name);
    _nativeCallback = callback;
}

// internal Fuse.Scripting.Callback CreateCallback() [instance] :926
uDelegate* NativeFunction::CreateCallback()
{
    return uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)NativeFunction__NativeFunctionClosure__Callback_fn, NativeFunction__NativeFunctionClosure::New1(_nativeCallback, Context()));
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :931
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class NativeFunction.NativeFunctionClosure :936
// {
static void NativeFunction__NativeFunctionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure, _context), 0);
}

uType* NativeFunction__NativeFunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunction__NativeFunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction.NativeFunctionClosure", options);
    type->fp_build_ = NativeFunction__NativeFunctionClosure_build;
    return type;
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :941
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(callback, context);
}

// public object Callback(object[] args) :947
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :941
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval)
{
    *__retval = NativeFunction__NativeFunctionClosure::New1(callback, context);
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [instance] :941
void NativeFunction__NativeFunctionClosure::ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _callback = callback;
}

// public object Callback(object[] args) [instance] :947
uObject* NativeFunction__NativeFunctionClosure::Callback(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [static] :941
NativeFunction__NativeFunctionClosure* NativeFunction__NativeFunctionClosure::New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    NativeFunction__NativeFunctionClosure* obj1 = (NativeFunction__NativeFunctionClosure*)uNew(NativeFunction__NativeFunctionClosure_typeof());
    obj1->ctor_(callback, context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public abstract class NativeMember :887
// {
static void NativeMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _ModuleObject), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::NativeMember, _Name), 0);
}

NativeMember_type* NativeMember_typeof()
{
    static uSStrong<NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(NativeMember_type);
    type = (NativeMember_type*)uClassType::New("Fuse.Scripting.NativeMember", options);
    type->fp_build_ = NativeMember_build;
    return type;
}

// protected internal NativeMember(string name) :892
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :890
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :890
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) :894
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->Create(obj, context);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() :891
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ModuleObject();
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) :891
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->ModuleObject(value);
}

// protected generated string get_Name() :889
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :889
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :892
void NativeMember::ctor_(uString* name)
{
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :890
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :890
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    _Context = value;
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) [instance] :894
void NativeMember::Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    ModuleObject(obj);
    Context(context);
    uObject* member = CreateObject();

    if (member != NULL)
        uPtr(ModuleObject())->Item(Name(), member);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() [instance] :891
::g::Fuse::Scripting::Object* NativeMember::ModuleObject()
{
    return _ModuleObject;
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) [instance] :891
void NativeMember::ModuleObject(::g::Fuse::Scripting::Object* value)
{
    _ModuleObject = value;
}

// protected generated string get_Name() [instance] :889
uString* NativeMember::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :889
void NativeMember::Name(uString* value)
{
    _Name = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public class NativeModule :687
// {
static void NativeModule_build(uType* type)
{
    ::STRINGS[69] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::STRINGS[64] = uString::Const("exports");
    ::TYPES[82] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[83] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[77] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(NativeModule_type, interface1));
    type->SetFields(2,
        ::TYPES[82/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/], offsetof(::g::Fuse::Scripting::NativeModule, _members), 0,
        ::TYPES[77/*Uno.EventHandler*/], offsetof(::g::Fuse::Scripting::NativeModule, Reset1), 0);
}

NativeModule_type* NativeModule_typeof()
{
    static uSStrong<NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(NativeModule_type);
    type = (NativeModule_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->fp_build_ = NativeModule_build;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))NativeModule__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated NativeModule() :687
void NativeModule__ctor_1_fn(NativeModule* __this)
{
    __this->ctor_1();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :704
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :711
void NativeModule__Evaluate_fn(NativeModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > ret3;
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;

    if (module != NULL)
    {
        ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(module)->Item(::STRINGS[64/*"exports"*/]), ::TYPES[12/*Fuse.Scripting.Object*/]);

        if (obj != NULL)

            for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_members), &ret3), ret3); enum1.MoveNext(::TYPES[83/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]); )
            {
                ::g::Fuse::Scripting::NativeMember* m = enum1.Current(::TYPES[83/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                uPtr(m)->Create(obj, c);
            }
    }
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :691
void NativeModule__FuseScriptingIModuleProviderGetModule_fn(NativeModule* __this, ::g::Fuse::Scripting::Module** __retval)
{
    return *__retval = __this, void();
}

// internal void InternalReset() :698
void NativeModule__InternalReset_fn(NativeModule* __this)
{
    __this->InternalReset();
}

// public generated void add_Reset(Uno.EventHandler value) :696
void NativeModule__add_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Reset(value);
}

// public generated void remove_Reset(Uno.EventHandler value) :696
void NativeModule__remove_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Reset(value);
}

// public generated NativeModule() [instance] :687
void NativeModule::ctor_1()
{
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[82/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));
    ctor_();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :704
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    if (IsEvaluated())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[69/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// internal void InternalReset() [instance] :698
void NativeModule::InternalReset()
{
    if (::g::Uno::Delegate::op_Inequality(Reset1, NULL))
        uPtr(Reset1)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_Reset(Uno.EventHandler value) [instance] :696
void NativeModule::add_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Reset1, value), ::TYPES[77/*Uno.EventHandler*/]);
}

// public generated void remove_Reset(Uno.EventHandler value) [instance] :696
void NativeModule::remove_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Reset1, value), ::TYPES[77/*Uno.EventHandler*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :769
// {
static void NativePromise_build(uType* type)
{
    ::TYPES[84] = ::g::Fuse::Scripting::FutureFactory_typeof();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[85] = NativePromise__ContextClosure_typeof();
    ::TYPES[86] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[87] = ::g::Fuse::Scripting::FactoryClosure_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL),
        NativePromise__ContextClosure_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Scripting::FactoryClosure_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(3,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::NativePromise, _func), 0,
        ::TYPES[84/*Fuse.Scripting.FutureFactory`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::NativePromise, _resultConverter), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->fp_build_ = NativePromise_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativePromise__CreateObject_fn;
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :789
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :775
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// protected override sealed object CreateObject() :795
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Scripting.NativePromise<T, TJSResult>.ContextClosure*/),
    };
    return *__retval = uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)NativePromise__ContextClosure__CreatePromise_fn, NativePromise__ContextClosure::New1(__types[0], __this->Context(), __this->_futureFactory, __this->_resultConverter)), void();
}

// private Uno.Threading.Future<T> Factory(object[] args) :782
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :789
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :775
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :789
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :775
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.FutureFactory<T>*/),
    };
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :782
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Threading.Promise<T>*/),
        __type->Precalced(3/*Fuse.Scripting.FactoryClosure<T>*/),
    };
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    ::g::Uno::Threading::Thread::New1(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[1], _func, args, future)))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :789
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :775
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :1022
// {
static void NativeProperty_build(uType* type)
{
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[88] = ::g::Uno::Func_typeof();
    ::TYPES[89] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        type->T(1),
        type->T(0),
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL));
    type->SetFields(3,
        ::TYPES[88/*Uno.Func`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::NativeProperty, _getHandler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::NativeProperty, _isReadonly), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[89/*Uno.Action`1*/]->MakeType(type->T(1), NULL), offsetof(::g::Fuse::Scripting::NativeProperty, _setHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::NativeProperty, _valueConverter), 0);
}

NativeProperty_type* NativeProperty_typeof()
{
    static uSStrong<NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 8;
    options.GenericCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(NativeProperty_type);
    type = (NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->fp_build_ = NativeProperty_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeProperty__CreateObject_fn;
    type->fp_GetProperty = NativeProperty__GetProperty_fn;
    type->fp_SetProperty1 = NativeProperty__SetProperty1_fn;
    return type;
}

// public NativeProperty(string name) :1030
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :1039
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :1033
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// protected override sealed object CreateObject() :1047
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval)
{
    if (__this->_isReadonly)
        uPtr(__this->Context())->ObjectDefineProperty1(__this->ModuleObject(), __this->Name(), uBoxPtr(__this->__type->GetBase(NativeProperty_typeof())->T(1), __this->_readonlyValue()), false, false);
    else
        uPtr(__this->Context())->ObjectDefineProperty(__this->ModuleObject(), __this->Name(), uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)NativeProperty__GetProperty1_fn, __this), uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)NativeProperty__SetProperty_fn, __this), false, false);

    return *__retval = NULL, void();
}

// protected virtual T GetProperty() :1077
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->__type->GetBase(NativeProperty_typeof())->T(0), uT(__this->__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize))), void();
}

// private object GetProperty(object[] args) :1067
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetProperty1(args);
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :1039
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :1033
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// private object SetProperty(object[] args) :1057
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetProperty(args);
}

// protected virtual void SetProperty(TJSValue value) :1065
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value)
{
}

// public NativeProperty(string name) [instance] :1030
void NativeProperty::ctor_1(uString* name)
{
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :1039
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// private object GetProperty(object[] args) [instance] :1067
uObject* NativeProperty::GetProperty1(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*TJSValue*/),
        __type->GetBase(NativeProperty_typeof())->Precalced(1/*T*/),
        __type->GetBase(NativeProperty_typeof())->Precalced(2/*Uno.Func<T>*/),
    };
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if (::g::Uno::Delegate::op_Equality(_getHandler, NULL))
        _getHandler = uDelegate::New(__types[2], this, offsetof(NativeProperty_type, fp_GetProperty));

    if (::g::Uno::Delegate::op_Inequality(_valueConverter, NULL))
        return uBoxPtr(__types[0], (uPtr(_valueConverter)->Invoke(&ret4, 2, (::g::Fuse::Scripting::Context*)Context(), (uPtr(_getHandler)->Invoke(&ret5), (void*)ret5)), ret4));

    return uBoxPtr(__types[1], (uPtr(_getHandler)->Invoke(&ret6), ret6));
}

// private object SetProperty(object[] args) [instance] :1057
uObject* NativeProperty::SetProperty(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(3/*Uno.Action<TJSValue>*/),
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*TJSValue*/),
    };

    if (::g::Uno::Delegate::op_Equality(_setHandler, NULL))
        _setHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_SetProperty1));

    uPtr(_setHandler)->InvokeVoid(((uPtr(args)->Length() > 0) && uIs((uObject*)uPtr(args)->Strong<uObject*>(0), __types[1])) ? (void*)uUnboxAny(__types[1], uPtr(args)->Strong<uObject*>(0)) : (void*)uT(__types[1], U_ALLOCA(__types[1]->ValueSize)));
    return NULL;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :1039
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.NewAll :1844
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[90] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Scripting::ArrayMirror_typeof(), offsetof(::g::Fuse::Scripting::Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__NewAll, _origin), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) :1849
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) :1849
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1860
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[90/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Scripting::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_newValues);
}

// protected override sealed void Unsubscribe() :1855
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) [instance] :1849
void Observable__NewAll::ctor_1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) [static] :1849
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.NewAt :1814
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::Observable__NewAt, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Scripting.Observable obs, int index, object newValue) :1819
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Scripting.Observable obs, int index, object newValue) :1819
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1831
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Scripting::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :1825
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Scripting.Observable obs, int index, object newValue) [instance] :1819
void Observable__NewAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Scripting.Observable obs, int index, object newValue) [static] :1819
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public static class JSCallback.NumberConverter :1246
// {
static void JSCallback__NumberConverter_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[91] = ::g::Uno::Short_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[92] = ::g::Uno::Long_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[55] = ::g::Uno::Double_typeof();
    ::TYPES[44] = ::g::Uno::Exception_typeof();
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Convert<TValue>*/, type->MethodTypes[1]->U(0), NULL));
}

uClassType* JSCallback__NumberConverter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback.NumberConverter", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->fp_build_ = JSCallback__NumberConverter_build;
    return type;
}

// private static object Convert(double value, Uno.Type targetType) :1311
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert(*value, targetType);
}

// private static object Convert(float value, Uno.Type targetType) :1302
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert1(*value, targetType);
}

// private static object Convert(int value, Uno.Type targetType) :1284
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert2(*value, targetType);
}

// private static object Convert(long value, Uno.Type targetType) :1293
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert3(*value, targetType);
}

// private static object Convert(short value, Uno.Type targetType) :1275
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert4(*value, targetType);
}

// public static object Convert(Uno.Type targetType, object value) :1265
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert5(targetType, value);
}

// public static TValue Convert<TValue>(object value) :1260
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval)
{
    return __retval.Store(__type->U(0), uUnboxAny(__type->U(0), JSCallback__NumberConverter::Convert5(__type->U(0), value))), void();
}

// public static bool TryConvert<TValue>(object value, TValue& convertedValue) :1248
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.Convert<TValue>*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    convertedValue.Default(__types[0]);

    try
    {
        convertedValue.Store((JSCallback__NumberConverter__Convert6_fn(__types[1], value, &ret1), ret1));
        return *__retval = true, void();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception_ = __t.Exception;
    }

    return *__retval = false, void();
}

// private static object Convert(double value, Uno.Type targetType) [static] :1311
uObject* JSCallback__NumberConverter::Convert(double value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[91/*short*/]))
        return uBox<int16_t>(::TYPES[91/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[39/*int*/]))
        return uBox<int>(::TYPES[39/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[92/*long*/]))
        return uBox<int64_t>(::TYPES[92/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[38/*float*/]))
        return uBox(::TYPES[38/*float*/], (float)value);

    return uBox(::TYPES[55/*double*/], value);
}

// private static object Convert(float value, Uno.Type targetType) [static] :1302
uObject* JSCallback__NumberConverter::Convert1(float value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[91/*short*/]))
        return uBox<int16_t>(::TYPES[91/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[39/*int*/]))
        return uBox<int>(::TYPES[39/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[92/*long*/]))
        return uBox<int64_t>(::TYPES[92/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*double*/]))
        return uBox(::TYPES[55/*double*/], (double)value);

    return uBox(::TYPES[38/*float*/], value);
}

// private static object Convert(int value, Uno.Type targetType) [static] :1284
uObject* JSCallback__NumberConverter::Convert2(int value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[91/*short*/]))
        return uBox<int16_t>(::TYPES[91/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[92/*long*/]))
        return uBox<int64_t>(::TYPES[92/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[38/*float*/]))
        return uBox(::TYPES[38/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*double*/]))
        return uBox(::TYPES[55/*double*/], (double)value);

    return uBox<int>(::TYPES[39/*int*/], value);
}

// private static object Convert(long value, Uno.Type targetType) [static] :1293
uObject* JSCallback__NumberConverter::Convert3(int64_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[91/*short*/]))
        return uBox<int16_t>(::TYPES[91/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[39/*int*/]))
        return uBox<int>(::TYPES[39/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[38/*float*/]))
        return uBox(::TYPES[38/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*double*/]))
        return uBox(::TYPES[55/*double*/], (double)value);

    return uBox<int64_t>(::TYPES[92/*long*/], value);
}

// private static object Convert(short value, Uno.Type targetType) [static] :1275
uObject* JSCallback__NumberConverter::Convert4(int16_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[39/*int*/]))
        return uBox<int>(::TYPES[39/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[92/*long*/]))
        return uBox<int64_t>(::TYPES[92/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[38/*float*/]))
        return uBox(::TYPES[38/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*double*/]))
        return uBox(::TYPES[55/*double*/], (double)value);

    return uBox<int16_t>(::TYPES[91/*short*/], value);
}

// public static object Convert(Uno.Type targetType, object value) [static] :1265
uObject* JSCallback__NumberConverter::Convert5(uType* targetType, uObject* value)
{
    if (uIs(value, ::TYPES[91/*short*/]))
        return JSCallback__NumberConverter::Convert4(uUnbox<int16_t>(::TYPES[91/*short*/], value), targetType);

    if (uIs(value, ::TYPES[39/*int*/]))
        return JSCallback__NumberConverter::Convert2(uUnbox<int>(::TYPES[39/*int*/], value), targetType);

    if (uIs(value, ::TYPES[92/*long*/]))
        return JSCallback__NumberConverter::Convert3(uUnbox<int64_t>(::TYPES[92/*long*/], value), targetType);

    if (uIs(value, ::TYPES[38/*float*/]))
        return JSCallback__NumberConverter::Convert1(uUnbox<float>(::TYPES[38/*float*/], value), targetType);

    if (uIs(value, ::TYPES[55/*double*/]))
        return JSCallback__NumberConverter::Convert(uUnbox<double>(::TYPES[55/*double*/], value), targetType);

    return value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Object :2466
// {
static void Object_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObject_typeof(), offsetof(Object_type, interface0));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// protected generated Object() :2466
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :2476
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    Object* a = uAs<Object*>(o, Object_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :2482
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Object() [instance] :2466
void Object::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ObjectMirror :1446
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[93] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[94] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::ValueMirror_typeof();
    ::TYPES[95] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObject_typeof(), offsetof(ObjectMirror_type, interface0));
    type->SetFields(1,
        ::TYPES[93/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Scripting::ObjectMirror, _props), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ValueMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Scripting.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface0.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    return type;
}

// internal ObjectMirror(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) :1450
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(context, obj);
}

// public bool ContainsKey(string key) :1469
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :1476
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// internal ObjectMirror New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) :1450
void ObjectMirror__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(context, obj);
}

// public override sealed void Unsubscribe() :1460
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret4), ret4); enum1.MoveNext(::TYPES[94/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[94/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>(p.Value(::TYPES[95/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[8/*Fuse.Scripting.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ObjectMirror(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) [instance] :1450
void ObjectMirror::ctor_1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[93/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(obj);
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, uPtr(context)->Reflect(uPtr(obj)->Item(s)));
    }
}

// public bool ContainsKey(string key) [instance] :1469
bool ObjectMirror::ContainsKey(uString* key)
{
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3);
}

// public object get_Item(string key) [instance] :1476
uObject* ObjectMirror::Item(uString* key)
{
    uObject* ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret5), ret5);
}

// internal ObjectMirror New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj) [static] :1450
ObjectMirror* ObjectMirror::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj2 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj2->ctor_1(context, obj);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class Observable :1488
// {
static void Observable_build(uType* type)
{
    ::STRINGS[70] = uString::Const("addSubscriber");
    ::STRINGS[71] = uString::Const("set");
    ::STRINGS[72] = uString::Const("clear");
    ::STRINGS[73] = uString::Const("newAt");
    ::STRINGS[74] = uString::Const("newAll");
    ::STRINGS[75] = uString::Const("add");
    ::STRINGS[76] = uString::Const("removeAt");
    ::STRINGS[77] = uString::Const("insertAt");
    ::STRINGS[78] = uString::Const("removeRange");
    ::STRINGS[79] = uString::Const("insertAll");
    ::STRINGS[80] = uString::Const("Unhandled observable operation: ");
    ::STRINGS[81] = uString::Const("removeSubscriber");
    ::TYPES[96] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[97] = ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL);
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[12] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[98] = ::g::Fuse::Scripting::ArrayMirror_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[8] = ::g::Fuse::Scripting::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IArray_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::Observable, _context), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Observable, _isUnsubscribed), 0,
        ::TYPES[12/*Fuse.Scripting.Object*/], offsetof(::g::Fuse::Scripting::Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Scripting::Observable, _observeChange), 0,
        ::TYPES[97/*Uno.Collections.List<Fuse.Scripting.Observable.Subscription>*/], offsetof(::g::Fuse::Scripting::Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Observable, _usingObservers), 0,
        ::TYPES[96/*Uno.Collections.List<object>*/], offsetof(::g::Fuse::Scripting::Observable, _values), 0);
}

::g::Fuse::Scripting::ListMirror_type* Observable_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ListMirror_type);
    type = (::g::Fuse::Scripting::ListMirror_type*)uClassType::New("Fuse.Scripting.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    return type;
}

// internal Observable(Fuse.Scripting.Context context, Fuse.Scripting.Object obj, bool supressCallback) :1631
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool* supressCallback)
{
    __this->ctor_2(context, obj, *supressCallback);
}

// internal static Fuse.Scripting.Observable Create(Fuse.Scripting.Context context) :1639
void Observable__Create_fn(::g::Fuse::Scripting::Context* context, Observable** __retval)
{
    *__retval = Observable::Create(context);
}

// public bool get_IsUnsubscribed() :1680
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :1496
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :1492
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj, bool supressCallback) :1631
void Observable__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool* supressCallback, Observable** __retval)
{
    *__retval = Observable::New1(context, obj, *supressCallback);
}

// internal Fuse.Scripting.Object get_Object() :1627
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :1644
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void ObserversCleanup() :1508
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber() :1703
void Observable__RemoveSubscriber_fn(Observable* __this)
{
    __this->RemoveSubscriber();
}

// public void SetValue(int index, object value) :1500
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Scripting.Observable.Subscription Subscribe(Fuse.Scripting.IObserver observer) :1619
void Observable__Subscribe_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// public override sealed void Unsubscribe() :1683
void Observable__Unsubscribe_fn(Observable* __this)
{
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_context)->Invoke(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :1694
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Scripting.Context context, Fuse.Scripting.Object obj, bool supressCallback) [instance] :1631
void Observable::ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[96/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[97/*Uno.Collections.List<Fuse.Scripting.Observable.Subscription>*/]));
    ctor_1(obj);
    _context = context;
    _observable = obj;
    _observeChange = uPtr(context)->CallbackToFunction(uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(::STRINGS[70/*"addSubscriber"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::TYPES[56/*bool*/], supressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :1680
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :1627
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :1644
uObject* Observable::ObserveChange(uArray* args)
{
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[31/*string*/]);

    if (::g::Uno::String::op_Equality(op, ::STRINGS[71/*"set"*/]))
    {
        int origin = -1;

        if (uPtr(args)->Length() > 3)
            origin = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(3));

        uPtr(_context)->Enqueue(Observable__Set::New1(this, uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(2)), origin));
    }
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[72/*"clear"*/]))
    {
        int origin1 = -1;

        if (uPtr(args)->Length() > 2)
            origin1 = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2));

        uPtr(_context)->Enqueue(Observable__Clear::New1(this, origin1));
    }
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[73/*"newAt"*/]))
        uPtr(_context)->Enqueue(Observable__NewAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[74/*"newAll"*/]))
    {
        int origin2 = -1;

        if (uPtr(args)->Length() > 3)
            origin2 = ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(3));

        uPtr(_context)->Enqueue(Observable__NewAll::New1(this, uCast< ::g::Fuse::Scripting::ArrayMirror*>(uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(2)), ::TYPES[98/*Fuse.Scripting.ArrayMirror*/]), origin2));
    }
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[75/*"add"*/]))
        uPtr(_context)->Enqueue(Observable__Add::New1(this, uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(2))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[76/*"removeAt"*/]))
        uPtr(_context)->Enqueue(Observable__RemoveAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[77/*"insertAt"*/]))
        uPtr(_context)->Enqueue(Observable__InsertAt::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[78/*"removeRange"*/]))
        uPtr(_context)->Enqueue(Observable__RemoveRange::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(3))));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[79/*"insertAll"*/]))
        uPtr(_context)->Enqueue(Observable__InsertAll::New1(this, ::g::Fuse::Scripting::Marshal::ToInt(uPtr(args)->Strong<uObject*>(2)), uCast< ::g::Fuse::Scripting::ArrayMirror*>(uPtr(_context)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::TYPES[98/*Fuse.Scripting.ArrayMirror*/])));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[80/*"Unhandled o...*/], op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :1508
void Observable::ObserversCleanup()
{
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber() [instance] :1703
void Observable::RemoveSubscriber()
{
    uPtr(_observable)->CallMethod(::STRINGS[81/*"removeSubsc...*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :1500
void Observable::SetValue(int index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Scripting.Observable.Subscription Subscribe(Fuse.Scripting.IObserver observer) [instance] :1619
Observable__Subscription* Observable::Subscribe(uObject* observer)
{
    return Observable__Subscription::New1(this, observer);
}

// private void UnsubscribeValues() [instance] :1694
void Observable::UnsubscribeValues()
{
    uObject* ret3;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* vm = uAs< ::g::Fuse::Scripting::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret3), ret3), ::TYPES[8/*Fuse.Scripting.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Scripting.Observable Create(Fuse.Scripting.Context context) [static] :1639
Observable* Observable::Create(::g::Fuse::Scripting::Context* context)
{
    return Observable::New1(context, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(context)->Observable())->Call(uArray::New(::TYPES[7/*object[]*/], 0)), ::TYPES[12/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Scripting.Context context, Fuse.Scripting.Object obj, bool supressCallback) [static] :1631
Observable* Observable::New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool supressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_2(context, obj, supressCallback);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// internal class ObservableProperty :2036
// {
static void ObservableProperty_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[99] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty, _context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty, _obj), 0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty, _property), 0,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty, _subscription), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Scripting.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))ObservableProperty__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObservableProperty__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) :2042
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(c, obj, p);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :2105
void ObservableProperty__FuseScriptingIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Scripting.IObserver.OnClear() :2087
void ObservableProperty__FuseScriptingIObserverOnClear_fn(ObservableProperty* __this)
{
    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject(NULL, (uObject*)__this);
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :2113
void ObservableProperty__FuseScriptingIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :2093
void ObservableProperty__FuseScriptingIObserverOnNewAll_fn(ObservableProperty* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    if (uPtr(values)->Length() == 1)
        __this->Set(uPtr(values)->Item(0));
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object newValue) :2097
void ObservableProperty__FuseScriptingIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :2109
void ObservableProperty__FuseScriptingIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index)
{
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :2101
void ObservableProperty__FuseScriptingIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    __this->Set(newValue);
}

// internal Fuse.Scripting.Observable GetObservable() :2053
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Observable** __retval)
{
    *__retval = __this->GetObservable();
}

// public ObservableProperty New(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) :2042
void ObservableProperty__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(c, obj, p);
}

// private void PushValue(object val) :2153
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val)
{
    __this->PushValue(val);
}

// public void Reset() :2071
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :2122
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :2064
void ObservableProperty__Subscribe_fn(ObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :2127
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_context)->Invoke(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::TYPES[99/*Uno.Action<object>*/], (void*)ObservableProperty__PushValue_fn, __this), uPtr(__this->_property)->GetAsObject())));
}

// public ObservableProperty(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :2042
void ObservableProperty::ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _context = c;
    _property = p;
}

// internal Fuse.Scripting.Observable GetObservable() [instance] :2053
::g::Fuse::Scripting::Observable* ObservableProperty::GetObservable()
{
    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Scripting::Observable::Create(_context);
        Subscribe();
    }

    return _observable;
}

// private void PushValue(object val) [instance] :2153
void ObservableProperty::PushValue(uObject* val)
{
    if (val != NULL)
        uPtr(_subscription)->SetExclusive(val);
    else
        uPtr(_subscription)->ClearExclusive();
}

// public void Reset() [instance] :2071
void ObservableProperty::Reset()
{
    if (_subscription != NULL)
    {
        uPtr(_subscription)->Dispose();
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :2122
void ObservableProperty::Set(uObject* value)
{
    uPtr(_property)->SetAsObject(::g::Fuse::Scripting::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value), (uObject*)this);
}

// private void Subscribe() [instance] :2064
void ObservableProperty::Subscribe()
{
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    PushValue(uPtr(_property)->GetAsObject());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Scripting.Context c, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :2042
ObservableProperty* ObservableProperty::New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(c, obj, p);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.OnClosure :632
// {
static void NativeEventEmitterModule__OnClosure_build(uType* type)
{
    ::STRINGS[82] = uString::Const("on");
    ::TYPES[7] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule__OnClosure, _eventName), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(::g::Fuse::Scripting::NativeEventEmitterModule__OnClosure, _listener), 0);
}

uType* NativeEventEmitterModule__OnClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeEventEmitterModule__OnClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.OnClosure", options);
    type->fp_build_ = NativeEventEmitterModule__OnClosure_build;
    return type;
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) :637
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener)
{
    __this->ctor_(eventName, listener);
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) :637
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval)
{
    *__retval = NativeEventEmitterModule__OnClosure::New1(eventName, listener);
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :643
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->On(c, o);
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) [instance] :637
void NativeEventEmitterModule__OnClosure::ctor_(uObject* eventName, uDelegate* listener)
{
    _eventName = eventName;
    _listener = listener;
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :643
void NativeEventEmitterModule__OnClosure::On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[82/*"on"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, (uObject*)_eventName, (uDelegate*)_listener));
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) [static] :637
NativeEventEmitterModule__OnClosure* NativeEventEmitterModule__OnClosure::New1(uObject* eventName, uDelegate* listener)
{
    NativeEventEmitterModule__OnClosure* obj1 = (NativeEventEmitterModule__OnClosure*)uNew(NativeEventEmitterModule__OnClosure_typeof());
    obj1->ctor_(eventName, listener);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class Observable.Operation :1710
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Observable__Operation, _isPerformed), 0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(::g::Fuse::Scripting::Observable__Operation, _observable), 0);
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Scripting.Observable observable) :1716
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Scripting.Observable get_Observable() :1721
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :1723
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :1745
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Scripting.Observable observable) [instance] :1716
void Observable__Operation::ctor_(::g::Fuse::Scripting::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Scripting.Observable get_Observable() [instance] :1721
::g::Fuse::Scripting::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :1723
void Observable__Operation::Perform()
{
    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_observable)->_usingObservers = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_observable)->_usingObservers = true;
        OnPerform((uObject*)uPtr(Observable())->_observers);
        uPtr(_observable)->ObserversCleanup();
    }

    _isPerformed = true;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :819
// {
static void NativePromise__PromiseClosure_build(uType* type)
{
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[89] = ::g::Uno::Action1_typeof();
    ::TYPES[100] = ::TYPES[89/*Uno.Action`1*/]->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetPrecalc(
        type->T(1),
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _c), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _converter), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _promise), 0,
        ::g::Uno::Exception_typeof(), offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _reason), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _reject), 0,
        ::TYPES[22/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Scripting::NativePromise__PromiseClosure, _resolve), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* NativePromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativePromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.PromiseClosure", options);
    type->fp_build_ = NativePromise__PromiseClosure_build;
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :829
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    __this->ctor_(context, promise, converter);
}

// private void InternalReject() :871
void NativePromise__PromiseClosure__InternalReject_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalReject();
}

// private void InternalResolve() :856
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :829
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval)
{
    *__retval = NativePromise__PromiseClosure::New1(__type, context, promise, converter);
}

// private void Reject(Uno.Exception reason) :864
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(T result) :849
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result)
{
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_c)->Dispatcher()), ::TYPES[5/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalResolve_fn, __this));
}

// public object Run(object[] args) :836
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :829
void NativePromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    _c = context;
    _promise = promise;
    _converter = converter;
}

// private void InternalReject() [instance] :871
void NativePromise__PromiseClosure::InternalReject()
{
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void InternalResolve() [instance] :856
void NativePromise__PromiseClosure::InternalResolve()
{
    uType* __types[] = {
        __type->Precalced(0/*TJSResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(_converter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__types[0], (uPtr(_converter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_c, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBoxPtr(__type->T(0), _result())));
}

// private void Reject(Uno.Exception reason) [instance] :864
void NativePromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_c)->Dispatcher()), ::TYPES[5/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalReject_fn, this));
}

// public object Run(object[] args) [instance] :836
uObject* NativePromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Action<T>*/),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[22/*Fuse.Scripting.Function*/]);

    if (uPtr(args)->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[22/*Fuse.Scripting.Function*/]);

    uPtr(_promise)->Then1(uDelegate::New(__types[0], (void*)NativePromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[100/*Uno.Action<Uno.Exception>*/], (void*)NativePromise__PromiseClosure__Reject_fn, this));
    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :829
NativePromise__PromiseClosure* NativePromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    NativePromise__PromiseClosure* obj1 = (NativePromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, promise, converter);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Context.PropertyClosure :348
// {
static void Context__PropertyClosure_build(uType* type)
{
    ::STRINGS[83] = uString::Const("this._raw_");
    ::STRINGS[84] = uString::Const("this._");
    ::STRINGS[85] = uString::Const(" (ScriptProperty)");
    ::STRINGS[86] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[87] = uString::Const("', ");
    ::STRINGS[40] = uString::Const("{");
    ::STRINGS[88] = uString::Const("get: function() { ");
    ::STRINGS[89] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[90] = uString::Const("if (");
    ::STRINGS[91] = uString::Const(" != obs) {");
    ::STRINGS[92] = uString::Const(" = obs;");
    ::STRINGS[93] = uString::Const(" = obs");
    ::STRINGS[94] = uString::Const(";");
    ::STRINGS[43] = uString::Const("}");
    ::STRINGS[95] = uString::Const("return ");
    ::STRINGS[96] = uString::Const("})");
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[101] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::Context__PropertyClosure, _context), 0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(::g::Fuse::Scripting::Context__PropertyClosure, _p), 0);
}

uType* Context__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Context__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Context.PropertyClosure", options);
    type->fp_build_ = Context__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.Context context) :353
void Context__PropertyClosure__ctor__fn(Context__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(cl, p, context);
}

// private object GetObservable(object[] args) :381
void Context__PropertyClosure__GetObservable_fn(Context__PropertyClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(args);
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.Context context) :353
void Context__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context, Context__PropertyClosure** __retval)
{
    *__retval = Context__PropertyClosure::New1(cl, p, context);
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.Context context) [instance] :353
void Context__PropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[83/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[84/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(context)->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[85/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[86/*"(function(c...*/], p->Name), ::STRINGS[87/*"', "*/]), ::STRINGS[40/*"{"*/]), ::STRINGS[88/*"get: functi...*/]), ::STRINGS[89/*"var obs = g...*/]), ::STRINGS[90/*"if ("*/]), rawField), ::STRINGS[91/*" != obs) {"*/]), rawField), ::STRINGS[92/*" = obs;"*/]), propField), ::STRINGS[93/*" = obs"*/]), p->Modifier), ::STRINGS[94/*";"*/]), ::STRINGS[43/*"}"*/]), ::STRINGS[95/*"return "*/]), propField), ::STRINGS[43/*"}"*/]), ::STRINGS[96/*"})"*/]), ::STRINGS[96/*"})"*/])), ::TYPES[22/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, cl, uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)Context__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(object[] args) [instance] :381
uObject* Context__PropertyClosure::GetObservable(uArray* args)
{
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(::g::Fuse::Scripting::Context::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[101/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Scripting::ClassInstance* ci = uPtr(_context)->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.Context context) [static] :353
Context__PropertyClosure* Context__PropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::Context* context)
{
    Context__PropertyClosure* obj1 = (Context__PropertyClosure*)uNew(Context__PropertyClosure_typeof());
    obj1->ctor_(cl, p, context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :2136
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty__PushCapture, _arg), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Fuse::Scripting::ObservableProperty__PushCapture, _push), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<object> push, object arg) :2141
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) :2141
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run() :2147
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this)
{
    __this->Run();
}

// public PushCapture(Uno.Action<object> push, object arg) [instance] :2141
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run() [instance] :2147
void ObservableProperty__PushCapture::Run()
{
    uPtr(_push)->InvokeVoid(_arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) [static] :2141
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :1896
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__RemoveAt, _index), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Scripting.Observable obs, int index) :1900
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Scripting.Observable obs, int index) :1900
void Observable__RemoveAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1905
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Scripting::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Scripting.Observable obs, int index) [instance] :1900
void Observable__RemoveAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Scripting.Observable obs, int index) [static] :1900
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Scripting::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :1918
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__RemoveRange, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__RemoveRange, _index), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Scripting.Observable obs, int index, int count) :1923
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Scripting::Observable* obs, int* index, int* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Scripting.Observable obs, int index, int count) :1923
void Observable__RemoveRange__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1929
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;

    for (int i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Scripting::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Scripting.Observable obs, int index, int count) [instance] :1923
void Observable__RemoveRange::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, int count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Scripting.Observable obs, int index, int count) [static] :1923
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Scripting::Observable* obs, int index, int count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// private sealed class ScriptModule.RequireContext :158
// {
static void ScriptModule__RequireContext_build(uType* type)
{
    ::STRINGS[97] = uString::Const("require(): accepts exactly one argument, ");
    ::STRINGS[98] = uString::Const(" provided");
    ::STRINGS[99] = uString::Const("require(): argument must be a string");
    ::STRINGS[100] = uString::Const("require(): module not found: ");
    ::STRINGS[101] = uString::Const("JavaScript error in ");
    ::STRINGS[102] = uString::Const(" was fixed!");
    ::STRINGS[103] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Scripting\\0.43.11\\$.uno");
    ::STRINGS[104] = uString::Const("Require");
    ::STRINGS[105] = uString::Const(" line ");
    ::STRINGS[106] = uString::Const(". ");
    ::STRINGS[64] = uString::Const("exports");
    ::TYPES[31] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _c), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _dependant), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule__RequireContext, _m), 0,
        ::TYPES[31/*string*/], (uintptr_t)&::g::Fuse::Scripting::ScriptModule__RequireContext::_lastErrorPath_, uFieldFlagsStatic);
}

uType* ScriptModule__RequireContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ScriptModule__RequireContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptModule.RequireContext", options);
    type->fp_build_ = ScriptModule__RequireContext_build;
    return type;
}

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) :164
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    __this->ctor_(c, m, dependant);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) :164
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ScriptModule__RequireContext** __retval)
{
    *__retval = ScriptModule__RequireContext::New1(c, m, dependant);
}

// public object Require(object[] args) :171
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public object Require(string id) :183
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, uString* id, uObject** __retval)
{
    *__retval = __this->Require1(id);
}

uSStrong<uString*> ScriptModule__RequireContext::_lastErrorPath_;

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) [instance] :164
void ScriptModule__RequireContext::ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    _c = c;
    _m = m;
    _dependant = dependant;
}

// public object Require(object[] args) [instance] :171
uObject* ScriptModule__RequireContext::Require(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[97/*"require(): ...*/], uBox<int>(::TYPES[39/*int*/], uPtr(args)->Length())), ::STRINGS[98/*" provided"*/])));

    uString* id = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[31/*string*/]);

    if (::g::Uno::String::op_Equality(id, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[99/*"require(): ...*/]));

    return Require1(id);
}

// public object Require(string id) [instance] :183
uObject* ScriptModule__RequireContext::Require1(uString* id)
{
    bool isFile;
    uString* path = uPtr(_m)->ComputePath(id, &isFile);
    ::g::Fuse::Scripting::ModuleResult* module = uPtr(_c)->TryGetGlobalModuleResult(path);

    if (module == NULL)
    {
        ::g::Fuse::Scripting::Module* mod = uPtr(_m)->TryResolve(path, isFile);

        if (mod == NULL)
            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[100/*"require(): ...*/], id)));

        module = uPtr(mod)->Evaluate1(_c, path);
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

        if (module->Error() == NULL)
        {
            if (::g::Uno::String::op_Equality(ScriptModule__RequireContext::_lastErrorPath_, path))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[101/*"JavaScript ...*/], path), ::STRINGS[102/*" was fixed!"*/]), this, ::STRINGS[103/*"C:\\Users\\...*/], 204, ::STRINGS[104/*"Require"*/]);
                ScriptModule__RequireContext::_lastErrorPath_ = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* e = uPtr(module)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(e)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[101/*"JavaScript ...*/], path), ::STRINGS[105/*" line "*/]), uBox<int>(::TYPES[39/*int*/], uPtr(e)->LineNumber())), ::STRINGS[106/*". "*/]), uPtr(e)->ErrorMessage()), this, ::STRINGS[103/*"C:\\Users\\...*/], 214, ::STRINGS[104/*"Require"*/]);
                ScriptModule__RequireContext::_lastErrorPath_ = path;
            }

            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage(), id)));
        }
    }
    else
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

    return uPtr(uPtr(module)->Object)->Item(::STRINGS[64/*"exports"*/]);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant) [static] :164
ScriptModule__RequireContext* ScriptModule__RequireContext::New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant)
{
    ScriptModule__RequireContext* obj1 = (ScriptModule__RequireContext*)uNew(ScriptModule__RequireContext_typeof());
    obj1->ctor_(c, m, dependant);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :737
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :735
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ScriptClass :2307
// {
// static ScriptClass() :2307
static void ScriptClass__cctor__fn(uType* __type)
{
    ScriptClass::_unoTypeToScriptClass_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[102/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/]));
}

static void ScriptClass_build(uType* type)
{
    ::TYPES[102] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), type, NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMember_typeof()->Array(), offsetof(::g::Fuse::Scripting::ScriptClass, _members), 0,
        ::g::Uno::Type_typeof(), offsetof(::g::Fuse::Scripting::ScriptClass, _unoType), 0,
        ::TYPES[102/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/], (uintptr_t)&::g::Fuse::Scripting::ScriptClass::_unoTypeToScriptClass_, uFieldFlagsStatic);
}

uType* ScriptClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptClass", options);
    type->fp_build_ = ScriptClass_build;
    type->fp_cctor_ = ScriptClass__cctor__fn;
    return type;
}

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :2336
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members)
{
    __this->ctor_(unoType, members);
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) :2319
void ScriptClass__Get_fn(uType* t, ScriptClass** __retval)
{
    *__retval = ScriptClass::Get(t);
}

// public Fuse.Scripting.ScriptMember[] get_Members() :2334
void ScriptClass__get_Members_fn(ScriptClass* __this, uArray** __retval)
{
    *__retval = __this->Members();
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :2336
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval)
{
    *__retval = ScriptClass::New1(unoType, members);
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :2342
void ScriptClass__Register_fn(uType* unoType, uArray* members)
{
    ScriptClass::Register(unoType, members);
}

// public Fuse.Scripting.ScriptClass get_SuperType() :2313
void ScriptClass__get_SuperType_fn(ScriptClass* __this, ScriptClass** __retval)
{
    *__retval = __this->SuperType();
}

// public Uno.Type get_Type() :2310
void ScriptClass__get_Type_fn(ScriptClass* __this, uType** __retval)
{
    *__retval = __this->Type();
}

uSStrong< ::g::Uno::Collections::Dictionary*> ScriptClass::_unoTypeToScriptClass_;

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [instance] :2336
void ScriptClass::ctor_(uType* unoType, uArray* members)
{
    _unoType = unoType;
    _members = members;
}

// public Fuse.Scripting.ScriptMember[] get_Members() [instance] :2334
uArray* ScriptClass::Members()
{
    return _members;
}

// public Fuse.Scripting.ScriptClass get_SuperType() [instance] :2313
ScriptClass* ScriptClass::SuperType()
{
    return ScriptClass::Get(::g::Uno::Type::BaseType(uPtr(_unoType)));
}

// public Uno.Type get_Type() [instance] :2310
uType* ScriptClass::Type()
{
    return _unoType;
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) [static] :2319
ScriptClass* ScriptClass::Get(uType* t)
{
    ScriptClass_typeof()->Init();
    bool ret2;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        ScriptClass* sc;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ScriptClass::_unoTypeToScriptClass()), t, (void**)(&sc), &ret2), ret2))
            return sc;

        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    return NULL;
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :2336
ScriptClass* ScriptClass::New1(uType* unoType, uArray* members)
{
    ScriptClass* obj1 = (ScriptClass*)uNew(ScriptClass_typeof());
    obj1->ctor_(unoType, members);
    return obj1;
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :2342
void ScriptClass::Register(uType* unoType, uArray* members)
{
    ScriptClass_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ScriptClass::_unoTypeToScriptClass()), unoType, ScriptClass::New1(unoType, members));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ScriptException :2354
// {
static void ScriptException_build(uType* type)
{
    ::STRINGS[107] = uString::Const("Name: ");
    ::STRINGS[108] = uString::Const("Error message: ");
    ::STRINGS[109] = uString::Const("File name: ");
    ::STRINGS[110] = uString::Const("Line number: ");
    ::STRINGS[111] = uString::Const("Source line: ");
    ::STRINGS[112] = uString::Const("JS stack trace: ");
    ::TYPES[39] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _ErrorMessage), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _FileName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _JSStackTrace), 0,
        ::TYPES[39/*int*/], offsetof(::g::Fuse::Scripting::ScriptException, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptException, _SourceLine), 0);
}

::g::Uno::Exception_type* ScriptException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))ScriptException__get_Message_fn;
    return type;
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :2363
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace)
{
    __this->ctor_3(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_ErrorMessage() :2357
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :2357
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public generated string get_FileName() :2358
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :2358
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value)
{
    __this->FileName(value);
}

// public generated string get_JSStackTrace() :2361
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->JSStackTrace();
}

// private generated void set_JSStackTrace(string value) :2361
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value)
{
    __this->JSStackTrace(value);
}

// public generated int get_LineNumber() :2359
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :2359
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value)
{
    __this->LineNumber(*value);
}

// public override sealed string get_Message() :2381
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval)
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (!::g::Uno::String::IsNullOrEmpty(__this->Name()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[107/*"Name: "*/]);
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->ErrorMessage()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[108/*"Error messa...*/]);
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->FileName()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[109/*"File name: "*/]);
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        uPtr(stringBuilder)->Append2(::STRINGS[110/*"Line number: "*/]);
        stringBuilder->AppendLine(::g::Uno::Int::ToString(__this->LineNumber(), ::TYPES[39/*int*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->SourceLine()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[111/*"Source line: "*/]);
        stringBuilder->AppendLine(__this->SourceLine());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->JSStackTrace()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[112/*"JS stack tr...*/]);
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return *__retval = stringBuilder->ToString(), void();
}

// public generated string get_Name() :2356
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :2356
void ScriptException__set_Name_fn(ScriptException* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :2363
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace, ScriptException** __retval)
{
    *__retval = ScriptException::New4(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_SourceLine() :2360
void ScriptException__get_SourceLine_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->SourceLine();
}

// private generated void set_SourceLine(string value) :2360
void ScriptException__set_SourceLine_fn(ScriptException* __this, uString* value)
{
    __this->SourceLine(value);
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [instance] :2363
void ScriptException::ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ctor_();
    Name(name);
    ErrorMessage(errorMessage);
    FileName(fileName);
    LineNumber(lineNumber);
    SourceLine(sourceLine);
    JSStackTrace(stackTrace);
}

// public generated string get_ErrorMessage() [instance] :2357
uString* ScriptException::ErrorMessage()
{
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :2357
void ScriptException::ErrorMessage(uString* value)
{
    _ErrorMessage = value;
}

// public generated string get_FileName() [instance] :2358
uString* ScriptException::FileName()
{
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :2358
void ScriptException::FileName(uString* value)
{
    _FileName = value;
}

// public generated string get_JSStackTrace() [instance] :2361
uString* ScriptException::JSStackTrace()
{
    return _JSStackTrace;
}

// private generated void set_JSStackTrace(string value) [instance] :2361
void ScriptException::JSStackTrace(uString* value)
{
    _JSStackTrace = value;
}

// public generated int get_LineNumber() [instance] :2359
int ScriptException::LineNumber()
{
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :2359
void ScriptException::LineNumber(int value)
{
    _LineNumber = value;
}

// public generated string get_Name() [instance] :2356
uString* ScriptException::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :2356
void ScriptException::Name(uString* value)
{
    _Name = value;
}

// public generated string get_SourceLine() [instance] :2360
uString* ScriptException::SourceLine()
{
    return _SourceLine;
}

// private generated void set_SourceLine(string value) [instance] :2360
void ScriptException::SourceLine(uString* value)
{
    _SourceLine = value;
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [static] :2363
ScriptException* ScriptException::New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_3(name, errorMessage, fileName, lineNumber, sourceLine, stackTrace);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ScriptMember :2183
// {
static void ScriptMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptMember, Name), 0);
}

uType* ScriptMember_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptMember);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMember", options);
    type->fp_build_ = ScriptMember_build;
    return type;
}

// protected ScriptMember(string name) :2187
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name)
{
    __this->ctor_(name);
}

// protected ScriptMember(string name) [instance] :2187
void ScriptMember::ctor_(uString* name)
{
    Name = name;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ScriptMethod :2217
// {
static void ScriptMethod_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Scripting::ExecutionThread_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethod, Thread), 0);
}

ScriptMethod_type* ScriptMethod_typeof()
{
    static uSStrong<ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptMethod);
    options.TypeSize = sizeof(ScriptMethod_type);
    type = (ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod", options);
    type->fp_build_ = ScriptMethod_build;
    return type;
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) :2221
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread)
{
    __this->ctor_1(name, *thread);
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) [instance] :2221
void ScriptMethod::ctor_1(uString* name, int thread)
{
    ctor_(name);
    Thread = thread;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ScriptMethod<T> :2244
// {
static void ScriptMethod1_build(uType* type)
{
    ::STRINGS[113] = uString::Const("Cannot call a non-void method asynchronously");
    ::STRINGS[7] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\FuseCore\\0.43.11\\scripting\\$.uno");
    ::STRINGS[114] = uString::Const("Call");
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[103] = ScriptMethod1__CallClosure_typeof();
    type->SetPrecalc(
        ScriptMethod1__CallClosure_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(2,
        ::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(::g::Fuse::Scripting::ScriptMethod1, _method), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(::g::Fuse::Scripting::ScriptMethod1, _voidMethod), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod`1", options);
    type->fp_build_ = ScriptMethod1_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethod1__Call_fn;
    return type;
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :2254
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_2(name, method, *thread);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :2259
void ScriptMethod1__Call_fn(ScriptMethod1* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Scripting.ScriptMethod<T>.CallClosure*/),
    };

    if (__this->Thread == 2)
    {
        if (::g::Uno::Delegate::op_Equality(__this->_voidMethod, NULL))
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[113/*"Cannot call...*/], __this, ::STRINGS[7/*"C:\\Users\\...*/], 2265, ::STRINGS[114/*"Call"*/]);
            return *__retval = NULL, void();
        }

        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)ScriptMethod1__CallClosure__Run_fn, ScriptMethod1__CallClosure::New1(__types[0], __this->_voidMethod, c, obj, args)));
        return *__retval = NULL, void();
    }

    if (::g::Uno::Delegate::op_Inequality(__this->_voidMethod, NULL))
    {
        uPtr(__this->_voidMethod)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args);
        return *__retval = NULL, void();
    }
    else
        return *__retval = uPtr(__this->_method)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args), void();
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :2254
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New1(__type, name, method, *thread);
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [instance] :2254
void ScriptMethod1::ctor_2(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _voidMethod = method;
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [static] :2254
ScriptMethod1* ScriptMethod1::New1(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj2 = (ScriptMethod1*)uNew(__type);
    obj2->ctor_2(name, method, thread);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ScriptMethodInline :2229
// {
static void ScriptMethodInline_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptMethodInline, Code), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptMethodInline);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethodInline", options);
    type->fp_build_ = ScriptMethodInline_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethodInline__Call_fn;
    return type;
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) :2233
void ScriptMethodInline__ctor_2_fn(ScriptMethodInline* __this, uString* name, int* thread, uString* code)
{
    __this->ctor_2(name, *thread, code);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :2238
void ScriptMethodInline__Call_fn(ScriptMethodInline* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) :2233
void ScriptMethodInline__New1_fn(uString* name, int* thread, uString* code, ScriptMethodInline** __retval)
{
    *__retval = ScriptMethodInline::New1(name, *thread, code);
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) [instance] :2233
void ScriptMethodInline::ctor_2(uString* name, int thread, uString* code)
{
    ctor_1(name, thread);
    Code = code;
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) [static] :2233
ScriptMethodInline* ScriptMethodInline::New1(uString* name, int thread, uString* code)
{
    ScriptMethodInline* obj1 = (ScriptMethodInline*)uNew(ScriptMethodInline_typeof());
    obj1->ctor_2(name, thread, code);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public partial class ScriptModule :17
// {
// static ScriptModule() :17
static void ScriptModule__cctor__fn(uType* __type)
{
    ScriptModule::ModuleContainsAnErrorMessage_ = ::STRINGS[115/*"require(): ...*/];
}

static void ScriptModule_build(uType* type)
{
    ::STRINGS[115] = uString::Const("require(): module contains an error: ");
    ::STRINGS[116] = uString::Const(".js");
    ::STRINGS[15] = uString::Const("");
    ::STRINGS[24] = uString::Const(".");
    ::STRINGS[117] = uString::Const("/");
    ::STRINGS[118] = uString::Const("..");
    ::STRINGS[119] = uString::Const("(function(");
    ::STRINGS[120] = uString::Const(") { ");
    ::STRINGS[121] = uString::Const("\n"
        " })");
    ::STRINGS[122] = uString::Const("Could not evaluate module '");
    ::STRINGS[123] = uString::Const("': JavaScript code contains errors");
    ::STRINGS[64] = uString::Const("exports");
    ::STRINGS[124] = uString::Const("module, exports, require");
    ::STRINGS[125] = uString::Const("/index.js");
    ::TYPES[104] = ::g::Fuse::Scripting::IModuleProvider_typeof();
    ::TYPES[67] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[96] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[42] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[45] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[47] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[105] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[106] = ::g::Uno::UX::BundleFileSource_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScriptModule_type, interface0));
    type->SetFields(2,
        ::g::Uno::IO::Bundle_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _bundle), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _code), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _file), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule, _lineNumberOffset), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_, uFieldFlagsStatic);
}

ScriptModule_type* ScriptModule_typeof()
{
    static uSStrong<ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScriptModule);
    options.TypeSize = sizeof(ScriptModule_type);
    type = (ScriptModule_type*)uClassType::New("Fuse.Scripting.ScriptModule", options);
    type->fp_build_ = ScriptModule_build;
    type->fp_cctor_ = ScriptModule__cctor__fn;
    type->fp_CallModuleFunc = ScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))ScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = ScriptModule__GenerateArgs_fn;
    type->fp_GetFile = (void(*)(::g::Fuse::Scripting::Module*, ::g::Uno::UX::FileSource**))ScriptModule__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated ScriptModule() :17
void ScriptModule__ctor_1_fn(ScriptModule* __this)
{
    __this->ctor_1();
}

// private bool Acceptor(object obj) :321
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public Uno.IO.Bundle get_Bundle() :34
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// public void set_Bundle(Uno.IO.Bundle value) :39
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// protected virtual void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :135
void ScriptModule__CallModuleFunc_fn(ScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(moduleFunc)->Call(args);
}

// public string get_Code() :48
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :53
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value)
{
    __this->Code(value);
}

// private string ComputePath(string moduleId, bool& isFile) :252
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval)
{
    *__retval = __this->ComputePath(moduleId, isFile);
}

// private static string ComputePath(string sourcePath, string moduleId) :279
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval)
{
    *__retval = ScriptModule::ComputePath1(sourcePath, moduleId);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :103
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    uArray* newlines = uArray::New(::TYPES[67/*char[]*/], __this->LineNumberOffset());

    for (int i = 0; i < __this->LineNumberOffset(); ++i)
        uPtr(newlines)->Item<uChar>(i) = 10;

    ::g::Uno::Collections::List* args = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[96/*Uno.Collections.List<object>*/]);
    uString* wrappedCode = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[119/*"(function("*/], __this->GenerateArgs(c, result, args)), ::STRINGS[120/*") { "*/]), uString::CharArray(newlines)), __this->Code()), ::STRINGS[121/*"\n })"*/]);
    ::g::Fuse::Scripting::Function* moduleFunc = uCast< ::g::Fuse::Scripting::Function*>(uPtr(c)->Evaluate(__this->FileName(), wrappedCode), ::TYPES[22/*Fuse.Scripting.Function*/]);

    if (moduleFunc == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[122/*"Could not e...*/], __this->FileName()), ::STRINGS[123/*"': JavaScri...*/])));

    __this->CallModuleFunc(moduleFunc, (uArray*)args->ToArray());
}

// public Uno.UX.FileSource get_File() :22
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :23
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :62
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :67
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value)
{
    __this->FileName(value);
}

// protected virtual string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :124
void ScriptModule__GenerateArgs_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;
    ::g::Uno::Collections::List__Add_fn(uPtr(args), module);
    ::g::Uno::Collections::List__Add_fn(args, uPtr(module)->Item(::STRINGS[64/*"exports"*/]));
    ::g::Uno::Collections::List__Add_fn(args, uDelegate::New(::TYPES[42/*Fuse.Scripting.Callback*/], (void*)ScriptModule__RequireContext__Require_fn, ScriptModule__RequireContext::New1(c, __this, result)));
    return *__retval = ::STRINGS[124/*"module, exp...*/], void();
}

// public override sealed Uno.UX.FileSource GetFile() :29
void ScriptModule__GetFile_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = __this->_file, void();
}

// private string GetSourcePath() :273
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetSourcePath();
}

// private static bool IsPathEqual(string src, string path) :313
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval)
{
    *__retval = ScriptModule::IsPathEqual(src, path);
}

// public int get_LineNumberOffset() :76
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->LineNumberOffset();
}

// public void set_LineNumberOffset(int value) :81
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value)
{
    __this->LineNumberOffset(*value);
}

// private Uno.IO.BundleFile LookForFile(string path) :295
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->LookForFile(path);
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) :231
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval)
{
    *__retval = __this->TryResolve(path, *isFile);
}

uSStrong<uString*> ScriptModule::ModuleContainsAnErrorMessage_;

// public generated ScriptModule() [instance] :17
void ScriptModule::ctor_1()
{
    ctor_();
}

// private bool Acceptor(object obj) [instance] :321
bool ScriptModule::Acceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[104/*Fuse.Scripting.IModuleProvider*/]);
}

// public Uno.IO.Bundle get_Bundle() [instance] :34
::g::Uno::IO::Bundle* ScriptModule::Bundle()
{
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::TYPES[106/*Uno.UX.BundleFileSource*/]);
    return (bfs != NULL) ? (::g::Uno::IO::Bundle*)uPtr(uPtr(bfs)->BundleFile)->Bundle() : (::g::Uno::IO::Bundle*)_bundle;
}

// public void set_Bundle(Uno.IO.Bundle value) [instance] :39
void ScriptModule::Bundle(::g::Uno::IO::Bundle* value)
{
    _bundle = value;
}

// public string get_Code() [instance] :48
uString* ScriptModule::Code()
{
    if (File() != NULL)
        return uPtr(File())->ReadAllText();

    return _code;
}

// public void set_Code(string value) [instance] :53
void ScriptModule::Code(uString* value)
{
    _code = value;
}

// private string ComputePath(string moduleId, bool& isFile) [instance] :252
uString* ScriptModule::ComputePath(uString* moduleId, bool* isFile)
{
    if (::g::Uno::String::EndsWith(uPtr(moduleId), ::STRINGS[116/*".js"*/]))
        moduleId = ::g::Uno::String::Replace1(uPtr(moduleId), ::STRINGS[116/*".js"*/], ::STRINGS[15/*""*/]);

    if (::g::Uno::String::StartsWith(uPtr(moduleId), ::STRINGS[24/*"."*/]))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(GetSourcePath(), moduleId);
    }
    else if (::g::Uno::String::StartsWith(uPtr(moduleId), ::STRINGS[117/*"/"*/]))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(::STRINGS[15/*""*/], moduleId);
    }

    *isFile = false;
    return moduleId;
}

// public Uno.UX.FileSource get_File() [instance] :22
::g::Uno::UX::FileSource* ScriptModule::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :23
void ScriptModule::File(::g::Uno::UX::FileSource* value)
{
    _file = value;
}

// public string get_FileName() [instance] :62
uString* ScriptModule::FileName()
{
    if (File() != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :67
void ScriptModule::FileName(uString* value)
{
    _fileName = value;
}

// private string GetSourcePath() [instance] :273
uString* ScriptModule::GetSourcePath()
{
    if (::g::Uno::String::op_Inequality(FileName(), NULL))
        return ::g::Uno::String::Trim1(uPtr(::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(FileName())), '\\', '/')), uArray::Init<int>(::TYPES[67/*char[]*/], 1, '/'));
    else
        return ::STRINGS[15/*""*/];
}

// public int get_LineNumberOffset() [instance] :76
int ScriptModule::LineNumberOffset()
{
    if (File() != NULL)
        return 0;

    return _lineNumberOffset;
}

// public void set_LineNumberOffset(int value) [instance] :81
void ScriptModule::LineNumberOffset(int value)
{
    _lineNumberOffset = value;
}

// private Uno.IO.BundleFile LookForFile(string path) [instance] :295
::g::Uno::IO::BundleFile* ScriptModule::LookForFile(uString* path)
{
    ::g::Uno::IO::BundleFile* ret4;
    ::g::Uno::IO::BundleFile* ret5;

    if (Bundle() != NULL)

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle())->Files()), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[47/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret4), ret4);

            if (ScriptModule::IsPathEqual(uPtr(f)->SourcePath(), path))
                return f;
        }

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::TYPES[45/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[46/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::IO::BundleFile* f1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[47/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret5), ret5);

        if (ScriptModule::IsPathEqual(uPtr(f1)->SourcePath(), path))
            return f1;
    }

    return NULL;
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) [instance] :231
::g::Fuse::Scripting::Module* ScriptModule::TryResolve(uString* path, bool isFile)
{
    ::g::Uno::IO::BundleFile* file = LookForFile(path);

    if (file != NULL)
        return ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::BundleFileSource::New1(file));

    if (!isFile)
    {
        uObject* res;

        if (::g::Uno::UX::Resource::TryFindGlobal(path, uDelegate::New(::TYPES[105/*Uno.Predicate<object>*/], (void*)ScriptModule__Acceptor_fn, this), &res))
        {
            uObject* mp = (uObject*)res;
            return ::g::Fuse::Scripting::IModuleProvider::GetModule(uInterface(uPtr(mp), ::TYPES[104/*Fuse.Scripting.IModuleProvider*/]));
        }
    }

    return NULL;
}

// private static string ComputePath(string sourcePath, string moduleId) [static] :279
uString* ScriptModule::ComputePath1(uString* sourcePath, uString* moduleId)
{
    ScriptModule_typeof()->Init();
    uArray* parts = ::g::Uno::String::Split(uPtr(moduleId), uArray::Init<int>(::TYPES[67/*char[]*/], 1, '/'));

    for (int i = 0; i < uPtr(parts)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[15/*""*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[24/*"."*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[118/*".."*/]))
            sourcePath = ::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(sourcePath)), '\\', '/');
        else if (uPtr(sourcePath)->Length() > 0)
            sourcePath = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(sourcePath, ::STRINGS[117/*"/"*/]), uPtr(parts)->Strong<uString*>(i));
        else
            sourcePath = uPtr(parts)->Strong<uString*>(i);

    return sourcePath;
}

// private static bool IsPathEqual(string src, string path) [static] :313
bool ScriptModule::IsPathEqual(uString* src, uString* path)
{
    ScriptModule_typeof()->Init();

    if (::g::Uno::String::op_Equality(src, path))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, ::STRINGS[116/*".js"*/])))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, ::STRINGS[125/*"/index.js"*/])))
        return true;

    return false;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ScriptProperty :2193
// {
static void ScriptProperty_build(uType* type)
{
    ::STRINGS[15] = uString::Const("");
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Scripting::ScriptProperty, Modifier), 0);
}

ScriptProperty_type* ScriptProperty_typeof()
{
    static uSStrong<ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptProperty);
    options.TypeSize = sizeof(ScriptProperty_type);
    type = (ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty", options);
    type->fp_build_ = ScriptProperty_build;
    return type;
}

// protected ScriptProperty(string name, [string modifier]) :2196
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier)
{
    __this->ctor_1(name, modifier);
}

// protected ScriptProperty(string name, [string modifier]) [instance] :2196
void ScriptProperty::ctor_1(uString* name, uString* modifier)
{
    ctor_(name);
    Modifier = ((modifier != NULL) ? modifier : ::STRINGS[15/*""*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class ScriptProperty<TOwner, TValue> :2203
// {
static void ScriptProperty1_build(uType* type)
{
    ::STRINGS[126] = uString::Const("ScriptProperty: incorrect owner type");
    type->SetPrecalc(
        type->T(0));
    type->SetFields(2,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), ::g::Uno::UX::Property1_typeof()->MakeType(type->T(1), NULL), NULL), offsetof(::g::Fuse::Scripting::ScriptProperty1, _getter), 0);
}

::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptProperty_typeof();
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptProperty1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptProperty_type);
    type = (::g::Fuse::Scripting::ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty`2", options);
    type->fp_build_ = ScriptProperty1_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::ScriptProperty*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Property**))ScriptProperty1__GetProperty_fn;
    return type;
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :2211
void ScriptProperty1__ctor_2_fn(ScriptProperty1* __this, uString* name, uDelegate* getter, uString* modifier)
{
    __this->ctor_2(name, getter, modifier);
}

// public override sealed Uno.UX.Property GetProperty(Uno.UX.PropertyObject owner) :2206
void ScriptProperty1__GetProperty_fn(ScriptProperty1* __this, ::g::Uno::UX::PropertyObject* owner, ::g::Uno::UX::Property** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*TOwner*/),
    };

    if (!uIs(owner, __types[0]))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[126/*"ScriptPrope...*/]));

    return *__retval = (::g::Uno::UX::Property1*)uPtr(__this->_getter)->Invoke(1, (void*)uUnboxAny(__types[0], owner)), void();
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :2211
void ScriptProperty1__New1_fn(uType* __type, uString* name, uDelegate* getter, uString* modifier, ScriptProperty1** __retval)
{
    *__retval = ScriptProperty1::New1(__type, name, getter, modifier);
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [instance] :2211
void ScriptProperty1::ctor_2(uString* name, uDelegate* getter, uString* modifier)
{
    ctor_1(name, modifier);
    _getter = getter;
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [static] :2211
ScriptProperty1* ScriptProperty1::New1(uType* __type, uString* name, uDelegate* getter, uString* modifier)
{
    ScriptProperty1* obj1 = (ScriptProperty1*)uNew(__type);
    obj1->ctor_2(name, getter, modifier);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// private sealed class Observable.Set :1757
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__Set, _origin), 0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::Observable__Set, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Scripting.Observable obs, object value, int origin) :1762
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Scripting.Observable obs, object value, int origin) :1762
void Observable__Set__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :1773
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Scripting::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Scripting.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :1768
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Scripting.Observable obs, object value, int origin) [instance] :1762
void Observable__Set::ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Scripting.Observable obs, object value, int origin) [static] :1762
Observable__Set* Observable__Set::New1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class StringChangedArgs :784
// {
static void StringChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[9] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(StringChangedArgs_type, interface0));
    type->SetFields(1);
}

StringChangedArgs_type* StringChangedArgs_typeof()
{
    static uSStrong<StringChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(StringChangedArgs_type);
    type = (StringChangedArgs_type*)uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->fp_build_ = StringChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))StringChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public StringChangedArgs(string newValue) :786
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue)
{
    __this->ctor_2(newValue);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :788
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s)
{
    uString* ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[9/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public StringChangedArgs New(string newValue) :786
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue);
}

// public StringChangedArgs(string newValue) [instance] :786
void StringChangedArgs::ctor_2(uString* newValue)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue);
}

// public StringChangedArgs New(string newValue) [static] :786
StringChangedArgs* StringChangedArgs::New3(uString* newValue)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public sealed class Observable.Subscription :1534
// {
// static Subscription() :1534
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    ::STRINGS[72] = uString::Const("clear");
    ::STRINGS[127] = uString::Const("replaceAllWithOrigin");
    ::STRINGS[128] = uString::Const("Unexpected null object");
    ::STRINGS[7] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\FuseCore\\0.43.11\\scripting\\$.uno");
    ::STRINGS[129] = uString::Const("SetExclusive");
    ::STRINGS[130] = uString::Const("setValueWithOrigin");
    ::STRINGS[131] = uString::Const("Failed to set Observable value");
    ::TYPES[4] = ::g::Fuse::Scripting::IObserver_typeof();
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[68] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface0));
    type->SetFields(0,
        ::TYPES[4/*Fuse.Scripting.IObserver*/], offsetof(::g::Fuse::Scripting::Observable__Subscription, _obs), 0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(::g::Fuse::Scripting::Observable__Subscription, _om), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Scripting::Observable__Subscription, _origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Scripting::Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Scripting::Observable__Subscription::_counter_, uFieldFlagsStatic);
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Scripting.Observable.Subscription", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Scripting.Observable om, Fuse.Scripting.IObserver obs) :1551
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    __this->ctor_(om, obs);
}

// public void ClearExclusive() :1596
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose() :1604
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Scripting.Observable om, Fuse.Scripting.IObserver obs) :1551
void Observable__Subscription__New1_fn(::g::Fuse::Scripting::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New1(om, obs);
}

// public Fuse.Scripting.IObserver get_Observer() :1549
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :1540
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :1540
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void ReplaceAllExclusive<T>(T[] newValues) :1584
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uType* __type, uArray* newValues)
{
    __this->ReplaceAllExclusive(__type, newValues);
}

// public void SetExclusive(object newValue) :1564
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public bool ShouldSend([int origin]) :1542
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Scripting.Observable om, Fuse.Scripting.IObserver obs) [instance] :1551
void Observable__Subscription::ctor_(::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    Removed(false);
    _origin = (Observable__Subscription::_counter()++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;

    if (uPtr(_om)->Length() == 1)
        ::g::Fuse::Scripting::IObserver::OnSet(uInterface(uPtr(obs), ::TYPES[4/*Fuse.Scripting.IObserver*/]), uPtr(_om)->Item(0));
    else
        ::g::Fuse::Scripting::IObserver::OnNewAll(uInterface(uPtr(obs), ::TYPES[4/*Fuse.Scripting.IObserver*/]), _om);
}

// public void ClearExclusive() [instance] :1596
void Observable__Subscription::ClearExclusive()
{
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[72/*"clear"*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 1, uBox<int>(::TYPES[39/*int*/], _origin)));
}

// public void Dispose() [instance] :1604
void Observable__Subscription::Dispose()
{
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Scripting.IObserver get_Observer() [instance] :1549
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :1540
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :1540
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void ReplaceAllExclusive<T>(T[] newValues) [instance] :1584
void Observable__Subscription::ReplaceAllExclusive(uType* __type, uArray* newValues)
{
    uArray* arr = uArray::New(::TYPES[7/*object[]*/], uPtr(newValues)->Length());

    for (int i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = ::g::Fuse::Scripting::ValueMirror::Unbox(uBoxPtr(__type->U(0), uPtr(newValues)->TItem(i)));

    ::g::Fuse::Scripting::Array* sa = uPtr(uPtr(_om)->_context)->NewArray(arr);
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[127/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, sa, uBox<int>(::TYPES[39/*int*/], _origin)));
}

// public void SetExclusive(object newValue) [instance] :1564
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[128/*"Unexpected ...*/], this, ::STRINGS[7/*"C:\\Users\\...*/], 1568, ::STRINGS[129/*"SetExclusive"*/]);
        return;
    }

    try
    {
        uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[130/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[7/*object[]*/], 2, (uObject*)uPtr(uPtr(_om)->_context)->Unwrap(newValue), uBox<int>(::TYPES[39/*int*/], _origin)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[68/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[131/*"Failed to s...*/], ex, this, ::STRINGS[7/*"C:\\Users\\...*/], 1580, ::STRINGS[129/*"SetExclusive"*/]);
        }
        else throw __t;
    }
}

// public bool ShouldSend([int origin]) [instance] :1542
bool Observable__Subscription::ShouldSend(int origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Scripting.Observable om, Fuse.Scripting.IObserver obs) [static] :1551
Observable__Subscription* Observable__Subscription::New1(::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_(om, obs);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public static class Value :2519
// {
static void Value_build(uType* type)
{
    ::TYPES[55] = ::g::Uno::Double_typeof();
    ::TYPES[38] = ::g::Uno::Float_typeof();
    ::TYPES[39] = ::g::Uno::Int_typeof();
    ::TYPES[40] = ::g::Uno::UInt_typeof();
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static double ToNumber(object obj) :2521
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :2521
double Value::ToNumber(uObject* obj)
{
    if (uIs(obj, ::TYPES[55/*double*/]))
        return uUnbox<double>(::TYPES[55/*double*/], obj);

    if (uIs(obj, ::TYPES[38/*float*/]))
        return (double)uUnbox<float>(::TYPES[38/*float*/], obj);

    if (uIs(obj, ::TYPES[39/*int*/]))
        return (double)uUnbox<int>(::TYPES[39/*int*/], obj);

    if (uIs(obj, ::TYPES[40/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[40/*uint*/], obj);

    return 0.0;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno
// ---------------------------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :1020
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno
// -------------------------------------------------------------------------------------

// public abstract class ValueMirror :2572
// {
static void ValueMirror_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Scripting::ValueMirror, _raw), 0);
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Scripting.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    return type;
}

// protected ValueMirror(object raw) :2579
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_(raw);
}

// public object get_Raw() :2577
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public static object Unbox(object obj) :2584
void ValueMirror__Unbox_fn(uObject* obj, uObject** __retval)
{
    *__retval = ValueMirror::Unbox(obj);
}

// public static void Unsubscribe(object obj) :2591
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :2579
void ValueMirror::ctor_(uObject* raw)
{
    _raw = raw;
}

// public object get_Raw() [instance] :2577
uObject* ValueMirror::Raw()
{
    return _raw;
}

// public static object Unbox(object obj) [static] :2584
uObject* ValueMirror::Unbox(uObject* obj)
{
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        return uPtr(vm)->_raw;

    return obj;
}

// public static void Unsubscribe(object obj) [static] :2591
void ValueMirror::Unsubscribe1(uObject* obj)
{
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

}}} // ::g::Fuse::Scripting
