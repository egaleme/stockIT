// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IThreadWorker.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct Builtins;}}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal partial sealed class ThreadWorker :2084
// {
struct ThreadWorker_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Uno::Threading::IDispatcher interface1;
    ::g::Fuse::Scripting::IThreadWorker interface2;
};

ThreadWorker_type* ThreadWorker_typeof();
void ThreadWorker__ctor__fn(ThreadWorker* __this);
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this);
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval);
void ThreadWorker__Dispose_fn(ThreadWorker* __this);
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval);
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval);
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval);
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action);
void ThreadWorker__New1_fn(ThreadWorker** __retval);
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args);
void ThreadWorker__Run_fn(ThreadWorker* __this);
void ThreadWorker__RunInner_fn(ThreadWorker* __this);

struct ThreadWorker : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Context*> _context_;
    static uSStrong< ::g::Fuse::Scripting::Context*>& _context() { return _context_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _exceptionQueue;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> _fuseJS_;
    static uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*>& _fuseJS() { return _fuseJS_; }
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _queue;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _ready;
    bool _subscribedForClosing;
    bool _terminate;
    uStrong<uObject*> CanExecuteJavaScript;

    void ctor_();
    void CheckAndThrow();
    ::g::Fuse::Scripting::Context* Context();
    void Dispose();
    ::g::Fuse::Reactive::FuseJS::Builtins* FuseJS();
    void Invoke(uDelegate* action);
    void OnClosing(uObject* sender, ::g::Uno::EventArgs* args);
    void Run();
    void RunInner();
    static ::g::Fuse::Scripting::Context* CreateContext(uObject* worker);
    static ThreadWorker* New1();
};
// }

}}} // ::g::Fuse::Reactive
