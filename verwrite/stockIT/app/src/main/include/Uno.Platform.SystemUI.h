// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
#include <Uno/Platform2.h>
namespace g{namespace Uno{namespace Platform{struct SystemUI;}}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Uno{
namespace Platform{

// public static extern class SystemUI :672
// {
uClassType* SystemUI_typeof();
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__EnterFullscreen_fn();
void SystemUI__GetIsStatusBarVisible_fn(bool* __retval);
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval);
void SystemUI__set_IsTopFrameVisible_fn(bool* value);
void SystemUI__OnWillResize_fn(::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void SystemUI__SetIsStatusBarVisible_fn(bool* visible_);
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value);

struct SystemUI : uObject
{
    static ::g::Uno::Rect _cachedBottomFrame_;
    static ::g::Uno::Rect& _cachedBottomFrame() { return _cachedBottomFrame_; }
    static uSStrong<uDelegate*> BottomFrameWillResize1_;
    static uSStrong<uDelegate*>& BottomFrameWillResize1() { return BottomFrameWillResize1_; }
    static uSStrong<uDelegate*> TopFrameWillResize1_;
    static uSStrong<uDelegate*>& TopFrameWillResize1() { return TopFrameWillResize1_; }

    static void EnterFullscreen();
    static bool GetIsStatusBarVisible();
    static ::g::Uno::Rect GetStatusBarFrame();
    static void OnWillResize(::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static void SetIsStatusBarVisible(bool visible_);
    static ::g::Uno::Rect BottomFrame();
    static bool IsTopFrameVisible();
    static void IsTopFrameVisible(bool value);
    static ::g::Uno::Rect TopFrame();
    static void add_BottomFrameWillResize(uDelegate* value);
    static void remove_BottomFrameWillResize(uDelegate* value);
    static void add_TopFrameWillResize(uDelegate* value);
    static void remove_TopFrameWillResize(uDelegate* value);
};
// }

}}} // ::g::Uno::Platform
