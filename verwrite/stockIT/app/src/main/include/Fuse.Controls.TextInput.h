// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\textcontrols\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInputControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TextInput :2558
// {
::g::Fuse::Controls::TextInputControl_type* TextInput_typeof();
void TextInput__ctor_7_fn(TextInput* __this);
void TextInput__Create_fn(::g::Fuse::Controls::TextEdit** __retval);
void TextInput__get_IsPassword_fn(TextInput* __this, bool* __retval);
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value);
void TextInput__get_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* __retval);
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__get_PlaceholderText_fn(TextInput* __this, uString** __retval);
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value);

struct TextInput : ::g::Fuse::Controls::TextInputControl
{
    void ctor_7();
    bool IsPassword();
    void IsPassword(bool value);
    ::g::Uno::Float4 PlaceholderColor();
    void PlaceholderColor(::g::Uno::Float4 value);
    uString* PlaceholderText();
    void PlaceholderText(uString* value);
    static ::g::Fuse::Controls::TextEdit* Create();
};
// }

}}} // ::g::Fuse::Controls
