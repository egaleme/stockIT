// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct PointerEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct TextInputEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace Xli { class Window; }

namespace g{
namespace Uno{
namespace Platform{

// public sealed class Window :866
// {
uType* Window_typeof();
void Window__ctor__fn(Window* __this);
void Window__add_Closed_fn(Window* __this, uDelegate* value);
void Window__remove_Closed_fn(Window* __this, uDelegate* value);
void Window__add_GotFocus_fn(Window* __this, uDelegate* value);
void Window__remove_GotFocus_fn(Window* __this, uDelegate* value);
void Window__add_KeyboardResized_fn(Window* __this, uDelegate* value);
void Window__remove_KeyboardResized_fn(Window* __this, uDelegate* value);
void Window__add_KeyPressed_fn(Window* __this, uDelegate* value);
void Window__remove_KeyPressed_fn(Window* __this, uDelegate* value);
void Window__add_KeyReleased_fn(Window* __this, uDelegate* value);
void Window__remove_KeyReleased_fn(Window* __this, uDelegate* value);
void Window__add_LostFocus_fn(Window* __this, uDelegate* value);
void Window__remove_LostFocus_fn(Window* __this, uDelegate* value);
void Window__New1_fn(Window** __retval);
void Window__OnClosed_fn(Window* __this, ::g::Uno::EventArgs* args);
void Window__OnGotFocus_fn(Window* __this, ::g::Uno::EventArgs* args);
void Window__OnKeyboardResized_fn(Window* __this);
void Window__OnKeyPressed_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args);
void Window__OnKeyReleased_fn(Window* __this, ::g::Uno::Platform::KeyEventArgs* args);
void Window__OnLostFocus_fn(Window* __this, ::g::Uno::EventArgs* args);
void Window__OnPointerEntered_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerMoved_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerPressed_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerReleased_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args);
void Window__OnPointerWheelChanged_fn(Window* __this, ::g::Uno::Platform::PointerEventArgs* args);
void Window__OnResized_fn(Window* __this, ::g::Uno::EventArgs* args);
void Window__OnTextInput_fn(Window* __this, ::g::Uno::Platform::TextInputEventArgs* args);
void Window__OnUpdating_fn(Window* __this, ::g::Uno::EventArgs* args);
void Window__add_PointerEntered_fn(Window* __this, uDelegate* value);
void Window__remove_PointerEntered_fn(Window* __this, uDelegate* value);
void Window__add_PointerMoved_fn(Window* __this, uDelegate* value);
void Window__remove_PointerMoved_fn(Window* __this, uDelegate* value);
void Window__add_PointerPressed_fn(Window* __this, uDelegate* value);
void Window__remove_PointerPressed_fn(Window* __this, uDelegate* value);
void Window__add_PointerReleased_fn(Window* __this, uDelegate* value);
void Window__remove_PointerReleased_fn(Window* __this, uDelegate* value);
void Window__add_PointerWheelChanged_fn(Window* __this, uDelegate* value);
void Window__remove_PointerWheelChanged_fn(Window* __this, uDelegate* value);
void Window__add_Resized_fn(Window* __this, uDelegate* value);
void Window__remove_Resized_fn(Window* __this, uDelegate* value);
void Window__add_TextInput_fn(Window* __this, uDelegate* value);
void Window__remove_TextInput_fn(Window* __this, uDelegate* value);
void Window__add_Updating_fn(Window* __this, uDelegate* value);
void Window__remove_Updating_fn(Window* __this, uDelegate* value);

struct Window : uObject
{
    ::Xli::Window* _handle;
    bool _hasPointerEntered;
    uStrong<uDelegate*> Closed1;
    uStrong<uDelegate*> GotFocus1;
    uStrong<uDelegate*> KeyboardResized1;
    uStrong<uDelegate*> KeyPressed1;
    uStrong<uDelegate*> KeyReleased1;
    uStrong<uDelegate*> LostFocus1;
    uStrong<uDelegate*> PointerEntered1;
    uStrong<uDelegate*> PointerMoved1;
    uStrong<uDelegate*> PointerPressed1;
    uStrong<uDelegate*> PointerReleased1;
    uStrong<uDelegate*> PointerWheelChanged1;
    uStrong<uDelegate*> Resized1;
    uStrong<uDelegate*> TextInput1;
    uStrong<uDelegate*> Updating1;

    void ctor_();
    void add_Closed(uDelegate* value);
    void remove_Closed(uDelegate* value);
    void add_GotFocus(uDelegate* value);
    void remove_GotFocus(uDelegate* value);
    void add_KeyboardResized(uDelegate* value);
    void remove_KeyboardResized(uDelegate* value);
    void add_KeyPressed(uDelegate* value);
    void remove_KeyPressed(uDelegate* value);
    void add_KeyReleased(uDelegate* value);
    void remove_KeyReleased(uDelegate* value);
    void add_LostFocus(uDelegate* value);
    void remove_LostFocus(uDelegate* value);
    void OnClosed(::g::Uno::EventArgs* args);
    void OnGotFocus(::g::Uno::EventArgs* args);
    void OnKeyboardResized();
    void OnKeyPressed(::g::Uno::Platform::KeyEventArgs* args);
    void OnKeyReleased(::g::Uno::Platform::KeyEventArgs* args);
    void OnLostFocus(::g::Uno::EventArgs* args);
    void OnPointerEntered(::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerMoved(::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerPressed(::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerReleased(::g::Uno::Platform::PointerEventArgs* args);
    void OnPointerWheelChanged(::g::Uno::Platform::PointerEventArgs* args);
    void OnResized(::g::Uno::EventArgs* args);
    void OnTextInput(::g::Uno::Platform::TextInputEventArgs* args);
    void OnUpdating(::g::Uno::EventArgs* args);
    void add_PointerEntered(uDelegate* value);
    void remove_PointerEntered(uDelegate* value);
    void add_PointerMoved(uDelegate* value);
    void remove_PointerMoved(uDelegate* value);
    void add_PointerPressed(uDelegate* value);
    void remove_PointerPressed(uDelegate* value);
    void add_PointerReleased(uDelegate* value);
    void remove_PointerReleased(uDelegate* value);
    void add_PointerWheelChanged(uDelegate* value);
    void remove_PointerWheelChanged(uDelegate* value);
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    void add_TextInput(uDelegate* value);
    void remove_TextInput(uDelegate* value);
    void add_Updating(uDelegate* value);
    void remove_Updating(uDelegate* value);
    static Window* New1();
};
// }

}}} // ::g::Uno::Platform
