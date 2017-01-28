// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.UserEvents\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct RaiseUserEvent;}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class RaiseUserEvent :192
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval);
void RaiseUserEvent__get_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval);
void RaiseUserEvent__set_EventName_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value);
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target);

struct RaiseUserEvent : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _args;
    uStrong< ::g::Fuse::UserEvent*> _event;
    ::g::Uno::UX::Selector _eventName;
    uStrong< ::g::Fuse::Visual*> _eventTarget;

    ::g::Uno::Collections::Dictionary* ConvertArgs();
    ::g::Uno::UX::Selector EventName();
    void EventName(::g::Uno::UX::Selector value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
