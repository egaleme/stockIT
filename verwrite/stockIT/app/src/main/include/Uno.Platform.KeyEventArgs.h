// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class KeyEventArgs :455
// {
uType* KeyEventArgs_typeof();
void KeyEventArgs__ctor_1_fn(KeyEventArgs* __this, int* key, int* modifiers);
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value);
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value);
void KeyEventArgs__New2_fn(int* key, int* modifiers, KeyEventArgs** __retval);

struct KeyEventArgs : ::g::Uno::EventArgs
{
    bool _Handled;
    int _Key;
    int _Modifiers;

    void ctor_1(int key, int modifiers);
    bool Handled();
    void Handled(bool value);
    bool IsAltKeyPressed();
    bool IsControlKeyPressed();
    bool IsMetaKeyPressed();
    bool IsShiftKeyPressed();
    int Key();
    void Key(int value);
    int Modifiers();
    void Modifiers(int value);
    static KeyEventArgs* New2(int key, int modifiers);
};
// }

}}} // ::g::Uno::Platform
