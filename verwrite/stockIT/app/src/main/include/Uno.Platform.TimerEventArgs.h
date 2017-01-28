// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class TimerEventArgs :773
// {
uType* TimerEventArgs_typeof();
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration);
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval);
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value);
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, TimerEventArgs** __retval);
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval);
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value);

struct TimerEventArgs : ::g::Uno::EventArgs
{
    double _LastTickTimestamp;
    double _TickDuration;

    void ctor_1(double lastTickTimestamp, double tickDuration);
    double LastTickTimestamp();
    void LastTickTimestamp(double value);
    double TickDuration();
    void TickDuration(double value);
    static TimerEventArgs* New2(double lastTickTimestamp, double tickDuration);
};
// }

}}} // ::g::Uno::Platform
