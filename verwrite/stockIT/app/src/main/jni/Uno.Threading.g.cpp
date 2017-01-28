// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <posix_mutex.h>
#include <posix_thread.h>
#include <PosixResetEvent.h>
#include <uBase/Thread.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.String.h>
#include <Uno.Threading.AutoResetEvent.h>
#include <Uno.Threading.AutoResetEventImpl.h>
#include <Uno.Threading.CancellationToken.h>
#include <Uno.Threading.CancellationTokenSource.h>
#include <Uno.Threading.ConcurrentDictionary-2.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.Closure-1.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.FutureState.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h>
#include <Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h>
#include <Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h>
#include <Uno.Threading.IDispatcherExtensions.h>
#include <Uno.Threading.ITaskScheduler.h>
#include <Uno.Threading.LockGuard.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.ManualResetEventImpl.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Mutex.h>
#include <Uno.Threading.MutexImpl.h>
#include <Uno.Threading.PosixAutoResetEvent.h>
#include <Uno.Threading.PosixManualResetEvent.h>
#include <Uno.Threading.POSIXMutex.h>
#include <Uno.Threading.POSIXThread.h>
#include <Uno.Threading.POSIXThread.ReleasingLauncher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.SyncDispatcher.h>
#include <Uno.Threading.Task.h>
#include <Uno.Threading.TaskDelegate.h>
#include <Uno.Threading.TaskFuture-1.h>
#include <Uno.Threading.TaskStatus.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadImpl.h>
#include <Uno.Threading.ThreadPool.DefaultWorkItem.h>
#include <Uno.Threading.ThreadPool.h>
#include <Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h>
#include <Uno.Threading.ThreadPool.WorkItem.h>
#include <Uno.Threading.ThreadPoolTaskScheduler.h>
#include <Uno.ULong.h>
#include <Uno/Support.h>
static uString* STRINGS[8];
static uType* TYPES[23];

namespace g{
namespace Uno{
namespace Threading{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1Invoke<T> :494
// {
static void IDispatcherExtensions__Arg1Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1Invoke`1", options);
    type->fp_build_ = IDispatcherExtensions__Arg1Invoke_build;
    return type;
}

// public Arg1Invoke(Uno.Action<T> action, T arg) :498
void IDispatcherExtensions__Arg1Invoke__ctor__fn(IDispatcherExtensions__Arg1Invoke* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1Invoke New(Uno.Action<T> action, T arg) :498
void IDispatcherExtensions__Arg1Invoke__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1Invoke** __retval)
{
    IDispatcherExtensions__Arg1Invoke* obj1 = (IDispatcherExtensions__Arg1Invoke*)uNew(__type);
    IDispatcherExtensions__Arg1Invoke__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :503
void IDispatcherExtensions__Arg1Invoke__Run_fn(IDispatcherExtensions__Arg1Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :503
void IDispatcherExtensions__Arg1Invoke::Run()
{
    uPtr(_action)->InvokeVoid(_arg());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg1InvokeFunc<T, TResult> :566
// {
static void IDispatcherExtensions__Arg1InvokeFunc_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg1InvokeFunc_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg1InvokeFunc);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg1InvokeFunc_build;
    return type;
}

// public Arg1InvokeFunc(Uno.Func<T, TResult> action, T arg) :570
void IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(IDispatcherExtensions__Arg1InvokeFunc* __this, uDelegate* action, void* arg)
{
    __this->_action = action;
    __this->_arg() = arg;
}

// public Arg1InvokeFunc New(Uno.Func<T, TResult> action, T arg) :570
void IDispatcherExtensions__Arg1InvokeFunc__New1_fn(uType* __type, uDelegate* action, void* arg, IDispatcherExtensions__Arg1InvokeFunc** __retval)
{
    IDispatcherExtensions__Arg1InvokeFunc* obj1 = (IDispatcherExtensions__Arg1InvokeFunc*)uNew(__type);
    IDispatcherExtensions__Arg1InvokeFunc__ctor__fn(obj1, action, arg);
    return *__retval = obj1, void();
}

// public void Run() :575
void IDispatcherExtensions__Arg1InvokeFunc__Run_fn(IDispatcherExtensions__Arg1InvokeFunc* __this)
{
    __this->Run();
}

// public void Run() [instance] :575
void IDispatcherExtensions__Arg1InvokeFunc::Run()
{
    uType* __types[] = {
        __type->Precalced(0/*TResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uPtr(_action)->Invoke(&ret2, 1, (void*)_arg());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class IDispatcherExtensions.Arg2Invoke<T1, T2> :506
// {
static void IDispatcherExtensions__Arg2Invoke_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* IDispatcherExtensions__Arg2Invoke_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(IDispatcherExtensions__Arg2Invoke);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions.Arg2Invoke`2", options);
    type->fp_build_ = IDispatcherExtensions__Arg2Invoke_build;
    return type;
}

// public Arg2Invoke(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :511
void IDispatcherExtensions__Arg2Invoke__ctor__fn(IDispatcherExtensions__Arg2Invoke* __this, uDelegate* action, void* arg1, void* arg2)
{
    __this->_action = action;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public Arg2Invoke New(Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :511
void IDispatcherExtensions__Arg2Invoke__New1_fn(uType* __type, uDelegate* action, void* arg1, void* arg2, IDispatcherExtensions__Arg2Invoke** __retval)
{
    IDispatcherExtensions__Arg2Invoke* obj1 = (IDispatcherExtensions__Arg2Invoke*)uNew(__type);
    IDispatcherExtensions__Arg2Invoke__ctor__fn(obj1, action, arg1, arg2);
    return *__retval = obj1, void();
}

// public void Run() :517
void IDispatcherExtensions__Arg2Invoke__Run_fn(IDispatcherExtensions__Arg2Invoke* __this)
{
    __this->Run();
}

// public void Run() [instance] :517
void IDispatcherExtensions__Arg2Invoke::Run()
{
    uPtr(_action)->Invoke(2, (void*)_arg1(), (void*)_arg2());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class AutoResetEvent :18
// {
static void AutoResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AutoResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::AutoResetEventImpl_typeof(), offsetof(::g::Uno::Threading::AutoResetEvent, _impl), 0);
}

AutoResetEvent_type* AutoResetEvent_typeof()
{
    static uSStrong<AutoResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AutoResetEvent);
    options.TypeSize = sizeof(AutoResetEvent_type);
    type = (AutoResetEvent_type*)uClassType::New("Uno.Threading.AutoResetEvent", options);
    type->fp_build_ = AutoResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))AutoResetEvent__Dispose_fn;
    return type;
}

// public AutoResetEvent(bool initialState) :27
void AutoResetEvent__ctor__fn(AutoResetEvent* __this, bool* initialState)
{
    __this->ctor_(*initialState);
}

// public void Dispose() :43
void AutoResetEvent__Dispose_fn(AutoResetEvent* __this)
{
    __this->Dispose();
}

// public AutoResetEvent New(bool initialState) :27
void AutoResetEvent__New1_fn(bool* initialState, AutoResetEvent** __retval)
{
    *__retval = AutoResetEvent::New1(*initialState);
}

// public bool Set() :42
void AutoResetEvent__Set_fn(AutoResetEvent* __this, bool* __retval)
{
    *__retval = __this->Set();
}

// public bool WaitOne() :39
void AutoResetEvent__WaitOne_fn(AutoResetEvent* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public AutoResetEvent(bool initialState) [instance] :27
void AutoResetEvent::ctor_(bool initialState)
{
    _impl = ::g::Uno::Threading::PosixAutoResetEvent::New1(initialState);
}

// public void Dispose() [instance] :43
void AutoResetEvent::Dispose()
{
    uPtr(_impl)->Dispose();
}

// public bool Set() [instance] :42
bool AutoResetEvent::Set()
{
    return uPtr(_impl)->Set();
}

// public bool WaitOne() [instance] :39
bool AutoResetEvent::WaitOne()
{
    return uPtr(_impl)->WaitOne();
}

// public AutoResetEvent New(bool initialState) [static] :27
AutoResetEvent* AutoResetEvent::New1(bool initialState)
{
    AutoResetEvent* obj1 = (AutoResetEvent*)uNew(AutoResetEvent_typeof());
    obj1->ctor_(initialState);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal abstract class AutoResetEventImpl :9
// {
static void AutoResetEventImpl_build(uType* type)
{
}

AutoResetEventImpl_type* AutoResetEventImpl_typeof()
{
    static uSStrong<AutoResetEventImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AutoResetEventImpl);
    options.TypeSize = sizeof(AutoResetEventImpl_type);
    type = (AutoResetEventImpl_type*)uClassType::New("Uno.Threading.AutoResetEventImpl", options);
    type->fp_build_ = AutoResetEventImpl_build;
    return type;
}

// protected generated AutoResetEventImpl() :9
void AutoResetEventImpl__ctor__fn(AutoResetEventImpl* __this)
{
    __this->ctor_();
}

// protected generated AutoResetEventImpl() [instance] :9
void AutoResetEventImpl::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class CancellationToken :34
// {
static void CancellationToken_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::CancellationToken, _IsCancellationRequested), 0);
}

uType* CancellationToken_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationToken);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationToken", options);
    type->fp_build_ = CancellationToken_build;
    type->fp_ctor_ = (void*)CancellationToken__New1_fn;
    return type;
}

// public CancellationToken() :41
void CancellationToken__ctor__fn(CancellationToken* __this)
{
    __this->ctor_();
}

// public generated bool get_IsCancellationRequested() :38
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval)
{
    *__retval = __this->IsCancellationRequested();
}

// private generated void set_IsCancellationRequested(bool value) :38
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value)
{
    __this->IsCancellationRequested(*value);
}

// public CancellationToken New() :41
void CancellationToken__New1_fn(CancellationToken** __retval)
{
    *__retval = CancellationToken::New1();
}

// internal void SetCancellationRequested() :46
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this)
{
    __this->SetCancellationRequested();
}

// public CancellationToken() [instance] :41
void CancellationToken::ctor_()
{
    IsCancellationRequested(false);
}

// public generated bool get_IsCancellationRequested() [instance] :38
bool CancellationToken::IsCancellationRequested()
{
    return _IsCancellationRequested;
}

// private generated void set_IsCancellationRequested(bool value) [instance] :38
void CancellationToken::IsCancellationRequested(bool value)
{
    _IsCancellationRequested = value;
}

