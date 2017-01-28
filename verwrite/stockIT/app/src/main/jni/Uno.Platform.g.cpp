// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ujobject.h>
#include <uBase/Traits.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.FrameChangedEventArgs.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.MouseButton.h>
#include <Uno.Platform.PointerEventArgs.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIID.h>
#include <Uno.Platform.SystemUIResizeReason.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform.TextInputEventArgs.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform.WheelDeltaMode.h>
#include <Uno.Platform.Window.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.String.h>
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Platform{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum EventModifiers :164
uEnumType* EventModifiers_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.EventModifiers", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "MetaKey", 1LL,
        "ControlKey", 2LL,
        "ShiftKey", 4LL,
        "AltKey", 8LL,
        "LeftButton", 16LL,
        "MiddleButton", 32LL,
        "RightButton", 64LL,
        "X1Button", 128LL,
        "X2Button", 256LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class FrameChangedEventArgs :183
// {
static void FrameChangedEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::FrameChangedEventArgs, _NewFrame), 0);
}

uType* FrameChangedEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FrameChangedEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.FrameChangedEventArgs", options);
    type->fp_build_ = FrameChangedEventArgs_build;
    return type;
}

// public FrameChangedEventArgs(Uno.Rect newFrame) :185
void FrameChangedEventArgs__ctor_1_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* newFrame)
{
    __this->ctor_1(*newFrame);
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) :185
void FrameChangedEventArgs__New2_fn(::g::Uno::Rect* newFrame, FrameChangedEventArgs** __retval)
{
    *__retval = FrameChangedEventArgs::New2(*newFrame);
}

// public generated Uno.Rect get_NewFrame() :190
void FrameChangedEventArgs__get_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->NewFrame();
}

// private generated void set_NewFrame(Uno.Rect value) :190
void FrameChangedEventArgs__set_NewFrame_fn(FrameChangedEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->NewFrame(*value);
}

// public FrameChangedEventArgs(Uno.Rect newFrame) [instance] :185
void FrameChangedEventArgs::ctor_1(::g::Uno::Rect newFrame)
{
    ctor_();
    NewFrame(newFrame);
}

// public generated Uno.Rect get_NewFrame() [instance] :190
::g::Uno::Rect FrameChangedEventArgs::NewFrame()
{
    return _NewFrame;
}

// private generated void set_NewFrame(Uno.Rect value) [instance] :190
void FrameChangedEventArgs::NewFrame(::g::Uno::Rect value)
{
    _NewFrame = value;
}

// public FrameChangedEventArgs New(Uno.Rect newFrame) [static] :185
FrameChangedEventArgs* FrameChangedEventArgs::New2(::g::Uno::Rect newFrame)
{
    FrameChangedEventArgs* obj1 = (FrameChangedEventArgs*)uNew(FrameChangedEventArgs_typeof());
    obj1->ctor_1(newFrame);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum Key :22
uEnumType* Key_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.Key", ::g::Uno::Int_typeof(), 82);
    type->SetLiterals(
        "Backspace", 8LL,
        "Tab", 9LL,
        "Enter", 13LL,
        "ShiftKey", 16LL,
        "ControlKey", 17LL,
        "AltKey", 18LL,
        "Break", 19LL,
        "CapsLock", 20LL,
        "Escape", 27LL,
        "Space", 32LL,
        "PageUp", 33LL,
        "PageDown", 34LL,
        "End", 35LL,
        "Home", 36LL,
        "Left", 37LL,
        "Up", 38LL,
        "Right", 39LL,
        "Down", 40LL,
        "Insert", 45LL,
        "Delete", 46LL,
        "D0", 48LL,
        "D1", 49LL,
        "D2", 50LL,
        "D3", 51LL,
        "D4", 52LL,
        "D5", 53LL,
        "D6", 54LL,
        "D7", 55LL,
        "D8", 56LL,
        "D9", 57LL,
        "A", 65LL,
        "B", 66LL,
        "C", 67LL,
        "D", 68LL,
        "E", 69LL,
        "F", 70LL,
        "G", 71LL,
        "H", 72LL,
        "I", 73LL,
        "J", 74LL,
        "K", 75LL,
        "L", 76LL,
        "M", 77LL,
        "N", 78LL,
        "O", 79LL,
        "P", 80LL,
        "Q", 81LL,
        "R", 82LL,
        "S", 83LL,
        "T", 84LL,
        "U", 85LL,
        "V", 86LL,
        "W", 87LL,
        "X", 88LL,
        "Y", 89LL,
        "Z", 90LL,
        "NumPad0", 96LL,
        "NumPad1", 97LL,
        "NumPad2", 98LL,
        "NumPad3", 99LL,
        "NumPad4", 100LL,
        "NumPad5", 101LL,
        "NumPad6", 102LL,
        "NumPad7", 103LL,
        "NumPad8", 104LL,
        "NumPad9", 105LL,
        "F1", 112LL,
        "F2", 113LL,
        "F3", 114LL,
        "F4", 115LL,
        "F5", 116LL,
        "F6", 117LL,
        "F7", 118LL,
        "F8", 119LL,
        "F9", 120LL,
        "F10", 121LL,
        "F11", 122LL,
        "F12", 123LL,
        "MenuButton", 200LL,
        "BackButton", 201LL,
        "OSKey", 202LL,
        "MetaKey", 203LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class KeyEventArgs :455
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Handled), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Key), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::KeyEventArgs, _Modifiers), 0);
}

uType* KeyEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    return type;
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :457
void KeyEventArgs__ctor_1_fn(KeyEventArgs* __this, int* key, int* modifiers)
{
    __this->ctor_1(*key, *modifiers);
}

