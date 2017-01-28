// This file was generated based on C:\stockit\stockit\.uno\ux11\InputText.g.uno.
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
namespace g{struct InputText;}

namespace g{

// public partial sealed class InputText :2
// {
::g::Fuse::Controls::TextInputControl_type* InputText_typeof();
void InputText__ctor_8_fn(InputText* __this);
void InputText__InitializeUX_fn(InputText* __this);
void InputText__New4_fn(InputText** __retval);

struct InputText : ::g::Fuse::Controls::TextInput
{
    void ctor_8();
    void InitializeUX();
    static InputText* New4();
};
// }

} // ::g
