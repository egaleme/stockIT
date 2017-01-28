// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno/Platform2.h>
namespace g{namespace Uno{namespace Platform{struct TimerEventArgs;}}}
namespace g{namespace Uno{namespace Platform2{struct Display;}}}

namespace g{
namespace Uno{
namespace Platform2{

// public sealed extern class Display :386
// {
uType* Display_typeof();
void Display__ctor__fn(Display* __this);
void Display__add__tick_fn(Display* __this, uDelegate* value);
void Display__remove__tick_fn(Display* __this, uDelegate* value);
void Display__get_Density_fn(Display* __this, float* __retval);
void Display__set_Density_fn(Display* __this, float* value);
void Display__Destroy_fn(Display* __this);
void Display__get_Frame_fn(Display* __this, ::g::Uno::Rect* __retval);
void Display__set_Frame_fn(Display* __this, ::g::Uno::Rect* value);
void Display__add_FrameChanged_fn(Display* __this, uDelegate* value);
void Display__remove_FrameChanged_fn(Display* __this, uDelegate* value);
void Display__get_FramesPerSecond_fn(Display* __this, uint32_t* __retval);
void Display__set_FramesPerSecond_fn(Display* __this, uint32_t* value);
void Display__GetMainDisplay_fn(Display** __retval);
void Display__Initialize_fn(Display* __this);
void Display__get_MainDisplay_fn(Display** __retval);
void Display__New1_fn(Display** __retval);
void Display__OnFrameChanged_fn(Display* __this);
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args);
void Display__SetFramesPerSecond_fn(Display* __this, uint32_t* value_);

struct Display : uObject
{
    ::g::Uno::Rect _frame;
    uint32_t _framesPerSecond;
    uPlatform2::Display _private;
    float _Density;
    uStrong<uDelegate*> _tick1;
    uStrong<uDelegate*> FrameChanged1;

    void ctor_();
    void add__tick(uDelegate* value);
    void remove__tick(uDelegate* value);
    float Density();
    void Density(float value);
    void Destroy();
    ::g::Uno::Rect Frame();
    void Frame(::g::Uno::Rect value);
    void add_FrameChanged(uDelegate* value);
    void remove_FrameChanged(uDelegate* value);
    uint32_t FramesPerSecond();
    void FramesPerSecond(uint32_t value);
    void Initialize();
    void OnFrameChanged();
    void OnTick(::g::Uno::Platform::TimerEventArgs* args);
    void SetFramesPerSecond(uint32_t value_);
    static Display* GetMainDisplay();
    static Display* New1();
    static Display* MainDisplay();
};
// }

}}} // ::g::Uno::Platform2
