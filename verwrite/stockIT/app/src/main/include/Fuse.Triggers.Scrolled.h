// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.ScrolledArgs.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct Scrolled;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Scrolled :223
// {
::g::Fuse::Triggers::Trigger_type* Scrolled_typeof();
void Scrolled__check_fn(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
void Scrolled__Check_fn(Scrolled* __this);
void Scrolled__OnRooted_fn(Scrolled* __this);
void Scrolled__OnScrollPositionChanged_fn(Scrolled* __this, uObject* s, uObject* args);
void Scrolled__OnUnrooted_fn(Scrolled* __this);

struct Scrolled : ::g::Fuse::Triggers::PulseTrigger
{
    bool _inZone;
    uStrong< ::g::Fuse::Triggers::ScrollRegion*> _region;
    uStrong< ::g::Fuse::Controls::ScrollViewBase*> _scrollable;

    void Check();
    void OnScrollPositionChanged(uObject* s, uObject* args);
    static void check(::g::Fuse::Scripting::Context* c, Scrolled* s, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
