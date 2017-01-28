// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Gestures.ClickerTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicked;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Clicked :32
// {
::g::Fuse::Triggers::Trigger_type* Clicked_typeof();
void Clicked__ctor_6_fn(Clicked* __this);
void Clicked__AddHandler_fn(::g::Fuse::Visual* visual, uDelegate* handler);
void Clicked__add_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__remove_Handler_fn(Clicked* __this, uDelegate* value);
void Clicked__New2_fn(Clicked** __retval);
void Clicked__OnClicked_fn(Clicked* __this, ::g::Fuse::Input::PointerEventArgs* args, int* clickCount);
void Clicked__OnRooted_fn(Clicked* __this);
void Clicked__OnUnrooted_fn(Clicked* __this);

struct Clicked : ::g::Fuse::Gestures::ClickerTrigger
{
    uStrong<uDelegate*> Handler1;

    void ctor_6();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void OnClicked(::g::Fuse::Input::PointerEventArgs* args, int clickCount);
    static void AddHandler(::g::Fuse::Visual* visual, uDelegate* handler);
    static Clicked* New2();
};
// }

}}} // ::g::Fuse::Gestures
