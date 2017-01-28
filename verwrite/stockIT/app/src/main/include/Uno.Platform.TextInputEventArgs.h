// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct TextInputEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class TextInputEventArgs :723
// {
uType* TextInputEventArgs_typeof();
void TextInputEventArgs__ctor_1_fn(TextInputEventArgs* __this, uString* text, int* modifiers);
void TextInputEventArgs__get_Handled_fn(TextInputEventArgs* __this, bool* __retval);
void TextInputEventArgs__set_Handled_fn(TextInputEventArgs* __this, bool* value);
void TextInputEventArgs__get_Modifiers_fn(TextInputEventArgs* __this, int* __retval);
void TextInputEventArgs__set_Modifiers_fn(TextInputEventArgs* __this, int* value);
void TextInputEventArgs__New2_fn(uString* text, int* modifiers, TextInputEventArgs** __retval);
void TextInputEventArgs__get_Text_fn(TextInputEventArgs* __this, uString** __retval);
void TextInputEventArgs__set_Text_fn(TextInputEventArgs* __this, uString* value);

struct TextInputEventArgs : ::g::Uno::EventArgs
{
    bool _Handled;
    int _Modifiers;
    uStrong<uString*> _Text;

    void ctor_1(uString* text, int modifiers);
    bool Handled();
    void Handled(bool value);
    int Modifiers();
    void Modifiers(int value);
    uString* Text();
    void Text(uString* value);
    static TextInputEventArgs* New2(uString* text, int modifiers);
};
// }

}}} // ::g::Uno::Platform
