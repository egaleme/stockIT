// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public extern class TextInput :1996
// {
struct TextInput_type : ::g::Fuse::Controls::Native::Android::TextView_type
{
    ::g::Fuse::Controls::Native::ITextEdit interface4;
};

TextInput_type* TextInput_typeof();
void TextInput__ctor_4_fn(TextInput* __this, uObject* host, bool* isMultiline);
void TextInput__set_ActionStyle_fn(TextInput* __this, int* value);
void TextInput__AddEditorActionListener_fn(TextInput* __this, ::g::Java::Object* handle);
void TextInput__AddTextChangedListener_fn(TextInput* __this, ::g::Java::Object* handle);
void TextInput__set_AutoCapitalizationHint_fn(TextInput* __this, int* value);
void TextInput__set_AutoCorrectHint_fn(TextInput* __this, int* value);
void TextInput__set_CaretColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__Create1_fn(::g::Java::Object** __retval);
void TextInput__Dispose_fn(TextInput* __this);
void TextInput__FuseControlsNativeITextEditFocusGained_fn(TextInput* __this);
void TextInput__FuseControlsNativeITextEditFocusLost_fn(TextInput* __this);
void TextInput__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval);
void TextInput__set_InputHint_fn(TextInput* __this, int* value);
void TextInput__set_IsMultiline_fn(TextInput* __this, bool* value);
void TextInput__set_IsPassword_fn(TextInput* __this, bool* value);
void TextInput__set_IsReadOnly_fn(TextInput* __this, bool* value);
void TextInput__OnEditorAction_fn(TextInput* __this, int* actionCode, bool* __retval);
void TextInput__OnNativeFocusChanged_fn(TextInput* __this, ::g::Java::Object* view, bool* hasFocus);
void TextInput__OnTextChanged_fn(TextInput* __this, uString* value);
void TextInput__set_PlaceholderColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__set_PlaceholderText_fn(TextInput* __this, uString* value);
void TextInput__RequestFocus_fn(::g::Java::Object* viewHandle);
void TextInput__get_ReturnKeyType_fn(TextInput* __this, int* __retval);
void TextInput__ScheduleFocusLoss_fn(TextInput* __this);
void TextInput__set_SelectionColor_fn(TextInput* __this, ::g::Uno::Float4* value);
void TextInput__SetCursorDrawableColor_fn(TextInput* __this, ::g::Java::Object* handle, int* color);
void TextInput__SetImeOptions_fn(::g::Java::Object* handle, int* value);
void TextInput__SetInputType_fn(::g::Java::Object* handle, int* value);
void TextInput__SetPlaceholderColor_fn(::g::Java::Object* handle, int* value);
void TextInput__SetPlaceholderText_fn(::g::Java::Object* handle, uString* value);
void TextInput__SetSelectionColor_fn(::g::Java::Object* handle, int* color);
void TextInput__UpdateFlags_fn(TextInput* __this);

struct TextInput : ::g::Fuse::Controls::Native::Android::TextView
{
    int _actionStyle;
    int _autoCapitalizationHint;
    int _autoCorrentHint;
    uStrong<uObject*> _focusEvent;
    uStrong<uObject*> _host;
    int _inputHint;
    bool _isMultiline;
    bool _isPassword;
    bool _isReadOnly;

    void ctor_4(uObject* host, bool isMultiline);
    void ActionStyle(int value);
    void AddEditorActionListener(::g::Java::Object* handle);
    void AddTextChangedListener(::g::Java::Object* handle);
    void AutoCapitalizationHint(int value);
    void AutoCorrectHint(int value);
    void CaretColor(::g::Uno::Float4 value);
    void InputHint(int value);
    void IsMultiline(bool value);
    void IsPassword(bool value);
    void IsReadOnly(bool value);
    bool OnEditorAction(int actionCode);
    void OnNativeFocusChanged(::g::Java::Object* view, bool hasFocus);
    void OnTextChanged(uString* value);
    void PlaceholderColor(::g::Uno::Float4 value);
    void PlaceholderText(uString* value);
    int ReturnKeyType();
    void ScheduleFocusLoss();
    void SelectionColor(::g::Uno::Float4 value);
    void SetCursorDrawableColor(::g::Java::Object* handle, int color);
    void UpdateFlags();
    static ::g::Java::Object* Create1();
    static bool HasFocus(::g::Java::Object* viewHandle);
    static void RequestFocus(::g::Java::Object* viewHandle);
    static void SetImeOptions(::g::Java::Object* handle, int value);
    static void SetInputType(::g::Java::Object* handle, int value);
    static void SetPlaceholderColor(::g::Java::Object* handle, int value);
    static void SetPlaceholderText(::g::Java::Object* handle, uString* value);
    static void SetSelectionColor(::g::Java::Object* handle, int color);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