// internal void SetCancellationRequested() [instance] :46
void CancellationToken::SetCancellationRequested()
{
    IsCancellationRequested(true);
}

// public CancellationToken New() [static] :41
CancellationToken* CancellationToken::New1()
{
    CancellationToken* obj1 = (CancellationToken*)uNew(CancellationToken_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class CancellationTokenSource :9
// {
static void CancellationTokenSource_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::CancellationToken_typeof(), offsetof(::g::Uno::Threading::CancellationTokenSource, _token), 0);
}

uType* CancellationTokenSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(CancellationTokenSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.CancellationTokenSource", options);
    type->fp_build_ = CancellationTokenSource_build;
    type->fp_ctor_ = (void*)CancellationTokenSource__New1_fn;
    return type;
}

// public CancellationTokenSource() :23
void CancellationTokenSource__ctor__fn(CancellationTokenSource* __this)
{
    __this->ctor_();
}

// public void Cancel() :28
void CancellationTokenSource__Cancel_fn(CancellationTokenSource* __this)
{
    __this->Cancel();
}

// public CancellationTokenSource New() :23
void CancellationTokenSource__New1_fn(CancellationTokenSource** __retval)
{
    *__retval = CancellationTokenSource::New1();
}

// public Uno.Threading.CancellationToken get_Token() :18
void CancellationTokenSource__get_Token_fn(CancellationTokenSource* __this, ::g::Uno::Threading::CancellationToken** __retval)
{
    *__retval = __this->Token();
}

// public CancellationTokenSource() [instance] :23
void CancellationTokenSource::ctor_()
{
    _token = ::g::Uno::Threading::CancellationToken::New1();
}

// public void Cancel() [instance] :28
void CancellationTokenSource::Cancel()
{
    uPtr(_token)->SetCancellationRequested();
}

// public Uno.Threading.CancellationToken get_Token() [instance] :18
::g::Uno::Threading::CancellationToken* CancellationTokenSource::Token()
{
    return _token;
}

// public CancellationTokenSource New() [static] :23
CancellationTokenSource* CancellationTokenSource::New1()
{
    CancellationTokenSource* obj1 = (CancellationTokenSource*)uNew(CancellationTokenSource_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class Future<T>.Closure<T> :432
// {
static void Future1__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL), offsetof(::g::Uno::Threading::Future1__Closure, _action), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* Future1__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(Future1__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Future`1.Closure`1", options);
    type->fp_build_ = Future1__Closure_build;
    return type;
}

// public Closure(Uno.Action<T> action, T result) :437
void Future1__Closure__ctor__fn(Future1__Closure* __this, uDelegate* action, void* result)
{
    __this->_action = action;
    __this->_result() = result;
}

// public Closure New(Uno.Action<T> action, T result) :437
void Future1__Closure__New1_fn(uType* __type, uDelegate* action, void* result, Future1__Closure** __retval)
{
    Future1__Closure* obj1 = (Future1__Closure*)uNew(__type);
    Future1__Closure__ctor__fn(obj1, action, result);
    return *__retval = obj1, void();
}

// public void Run() :443
void Future1__Closure__Run_fn(Future1__Closure* __this)
{
    __this->Run();
}

// public void Run() [instance] :443
void Future1__Closure::Run()
{
    uPtr(_action)->InvokeVoid(_result());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class ConcurrentDictionary<TKey, TValue> :54
// {
static void ConcurrentDictionary_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        type->T(1));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(ConcurrentDictionary_type, interface0),
        ::TYPES[3/*Uno.Collections.ICollection`1*/]->MakeType(::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::TYPES[2/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(ConcurrentDictionary_type, interface2));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Threading::ConcurrentDictionary, _dictionary), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentDictionary, _mutex), 0);
}

ConcurrentDictionary_type* ConcurrentDictionary_typeof()
{
    static uSStrong<ConcurrentDictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 6;
    options.ObjectSize = sizeof(ConcurrentDictionary);
    options.TypeSize = sizeof(ConcurrentDictionary_type);
    type = (ConcurrentDictionary_type*)uClassType::New("Uno.Threading.ConcurrentDictionary`2", options);
    type->fp_build_ = ConcurrentDictionary_build;
    type->fp_ctor_ = (void*)ConcurrentDictionary__New1_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))ConcurrentDictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ConcurrentDictionary__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ConcurrentDictionary__Add1_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Remove1_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ConcurrentDictionary__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ConcurrentDictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ConcurrentDictionary__GetEnumerator_fn;
    return type;
}

// public generated ConcurrentDictionary() :54
void ConcurrentDictionary__ctor__fn(ConcurrentDictionary* __this)
{
    __this->ctor_();
}

// public void Add(TKey key, TValue value) :98
void ConcurrentDictionary__Add_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public void Add(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :178
void ConcurrentDictionary__Add1_fn(ConcurrentDictionary* __this, void* keyValue)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_);
    }
}

// public void Clear() :159
void ConcurrentDictionary__Clear_fn(ConcurrentDictionary* __this)
{
    __this->Clear();
}

// public bool Contains(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :194
void ConcurrentDictionary__Contains_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret4), ret4), void();
    }
}

// public bool ContainsKey(TKey key) :122
void ConcurrentDictionary__ContainsKey_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    bool ret5;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_dictionary), key, &ret5), ret5), void();
    }
}

// public int get_Count() :169
void ConcurrentDictionary__get_Count_fn(ConcurrentDictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() :60
void ConcurrentDictionary__GetEnumerator_fn(ConcurrentDictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public TValue get_Item(TKey key) :132
void ConcurrentDictionary__get_Item_fn(ConcurrentDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(5/*TValue*/),
    };
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), key, &ret10), ret10)), void();
    }
}

// public void set_Item(TKey key, TValue value) :139
void ConcurrentDictionary__set_Item_fn(ConcurrentDictionary* __this, void* key, void* value)
{
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), key, value);
    }
}

// public generated ConcurrentDictionary New() :54
void ConcurrentDictionary__New1_fn(uType* __type, ConcurrentDictionary** __retval)
{
    *__retval = ConcurrentDictionary::New1(__type);
}

// public bool Remove(TKey key) :114
void ConcurrentDictionary__Remove_fn(ConcurrentDictionary* __this, void* key, bool* __retval)
{
    bool ret7;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_dictionary), key, &ret7), ret7), void();
    }
}

// public bool Remove(Uno.Collections.KeyValuePair<TKey, TValue> keyValue) :186
void ConcurrentDictionary__Remove1_fn(ConcurrentDictionary* __this, void* keyValue, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(2/*Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT keyValue_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;
    keyValue_ = keyValue;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr((uObject*)__this->_dictionary), __types[1]), keyValue_, &ret8), ret8), void();
    }
}

// public bool TryGetValue(TKey key, TValue& value) :106
void ConcurrentDictionary__TryGetValue_fn(ConcurrentDictionary* __this, void* key, uTRef value, bool* __retval)
{
    bool ret9;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), key, value, &ret9), ret9), void();
    }
}

// public generated ConcurrentDictionary() [instance] :54
void ConcurrentDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::New1();
}

// public void Clear() [instance] :159
void ConcurrentDictionary::Clear()
{
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_dictionary)->Clear();
    }
}

// public int get_Count() [instance] :169
int ConcurrentDictionary::Count()
{
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return uPtr(_dictionary)->Count();
    }
}

// public Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>> GetEnumerator() [instance] :60
uObject* ConcurrentDictionary::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>.Enumerator*/),
        __type->Precalced(4/*Uno.Collections.List<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[1], uPtr(_dictionary)->Count());
        result->AddRange((uObject*)_dictionary);
        return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(result, &ret6), ret6));
    }
}

// public generated ConcurrentDictionary New() [static] :54
ConcurrentDictionary* ConcurrentDictionary::New1(uType* __type)
{
    ConcurrentDictionary* obj1 = (ConcurrentDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class ConcurrentQueue<T> :213
// {
static void ConcurrentQueue_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::TYPES[1/*Uno.IDisposable*/], offsetof(ConcurrentQueue_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::ConcurrentQueue, _mutex), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ConcurrentQueue, _queue), 0);
}

ConcurrentQueue_type* ConcurrentQueue_typeof()
{
    static uSStrong<ConcurrentQueue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ConcurrentQueue);
    options.TypeSize = sizeof(ConcurrentQueue_type);
    type = (ConcurrentQueue_type*)uClassType::New("Uno.Threading.ConcurrentQueue`1", options);
    type->fp_build_ = ConcurrentQueue_build;
    type->fp_ctor_ = (void*)ConcurrentQueue__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ConcurrentQueue__Dispose_fn;
    return type;
}

// public ConcurrentQueue() :218
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this)
{
    __this->ctor_();
}

// public int get_Count() :249
void ConcurrentQueue__get_Count_fn(ConcurrentQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Dispose() :264
void ConcurrentQueue__Dispose_fn(ConcurrentQueue* __this)
{
    __this->Dispose();
}

// public void Enqueue(T item) :224
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* item)
{
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(__this->_queue), item);
    }
}

// public bool get_IsEmpty() :261
void ConcurrentQueue__get_IsEmpty_fn(ConcurrentQueue* __this, bool* __retval)
{
    *__retval = __this->IsEmpty();
}

// public ConcurrentQueue New() :218
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval)
{
    *__retval = ConcurrentQueue::New1(__type);
}

// public bool TryDequeue(T& item) :230
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret = false;
    item.Default(__types[0]);
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(__this->_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (uPtr(__this->_queue)->Count() > 0)
        {
            item.Store((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_queue), &ret2), ret2));
            ret = true;
        }
    }

    return *__retval = ret, void();
}

// public ConcurrentQueue() [instance] :218
void ConcurrentQueue::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Queue<T>*/),
    };
    _queue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _mutex = ::g::Uno::Threading::Mutex::New1();
}

// public int get_Count() [instance] :249
int ConcurrentQueue::Count()
{
    int count = 0;
    uObject* lg = ::g::Uno::Threading::LockGuard::Acquire(_mutex);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(lg), ::TYPES[1/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        count = uPtr(_queue)->Count();
    }

    return count;
}

// public void Dispose() [instance] :264
void ConcurrentQueue::Dispose()
{
    uPtr(_mutex)->Dispose();
}

// public bool get_IsEmpty() [instance] :261
bool ConcurrentQueue::IsEmpty()
{
    return Count() == 0;
}

