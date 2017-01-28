// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct PlatformWindowImpl;}}}}
namespace g{namespace Uno{struct Rect;}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class PlatformWindowImpl :853
// {
uClassType* PlatformWindowImpl_typeof();
void PlatformWindowImpl__GetInstance_fn(::Xli::Window** __retval);
void PlatformWindowImpl__GetKeyState_fn(::Xli::Window** handle, int* key, bool* __retval);
void PlatformWindowImpl__GetMouseButtonState_fn(::Xli::Window** handle, int* button, bool* __retval);
void PlatformWindowImpl__OnSoftKeyboardWillResize_fn(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);

struct PlatformWindowImpl : uObject
{
    static ::g::Uno::Rect keyboardFrame_;
    static ::g::Uno::Rect& keyboardFrame() { return PlatformWindowImpl_typeof()->Init(), keyboardFrame_; }
    static bool keyboardVisible_;
    static bool& keyboardVisible() { return PlatformWindowImpl_typeof()->Init(), keyboardVisible_; }

    static ::Xli::Window* GetInstance();
    static bool GetKeyState(::Xli::Window* handle, int key);
    static bool GetMouseButtonState(::Xli::Window* handle, int button);
    static void OnSoftKeyboardWillResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
