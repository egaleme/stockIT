// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct SoftKeyboard;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal static extern class SoftKeyboard :2473
// {
uClassType* SoftKeyboard_typeof();
void SoftKeyboard__HideKeyboard_fn(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken);
void SoftKeyboard__ShowKeyboard_fn(::g::Java::Object* viewHandle);

struct SoftKeyboard : uObject
{
    static void HideKeyboard(::g::Java::Object* hideKeyboardContext, ::g::Java::Object* hideKeyboardWindowToken);
    static void ShowKeyboard(::g::Java::Object* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