// public ConcurrentQueue New() [static] :218
ConcurrentQueue* ConcurrentQueue::New1(uType* __type)
{
    ConcurrentQueue* obj1 = (ConcurrentQueue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class ThreadPool.DefaultWorkItem :1044
// {
static void ThreadPool__DefaultWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::ThreadPool__DefaultWorkItem, _action), 0);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadPool__DefaultWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.DefaultWorkItem", options);
    type->fp_build_ = ThreadPool__DefaultWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__DefaultWorkItem__Invoke_fn;
    return type;
}

// public DefaultWorkItem(Uno.Action action) :1048
void ThreadPool__DefaultWorkItem__ctor_1_fn(ThreadPool__DefaultWorkItem* __this, uDelegate* action)
{
    __this->ctor_1(action);
}

// public override sealed void Invoke() :1053
void ThreadPool__DefaultWorkItem__Invoke_fn(ThreadPool__DefaultWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid();
}

// public DefaultWorkItem New(Uno.Action action) :1048
void ThreadPool__DefaultWorkItem__New1_fn(uDelegate* action, ThreadPool__DefaultWorkItem** __retval)
{
    *__retval = ThreadPool__DefaultWorkItem::New1(action);
}

// public DefaultWorkItem(Uno.Action action) [instance] :1048
void ThreadPool__DefaultWorkItem::ctor_1(uDelegate* action)
{
    ctor_();
    _action = action;
}

// public DefaultWorkItem New(Uno.Action action) [static] :1048
ThreadPool__DefaultWorkItem* ThreadPool__DefaultWorkItem::New1(uDelegate* action)
{
    ThreadPool__DefaultWorkItem* obj1 = (ThreadPool__DefaultWorkItem*)uNew(ThreadPool__DefaultWorkItem_typeof());
    obj1->ctor_1(action);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public abstract class Future :281
// {
static void Future_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Future_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::FutureState_typeof(), offsetof(::g::Uno::Threading::Future, _State), 0);
}

Future_type* Future_typeof()
{
    static uSStrong<Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Future);
    options.TypeSize = sizeof(Future_type);
    type = (Future_type*)uClassType::New("Uno.Threading.Future", options);
    type->fp_build_ = Future_build;
    return type;
}

// protected generated Future() :281
void Future__ctor__fn(Future* __this)
{
    __this->ctor_();
}

// public generated Uno.Threading.FutureState get_State() :283
void Future__get_State_fn(Future* __this, int* __retval)
{
    *__retval = __this->State();
}

// protected generated void set_State(Uno.Threading.FutureState value) :283
void Future__set_State_fn(Future* __this, int* value)
{
    __this->State(*value);
}

// protected generated Future() [instance] :281
void Future::ctor_()
{
}

// public generated Uno.Threading.FutureState get_State() [instance] :283
int Future::State()
{
    return _State;
}

// protected generated void set_State(Uno.Threading.FutureState value) [instance] :283
void Future::State(int value)
{
    _State = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public abstract class Future<T> :289
// {
static void Future1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("dispatcher");
    ::STRINGS[1] = uString::Const("This promise is already resolved or rejected");
    ::TYPES[7] = ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Queue_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[11] = Future1__Closure_typeof();
    ::TYPES[12] = ::g::Uno::Threading::Promise_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL),
        type->MakeMethod(0/*Invoke<Uno.Exception>*/, ::g::Uno::Exception_typeof(), NULL),
        type->MakeMethod(0/*Invoke<T>*/, type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[11/*Uno.Threading.Future`1.Closure`1*/]->MakeType(type->T(0), type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(1,
        ::TYPES[7/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/], offsetof(::g::Uno::Threading::Future1, _catchables), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(::TYPES[12/*Uno.Threading.Promise`1*/]->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _chainables), 0,
        ::TYPES[9/*Uno.Threading.IDispatcher*/], offsetof(::g::Uno::Threading::Future1, _dispatcher), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::Future1, _isDisposed), 0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::Future1, _mutex), 0,
        ::TYPES[6/*Uno.Collections.Queue`1*/]->MakeType(::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Threading::Future1, _thenables), 0,
        ::TYPES[8/*Uno.Exception*/], offsetof(::g::Uno::Threading::Future1, Reason), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::Future_type* Future1_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(Future1);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Future`1", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Future1_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))Future1__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Future1__Dispose_fn;
    return type;
}

// protected Future() :312
void Future1__ctor_1_fn(Future1* __this)
{
    __this->ctor_1();
}

// protected Future(Uno.Threading.IDispatcher dispatcher) :300
void Future1__ctor_2_fn(Future1* __this, uObject* dispatcher)
{
    __this->ctor_2(dispatcher);
}

// public override void Dispose() :315
void Future1__Dispose_fn(Future1* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_mutex)->Dispose();
        __this->_isDisposed = true;
    }
}

// protected void InternalReject(Uno.Exception reason) :353
void Future1__InternalReject_fn(Future1* __this, ::g::Uno::Exception* reason)
{
    __this->InternalReject(reason);
}

// protected void InternalResolve(T result) :324
void Future1__InternalResolve_fn(Future1* __this, void* result)
{
    uType* __types[] = {
        __this->__type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
    };
    uDelegate* ret4;
    ::g::Uno::Threading::Promise* ret5;
    ::g::Uno::Threading::Promise* ret6;
    uPtr(__this->_mutex)->WaitOne();

    if (__this->State() != 0)
    {
        uPtr(__this->_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"This promis...*/]));
    }

    __this->State(1);
    __this->Result() = result;

    try
    {
        while (uPtr(__this->_thenables)->Count() != 0)
            Future1__Invoke_fn(__this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_thenables), &ret4), ret4), result);

        while (uPtr(__this->_chainables)->Count() != 0)
            ::g::Uno::Threading::Promise__Resolve_fn(uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret5), ret5)), result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(__this->_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(__this->_chainables), &ret6), ret6))->Reject(exception);
    }

    uPtr(__this->_mutex)->ReleaseMutex();
}

// private void Invoke<T1>(Uno.Action<T1> action, T1 arg) :382
void Future1__Invoke_fn(Future1* __this, uType* __type, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Future<T>.Closure<T1>*/),
    };
    Future1__Closure* ret7;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(__this->_dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)Future1__Closure__Run_fn, (Future1__Closure__New1_fn(__types[0], action, arg, &ret7), ret7)));
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) :387
void Future1__Then_fn(Future1* __this, uDelegate* action, Future1** __retval)
{
    *__retval = __this->Then(action);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) :392
void Future1__Then1_fn(Future1* __this, uDelegate* fulfilled, uDelegate* rejected, Future1** __retval)
{
    *__retval = __this->Then1(fulfilled, rejected);
}

// protected Future() [instance] :312
void Future1::ctor_1()
{
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_2((uObject*)::g::Uno::Threading::SyncDispatcher::New1());
}

// protected Future(Uno.Threading.IDispatcher dispatcher) [instance] :300
void Future1::ctor_2(uObject* dispatcher)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(0/*Uno.Collections.Queue<Uno.Threading.Promise<T>>*/),
        __type->GetBase(Future1_typeof())->Precalced(1/*Uno.Collections.Queue<Uno.Action<T>>*/),
    };
    _mutex = ::g::Uno::Threading::Mutex::New1();
    ctor_();

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"dispatcher"*/]));

    _dispatcher = dispatcher;
    State(0);
    _catchables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[7/*Uno.Collections.Queue<Uno.Action<Uno.Exception>>*/]));
    _chainables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[0]));
    _thenables = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(__types[1]));
}

// protected void InternalReject(Uno.Exception reason) [instance] :353
void Future1::InternalReject(::g::Uno::Exception* reason)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    uDelegate* ret1;
    ::g::Uno::Threading::Promise* ret2;
    ::g::Uno::Threading::Promise* ret3;
    uPtr(_mutex)->WaitOne();

    if (State() != 0)
    {
        uPtr(_mutex)->ReleaseMutex();
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"This promis...*/]));
    }

    State(2);
    Reason = reason;

    try
    {
        while (uPtr(_catchables)->Count() != 0)
            Future1__Invoke_fn(this, __types[0], (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_catchables), &ret1), ret1), reason);

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret2), ret2))->Reject(reason);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;

        while (uPtr(_chainables)->Count() != 0)
            uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_chainables), &ret3), ret3))->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> action) [instance] :387
Future1* Future1::Then(uDelegate* action)
{
    return Then1(action, NULL);
}

// public Uno.Threading.Future<T> Then(Uno.Action<T> fulfilled, Uno.Action<Uno.Exception> rejected) [instance] :392
Future1* Future1::Then1(uDelegate* fulfilled, uDelegate* rejected)
{
    uType* __types[] = {
        __type->GetBase(Future1_typeof())->Precalced(4/*Uno.Threading.Promise<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(3/*Uno.Threading.Future<T>.Invoke<T>*/),
        __type->GetBase(Future1_typeof())->Precalced(2/*Uno.Threading.Future<T>.Invoke<Uno.Exception>*/),
    };
    ::g::Uno::Threading::Promise* chainable = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    uPtr(_mutex)->WaitOne();

    try
    {
        if (State() == 1)
        {
            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                Future1__Invoke_fn(this, __types[1], fulfilled, Result());
        }
        else if (State() == 2)
        {
            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                Future1__Invoke_fn(this, __types[2], rejected, Reason);
        }
        else
        {
            ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_chainables), chainable);

            if (::g::Uno::Delegate::op_Inequality(fulfilled, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_thenables), fulfilled);

            if (::g::Uno::Delegate::op_Inequality(rejected, NULL))
                ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_catchables), rejected);
        }
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception = __t.Exception;
        uPtr(chainable)->Reject(exception);
    }

    uPtr(_mutex)->ReleaseMutex();
    return chainable;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public enum FutureState :457
uEnumType* FutureState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.FutureState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Pending", 0LL,
        "Resolved", 1LL,
        "Rejected", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public abstract interface IDispatcher :472
// {
uInterfaceType* IDispatcher_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.IDispatcher", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public static class IDispatcherExtensions :477
// {
static void IDispatcherExtensions_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[13] = IDispatcherExtensions__Arg1Invoke_typeof();
    ::TYPES[14] = IDispatcherExtensions__Arg1InvokeFunc_typeof();
    ::TYPES[15] = IDispatcherExtensions__Arg2Invoke_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[13/*Uno.Threading.IDispatcherExtensions.Arg1Invoke`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[14/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[15/*Uno.Threading.IDispatcherExtensions.Arg2Invoke`2*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), NULL));
}

uClassType* IDispatcherExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.IDispatcherExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(2, 1);
    type->MethodTypes[2] = type->NewMethodType(2, 1);
    type->fp_build_ = IDispatcherExtensions_build;
    return type;
}

// public static void Invoke1<T>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T> action, T arg) :479
void IDispatcherExtensions__Invoke1_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1Invoke<T>*/),
    };
    IDispatcherExtensions__Arg1Invoke* ret1;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1Invoke__Run_fn, (IDispatcherExtensions__Arg1Invoke__New1_fn(__types[0], action, arg, &ret1), ret1)));
}

