// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
#include <Uno.Float2.h>
namespace g{namespace Uno{namespace Platform{struct PointerEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class PointerEventArgs :516
// {
uType* PointerEventArgs_typeof();
void PointerEventArgs__ctor_1_fn(PointerEventArgs* __this, int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode);
void PointerEventArgs__get_FingerId_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__set_FingerId_fn(PointerEventArgs* __this, int* value);
void PointerEventArgs__get_Handled_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__set_Handled_fn(PointerEventArgs* __this, bool* value);
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__set_IsPrimary_fn(PointerEventArgs* __this, bool* value);
void PointerEventArgs__get_Modifiers_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__set_Modifiers_fn(PointerEventArgs* __this, int* value);
void PointerEventArgs__get_MouseButton_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__set_MouseButton_fn(PointerEventArgs* __this, int* value);
void PointerEventArgs__New2_fn(int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode, PointerEventArgs** __retval);
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__set_PointerType_fn(PointerEventArgs* __this, int* value);
void PointerEventArgs__get_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);
void PointerEventArgs__set_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* value);
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);
void PointerEventArgs__set_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* value);
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval);
void PointerEventArgs__set_WheelDeltaMode_fn(PointerEventArgs* __this, int* value);

struct PointerEventArgs : ::g::Uno::EventArgs
{
    int _FingerId;
    bool _Handled;
    bool _IsPrimary;
    int _Modifiers;
    int _MouseButton;
    int _PointerType;
    ::g::Uno::Float2 _Position;
    ::g::Uno::Float2 _WheelDelta;
    int _WheelDeltaMode;

    void ctor_1(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode);
    int FingerId();
    void FingerId(int value);
    bool Handled();
    void Handled(bool value);
    bool IsPrimary();
    void IsPrimary(bool value);
    int Modifiers();
    void Modifiers(int value);
    int MouseButton();
    void MouseButton(int value);
    int PointerType();
    void PointerType(int value);
    ::g::Uno::Float2 Position();
    void Position(::g::Uno::Float2 value);
    ::g::Uno::Float2 WheelDelta();
    void WheelDelta(::g::Uno::Float2 value);
    int WheelDeltaMode();
    void WheelDeltaMode(int value);
    static PointerEventArgs* New2(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode);
};
// }

}}} // ::g::Uno::Platform
