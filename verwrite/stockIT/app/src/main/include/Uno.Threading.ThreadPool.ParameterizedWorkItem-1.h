// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ThreadPool.WorkItem.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__ParameterizedWorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class ThreadPool.ParameterizedWorkItem<TState> :1060
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this);

struct ThreadPool__ParameterizedWorkItem : ::g::Uno::Threading::ThreadPool__WorkItem
{
    uStrong<uDelegate*> _action;
    uTField _state() { return __type->Field(this, 1); }
};
// }

}}} // ::g::Uno::Threading