// public static void Invoke1<T, TResult>(Uno.Threading.IDispatcher dispatcher, Uno.Func<T, TResult> func, T arg) :541
void IDispatcherExtensions__Invoke11_fn(uType* __type, uObject* dispatcher, uDelegate* func, void* arg)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc<T, TResult>*/),
    };
    IDispatcherExtensions__Arg1InvokeFunc* ret2;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg1InvokeFunc__Run_fn, (IDispatcherExtensions__Arg1InvokeFunc__New1_fn(__types[0], func, arg, &ret2), ret2)));
}

// public static void Invoke2<T1, T2>(Uno.Threading.IDispatcher dispatcher, Uno.Action<T1, T2> action, T1 arg1, T2 arg2) :484
void IDispatcherExtensions__Invoke2_fn(uType* __type, uObject* dispatcher, uDelegate* action, void* arg1, void* arg2)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.IDispatcherExtensions.Arg2Invoke<T1, T2>*/),
    };
    IDispatcherExtensions__Arg2Invoke* ret3;
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(dispatcher), ::TYPES[9/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)IDispatcherExtensions__Arg2Invoke__Run_fn, (IDispatcherExtensions__Arg2Invoke__New1_fn(__types[0], action, arg1, arg2, &ret3), ret3)));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal abstract interface ITaskScheduler :206
// {
uInterfaceType* ITaskScheduler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Threading.ITaskScheduler", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class LockGuard :618
// {
static void LockGuard_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LockGuard_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Mutex_typeof(), offsetof(::g::Uno::Threading::LockGuard, _mutex), 0);
}

LockGuard_type* LockGuard_typeof()
{
    static uSStrong<LockGuard_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LockGuard);
    options.TypeSize = sizeof(LockGuard_type);
    type = (LockGuard_type*)uClassType::New("Uno.Threading.LockGuard", options);
    type->fp_build_ = LockGuard_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LockGuard__UnoIDisposableDispose_fn;
    return type;
}

// private LockGuard(Uno.Threading.Mutex mutex) :622
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex)
{
    __this->ctor_(mutex);
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) :628
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval)
{
    *__retval = LockGuard::Acquire(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) :622
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval)
{
    *__retval = LockGuard::New1(mutex);
}

// private void Uno.IDisposable.Dispose() :633
void LockGuard__UnoIDisposableDispose_fn(LockGuard* __this)
{
    uPtr(__this->_mutex)->ReleaseMutex();
}

// private LockGuard(Uno.Threading.Mutex mutex) [instance] :622
void LockGuard::ctor_(::g::Uno::Threading::Mutex* mutex)
{
    _mutex = mutex;
    uPtr(_mutex)->WaitOne();
}

// public static Uno.IDisposable Acquire(Uno.Threading.Mutex mutex) [static] :628
uObject* LockGuard::Acquire(::g::Uno::Threading::Mutex* mutex)
{
    return (uObject*)LockGuard::New1(mutex);
}

// private LockGuard New(Uno.Threading.Mutex mutex) [static] :622
LockGuard* LockGuard::New1(::g::Uno::Threading::Mutex* mutex)
{
    LockGuard* obj1 = (LockGuard*)uNew(LockGuard_typeof());
    obj1->ctor_(mutex);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class ManualResetEvent :658
// {
static void ManualResetEvent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ManualResetEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::ManualResetEventImpl_typeof(), offsetof(::g::Uno::Threading::ManualResetEvent, _impl), 0);
}

ManualResetEvent_type* ManualResetEvent_typeof()
{
    static uSStrong<ManualResetEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ManualResetEvent);
    options.TypeSize = sizeof(ManualResetEvent_type);
    type = (ManualResetEvent_type*)uClassType::New("Uno.Threading.ManualResetEvent", options);
    type->fp_build_ = ManualResetEvent_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ManualResetEvent__Dispose_fn;
    return type;
}

// public ManualResetEvent(bool initialState) :667
void ManualResetEvent__ctor__fn(ManualResetEvent* __this, bool* initialState)
{
    __this->ctor_(*initialState);
}

// public void Dispose() :683
void ManualResetEvent__Dispose_fn(ManualResetEvent* __this)
{
    __this->Dispose();
}

// public ManualResetEvent New(bool initialState) :667
void ManualResetEvent__New1_fn(bool* initialState, ManualResetEvent** __retval)
{
    *__retval = ManualResetEvent::New1(*initialState);
}

// public bool Set() :682
void ManualResetEvent__Set_fn(ManualResetEvent* __this, bool* __retval)
{
    *__retval = __this->Set();
}

// public bool WaitOne() :679
void ManualResetEvent__WaitOne_fn(ManualResetEvent* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public ManualResetEvent(bool initialState) [instance] :667
void ManualResetEvent::ctor_(bool initialState)
{
    _impl = ::g::Uno::Threading::PosixManualResetEvent::New1(initialState);
}

// public void Dispose() [instance] :683
void ManualResetEvent::Dispose()
{
    uPtr(_impl)->Dispose();
}

// public bool Set() [instance] :682
bool ManualResetEvent::Set()
{
    return uPtr(_impl)->Set();
}

// public bool WaitOne() [instance] :679
bool ManualResetEvent::WaitOne()
{
    return uPtr(_impl)->WaitOne();
}

// public ManualResetEvent New(bool initialState) [static] :667
ManualResetEvent* ManualResetEvent::New1(bool initialState)
{
    ManualResetEvent* obj1 = (ManualResetEvent*)uNew(ManualResetEvent_typeof());
    obj1->ctor_(initialState);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal abstract class ManualResetEventImpl :649
// {
static void ManualResetEventImpl_build(uType* type)
{
}

ManualResetEventImpl_type* ManualResetEventImpl_typeof()
{
    static uSStrong<ManualResetEventImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ManualResetEventImpl);
    options.TypeSize = sizeof(ManualResetEventImpl_type);
    type = (ManualResetEventImpl_type*)uClassType::New("Uno.Threading.ManualResetEventImpl", options);
    type->fp_build_ = ManualResetEventImpl_build;
    return type;
}

// protected generated ManualResetEventImpl() :649
void ManualResetEventImpl__ctor__fn(ManualResetEventImpl* __this)
{
    __this->ctor_();
}

// protected generated ManualResetEventImpl() [instance] :649
void ManualResetEventImpl::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\threading\$.uno
// ----------------------------------------------------------------------------------------------

// public static class Monitor :23
// {
static void Monitor_build(uType* type)
{
}

uClassType* Monitor_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Threading.Monitor", options);
    type->fp_build_ = Monitor_build;
    return type;
}

// public static void Enter(object obj) :25
void Monitor__Enter_fn(uObject* obj)
{
    Monitor::Enter(obj);
}

// public static void Exit(object obj) :48
void Monitor__Exit_fn(uObject* obj)
{
    Monitor::Exit(obj);
}

// public static void Enter(object obj) [static] :25
void Monitor::Enter(uObject* obj)
{
    if (uEnterCriticalIfNull(&obj->__lockptr))
                    {
                        obj->__lockptr = uBase::CreateMutex();
                        uExitCritical();
                    }
    
                    uBase::LockMutex(obj->__lockptr);
}

// public static void Exit(object obj) [static] :48
void Monitor::Exit(uObject* obj)
{
    uBase::UnlockMutex(obj->__lockptr);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class Mutex :703
// {
static void Mutex_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Mutex_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::MutexImpl_typeof(), offsetof(::g::Uno::Threading::Mutex, _impl), 0);
}

Mutex_type* Mutex_typeof()
{
    static uSStrong<Mutex_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mutex);
    options.TypeSize = sizeof(Mutex_type);
    type = (Mutex_type*)uClassType::New("Uno.Threading.Mutex", options);
    type->fp_build_ = Mutex_build;
    type->fp_ctor_ = (void*)Mutex__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Mutex__Dispose_fn;
    return type;
}

// public Mutex() :713
void Mutex__ctor__fn(Mutex* __this)
{
    __this->ctor_();
}

// public void Dispose() :730
void Mutex__Dispose_fn(Mutex* __this)
{
    __this->Dispose();
}

// public Mutex New() :713
void Mutex__New1_fn(Mutex** __retval)
{
    *__retval = Mutex::New1();
}

// public void ReleaseMutex() :729
void Mutex__ReleaseMutex_fn(Mutex* __this)
{
    __this->ReleaseMutex();
}

// public bool WaitOne() :725
void Mutex__WaitOne_fn(Mutex* __this, bool* __retval)
{
    *__retval = __this->WaitOne();
}

// public bool WaitOne(int timeoutMillis) :728
void Mutex__WaitOne1_fn(Mutex* __this, int* timeoutMillis, bool* __retval)
{
    *__retval = __this->WaitOne1(*timeoutMillis);
}

// public Mutex() [instance] :713
void Mutex::ctor_()
{
    _impl = ::g::Uno::Threading::POSIXMutex::New1();
}

// public void Dispose() [instance] :730
void Mutex::Dispose()
{
    uPtr(_impl)->Dispose();
}

// public void ReleaseMutex() [instance] :729
void Mutex::ReleaseMutex()
{
    uPtr(_impl)->ReleaseMutex();
}

// public bool WaitOne() [instance] :725
bool Mutex::WaitOne()
{
    return WaitOne1(-1);
}

// public bool WaitOne(int timeoutMillis) [instance] :728
bool Mutex::WaitOne1(int timeoutMillis)
{
    return uPtr(_impl)->WaitOne(timeoutMillis);
}