// public generated bool get_Handled() :465
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :465
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public bool get_IsAltKeyPressed() :495
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// public bool get_IsControlKeyPressed() :485
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// public bool get_IsMetaKeyPressed() :480
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// public bool get_IsShiftKeyPressed() :490
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// public generated Uno.Platform.Key get_Key() :470
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value) :470
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value)
{
    __this->Key(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :475
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :475
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :457
void KeyEventArgs__New2_fn(int* key, int* modifiers, KeyEventArgs** __retval)
{
    *__retval = KeyEventArgs::New2(*key, *modifiers);
}

// public KeyEventArgs(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [instance] :457
void KeyEventArgs::ctor_1(int key, int modifiers)
{
    ctor_();
    Key(key);
    Modifiers(modifiers);
}

// public generated bool get_Handled() [instance] :465
bool KeyEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :465
void KeyEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public bool get_IsAltKeyPressed() [instance] :495
bool KeyEventArgs::IsAltKeyPressed()
{
    return (Modifiers() & 8) == 8;
}

// public bool get_IsControlKeyPressed() [instance] :485
bool KeyEventArgs::IsControlKeyPressed()
{
    return (Modifiers() & 2) == 2;
}

// public bool get_IsMetaKeyPressed() [instance] :480
bool KeyEventArgs::IsMetaKeyPressed()
{
    return (Modifiers() & 1) == 1;
}

// public bool get_IsShiftKeyPressed() [instance] :490
bool KeyEventArgs::IsShiftKeyPressed()
{
    return (Modifiers() & 4) == 4;
}

// public generated Uno.Platform.Key get_Key() [instance] :470
int KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance] :470
void KeyEventArgs::Key(int value)
{
    _Key = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :475
int KeyEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :475
void KeyEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public KeyEventArgs New(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :457
KeyEventArgs* KeyEventArgs::New2(int key, int modifiers)
{
    KeyEventArgs* obj1 = (KeyEventArgs*)uNew(KeyEventArgs_typeof());
    obj1->ctor_1(key, modifiers);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum MouseButton :114
uEnumType* MouseButton_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.MouseButton", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 1LL,
        "Middle", 2LL,
        "Right", 3LL,
        "X1", 4LL,
        "X2", 5LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class PointerEventArgs :516
// {
static void PointerEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _FingerId), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Handled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _IsPrimary), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Modifiers), 0,
        ::g::Uno::Platform::MouseButton_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _MouseButton), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _PointerType), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _Position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _WheelDelta), 0,
        ::g::Uno::Platform::WheelDeltaMode_typeof(), offsetof(::g::Uno::Platform::PointerEventArgs, _WheelDeltaMode), 0);
}

uType* PointerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.PointerEventArgs", options);
    type->fp_build_ = PointerEventArgs_build;
    return type;
}

// public PointerEventArgs(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) :518
void PointerEventArgs__ctor_1_fn(PointerEventArgs* __this, int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode)
{
    __this->ctor_1(*type, *modifiers, *primary, *position, *fingerId, *mouseButton, *wheelDelta, *wheelDeltaMode);
}

// public generated int get_FingerId() :553
void PointerEventArgs__get_FingerId_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->FingerId();
}

// private generated void set_FingerId(int value) :553
void PointerEventArgs__set_FingerId_fn(PointerEventArgs* __this, int* value)
{
    __this->FingerId(*value);
}

// public generated bool get_Handled() :532
void PointerEventArgs__get_Handled_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :532
void PointerEventArgs__set_Handled_fn(PointerEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// public generated bool get_IsPrimary() :543
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsPrimary();
}

// private generated void set_IsPrimary(bool value) :543
void PointerEventArgs__set_IsPrimary_fn(PointerEventArgs* __this, bool* value)
{
    __this->IsPrimary(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :573
void PointerEventArgs__get_Modifiers_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :573
void PointerEventArgs__set_Modifiers_fn(PointerEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public generated Uno.Platform.MouseButton get_MouseButton() :558
void PointerEventArgs__get_MouseButton_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->MouseButton();
}

// private generated void set_MouseButton(Uno.Platform.MouseButton value) :558
void PointerEventArgs__set_MouseButton_fn(PointerEventArgs* __this, int* value)
{
    __this->MouseButton(*value);
}

// public PointerEventArgs New(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) :518
void PointerEventArgs__New2_fn(int* type, int* modifiers, bool* primary, ::g::Uno::Float2* position, int* fingerId, int* mouseButton, ::g::Uno::Float2* wheelDelta, int* wheelDeltaMode, PointerEventArgs** __retval)
{
    *__retval = PointerEventArgs::New2(*type, *modifiers, *primary, *position, *fingerId, *mouseButton, *wheelDelta, *wheelDeltaMode);
}

// public generated Uno.Platform.PointerType get_PointerType() :537
void PointerEventArgs__get_PointerType_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->PointerType();
}

// private generated void set_PointerType(Uno.Platform.PointerType value) :537
void PointerEventArgs__set_PointerType_fn(PointerEventArgs* __this, int* value)
{
    __this->PointerType(*value);
}

// public generated float2 get_Position() :548
void PointerEventArgs__get_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// private generated void set_Position(float2 value) :548
void PointerEventArgs__set_Position_fn(PointerEventArgs* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public generated float2 get_WheelDelta() :563
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WheelDelta();
}

// private generated void set_WheelDelta(float2 value) :563
void PointerEventArgs__set_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* value)
{
    __this->WheelDelta(*value);
}

// public generated Uno.Platform.WheelDeltaMode get_WheelDeltaMode() :568
void PointerEventArgs__get_WheelDeltaMode_fn(PointerEventArgs* __this, int* __retval)
{
    *__retval = __this->WheelDeltaMode();
}

// private generated void set_WheelDeltaMode(Uno.Platform.WheelDeltaMode value) :568
void PointerEventArgs__set_WheelDeltaMode_fn(PointerEventArgs* __this, int* value)
{
    __this->WheelDeltaMode(*value);
}

