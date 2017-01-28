// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct Bootstrapper;}}}}}
namespace g{namespace Uno{struct Float2;}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class Bootstrapper :156
// {
uClassType* Bootstrapper_typeof();
void Bootstrapper__GetEventModifiers_fn(::Xli::Window** handle, int* __retval);
void Bootstrapper__GetPointerScale_fn(::g::Uno::Float2* __retval);
void Bootstrapper__IsPrimaryFinger_fn(::Xli::Window** handle, int* fingerId, bool* __retval);
void Bootstrapper__OnDraw_fn();
void Bootstrapper__OnKeyboardResized_fn(::Xli::Window** handle, bool* __retval);
void Bootstrapper__OnKeyDown_fn(::Xli::Window** handle, int* key, bool* __retval);
void Bootstrapper__OnKeyUp_fn(::Xli::Window** handle, int* key, bool* __retval);
void Bootstrapper__OnMouseDown_fn(::Xli::Window** handle, int* x, int* y, int* button, bool* __retval);
void Bootstrapper__OnMouseMove_fn(::Xli::Window** handle, int* x, int* y, bool* __retval);
void Bootstrapper__OnMouseUp_fn(::Xli::Window** handle, int* x, int* y, int* button, bool* __retval);
void Bootstrapper__OnMouseWheel_fn(::Xli::Window** handle, float* dHori, float* dVert, int* wheelDeltaMode, bool* __retval);
void Bootstrapper__OnTextInput_fn(::Xli::Window** handle, uString* text, bool* __retval);
void Bootstrapper__OnTouchDown_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval);
void Bootstrapper__OnTouchMove_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval);
void Bootstrapper__OnTouchUp_fn(::Xli::Window** handle, float* x, float* y, int* id, bool* __retval);
void Bootstrapper__OnUpdate_fn();
void Bootstrapper__OnWindowClosed_fn(::Xli::Window** handle);
void Bootstrapper__OnWindowSizeChanged_fn(::Xli::Window** handle);

struct Bootstrapper : uObject
{
    static int _fingerCount_;
    static int& _fingerCount() { return Bootstrapper_typeof()->Init(), _fingerCount_; }
    static int _lastMouseX_;
    static int& _lastMouseX() { return Bootstrapper_typeof()->Init(), _lastMouseX_; }
    static int _lastMouseY_;
    static int& _lastMouseY() { return Bootstrapper_typeof()->Init(), _lastMouseY_; }
    static int _lastPrimaryFingerId_;
    static int& _lastPrimaryFingerId() { return Bootstrapper_typeof()->Init(), _lastPrimaryFingerId_; }
    static double _lastTime_;
    static double& _lastTime() { return Bootstrapper_typeof()->Init(), _lastTime_; }
    static double _startTime_;
    static double& _startTime() { return Bootstrapper_typeof()->Init(), _startTime_; }

    static int GetEventModifiers(::Xli::Window* handle);
    static ::g::Uno::Float2 GetPointerScale();
    static bool IsPrimaryFinger(::Xli::Window* handle, int fingerId);
    static void OnDraw();
    static bool OnKeyboardResized(::Xli::Window* handle);
    static bool OnKeyDown(::Xli::Window* handle, int key);
    static bool OnKeyUp(::Xli::Window* handle, int key);
    static bool OnMouseDown(::Xli::Window* handle, int x, int y, int button);
    static bool OnMouseMove(::Xli::Window* handle, int x, int y);
    static bool OnMouseUp(::Xli::Window* handle, int x, int y, int button);
    static bool OnMouseWheel(::Xli::Window* handle, float dHori, float dVert, int wheelDeltaMode);
    static bool OnTextInput(::Xli::Window* handle, uString* text);
    static bool OnTouchDown(::Xli::Window* handle, float x, float y, int id);
    static bool OnTouchMove(::Xli::Window* handle, float x, float y, int id);
    static bool OnTouchUp(::Xli::Window* handle, float x, float y, int id);
    static void OnUpdate();
    static void OnWindowClosed(::Xli::Window* handle);
    static void OnWindowSizeChanged(::Xli::Window* handle);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