// public Mutex New() [static] :713
Mutex* Mutex::New1()
{
    Mutex* obj1 = (Mutex*)uNew(Mutex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal abstract class MutexImpl :696
// {
static void MutexImpl_build(uType* type)
{
}

MutexImpl_type* MutexImpl_typeof()
{
    static uSStrong<MutexImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(MutexImpl);
    options.TypeSize = sizeof(MutexImpl_type);
    type = (MutexImpl_type*)uClassType::New("Uno.Threading.MutexImpl", options);
    type->fp_build_ = MutexImpl_build;
    return type;
}

// protected generated MutexImpl() :696
void MutexImpl__ctor__fn(MutexImpl* __this)
{
    __this->ctor_();
}

// protected generated MutexImpl() [instance] :696
void MutexImpl::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :1060
// {
static void ThreadPool__ParameterizedWorkItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::ThreadPool__ParameterizedWorkItem, _action), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadPool__WorkItem_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ThreadPool__ParameterizedWorkItem);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadPool__WorkItem_type);
    type = (::g::Uno::Threading::ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.ParameterizedWorkItem`1", options);
    type->fp_build_ = ThreadPool__ParameterizedWorkItem_build;
    type->fp_Invoke = (void(*)(::g::Uno::Threading::ThreadPool__WorkItem*))ThreadPool__ParameterizedWorkItem__Invoke_fn;
    return type;
}

// public override sealed void Invoke() :1071
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this)
{
    if (::g::Uno::Delegate::op_Inequality(__this->_action, NULL))
        uPtr(__this->_action)->InvokeVoid(__this->_state());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class PosixAutoResetEvent :132
// {
static void PosixAutoResetEvent_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixAutoResetEvent, _handle), 0);
}

::g::Uno::Threading::AutoResetEventImpl_type* PosixAutoResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::AutoResetEventImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::AutoResetEventImpl_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PosixAutoResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::AutoResetEventImpl_type);
    type = (::g::Uno::Threading::AutoResetEventImpl_type*)uClassType::New("Uno.Threading.PosixAutoResetEvent", options);
    type->fp_build_ = PosixAutoResetEvent_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::AutoResetEventImpl*))PosixAutoResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::AutoResetEventImpl*, bool*))PosixAutoResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::AutoResetEventImpl*, bool*))PosixAutoResetEvent__WaitOne_fn;
    return type;
}

// public PosixAutoResetEvent(bool initialState) :136
void PosixAutoResetEvent__ctor_1_fn(PosixAutoResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :161
void PosixAutoResetEvent__Dispose_fn(PosixAutoResetEvent* __this)
{
    FreeState( __this->_handle );
}

// public PosixAutoResetEvent New(bool initialState) :136
void PosixAutoResetEvent__New1_fn(bool* initialState, PosixAutoResetEvent** __retval)
{
    *__retval = PosixAutoResetEvent::New1(*initialState);
}

// public override sealed bool Set() :156
void PosixAutoResetEvent__Set_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :141
void PosixAutoResetEvent__WaitOne_fn(PosixAutoResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixAutoResetEvent(bool initialState) [instance] :136
void PosixAutoResetEvent::ctor_1(bool initialState)
{
    _handle = ::g::Uno::IntPtr::Zero_;
    ctor_();
    _handle = AllocateState( initialState, true );
}

// public PosixAutoResetEvent New(bool initialState) [static] :136
PosixAutoResetEvent* PosixAutoResetEvent::New1(bool initialState)
{
    PosixAutoResetEvent* obj1 = (PosixAutoResetEvent*)uNew(PosixAutoResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class PosixManualResetEvent :168
// {
static void PosixManualResetEvent_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::PosixManualResetEvent, _handle), 0);
}

::g::Uno::Threading::ManualResetEventImpl_type* PosixManualResetEvent_typeof()
{
    static uSStrong< ::g::Uno::Threading::ManualResetEventImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ManualResetEventImpl_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PosixManualResetEvent);
    options.TypeSize = sizeof(::g::Uno::Threading::ManualResetEventImpl_type);
    type = (::g::Uno::Threading::ManualResetEventImpl_type*)uClassType::New("Uno.Threading.PosixManualResetEvent", options);
    type->fp_build_ = PosixManualResetEvent_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::ManualResetEventImpl*))PosixManualResetEvent__Dispose_fn;
    type->fp_Set = (void(*)(::g::Uno::Threading::ManualResetEventImpl*, bool*))PosixManualResetEvent__Set_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::ManualResetEventImpl*, bool*))PosixManualResetEvent__WaitOne_fn;
    return type;
}

// public PosixManualResetEvent(bool initialState) :172
void PosixManualResetEvent__ctor_1_fn(PosixManualResetEvent* __this, bool* initialState)
{
    __this->ctor_1(*initialState);
}

// public override sealed void Dispose() :197
void PosixManualResetEvent__Dispose_fn(PosixManualResetEvent* __this)
{
    FreeState( __this->_handle );
}

// public PosixManualResetEvent New(bool initialState) :172
void PosixManualResetEvent__New1_fn(bool* initialState, PosixManualResetEvent** __retval)
{
    *__retval = PosixManualResetEvent::New1(*initialState);
}

// public override sealed bool Set() :192
void PosixManualResetEvent__Set_fn(PosixManualResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_Set( __this->_handle ), void();
}

// public override sealed bool WaitOne() :177
void PosixManualResetEvent__WaitOne_fn(PosixManualResetEvent* __this, bool* __retval)
{
    return *__retval = ResetEvent_WaitOne( __this->_handle ), void();
}

// public PosixManualResetEvent(bool initialState) [instance] :172
void PosixManualResetEvent::ctor_1(bool initialState)
{
    _handle = ::g::Uno::IntPtr::Zero_;
    ctor_();
    _handle = AllocateState( initialState, false );
}

// public PosixManualResetEvent New(bool initialState) [static] :172
PosixManualResetEvent* PosixManualResetEvent::New1(bool initialState)
{
    PosixManualResetEvent* obj1 = (PosixManualResetEvent*)uNew(PosixManualResetEvent_typeof());
    obj1->ctor_1(initialState);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class POSIXMutex :77
// {
static void POSIXMutex_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Failed to create mutex");
    ::STRINGS[3] = uString::Const("Cannot unlock a disposed mutex");
    ::STRINGS[4] = uString::Const("Cannot trylock a disposed mutex");
    ::STRINGS[5] = uString::Const("timeoutMillis");
    type->SetFields(0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Uno::Threading::POSIXMutex, _handle), 0);
}

::g::Uno::Threading::MutexImpl_type* POSIXMutex_typeof()
{
    static uSStrong< ::g::Uno::Threading::MutexImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::MutexImpl_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(POSIXMutex);
    options.TypeSize = sizeof(::g::Uno::Threading::MutexImpl_type);
    type = (::g::Uno::Threading::MutexImpl_type*)uClassType::New("Uno.Threading.POSIXMutex", options);
    type->fp_build_ = POSIXMutex_build;
    type->fp_ctor_ = (void*)POSIXMutex__New1_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::MutexImpl*))POSIXMutex__Dispose_fn;
    type->fp_ReleaseMutex = (void(*)(::g::Uno::Threading::MutexImpl*))POSIXMutex__ReleaseMutex_fn;
    type->fp_WaitOne = (void(*)(::g::Uno::Threading::MutexImpl*, int*, bool*))POSIXMutex__WaitOne_fn;
    return type;
}

// public POSIXMutex() :81
void POSIXMutex__ctor_1_fn(POSIXMutex* __this)
{
    __this->ctor_1();
}

// public override sealed void Dispose() :112
void POSIXMutex__Dispose_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Inequality(__this->_handle, ::g::Uno::IntPtr::Zero_))
    {
        free_mutex(__this->_handle);
        __this->_handle = ::g::Uno::IntPtr::Zero_;
    }
}

// public POSIXMutex New() :81
void POSIXMutex__New1_fn(POSIXMutex** __retval)
{
    *__retval = POSIXMutex::New1();
}

// public override sealed void ReleaseMutex() :104
void POSIXMutex__ReleaseMutex_fn(POSIXMutex* __this)
{
    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Cannot unlo...*/]));

    pthread_mutex_unlock( (pthread_mutex_t*)__this->_handle );
}

// public override sealed bool WaitOne(int timeoutMillis) :88
void POSIXMutex__WaitOne_fn(POSIXMutex* __this, int* timeoutMillis, bool* __retval)
{
    int timeoutMillis_ = *timeoutMillis;

    if (::g::Uno::IntPtr::op_Equality(__this->_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Cannot tryl...*/]));

    if (timeoutMillis_ == 0)
        return *__retval = pthread_mutex_trylock( (pthread_mutex_t*)__this->_handle ) == 0, void();
    else if (timeoutMillis_ == -1)
    {
        pthread_mutex_lock( (pthread_mutex_t*)__this->_handle );
        return *__retval = true, void();
    }
    else
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"timeoutMillis"*/]));
}

// public POSIXMutex() [instance] :81
void POSIXMutex::ctor_1()
{
    ctor_();
    _handle = init_mutex();

    if (::g::Uno::IntPtr::op_Equality(_handle, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"Failed to c...*/]));
}

// public POSIXMutex New() [static] :81
POSIXMutex* POSIXMutex::New1()
{
    POSIXMutex* obj1 = (POSIXMutex*)uNew(POSIXMutex_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno
// --------------------------------------------------------------------------------------------------

// internal sealed extern class POSIXThread :343
// {
static void POSIXThread_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Cannot join unstarted thread");
    ::STRINGS[7] = uString::Const("Cannot start throw more than once");
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetFields(1,
        ::g::Uno::ULong_typeof(), offsetof(::g::Uno::Threading::POSIXThread, _posixHandle), 0);
}

::g::Uno::Threading::ThreadImpl_type* POSIXThread_typeof()
{
    static uSStrong< ::g::Uno::Threading::ThreadImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::ThreadImpl_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(POSIXThread);
    options.TypeSize = sizeof(::g::Uno::Threading::ThreadImpl_type);
    type = (::g::Uno::Threading::ThreadImpl_type*)uClassType::New("Uno.Threading.POSIXThread", options);
    type->fp_build_ = POSIXThread_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))POSIXThread__Equals_fn;
    type->fp_Join = (void(*)(::g::Uno::Threading::ThreadImpl*))POSIXThread__Join_fn;
    type->fp_Start = (void(*)(::g::Uno::Threading::ThreadImpl*))POSIXThread__Start_fn;
    return type;
}

// private POSIXThread(ulong handle) :373
void POSIXThread__ctor_1_fn(POSIXThread* __this, uint64_t* handle)
{
    __this->ctor_1(*handle);
}

// public POSIXThread(Uno.Action callback) :379
void POSIXThread__ctor_2_fn(POSIXThread* __this, uDelegate* callback)
{
    __this->ctor_2(callback);
}

// public static Uno.Threading.POSIXThread get_CurrentThread() :368
void POSIXThread__get_CurrentThread_fn(POSIXThread** __retval)
{
    *__retval = POSIXThread::CurrentThread();
}

// public override sealed bool Equals(object o) :431
void POSIXThread__Equals_fn(POSIXThread* __this, uObject* o, bool* __retval)
{
    return *__retval = uIs(o, __this->__type) ? pthread_equal((pthread_t)__this->_posixHandle, (pthread_t)uPtr(uCast<POSIXThread*>(o, __this->__type))->_posixHandle) != 0 : false, void();
}

// public override sealed void Join() :407
void POSIXThread__Join_fn(POSIXThread* __this)
{
    if (__this->_posixHandle == 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"Cannot join...*/]));

    pthread_join(((pthread_t)__this->_posixHandle), NULL);
}

// private POSIXThread New(ulong handle) :373
void POSIXThread__New1_fn(uint64_t* handle, POSIXThread** __retval)
{
    *__retval = POSIXThread::New1(*handle);
}

// public POSIXThread New(Uno.Action callback) :379
void POSIXThread__New2_fn(uDelegate* callback, POSIXThread** __retval)
{
    *__retval = POSIXThread::New2(callback);
}

// public static void Sleep(int millis) :425
void POSIXThread__Sleep_fn(int* millis)
{
    POSIXThread::Sleep(*millis);
}

// public override sealed void Start() :398
void POSIXThread__Start_fn(POSIXThread* __this)
{
    uRetain(__this->_callback);

    if (__this->_posixHandle != 0ULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"Cannot star...*/]));

    thread_start( &__this->_posixHandle, __this->_callback );
}

// private POSIXThread(ulong handle) [instance] :373
void POSIXThread::ctor_1(uint64_t handle)
{
    _posixHandle = 0ULL;
    ctor_(NULL);
    _posixHandle = handle;
}

// public POSIXThread(Uno.Action callback) [instance] :379
void POSIXThread::ctor_2(uDelegate* callback)
{
    _posixHandle = 0ULL;
    ctor_(callback);
    POSIXThread__ReleasingLauncher* l = POSIXThread__ReleasingLauncher::New1(callback);
    _callback = uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)POSIXThread__ReleasingLauncher__Run_fn, l);
}

// private POSIXThread New(ulong handle) [static] :373
POSIXThread* POSIXThread::New1(uint64_t handle)
{
    POSIXThread* obj1 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj1->ctor_1(handle);
    return obj1;
}

// public POSIXThread New(Uno.Action callback) [static] :379
POSIXThread* POSIXThread::New2(uDelegate* callback)
{
    POSIXThread* obj2 = (POSIXThread*)uNew(POSIXThread_typeof());
    obj2->ctor_2(callback);
    return obj2;
}

// public static void Sleep(int millis) [static] :425
void POSIXThread::Sleep(int millis)
{
    uint64_t microSeconds = (uint64_t)millis * 1000ULL;
    thread_sleep( microSeconds );
}

// public static Uno.Threading.POSIXThread get_CurrentThread() [static] :368
POSIXThread* POSIXThread::CurrentThread()
{
    return POSIXThread::New1((uint64_t)pthread_self());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public class Promise<T> :754
// {
static void Promise_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Threading::TaskFuture_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Uno::Threading::TaskFuture_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Promise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Promise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.Promise`1", options);
    type->fp_build_ = Promise_build;
    type->fp_ctor_ = (void*)Promise__New1_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))Promise__Cancel_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Promise() :776