// public PointerEventArgs(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) [instance] :518
void PointerEventArgs::ctor_1(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    ctor_();
    PointerType(type);
    Modifiers(modifiers);
    IsPrimary(primary);
    Position(position);
    FingerId(fingerId);
    MouseButton(mouseButton);
    WheelDelta(wheelDelta);
    WheelDeltaMode(wheelDeltaMode);
}

// public generated int get_FingerId() [instance] :553
int PointerEventArgs::FingerId()
{
    return _FingerId;
}

// private generated void set_FingerId(int value) [instance] :553
void PointerEventArgs::FingerId(int value)
{
    _FingerId = value;
}

// public generated bool get_Handled() [instance] :532
bool PointerEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :532
void PointerEventArgs::Handled(bool value)
{
    _Handled = value;
}

// public generated bool get_IsPrimary() [instance] :543
bool PointerEventArgs::IsPrimary()
{
    return _IsPrimary;
}

// private generated void set_IsPrimary(bool value) [instance] :543
void PointerEventArgs::IsPrimary(bool value)
{
    _IsPrimary = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :573
int PointerEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :573
void PointerEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public generated Uno.Platform.MouseButton get_MouseButton() [instance] :558
int PointerEventArgs::MouseButton()
{
    return _MouseButton;
}

// private generated void set_MouseButton(Uno.Platform.MouseButton value) [instance] :558
void PointerEventArgs::MouseButton(int value)
{
    _MouseButton = value;
}

// public generated Uno.Platform.PointerType get_PointerType() [instance] :537
int PointerEventArgs::PointerType()
{
    return _PointerType;
}

// private generated void set_PointerType(Uno.Platform.PointerType value) [instance] :537
void PointerEventArgs::PointerType(int value)
{
    _PointerType = value;
}

// public generated float2 get_Position() [instance] :548
::g::Uno::Float2 PointerEventArgs::Position()
{
    return _Position;
}

// private generated void set_Position(float2 value) [instance] :548
void PointerEventArgs::Position(::g::Uno::Float2 value)
{
    _Position = value;
}

// public generated float2 get_WheelDelta() [instance] :563
::g::Uno::Float2 PointerEventArgs::WheelDelta()
{
    return _WheelDelta;
}

// private generated void set_WheelDelta(float2 value) [instance] :563
void PointerEventArgs::WheelDelta(::g::Uno::Float2 value)
{
    _WheelDelta = value;
}

// public generated Uno.Platform.WheelDeltaMode get_WheelDeltaMode() [instance] :568
int PointerEventArgs::WheelDeltaMode()
{
    return _WheelDeltaMode;
}

// private generated void set_WheelDeltaMode(Uno.Platform.WheelDeltaMode value) [instance] :568
void PointerEventArgs::WheelDeltaMode(int value)
{
    _WheelDeltaMode = value;
}

// public PointerEventArgs New(Uno.Platform.PointerType type, Uno.Platform.EventModifiers modifiers, bool primary, float2 position, int fingerId, Uno.Platform.MouseButton mouseButton, float2 wheelDelta, Uno.Platform.WheelDeltaMode wheelDeltaMode) [static] :518
PointerEventArgs* PointerEventArgs::New2(int type, int modifiers, bool primary, ::g::Uno::Float2 position, int fingerId, int mouseButton, ::g::Uno::Float2 wheelDelta, int wheelDeltaMode)
{
    PointerEventArgs* obj1 = (PointerEventArgs*)uNew(PointerEventArgs_typeof());
    obj1->ctor_1(type, modifiers, primary, position, fingerId, mouseButton, wheelDelta, wheelDeltaMode);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum PointerType :146
uEnumType* PointerType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.PointerType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Mouse", 1LL,
        "Touch", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public static extern class SystemUI :672
// {
static void SystemUI_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Uno::Platform::SystemUI::_cachedBottomFrame_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Uno::Platform::SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&::g::Uno::Platform::SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    return type;
}

// public static Uno.Rect get_BottomFrame() :678
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :697
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :697
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// private static extern void EnterFullscreen() :693
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// private static extern bool GetIsStatusBarVisible() :691
void SystemUI__GetIsStatusBarVisible_fn(bool* __retval)
{
    *__retval = SystemUI::GetIsStatusBarVisible();
}

// private static extern Uno.Rect GetStatusBarFrame() :694
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// public static bool get_IsTopFrameVisible() :682
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :683
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// private static void OnWillResize(Uno.Platform.SystemUIWillResizeEventArgs args) :699
void SystemUI__OnWillResize_fn(::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// private static extern void SetIsStatusBarVisible(bool visible) :692
void SystemUI__SetIsStatusBarVisible_fn(bool* visible_)
{
    SystemUI::SetIsStatusBarVisible(*visible_);
}

// public static Uno.Rect get_TopFrame() :677
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :696
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) :696
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

::g::Uno::Rect SystemUI::_cachedBottomFrame_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static extern void EnterFullscreen() [static] :693
void SystemUI::EnterFullscreen()
{
    uPlatform2::Application::EnterFullscreen();
}

// private static extern bool GetIsStatusBarVisible() [static] :691
bool SystemUI::GetIsStatusBarVisible()
{
    return uPlatform2::Application::GetIsStatusBarVisible();
}

// private static extern Uno.Rect GetStatusBarFrame() [static] :694
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    return uPlatform2::Application::GetStatusBarFrame();
}

