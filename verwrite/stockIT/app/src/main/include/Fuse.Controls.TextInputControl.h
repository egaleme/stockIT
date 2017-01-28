// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\textcontrols\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Fuse{namespace Gestures{struct Tapped;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public abstract class TextInputControl :2661
// {
struct TextInputControl_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Triggers::IValue interface13;
};

TextInputControl_type* TextInputControl_typeof();
void TextInputControl__ctor_6_fn(TextInputControl* __this, ::g::Fuse::Controls::TextEdit* editor);
void TextInputControl__get_Editor_fn(TextInputControl* __this, ::g::Fuse::Controls::TextEdit** __retval);
void TextInputControl__FocusDelegator_fn(TextInputControl* __this, ::g::Fuse::Visual** __retval);
void TextInputControl__OnPropertyChanged2_fn(TextInputControl* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void TextInputControl__OnRooted_fn(TextInputControl* __this);
void TextInputControl__OnTapped_fn(TextInputControl* __this, uObject* sender, ::g::Uno::EventArgs* args);
void TextInputControl__OnUnrooted_fn(TextInputControl* __this);
void TextInputControl__SetValue_fn(TextInputControl* __this, uString* v, uObject* origin);
void TextInputControl__get_TextColor_fn(TextInputControl* __this, ::g::Uno::Float4* __retval);
void TextInputControl__set_TextColor_fn(TextInputControl* __this, ::g::Uno::Float4* value);
void TextInputControl__get_Value_fn(TextInputControl* __this, uString** __retval);
void TextInputControl__set_Value_fn(TextInputControl* __this, uString* value);
void TextInputControl__add_ValueChanged_fn(TextInputControl* __this, uDelegate* value);
void TextInputControl__remove_ValueChanged_fn(TextInputControl* __this, uDelegate* value);

struct TextInputControl : ::g::Fuse::Controls::LayoutControl
{
    uStrong< ::g::Fuse::Controls::TextEdit*> _editor;
    uStrong< ::g::Fuse::Gestures::Tapped*> _tapped;

    void ctor_6(::g::Fuse::Controls::TextEdit* editor);
    ::g::Fuse::Controls::TextEdit* Editor();
    ::g::Fuse::Visual* FocusDelegator();
    void OnTapped(uObject* sender, ::g::Uno::EventArgs* args);
    void SetValue(uString* v, uObject* origin);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    uString* Value();
    void Value(uString* value);
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
};
// }

}}} // ::g::Fuse::Controls
