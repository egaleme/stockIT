// This file was generated based on C:\stockit\stockit\.uno\ux11\WhiteTextInput.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct WhiteTextInput;}

namespace g{

// public partial sealed class WhiteTextInput :2
// {
::g::Fuse::Controls::TextInputControl_type* WhiteTextInput_typeof();
void WhiteTextInput__ctor_8_fn(WhiteTextInput* __this);
void WhiteTextInput__InitializeUX_fn(WhiteTextInput* __this);
void WhiteTextInput__New4_fn(WhiteTextInput** __retval);

struct WhiteTextInput : ::g::Fuse::Controls::TextInput
{
    void ctor_8();
    void InitializeUX();
    static WhiteTextInput* New4();
};
// }

} // ::g