// private static void OnWillResize(Uno.Platform.SystemUIWillResizeEventArgs args) [static] :699
void SystemUI::OnWillResize(::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::_cachedBottomFrame_ = uPtr(args)->EndFrame();
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// private static extern void SetIsStatusBarVisible(bool visible) [static] :692
void SystemUI::SetIsStatusBarVisible(bool visible_)
{
    uPlatform2::Application::SetStatusBarVisible(visible_);
}

// public static Uno.Rect get_BottomFrame() [static] :678
::g::Uno::Rect SystemUI::BottomFrame()
{
    return SystemUI::_cachedBottomFrame_;
}

// public static bool get_IsTopFrameVisible() [static] :682
bool SystemUI::IsTopFrameVisible()
{
    return SystemUI::GetIsStatusBarVisible();
}

// public static void set_IsTopFrameVisible(bool value) [static] :683
void SystemUI::IsTopFrameVisible(bool value)
{
    SystemUI::SetIsStatusBarVisible(value);
}

// public static Uno.Rect get_TopFrame() [static] :677
::g::Uno::Rect SystemUI::TopFrame()
{
    return SystemUI::GetStatusBarFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :697
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :697
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :696
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs> value) [static] :696
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum SystemUIID :627
uEnumType* SystemUIID_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.SystemUIID", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum SystemUIResizeReason :632
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class SystemUIWillResizeEventArgs :639
// {
static void SystemUIWillResizeEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _AnimationCurve), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _AnimationDuration), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _EndFrame), 0,
        ::g::Uno::Platform::SystemUIID_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _ID), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _IsAnimated), 0,
        ::g::Uno::Platform::SystemUIResizeReason_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _ResizeReason), 0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform::SystemUIWillResizeEventArgs, _StartFrame), 0);
}

uType* SystemUIWillResizeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SystemUIWillResizeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.SystemUIWillResizeEventArgs", options);
    type->fp_build_ = SystemUIWillResizeEventArgs_build;
    return type;
}

// public SystemUIWillResizeEventArgs(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :642
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve)
{
    __this->ctor_1(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated int get_AnimationCurve() :668
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->AnimationCurve();
}

// private generated void set_AnimationCurve(int value) :668
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->AnimationCurve(*value);
}

// public generated double get_AnimationDuration() :667
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval)
{
    *__retval = __this->AnimationDuration();
}

// private generated void set_AnimationDuration(double value) :667
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value)
{
    __this->AnimationDuration(*value);
}

// public generated Uno.Rect get_EndFrame() :664
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->EndFrame();
}

// private generated void set_EndFrame(Uno.Rect value) :664
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->EndFrame(*value);
}

// public generated Uno.Platform.SystemUIID get_ID() :661
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ID();
}

// private generated void set_ID(Uno.Platform.SystemUIID value) :661
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ID(*value);
}

// public generated bool get_IsAnimated() :666
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAnimated();
}

// private generated void set_IsAnimated(bool value) :666
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value)
{
    __this->IsAnimated(*value);
}

// public SystemUIWillResizeEventArgs New(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :642
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval)
{
    *__retval = SystemUIWillResizeEventArgs::New2(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated Uno.Platform.SystemUIResizeReason get_ResizeReason() :662
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ResizeReason();
}

// private generated void set_ResizeReason(Uno.Platform.SystemUIResizeReason value) :662
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ResizeReason(*value);
}

// public generated Uno.Rect get_StartFrame() :663
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->StartFrame();
}

// private generated void set_StartFrame(Uno.Rect value) :663
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->StartFrame(*value);
}

// public SystemUIWillResizeEventArgs(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [instance] :642
void SystemUIWillResizeEventArgs::ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ctor_();
    ID(id);
    ResizeReason(resizeReason);
    StartFrame(startFrame);
    EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        IsAnimated(true);
        AnimationDuration(animationDuration);
        AnimationCurve(animationCurve);
    }
}

// public generated int get_AnimationCurve() [instance] :668
int SystemUIWillResizeEventArgs::AnimationCurve()
{
    return _AnimationCurve;
}

// private generated void set_AnimationCurve(int value) [instance] :668
void SystemUIWillResizeEventArgs::AnimationCurve(int value)
{
    _AnimationCurve = value;
}

// public generated double get_AnimationDuration() [instance] :667
double SystemUIWillResizeEventArgs::AnimationDuration()
{
    return _AnimationDuration;
}

// private generated void set_AnimationDuration(double value) [instance] :667
void SystemUIWillResizeEventArgs::AnimationDuration(double value)
{
    _AnimationDuration = value;
}

// public generated Uno.Rect get_EndFrame() [instance] :664
::g::Uno::Rect SystemUIWillResizeEventArgs::EndFrame()
{
    return _EndFrame;
}

// private generated void set_EndFrame(Uno.Rect value) [instance] :664
void SystemUIWillResizeEventArgs::EndFrame(::g::Uno::Rect value)
{
    _EndFrame = value;
}

// public generated Uno.Platform.SystemUIID get_ID() [instance] :661
int SystemUIWillResizeEventArgs::ID()
{
    return _ID;
}

// private generated void set_ID(Uno.Platform.SystemUIID value) [instance] :661
void SystemUIWillResizeEventArgs::ID(int value)
{
    _ID = value;
}

// public generated bool get_IsAnimated() [instance] :666
bool SystemUIWillResizeEventArgs::IsAnimated()
{
    return _IsAnimated;
}

// private generated void set_IsAnimated(bool value) [instance] :666
void SystemUIWillResizeEventArgs::IsAnimated(bool value)
{
    _IsAnimated = value;
}

// public generated Uno.Platform.SystemUIResizeReason get_ResizeReason() [instance] :662
int SystemUIWillResizeEventArgs::ResizeReason()
{
    return _ResizeReason;
}

// private generated void set_ResizeReason(Uno.Platform.SystemUIResizeReason value) [instance] :662
void SystemUIWillResizeEventArgs::ResizeReason(int value)
{
    _ResizeReason = value;
}

// public generated Uno.Rect get_StartFrame() [instance] :663
::g::Uno::Rect SystemUIWillResizeEventArgs::StartFrame()
{
    return _StartFrame;
}

// private generated void set_StartFrame(Uno.Rect value) [instance] :663
void SystemUIWillResizeEventArgs::StartFrame(::g::Uno::Rect value)
{
    _StartFrame = value;
}