void Promise__ctor_3_fn(Promise* __this)
{
    __this->ctor_3();
}

// public Promise(T result) :764
void Promise__ctor_4_fn(Promise* __this, void* result)
{
    __this->ctor_1();
    Promise__Resolve_fn(__this, result);
}

// public Promise(Uno.Threading.IDispatcher dispatcher) :774
void Promise__ctor_5_fn(Promise* __this, uObject* dispatcher)
{
    __this->ctor_5(dispatcher);
}

// public override void Cancel([bool shutdownGracefully]) :760
void Promise__Cancel_fn(Promise* __this, bool* shutdownGracefully)
{
}

// public Promise New() :776
void Promise__New1_fn(uType* __type, Promise** __retval)
{
    *__retval = Promise::New1(__type);
}

// public Promise New(T result) :764
void Promise__New2_fn(uType* __type, void* result, Promise** __retval)
{
    Promise* obj1 = (Promise*)uNew(__type);
    Promise__ctor_4_fn(obj1, result);
    return *__retval = obj1, void();
}

// public void Reject(Uno.Exception reason) :783
void Promise__Reject_fn(Promise* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// public void Resolve(T result) :778
void Promise__Resolve_fn(Promise* __this, void* result)
{
    ::g::Uno::Threading::Future1__InternalResolve_fn(__this, result);
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) :793
void Promise__Run_fn(uType* __type, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run(__type, func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :788
void Promise__Run1_fn(uType* __type, uObject* dispatcher, uDelegate* func, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Promise::Run1(__type, dispatcher, func);
}

// public Promise() [instance] :776
void Promise::ctor_3()
{
    ctor_1();
}

// public Promise(Uno.Threading.IDispatcher dispatcher) [instance] :774
void Promise::ctor_5(uObject* dispatcher)
{
    ctor_2(dispatcher);
}

// public void Reject(Uno.Exception reason) [instance] :783
void Promise::Reject(::g::Uno::Exception* reason)
{
    InternalReject(reason);
}

// public Promise New() [static] :776
Promise* Promise::New1(uType* __type)
{
    Promise* obj4 = (Promise*)uNew(__type);
    obj4->ctor_3();
    return obj4;
}

// public static Uno.Threading.Future<T> Run(Uno.Func<T> func) [static] :793
::g::Uno::Threading::Future1* Promise::Run(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New1(__types[0], func);
}

// public static Uno.Threading.Future<T> Run(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :788
::g::Uno::Threading::Future1* Promise::Run1(uType* __type, uObject* dispatcher, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.TaskFuture<T>*/),
    };
    return (::g::Uno::Threading::TaskFuture*)::g::Uno::Threading::TaskFuture::New2(__types[0], dispatcher, func);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno
// --------------------------------------------------------------------------------------------------

// private sealed class POSIXThread.ReleasingLauncher :345
// {
static void POSIXThread__ReleasingLauncher_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::POSIXThread__ReleasingLauncher, _callback), 0);
}

uType* POSIXThread__ReleasingLauncher_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(POSIXThread__ReleasingLauncher);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.POSIXThread.ReleasingLauncher", options);
    type->fp_build_ = POSIXThread__ReleasingLauncher_build;
    return type;
}

// public ReleasingLauncher(Uno.Action callback) :348
void POSIXThread__ReleasingLauncher__ctor__fn(POSIXThread__ReleasingLauncher* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// public ReleasingLauncher New(Uno.Action callback) :348
void POSIXThread__ReleasingLauncher__New1_fn(uDelegate* callback, POSIXThread__ReleasingLauncher** __retval)
{
    *__retval = POSIXThread__ReleasingLauncher::New1(callback);
}

// public void Run() :353
void POSIXThread__ReleasingLauncher__Run_fn(POSIXThread__ReleasingLauncher* __this)
{
    __this->Run();
}

// public ReleasingLauncher(Uno.Action callback) [instance] :348
void POSIXThread__ReleasingLauncher::ctor_(uDelegate* callback)
{
    _callback = callback;
}

// public void Run() [instance] :353
void POSIXThread__ReleasingLauncher::Run()
{
    {
        const auto __finally_fun = [&]()
        {
            uRelease(this);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_callback)->InvokeVoid();
    }
}

// public ReleasingLauncher New(Uno.Action callback) [static] :348
POSIXThread__ReleasingLauncher* POSIXThread__ReleasingLauncher::New1(uDelegate* callback)
{
    POSIXThread__ReleasingLauncher* obj1 = (POSIXThread__ReleasingLauncher*)uNew(POSIXThread__ReleasingLauncher_typeof());
    obj1->ctor_(callback);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal sealed class SyncDispatcher :910
// {
static void SyncDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(SyncDispatcher_type, interface0));
}

SyncDispatcher_type* SyncDispatcher_typeof()
{
    static uSStrong<SyncDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SyncDispatcher);
    options.TypeSize = sizeof(SyncDispatcher_type);
    type = (SyncDispatcher_type*)uClassType::New("Uno.Threading.SyncDispatcher", options);
    type->fp_build_ = SyncDispatcher_build;
    type->fp_ctor_ = (void*)SyncDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))SyncDispatcher__Invoke_fn;
    return type;
}

// public generated SyncDispatcher() :910
void SyncDispatcher__ctor__fn(SyncDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :912
void SyncDispatcher__Invoke_fn(SyncDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public generated SyncDispatcher New() :910
void SyncDispatcher__New1_fn(SyncDispatcher** __retval)
{
    *__retval = SyncDispatcher::New1();
}

// public generated SyncDispatcher() [instance] :910
void SyncDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :912
void SyncDispatcher::Invoke(uDelegate* action)
{
    uPtr(action)->InvokeVoid();
}

// public generated SyncDispatcher New() [static] :910
SyncDispatcher* SyncDispatcher::New1()
{
    SyncDispatcher* obj1 = (SyncDispatcher*)uNew(SyncDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class Task :65
// {
static void Task_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[17] = ::TYPES[8/*Uno.Exception*/]->Array();
    ::TYPES[18] = ::g::Uno::Threading::ITaskScheduler_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Task_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::CancellationTokenSource_typeof(), offsetof(::g::Uno::Threading::Task, _cancellationTokenSource), 0,
        ::g::Uno::AggregateException_typeof(), offsetof(::g::Uno::Threading::Task, _exception), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Uno::Threading::Task, _manualResetEvent), 0,
        ::g::Uno::Threading::TaskDelegate_typeof(), offsetof(::g::Uno::Threading::Task, _taskDelegate), 0,
        ::g::Uno::Threading::TaskStatus_typeof(), offsetof(::g::Uno::Threading::Task, _taskStatus), 0);
}

Task_type* Task_typeof()
{
    static uSStrong<Task_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Task);
    options.TypeSize = sizeof(Task_type);
    type = (Task_type*)uClassType::New("Uno.Threading.Task", options);
    type->fp_build_ = Task_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Task__Dispose_fn;
    return type;
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate)
{
    __this->ctor_(taskDelegate);
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() :92
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval)
{
    *__retval = __this->CancellationTokenSource();
}

