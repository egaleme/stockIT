// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ButtonBase;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class ButtonBase :139
// {
::g::Fuse::Controls::Control_type* ButtonBase_typeof();
void ButtonBase__get_LabelView_fn(ButtonBase* __this, uObject** __retval);
void ButtonBase__PushPropertiesToNativeView_fn(ButtonBase* __this);
void ButtonBase__SetText_fn(ButtonBase* __this, uString* value, uObject* origin);
void ButtonBase__get_Text_fn(ButtonBase* __this, uString** __retval);
void ButtonBase__set_Text_fn(ButtonBase* __this, uString* value);

struct ButtonBase : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _text;

    uObject* LabelView();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
};
// }

}}} // ::g::Fuse::Controls
