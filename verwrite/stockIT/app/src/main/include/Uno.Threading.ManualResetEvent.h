// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEventImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ManualResetEvent :658
// {
struct ManualResetEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ManualResetEvent_type* ManualResetEvent_typeof();
void ManualResetEvent__ctor__fn(ManualResetEvent* __this, bool* initialState);
void ManualResetEvent__Dispose_fn(ManualResetEvent* __this);
void ManualResetEvent__New1_fn(bool* initialState, ManualResetEvent** __retval);
void ManualResetEvent__Set_fn(ManualResetEvent* __this, bool* __retval);
void ManualResetEvent__WaitOne_fn(ManualResetEvent* __this, bool* __retval);

struct ManualResetEvent : uObject
{
    uStrong< ::g::Uno::Threading::ManualResetEventImpl*> _impl;

    void ctor_(bool initialState);
    void Dispose();
    bool Set();
    bool WaitOne();
    static ManualResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