// public void Dispose() :121
void Task__Dispose_fn(Task* __this)
{
    __this->Dispose();
}

// public Uno.AggregateException get_Exception() :86
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval)
{
    *__retval = __this->Exception();
}

// protected void set_Exception(Uno.AggregateException value) :87
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value)
{
    __this->Exception(value);
}

// internal void Execute() :126
void Task__Execute_fn(Task* __this)
{
    __this->Execute();
}

// protected void InvokeTaskDelegate() :145
void Task__InvokeTaskDelegate_fn(Task* __this)
{
    __this->InvokeTaskDelegate();
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) :106
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::New1(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) :165
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval)
{
    *__retval = Task::Run(taskDelegate);
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) :151
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval)
{
    *__retval = Task::Run1(taskDelegate, scheduler);
}

// public Uno.Threading.TaskStatus get_Status() :80
void Task__get_Status_fn(Task* __this, int* __retval)
{
    *__retval = __this->Status();
}

// protected void set_Status(Uno.Threading.TaskStatus value) :81
void Task__set_Status_fn(Task* __this, int* value)
{
    __this->Status(*value);
}

// public Task(Uno.Threading.TaskDelegate taskDelegate) [instance] :106
void Task::ctor_(uDelegate* taskDelegate)
{
    _cancellationTokenSource = ::g::Uno::Threading::CancellationTokenSource::New1();
    _manualResetEvent = ::g::Uno::Threading::ManualResetEvent::New1(false);
    _taskDelegate = taskDelegate;
}

// public Uno.Threading.CancellationTokenSource get_CancellationTokenSource() [instance] :92
::g::Uno::Threading::CancellationTokenSource* Task::CancellationTokenSource()
{
    return _cancellationTokenSource;
}

// public void Dispose() [instance] :121
void Task::Dispose()
{
    uPtr(_manualResetEvent)->Dispose();
}

// public Uno.AggregateException get_Exception() [instance] :86
::g::Uno::AggregateException* Task::Exception()
{
    return _exception;
}

// protected void set_Exception(Uno.AggregateException value) [instance] :87
void Task::Exception(::g::Uno::AggregateException* value)
{
    _exception = value;
}

// internal void Execute() [instance] :126
void Task::Execute()
{
    {
        const auto __finally_fun = [&]()
        {
            uPtr(_manualResetEvent)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            Status(3);
            InvokeTaskDelegate();
            Status(2);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            Status(1);
            Exception(::g::Uno::AggregateException::New7(uArray::Init< ::g::Uno::Exception*>(::TYPES[17/*Uno.Exception[]*/], 1, e)));
        }
    }
}

// protected void InvokeTaskDelegate() [instance] :145
void Task::InvokeTaskDelegate()
{
    if (::g::Uno::Delegate::op_Inequality(_taskDelegate, NULL))
        uPtr(_taskDelegate)->InvokeVoid(uPtr(CancellationTokenSource())->Token());
}

// public Uno.Threading.TaskStatus get_Status() [instance] :80
int Task::Status()
{
    return _taskStatus;
}

// protected void set_Status(Uno.Threading.TaskStatus value) [instance] :81
void Task::Status(int value)
{
    _taskStatus = value;
}

// public Task New(Uno.Threading.TaskDelegate taskDelegate) [static] :106
Task* Task::New1(uDelegate* taskDelegate)
{
    Task* obj1 = (Task*)uNew(Task_typeof());
    obj1->ctor_(taskDelegate);
    return obj1;
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate) [static] :165
Task* Task::Run(uDelegate* taskDelegate)
{
    return Task::Run1(taskDelegate, (uObject*)::g::Uno::Threading::ThreadPoolTaskScheduler::Default());
}

// public static Uno.Threading.Task Run(Uno.Threading.TaskDelegate taskDelegate, Uno.Threading.ITaskScheduler scheduler) [static] :151
Task* Task::Run1(uDelegate* taskDelegate, uObject* scheduler)
{
    Task* task = Task::New1(taskDelegate);
    ::g::Uno::Threading::ITaskScheduler::ScheduleTask(uInterface(uPtr(scheduler), ::TYPES[18/*Uno.Threading.ITaskScheduler*/]), task);
    return task;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal delegate void TaskDelegate(Uno.Threading.CancellationToken cancellationToken) :61
uDelegateType* TaskDelegate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Threading.TaskDelegate", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Threading::CancellationToken_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal sealed class TaskFuture<T> :799
// {
static void TaskFuture_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Threading::TaskDelegate_typeof();
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    type->SetBase(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Threading::TaskFuture, _func), 0,
        ::g::Uno::Threading::Task_typeof(), offsetof(::g::Uno::Threading::TaskFuture, _task), 0);
}

