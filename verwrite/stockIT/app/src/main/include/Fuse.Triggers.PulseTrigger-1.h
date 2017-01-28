// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct PulseTrigger;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class PulseTrigger<ArgsT> :1150
// {
::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof();
void PulseTrigger__add_Handler_fn(PulseTrigger* __this, uDelegate* value);
void PulseTrigger__remove_Handler_fn(PulseTrigger* __this, uDelegate* value);
void PulseTrigger__Pulse1_fn(PulseTrigger* __this, ::g::Uno::EventArgs* args);

struct PulseTrigger : ::g::Fuse::Triggers::Trigger
{
    uStrong<uDelegate*> Handler1;

    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    void Pulse1(::g::Uno::EventArgs* args);
};
// }

}}} // ::g::Fuse::Triggers