// public SystemUIWillResizeEventArgs New(Uno.Platform.SystemUIID id, Uno.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [static] :642
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs::New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* obj1 = (SystemUIWillResizeEventArgs*)uNew(SystemUIWillResizeEventArgs_typeof());
    obj1->ctor_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class TextInputEventArgs :723
// {
static void TextInputEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Handled), 0,
        ::g::Uno::Platform::EventModifiers_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Modifiers), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Platform::TextInputEventArgs, _Text), 0);
}

uType* TextInputEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextInputEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TextInputEventArgs", options);
    type->fp_build_ = TextInputEventArgs_build;
    return type;
}

// public TextInputEventArgs(string text, Uno.Platform.EventModifiers modifiers) :725
void TextInputEventArgs__ctor_1_fn(TextInputEventArgs* __this, uString* text, int* modifiers)
{
    __this->ctor_1(text, *modifiers);
}

// public generated bool get_Handled() :733
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval)
{
    *__retval = __this->Handled();
}

// public generated void set_Handled(bool value) :733
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value)
{
    __this->Handled(*value);
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() :743
void TextInputEventArgs__get_Modifiers_fn(TextInputEventArgs* __this, int* __retval)
{
    *__retval = __this->Modifiers();
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) :743
void TextInputEventArgs__set_Modifiers_fn(TextInputEventArgs* __this, int* value)
{
    __this->Modifiers(*value);
}

// public TextInputEventArgs New(string text, Uno.Platform.EventModifiers modifiers) :725
void TextInputEventArgs__New2_fn(uString* text, int* modifiers, TextInputEventArgs** __retval)
{
    *__retval = TextInputEventArgs::New2(text, *modifiers);
}

// public generated string get_Text() :738
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value) :738
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value)
{
    __this->Text(value);
}

// public TextInputEventArgs(string text, Uno.Platform.EventModifiers modifiers) [instance] :725
void TextInputEventArgs::ctor_1(uString* text, int modifiers)
{
    ctor_();
    Text(text);
    Modifiers(modifiers);
}

// public generated bool get_Handled() [instance] :733
bool TextInputEventArgs::Handled()
{
    return _Handled;
}

// public generated void set_Handled(bool value) [instance] :733
void TextInputEventArgs::Handled(bool value)
{
    _Handled = value;
}

// internal generated Uno.Platform.EventModifiers get_Modifiers() [instance] :743
int TextInputEventArgs::Modifiers()
{
    return _Modifiers;
}

// private generated void set_Modifiers(Uno.Platform.EventModifiers value) [instance] :743
void TextInputEventArgs::Modifiers(int value)
{
    _Modifiers = value;
}

// public generated string get_Text() [instance] :738
uString* TextInputEventArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance] :738
void TextInputEventArgs::Text(uString* value)
{
    _Text = value;
}

// public TextInputEventArgs New(string text, Uno.Platform.EventModifiers modifiers) [static] :725
TextInputEventArgs* TextInputEventArgs::New2(uString* text, int modifiers)
{
    TextInputEventArgs* obj1 = (TextInputEventArgs*)uNew(TextInputEventArgs_typeof());
    obj1->ctor_1(text, modifiers);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class TimerEventArgs :773
// {
static void TimerEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _LastTickTimestamp), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::Platform::TimerEventArgs, _TickDuration), 0);
}

uType* TimerEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TimerEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.TimerEventArgs", options);
    type->fp_build_ = TimerEventArgs_build;
    return type;
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration) :775
void TimerEventArgs__ctor_1_fn(TimerEventArgs* __this, double* lastTickTimestamp, double* tickDuration)
{
    __this->ctor_1(*lastTickTimestamp, *tickDuration);
}

// public generated double get_LastTickTimestamp() :781
void TimerEventArgs__get_LastTickTimestamp_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->LastTickTimestamp();
}

// private generated void set_LastTickTimestamp(double value) :781
void TimerEventArgs__set_LastTickTimestamp_fn(TimerEventArgs* __this, double* value)
{
    __this->LastTickTimestamp(*value);
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration) :775
void TimerEventArgs__New2_fn(double* lastTickTimestamp, double* tickDuration, TimerEventArgs** __retval)
{
    *__retval = TimerEventArgs::New2(*lastTickTimestamp, *tickDuration);
}

// public generated double get_TickDuration() :782
void TimerEventArgs__get_TickDuration_fn(TimerEventArgs* __this, double* __retval)
{
    *__retval = __this->TickDuration();
}

// private generated void set_TickDuration(double value) :782
void TimerEventArgs__set_TickDuration_fn(TimerEventArgs* __this, double* value)
{
    __this->TickDuration(*value);
}

// public TimerEventArgs(double lastTickTimestamp, double tickDuration) [instance] :775
void TimerEventArgs::ctor_1(double lastTickTimestamp, double tickDuration)
{
    ctor_();
    LastTickTimestamp(lastTickTimestamp);
    TickDuration(tickDuration);
}

// public generated double get_LastTickTimestamp() [instance] :781
double TimerEventArgs::LastTickTimestamp()
{
    return _LastTickTimestamp;
}

// private generated void set_LastTickTimestamp(double value) [instance] :781
void TimerEventArgs::LastTickTimestamp(double value)
{
    _LastTickTimestamp = value;
}

// public generated double get_TickDuration() [instance] :782
double TimerEventArgs::TickDuration()
{
    return _TickDuration;
}

// private generated void set_TickDuration(double value) [instance] :782
void TimerEventArgs::TickDuration(double value)
{
    _TickDuration = value;
}

