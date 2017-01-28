// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Threading.ITaskScheduler.h>
namespace g{namespace Uno{namespace Threading{struct Task;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPoolTaskScheduler;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class ThreadPoolTaskScheduler :211
// {
struct ThreadPoolTaskScheduler_type : uType
{
    ::g::Uno::Threading::ITaskScheduler interface0;
    ::g::Uno::IDisposable interface1;
};

ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof();
void ThreadPoolTaskScheduler__ctor__fn(ThreadPoolTaskScheduler* __this);
void ThreadPoolTaskScheduler__get_Default_fn(ThreadPoolTaskScheduler** __retval);
void ThreadPoolTaskScheduler__Dispose_fn(ThreadPoolTaskScheduler* __this);
void ThreadPoolTaskScheduler__New1_fn(ThreadPoolTaskScheduler** __retval);
void ThreadPoolTaskScheduler__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args);
void ThreadPoolTaskScheduler__ScheduleTask_fn(ThreadPoolTaskScheduler* __this, ::g::Uno::Threading::Task* task);

struct ThreadPoolTaskScheduler : uObject
{
    static uSStrong<ThreadPoolTaskScheduler*> _default_;
    static uSStrong<ThreadPoolTaskScheduler*>& _default() { return _default_; }
    uStrong< ::g::Uno::Threading::ThreadPool*> _threadPool;

    void ctor_();
    void Dispose();
    void ScheduleTask(::g::Uno::Threading::Task* task);
    static ThreadPoolTaskScheduler* New1();
    static void OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args);
    static ThreadPoolTaskScheduler* Default();
};
// }

}}} // ::g::Uno::Threading