::g::Uno::Threading::Future_type* TaskFuture_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Future1_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TaskFuture);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Uno.Threading.TaskFuture`1", options);
    type->fp_build_ = TaskFuture_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))TaskFuture__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))TaskFuture__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TaskFuture__Dispose_fn;
    return type;
}

// public TaskFuture(Uno.Func<T> func) :811
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func)
{
    __this->ctor_3(func);
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :805
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func)
{
    __this->ctor_4(dispatcher, func);
}

// public override sealed void Cancel([bool shutdownGracefully]) :837
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully)
{
    uPtr(uPtr(__this->_task)->CancellationTokenSource())->Cancel();
}

// public override sealed void Dispose() :842
void TaskFuture__Dispose_fn(TaskFuture* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_task)->Dispose();
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) :817
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken)
{
    __this->Invoke1(cancellationToken);
}

// public TaskFuture New(Uno.Func<T> func) :811
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New1(__type, func);
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) :805
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval)
{
    *__retval = TaskFuture::New2(__type, dispatcher, func);
}

// public TaskFuture(Uno.Func<T> func) [instance] :811
void TaskFuture::ctor_3(uDelegate* func)
{
    ctor_1();
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[19/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// public TaskFuture(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [instance] :805
void TaskFuture::ctor_4(uObject* dispatcher, uDelegate* func)
{
    ctor_2(dispatcher);
    _func = func;
    _task = ::g::Uno::Threading::Task::Run(uDelegate::New(::TYPES[19/*Uno.Threading.TaskDelegate*/], (void*)TaskFuture__Invoke1_fn, this));
}

// private void Invoke(Uno.Threading.CancellationToken cancellationToken) [instance] :817
void TaskFuture::Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    try
    {
        result = uT(__types[0], U_ALLOCA(__types[0]->ValueSize));

        if (::g::Uno::Delegate::op_Inequality(_func, NULL))
            result = (uPtr(_func)->Invoke(&ret3), ret3);

        ::g::Uno::Threading::Future1__InternalResolve_fn(this, result);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        InternalReject(e);
    }
}

// public TaskFuture New(Uno.Func<T> func) [static] :811
TaskFuture* TaskFuture::New1(uType* __type, uDelegate* func)
{
    TaskFuture* obj2 = (TaskFuture*)uNew(__type);
    obj2->ctor_3(func);
    return obj2;
}

// public TaskFuture New(Uno.Threading.IDispatcher dispatcher, Uno.Func<T> func) [static] :805
TaskFuture* TaskFuture::New2(uType* __type, uObject* dispatcher, uDelegate* func)
{
    TaskFuture* obj1 = (TaskFuture*)uNew(__type);
    obj1->ctor_4(dispatcher, func);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal enum TaskStatus :52
uEnumType* TaskStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Threading.TaskStatus", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Created", 0LL,
        "Faulted", 1LL,
        "RanToCompletion", 2LL,
        "Running", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class Thread :946
// {
static void Thread_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Threading::ThreadImpl_typeof(), offsetof(::g::Uno::Threading::Thread, _impl), 0);
}

uType* Thread_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Thread);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Threading.Thread", options);
    type->fp_build_ = Thread_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Thread__Equals_fn;
    return type;
}

// public Thread(Uno.Action callback) :956
void Thread__ctor__fn(Thread* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// protected Thread(Uno.Threading.ThreadImpl impl) :974
void Thread__ctor_1_fn(Thread* __this, ::g::Uno::Threading::ThreadImpl* impl)
{
    __this->ctor_1(impl);
}

// public static Uno.Threading.Thread get_CurrentThread() :991
void Thread__get_CurrentThread_fn(Thread** __retval)
{
    *__retval = Thread::CurrentThread();
}

// public override sealed bool Equals(object o) :1016
void Thread__Equals_fn(Thread* __this, uObject* o, bool* __retval)
{
    Thread* thread = uAs<Thread*>(o, __this->__type);

    if (thread == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(__this->_impl), uPtr(thread)->_impl), void();
}

// public void Join() :982
void Thread__Join_fn(Thread* __this)
{
    __this->Join();
}

// public Thread New(Uno.Action callback) :956
void Thread__New1_fn(uDelegate* callback, Thread** __retval)
{
    *__retval = Thread::New1(callback);
}

// protected Thread New(Uno.Threading.ThreadImpl impl) :974
void Thread__New2_fn(::g::Uno::Threading::ThreadImpl* impl, Thread** __retval)
{
    *__retval = Thread::New2(impl);
}

// public static void Sleep(int millis) :1004
void Thread__Sleep_fn(int* millis)
{
    Thread::Sleep(*millis);
}

// public void Start() :981
void Thread__Start_fn(Thread* __this)
{
    __this->Start();
}

// public Thread(Uno.Action callback) [instance] :956
void Thread::ctor_(uDelegate* callback)
{
    _impl = ::g::Uno::Threading::POSIXThread::New2(callback);
}

// protected Thread(Uno.Threading.ThreadImpl impl) [instance] :974
void Thread::ctor_1(::g::Uno::Threading::ThreadImpl* impl)
{
    _impl = impl;
}

// public void Join() [instance] :982
void Thread::Join()
{
    uPtr(_impl)->Join();
}

// public void Start() [instance] :981
void Thread::Start()
{
    uPtr(_impl)->Start();
}

// public Thread New(Uno.Action callback) [static] :956
Thread* Thread::New1(uDelegate* callback)
{
    Thread* obj1 = (Thread*)uNew(Thread_typeof());
    obj1->ctor_(callback);
    return obj1;
}

// protected Thread New(Uno.Threading.ThreadImpl impl) [static] :974
Thread* Thread::New2(::g::Uno::Threading::ThreadImpl* impl)
{
    Thread* obj2 = (Thread*)uNew(Thread_typeof());
    obj2->ctor_1(impl);
    return obj2;
}

// public static void Sleep(int millis) [static] :1004
void Thread::Sleep(int millis)
{
    ::g::Uno::Threading::POSIXThread::Sleep(millis);
}

// public static Uno.Threading.Thread get_CurrentThread() [static] :991
Thread* Thread::CurrentThread()
{
    return Thread::New2(::g::Uno::Threading::POSIXThread::CurrentThread());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// internal abstract class ThreadImpl :928
// {
static void ThreadImpl_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Threading::ThreadImpl, _callback), 0);
}

ThreadImpl_type* ThreadImpl_typeof()
{
    static uSStrong<ThreadImpl_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadImpl);
    options.TypeSize = sizeof(ThreadImpl_type);
    type = (ThreadImpl_type*)uClassType::New("Uno.Threading.ThreadImpl", options);
    type->fp_build_ = ThreadImpl_build;
    return type;
}

// protected ThreadImpl(Uno.Action callback) :931
void ThreadImpl__ctor__fn(ThreadImpl* __this, uDelegate* callback)
{
    __this->ctor_(callback);
}

// protected ThreadImpl(Uno.Action callback) [instance] :931
void ThreadImpl::ctor_(uDelegate* callback)
{
    _callback = callback;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// public sealed class ThreadPool :1036
// {
static void ThreadPool_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(ThreadPool__WorkItem_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Threading::Thread_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPool_type, interface0));
    type->SetFields(0,
        ::TYPES[21/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/], offsetof(::g::Uno::Threading::ThreadPool, _disposeQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _isDisposed), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _poolSize), 0,
        ::g::Uno::Threading::AutoResetEvent_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _resetEvent), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Threading::ThreadPool, _running), 0,
        ::TYPES[20/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/], offsetof(::g::Uno::Threading::ThreadPool, _taskQueue), 0);
}

ThreadPool_type* ThreadPool_typeof()
{
    static uSStrong<ThreadPool_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ThreadPool);
    options.TypeSize = sizeof(ThreadPool_type);
    type = (ThreadPool_type*)uClassType::New("Uno.Threading.ThreadPool", options);
    type->fp_build_ = ThreadPool_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadPool__Dispose_fn;
    return type;
}

// public ThreadPool([int poolSize]) :1087
void ThreadPool__ctor__fn(ThreadPool* __this, int* poolSize)
{
    __this->ctor_(*poolSize);
}

// public void Dispose() :1142
void ThreadPool__Dispose_fn(ThreadPool* __this)
{
    __this->Dispose();
}

// private bool DoTask() :1115
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval)
{
    *__retval = __this->DoTask();
}

// public ThreadPool New([int poolSize]) :1087
void ThreadPool__New1_fn(int* poolSize, ThreadPool** __retval)
{
    *__retval = ThreadPool::New1(*poolSize);
}

// public void QueueAction(Uno.Action action) :1126
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action)
{
    __this->QueueAction(action);
}

// private void WorkerEntrypoint() :1102
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this)
{
    __this->WorkerEntrypoint();
}

// public ThreadPool([int poolSize]) [instance] :1087
void ThreadPool::ctor_(int poolSize)
{
    _resetEvent = ::g::Uno::Threading::AutoResetEvent::New1(false);
    _taskQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[20/*Uno.Threading.ConcurrentQueue<Uno.Threading.ThreadPool.WorkItem>*/]));
    _running = true;
    _disposeQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[21/*Uno.Threading.ConcurrentQueue<Uno.Threading.Thread>*/]));
    _poolSize = poolSize;

    for (int i = 0; i < _poolSize; i++)
    {
        ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::New1(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)ThreadPool__WorkerEntrypoint_fn, this));
        t->Start();
    }
}

// public void Dispose() [instance] :1142
void ThreadPool::Dispose()
{
    bool ret2;

    if (_isDisposed)
        return;

    _isDisposed = true;

    while (!uPtr(_taskQueue)->IsEmpty())
        ::g::Uno::Threading::Thread::Sleep(1);

    _running = false;
    int disposeCount = 0;

    while (disposeCount != _poolSize)
    {
        uPtr(_resetEvent)->Set();
        ::g::Uno::Threading::Thread* thread;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_disposeQueue), (void**)(&thread), &ret2), ret2))
        {
            uPtr(thread)->Join();
            disposeCount++;
        }
    }

    uPtr(_resetEvent)->Dispose();
    uPtr(_taskQueue)->Dispose();
    uPtr(_disposeQueue)->Dispose();
}

// private bool DoTask() [instance] :1115
bool ThreadPool::DoTask()
{
    bool ret3;
    ThreadPool__WorkItem* workItem;

    if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_taskQueue), (void**)(&workItem), &ret3), ret3))
    {
        uPtr(workItem)->Invoke();
        return true;
    }

    return false;
}

// public void QueueAction(Uno.Action action) [instance] :1126
void ThreadPool::QueueAction(uDelegate* action)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_taskQueue), ThreadPool__DefaultWorkItem::New1(action));
    uPtr(_resetEvent)->Set();
}

// private void WorkerEntrypoint() [instance] :1102
void ThreadPool::WorkerEntrypoint()
{
    while (_running)
    {
        uAutoReleasePool ____pool;

        if (DoTask())
            continue;

        uPtr(_resetEvent)->WaitOne();
    }

    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_disposeQueue), ::g::Uno::Threading::Thread::CurrentThread());
}

// public ThreadPool New([int poolSize]) [static] :1087
ThreadPool* ThreadPool::New1(int poolSize)
{
    ThreadPool* obj1 = (ThreadPool*)uNew(ThreadPool_typeof());
    obj1->ctor_(poolSize);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno
// -------------------------------------------------------------------------------------

// internal sealed class ThreadPoolTaskScheduler :211
// {
static void ThreadPoolTaskScheduler_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Threading::ITaskScheduler_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadPoolTaskScheduler_type, interface1));
    type->SetFields(0,
        ::g::Uno::Threading::ThreadPool_typeof(), offsetof(::g::Uno::Threading::ThreadPoolTaskScheduler, _threadPool), 0,
        type, (uintptr_t)&::g::Uno::Threading::ThreadPoolTaskScheduler::_default_, uFieldFlagsStatic);
}

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof()
{
    static uSStrong<ThreadPoolTaskScheduler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ThreadPoolTaskScheduler);
    options.TypeSize = sizeof(ThreadPoolTaskScheduler_type);
    type = (ThreadPoolTaskScheduler_type*)uClassType::New("Uno.Threading.ThreadPoolTaskScheduler", options);
    type->fp_build_ = ThreadPoolTaskScheduler_build;
    type->fp_ctor_ = (void*)ThreadPoolTaskScheduler__New1_fn;
    type->interface0.fp_ScheduleTask = (void(*)(uObject*, ::g::Uno::Threading::Task*))ThreadPoolTaskScheduler__ScheduleTask_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ThreadPoolTaskScheduler__Dispose_fn;
    return type;
}

// public ThreadPoolTaskScheduler() :239
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this)
{
    __this->ctor_();
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() :217
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::Default();
}

// public void Dispose() :249
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this)
{
    __this->Dispose();
}

// public ThreadPoolTaskScheduler New() :239
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval)
{
    *__retval = ThreadPoolTaskScheduler::New1();
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :231
void ThreadPoolTaskScheduler__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    ThreadPoolTaskScheduler::OnWindowClosed(sender, args);
}

// public void ScheduleTask(Uno.Threading.Task task) :244
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task)
{
    __this->ScheduleTask(task);
}

uSStrong<ThreadPoolTaskScheduler*> ThreadPoolTaskScheduler::_default_;

// public ThreadPoolTaskScheduler() [instance] :239
void ThreadPoolTaskScheduler::ctor_()
{
    _threadPool = ::g::Uno::Threading::ThreadPool::New1(4);
}

// public void Dispose() [instance] :249
void ThreadPoolTaskScheduler::Dispose()
{
    uPtr(_threadPool)->Dispose();
}

// public void ScheduleTask(Uno.Threading.Task task) [instance] :244
void ThreadPoolTaskScheduler::ScheduleTask(::g::Uno::Threading::Task* task)
{
    uPtr(_threadPool)->QueueAction(uDelegate::New(::TYPES[10/*Uno.Action*/], (void*)::g::Uno::Threading::Task__Execute_fn, uPtr(task)));
}

// public ThreadPoolTaskScheduler New() [static] :239
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::New1()
{
    ThreadPoolTaskScheduler* obj1 = (ThreadPoolTaskScheduler*)uNew(ThreadPoolTaskScheduler_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :231
void ThreadPoolTaskScheduler::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    uPtr(ThreadPoolTaskScheduler::_default_)->Dispose();
    ThreadPoolTaskScheduler::_default_ = NULL;
}

// public static Uno.Threading.ThreadPoolTaskScheduler get_Default() [static] :217
ThreadPoolTaskScheduler* ThreadPoolTaskScheduler::Default()
{
    if (ThreadPoolTaskScheduler::_default_ == NULL)
    {
        ThreadPoolTaskScheduler::_default_ = ThreadPoolTaskScheduler::New1();
        uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[22/*Uno.EventHandler*/], (void*)ThreadPoolTaskScheduler__OnWindowClosed_fn));
    }

    return ThreadPoolTaskScheduler::_default_;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno
// -------------------------------------------------------------------------------

// private abstract class ThreadPool.WorkItem :1039
// {
static void ThreadPool__WorkItem_build(uType* type)
{
}

ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof()
{
    static uSStrong<ThreadPool__WorkItem_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadPool__WorkItem);
    options.TypeSize = sizeof(ThreadPool__WorkItem_type);
    type = (ThreadPool__WorkItem_type*)uClassType::New("Uno.Threading.ThreadPool.WorkItem", options);
    type->fp_build_ = ThreadPool__WorkItem_build;
    return type;
}

// protected generated WorkItem() :1039
void ThreadPool__WorkItem__ctor__fn(ThreadPool__WorkItem* __this)
{
    __this->ctor_();
}

// protected generated WorkItem() [instance] :1039
void ThreadPool__WorkItem::ctor_()
{
}
// }

}}} // ::g::Uno::Threading