// public TimerEventArgs New(double lastTickTimestamp, double tickDuration) [static] :775
TimerEventArgs* TimerEventArgs::New2(double lastTickTimestamp, double tickDuration)
{
    TimerEventArgs* obj1 = (TimerEventArgs*)uNew(TimerEventArgs_typeof());
    obj1->ctor_1(lastTickTimestamp, tickDuration);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public extern struct ViewNativeHandle :797
// {
static void ViewNativeHandle_build(uType* type)
{
}

uStructType* ViewNativeHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uPlatform2::ViewNativeHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform.ViewNativeHandle", options);
    type->fp_build_ = ViewNativeHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ViewNativeHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ViewNativeHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :826
void ViewNativeHandle__Equals_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, uObject* obj, bool* __retval)
{
    return *__retval = uIs(obj, __type) && ViewNativeHandle::op_Equality(uUnbox<uPlatform2::ViewNativeHandle>(__type, obj), *__this), void();
}

// public override sealed extern int GetHashCode() :832
void ViewNativeHandle__GetHashCode_fn(uPlatform2::ViewNativeHandle* __this, uType* __type, int* __retval)
{
    return *__retval = uBase::Default::Hash(__this), void();
}

// private static extern bool IsSameView(Uno.Platform.ViewNativeHandle handle1, Uno.Platform.ViewNativeHandle handle2) :839
void ViewNativeHandle__IsSameView_fn(uPlatform2::ViewNativeHandle* handle1, uPlatform2::ViewNativeHandle* handle2, bool* __retval)
{
    *__retval = ViewNativeHandle::IsSameView(*handle1, *handle2);
}

// public static operator ==(Uno.Platform.ViewNativeHandle lhs, Uno.Platform.ViewNativeHandle rhs) :814
void ViewNativeHandle__op_Equality_fn(uPlatform2::ViewNativeHandle* lhs, uPlatform2::ViewNativeHandle* rhs, bool* __retval)
{
    *__retval = ViewNativeHandle::op_Equality(*lhs, *rhs);
}

// private static extern bool IsSameView(Uno.Platform.ViewNativeHandle handle1, Uno.Platform.ViewNativeHandle handle2) [static] :839
bool ViewNativeHandle::IsSameView(uPlatform2::ViewNativeHandle handle1, uPlatform2::ViewNativeHandle handle2)
{
    return ::g::Android::Base::JNI::IsSameObject(handle1, handle2);
}

// public static operator ==(Uno.Platform.ViewNativeHandle lhs, Uno.Platform.ViewNativeHandle rhs) [static] :814
bool ViewNativeHandle::op_Equality(uPlatform2::ViewNativeHandle lhs, uPlatform2::ViewNativeHandle rhs)
{
    return ViewNativeHandle::IsSameView(lhs, rhs);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public enum WheelDeltaMode :508
uEnumType* WheelDeltaMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.WheelDeltaMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DeltaPixel", 0LL,
        "DeltaLine", 1LL,
        "DeltaPage", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno
// ---------------------------------------------------------------------------------------------

// public sealed class Window :866
// {
static void Window_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::PointerEventArgs_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TextInputEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof(), offsetof(::g::Uno::Platform::Window, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Platform::Window, _hasPointerEntered), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, Closed1), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, GotFocus1), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, KeyboardResized1), 0,
        ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], offsetof(::g::Uno::Platform::Window, KeyPressed1), 0,
        ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], offsetof(::g::Uno::Platform::Window, KeyReleased1), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, LostFocus1), 0,
        ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], offsetof(::g::Uno::Platform::Window, PointerEntered1), 0,
        ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], offsetof(::g::Uno::Platform::Window, PointerMoved1), 0,
        ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], offsetof(::g::Uno::Platform::Window, PointerPressed1), 0,
        ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], offsetof(::g::Uno::Platform::Window, PointerReleased1), 0,
        ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/], offsetof(::g::Uno::Platform::Window, PointerWheelChanged1), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, Resized1), 0,
        ::TYPES[4/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/], offsetof(::g::Uno::Platform::Window, TextInput1), 0,
        ::TYPES[1/*Uno.EventHandler*/], offsetof(::g::Uno::Platform::Window, Updating1), 0);
}

uType* Window_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Window);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform.Window", options);
    type->fp_build_ = Window_build;
    type->fp_ctor_ = (void*)Window__New1_fn;
    return type;
}

// internal Window() :870
void Window__ctor__fn(Window* __this)
{
    __this->ctor_();
}

// public generated void add_Closed(Uno.EventHandler value) :933
void Window__add_Closed_fn(Window* __this, uDelegate* value)
{
    __this->add_Closed(value);
}

// public generated void remove_Closed(Uno.EventHandler value) :933
void Window__remove_Closed_fn(Window* __this, uDelegate* value)
{
    __this->remove_Closed(value);
}

// public generated void add_GotFocus(Uno.EventHandler value) :937
void Window__add_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_GotFocus(value);
}

// public generated void remove_GotFocus(Uno.EventHandler value) :937
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_GotFocus(value);
}

// public generated void add_KeyboardResized(Uno.EventHandler value) :929
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyboardResized(value);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) :929
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyboardResized(value);
}

// public generated void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :926
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyPressed(value);
}

// public generated void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :926
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyPressed(value);
}

// public generated void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :927
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_KeyReleased(value);
}

// public generated void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :927
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_KeyReleased(value);
}

// public generated void add_LostFocus(Uno.EventHandler value) :938
void Window__add_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->add_LostFocus(value);
}

// public generated void remove_LostFocus(Uno.EventHandler value) :938
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value)
{
    __this->remove_LostFocus(value);
}

// internal Window New() :870
void Window__New1_fn(Window** __retval)
{
    *__retval = Window::New1();
}

// internal void OnClosed(Uno.EventArgs args) :1018
void Window__OnClosed_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnClosed(args);
}

// internal void OnGotFocus(Uno.EventArgs args) :1030
void Window__OnGotFocus_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnGotFocus(args);
}

// internal void OnKeyboardResized() :982
void Window__OnKeyboardResized_fn(Window* __this)
{
    __this->OnKeyboardResized();
}

