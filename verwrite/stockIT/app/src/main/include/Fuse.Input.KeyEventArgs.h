// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class KeyEventArgs :535
// {
::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof();
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int* key, ::g::Fuse::Visual* visual);
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value);

struct KeyEventArgs : ::g::Fuse::VisualEventArgs
{
    bool _IsAltKeyPressed;
    bool _IsControlKeyPressed;
    bool _IsMetaKeyPressed;
    bool _IsShiftKeyPressed;
    int _Key;

    void ctor_2(int key, ::g::Fuse::Visual* visual);
    bool IsAltKeyPressed();
    void IsAltKeyPressed(bool value);
    bool IsControlKeyPressed();
    void IsControlKeyPressed(bool value);
    bool IsMetaKeyPressed();
    void IsMetaKeyPressed(bool value);
    bool IsShiftKeyPressed();
    void IsShiftKeyPressed(bool value);
    int Key();
    void Key(int value);
};
// }

}}} // ::g::Fuse::Input
