// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.Future-1.h>
namespace g{namespace Uno{namespace Threading{struct CancellationToken;}}}
namespace g{namespace Uno{namespace Threading{struct Task;}}}
namespace g{namespace Uno{namespace Threading{struct TaskFuture;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class TaskFuture<T> :799
// {
::g::Uno::Threading::Future_type* TaskFuture_typeof();
void TaskFuture__ctor_3_fn(TaskFuture* __this, uDelegate* func);
void TaskFuture__ctor_4_fn(TaskFuture* __this, uObject* dispatcher, uDelegate* func);
void TaskFuture__Cancel_fn(TaskFuture* __this, bool* shutdownGracefully);
void TaskFuture__Dispose_fn(TaskFuture* __this);
void TaskFuture__Invoke1_fn(TaskFuture* __this, ::g::Uno::Threading::CancellationToken* cancellationToken);
void TaskFuture__New1_fn(uType* __type, uDelegate* func, TaskFuture** __retval);
void TaskFuture__New2_fn(uType* __type, uObject* dispatcher, uDelegate* func, TaskFuture** __retval);

struct TaskFuture : ::g::Uno::Threading::Future1
{
    uStrong<uDelegate*> _func;
    uStrong< ::g::Uno::Threading::Task*> _task;

    void ctor_3(uDelegate* func);
    void ctor_4(uObject* dispatcher, uDelegate* func);
    void Invoke1(::g::Uno::Threading::CancellationToken* cancellationToken);
    static TaskFuture* New1(uType* __type, uDelegate* func);
    static TaskFuture* New2(uType* __type, uObject* dispatcher, uDelegate* func);
};
// }

}}} // ::g::Uno::Threading