// internal void OnKeyPressed(Uno.Platform.KeyEventArgs args) :988
void Window__OnKeyPressed_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args)
{
    __this->OnKeyPressed(args);
}

// internal void OnKeyReleased(Uno.Platform.KeyEventArgs args) :994
void Window__OnKeyReleased_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args)
{
    __this->OnKeyReleased(args);
}

// internal void OnLostFocus(Uno.EventArgs args) :1036
void Window__OnLostFocus_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnLostFocus(args);
}

// internal void OnPointerEntered(Uno.Platform.PointerEventArgs args) :969
void Window__OnPointerEntered_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerEntered(args);
}

// internal void OnPointerMoved(Uno.Platform.PointerEventArgs args) :953
void Window__OnPointerMoved_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerMoved(args);
}

// internal void OnPointerPressed(Uno.Platform.PointerEventArgs args) :940
void Window__OnPointerPressed_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerPressed(args);
}

// internal void OnPointerReleased(Uno.Platform.PointerEventArgs args) :946
void Window__OnPointerReleased_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerReleased(args);
}

// internal void OnPointerWheelChanged(Uno.Platform.PointerEventArgs args) :976
void Window__OnPointerWheelChanged_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args)
{
    __this->OnPointerWheelChanged(args);
}

// internal void OnResized(Uno.EventArgs args) :1006
void Window__OnResized_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnResized(args);
}

// internal void OnTextInput(Uno.Platform.TextInputEventArgs args) :1000
void Window__OnTextInput_fn(Window* __this, ::g::Uno::Platform::TextInputEventArgs* args)
{
    __this->OnTextInput(args);
}

// internal void OnUpdating(Uno.EventArgs args) :1024
void Window__OnUpdating_fn(Window* __this, ::g::Uno::EventArgs* args)
{
    __this->OnUpdating(args);
}

// public generated void add_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :924
void Window__add_PointerEntered_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerEntered(value);
}

// public generated void remove_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :924
void Window__remove_PointerEntered_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerEntered(value);
}

// public generated void add_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :921
void Window__add_PointerMoved_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerMoved(value);
}

// public generated void remove_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :921
void Window__remove_PointerMoved_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerMoved(value);
}

// public generated void add_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :919
void Window__add_PointerPressed_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerPressed(value);
}

// public generated void remove_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :919
void Window__remove_PointerPressed_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerPressed(value);
}

// public generated void add_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :920
void Window__add_PointerReleased_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerReleased(value);
}

// public generated void remove_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :920
void Window__remove_PointerReleased_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerReleased(value);
}

// public generated void add_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :922
void Window__add_PointerWheelChanged_fn(Window* __this, uDelegate* value)
{
    __this->add_PointerWheelChanged(value);
}

// public generated void remove_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) :922
void Window__remove_PointerWheelChanged_fn(Window* __this, uDelegate* value)
{
    __this->remove_PointerWheelChanged(value);
}

// public generated void add_Resized(Uno.EventHandler value) :931
void Window__add_Resized_fn(Window* __this, uDelegate* value)
{
    __this->add_Resized(value);
}

// public generated void remove_Resized(Uno.EventHandler value) :931
void Window__remove_Resized_fn(Window* __this, uDelegate* value)
{
    __this->remove_Resized(value);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :928
void Window__add_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->add_TextInput(value);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) :928
void Window__remove_TextInput_fn(Window* __this, uDelegate* value)
{
    __this->remove_TextInput(value);
}

// public generated void add_Updating(Uno.EventHandler value) :935
void Window__add_Updating_fn(Window* __this, uDelegate* value)
{
    __this->add_Updating(value);
}

// public generated void remove_Updating(Uno.EventHandler value) :935
void Window__remove_Updating_fn(Window* __this, uDelegate* value)
{
    __this->remove_Updating(value);
}

// internal Window() [instance] :870
void Window::ctor_()
{
    _handle = ::g::Uno::Runtime::Implementation::PlatformWindowImpl::GetInstance();
}

