// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.TextInput.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEdit;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class TextEdit :1977
// {
::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof();
void TextEdit__ctor_5_fn(TextEdit* __this, uObject* host, bool* isMultiline);
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle);
void TextEdit__New4_fn(uObject* host, bool* isMultiline, TextEdit** __retval);

struct TextEdit : ::g::Fuse::Controls::Native::Android::TextInput
{
    void ctor_5(uObject* host, bool isMultiline);
    static void MakeItPlain(::g::Java::Object* handle);
    static TextEdit* New4(uObject* host, bool isMultiline);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
