// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEventImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class AutoResetEvent :18
// {
struct AutoResetEvent_type : uType
{
    ::g::Uno::IDisposable interface0;
};

AutoResetEvent_type* AutoResetEvent_typeof();
void AutoResetEvent__ctor__fn(AutoResetEvent* __this, bool* initialState);
void AutoResetEvent__Dispose_fn(AutoResetEvent* __this);
void AutoResetEvent__New1_fn(bool* initialState, AutoResetEvent** __retval);
void AutoResetEvent__Set_fn(AutoResetEvent* __this, bool* __retval);
void AutoResetEvent__WaitOne_fn(AutoResetEvent* __this, bool* __retval);

struct AutoResetEvent : uObject
{
    uStrong< ::g::Uno::Threading::AutoResetEventImpl*> _impl;

    void ctor_(bool initialState);
    void Dispose();
    bool Set();
    bool WaitOne();
    static AutoResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