// public generated void add_Closed(Uno.EventHandler value) [instance] :933
void Window::add_Closed(uDelegate* value)
{
    Closed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Closed1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_Closed(Uno.EventHandler value) [instance] :933
void Window::remove_Closed(uDelegate* value)
{
    Closed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Closed1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void add_GotFocus(Uno.EventHandler value) [instance] :937
void Window::add_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(GotFocus1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_GotFocus(Uno.EventHandler value) [instance] :937
void Window::remove_GotFocus(uDelegate* value)
{
    GotFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(GotFocus1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void add_KeyboardResized(Uno.EventHandler value) [instance] :929
void Window::add_KeyboardResized(uDelegate* value)
{
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyboardResized1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_KeyboardResized(Uno.EventHandler value) [instance] :929
void Window::remove_KeyboardResized(uDelegate* value)
{
    KeyboardResized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyboardResized1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void add_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :926
void Window::add_KeyPressed(uDelegate* value)
{
    KeyPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyPressed1, value), ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void remove_KeyPressed(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :926
void Window::remove_KeyPressed(uDelegate* value)
{
    KeyPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyPressed1, value), ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void add_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :927
void Window::add_KeyReleased(uDelegate* value)
{
    KeyReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(KeyReleased1, value), ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void remove_KeyReleased(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [instance] :927
void Window::remove_KeyReleased(uDelegate* value)
{
    KeyReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(KeyReleased1, value), ::TYPES[2/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public generated void add_LostFocus(Uno.EventHandler value) [instance] :938
void Window::add_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(LostFocus1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_LostFocus(Uno.EventHandler value) [instance] :938
void Window::remove_LostFocus(uDelegate* value)
{
    LostFocus1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(LostFocus1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// internal void OnClosed(Uno.EventArgs args) [instance] :1018
void Window::OnClosed(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Closed1, NULL))
        uPtr(Closed1)->Invoke(2, this, args);
}

// internal void OnGotFocus(Uno.EventArgs args) [instance] :1030
void Window::OnGotFocus(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(GotFocus1, NULL))
        uPtr(GotFocus1)->Invoke(2, this, args);
}

// internal void OnKeyboardResized() [instance] :982
void Window::OnKeyboardResized()
{
    if (::g::Uno::Delegate::op_Inequality(KeyboardResized1, NULL))
        uPtr(KeyboardResized1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal void OnKeyPressed(Uno.Platform.KeyEventArgs args) [instance] :988
void Window::OnKeyPressed(::g::Uno::Platform::KeyEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(KeyPressed1, NULL))
        uPtr(KeyPressed1)->Invoke(2, this, args);
}

// internal void OnKeyReleased(Uno.Platform.KeyEventArgs args) [instance] :994
void Window::OnKeyReleased(::g::Uno::Platform::KeyEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(KeyReleased1, NULL))
        uPtr(KeyReleased1)->Invoke(2, this, args);
}

// internal void OnLostFocus(Uno.EventArgs args) [instance] :1036
void Window::OnLostFocus(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(LostFocus1, NULL))
        uPtr(LostFocus1)->Invoke(2, this, args);
}

// internal void OnPointerEntered(Uno.Platform.PointerEventArgs args) [instance] :969
void Window::OnPointerEntered(::g::Uno::Platform::PointerEventArgs* args)
{
    _hasPointerEntered = true;

    if (::g::Uno::Delegate::op_Inequality(PointerEntered1, NULL))
        uPtr(PointerEntered1)->Invoke(2, this, args);
}

// internal void OnPointerMoved(Uno.Platform.PointerEventArgs args) [instance] :953
void Window::OnPointerMoved(::g::Uno::Platform::PointerEventArgs* args)
{
    if (!_hasPointerEntered)
        OnPointerEntered(args);

    if (::g::Uno::Delegate::op_Inequality(PointerMoved1, NULL))
        uPtr(PointerMoved1)->Invoke(2, this, args);
}

// internal void OnPointerPressed(Uno.Platform.PointerEventArgs args) [instance] :940
void Window::OnPointerPressed(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerPressed1, NULL))
        uPtr(PointerPressed1)->Invoke(2, this, args);
}

// internal void OnPointerReleased(Uno.Platform.PointerEventArgs args) [instance] :946
void Window::OnPointerReleased(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerReleased1, NULL))
        uPtr(PointerReleased1)->Invoke(2, this, args);
}

// internal void OnPointerWheelChanged(Uno.Platform.PointerEventArgs args) [instance] :976
void Window::OnPointerWheelChanged(::g::Uno::Platform::PointerEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(PointerWheelChanged1, NULL))
        uPtr(PointerWheelChanged1)->Invoke(2, this, args);
}

// internal void OnResized(Uno.EventArgs args) [instance] :1006
void Window::OnResized(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Resized1, NULL))
        uPtr(Resized1)->Invoke(2, this, args);
}

// internal void OnTextInput(Uno.Platform.TextInputEventArgs args) [instance] :1000
void Window::OnTextInput(::g::Uno::Platform::TextInputEventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(TextInput1, NULL))
        uPtr(TextInput1)->Invoke(2, this, args);
}

// internal void OnUpdating(Uno.EventArgs args) [instance] :1024
void Window::OnUpdating(::g::Uno::EventArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Updating1, NULL))
        uPtr(Updating1)->Invoke(2, this, args);
}

// public generated void add_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :924
void Window::add_PointerEntered(uDelegate* value)
{
    PointerEntered1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerEntered1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerEntered(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :924
void Window::remove_PointerEntered(uDelegate* value)
{
    PointerEntered1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerEntered1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :921
void Window::add_PointerMoved(uDelegate* value)
{
    PointerMoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerMoved1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerMoved(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :921
void Window::remove_PointerMoved(uDelegate* value)
{
    PointerMoved1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerMoved1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :919
void Window::add_PointerPressed(uDelegate* value)
{
    PointerPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerPressed1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerPressed(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :919
void Window::remove_PointerPressed(uDelegate* value)
{
    PointerPressed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerPressed1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :920
void Window::add_PointerReleased(uDelegate* value)
{
    PointerReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerReleased1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerReleased(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :920
void Window::remove_PointerReleased(uDelegate* value)
{
    PointerReleased1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerReleased1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :922
void Window::add_PointerWheelChanged(uDelegate* value)
{
    PointerWheelChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PointerWheelChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void remove_PointerWheelChanged(Uno.EventHandler<Uno.Platform.PointerEventArgs> value) [instance] :922
void Window::remove_PointerWheelChanged(uDelegate* value)
{
    PointerWheelChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PointerWheelChanged1, value), ::TYPES[3/*Uno.EventHandler<Uno.Platform.PointerEventArgs>*/]);
}

// public generated void add_Resized(Uno.EventHandler value) [instance] :931
void Window::add_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Resized1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_Resized(Uno.EventHandler value) [instance] :931
void Window::remove_Resized(uDelegate* value)
{
    Resized1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Resized1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void add_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :928
void Window::add_TextInput(uDelegate* value)
{
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TextInput1, value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public generated void remove_TextInput(Uno.EventHandler<Uno.Platform.TextInputEventArgs> value) [instance] :928
void Window::remove_TextInput(uDelegate* value)
{
    TextInput1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TextInput1, value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.TextInputEventArgs>*/]);
}

// public generated void add_Updating(Uno.EventHandler value) [instance] :935
void Window::add_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Updating1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public generated void remove_Updating(Uno.EventHandler value) [instance] :935
void Window::remove_Updating(uDelegate* value)
{
    Updating1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Updating1, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// internal Window New() [static] :870
Window* Window::New1()
{
    Window* obj1 = (Window*)uNew(Window_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Uno::Platform
