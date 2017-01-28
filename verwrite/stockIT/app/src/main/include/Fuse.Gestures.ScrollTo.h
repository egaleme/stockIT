// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct ScrollTo;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ScrollTo :52
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target);
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollTo : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _hasPosition;
    bool _hasRelativePosition;
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
};
// }

}}} // ::g::Fuse::Gestures
