// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct TextPaint;}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Typeface;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class TextPaint :393
// {
uType* TextPaint_typeof();
void TextPaint__ctor__fn(TextPaint* __this);
void TextPaint__ctor_1_fn(TextPaint* __this, ::g::Java::Object* handle);
void TextPaint__set_AntiAlias_fn(TextPaint* __this, bool* value);
void TextPaint__set_Color_fn(TextPaint* __this, ::g::Uno::Float4* value);
void TextPaint__Create_fn(::g::Java::Object** __retval);
void TextPaint__GetTextBounds_fn(::g::Java::Object* handle, uString* text, int* start, int* end, uArray* r);
void TextPaint__GetTextBounds1_fn(TextPaint* __this, uString* text, int* start, int* end, ::g::Uno::Rect* __retval);
void TextPaint__get_Handle_fn(TextPaint* __this, ::g::Java::Object** __retval);
void TextPaint__New1_fn(TextPaint** __retval);
void TextPaint__SetAntiAlias_fn(::g::Java::Object* handle, bool* value);
void TextPaint__SetColor_fn(::g::Java::Object* handle, int* color);
void TextPaint__SetTextSize_fn(::g::Java::Object* handle, float* textSize);
void TextPaint__SetTypeface_fn(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle);
void TextPaint__set_TextSize_fn(TextPaint* __this, float* value);
void TextPaint__set_Typeface_fn(TextPaint* __this, ::g::Fuse::Controls::Native::Android::Typeface* value);

struct TextPaint : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_();
    void ctor_1(::g::Java::Object* handle);
    void AntiAlias(bool value);
    void Color(::g::Uno::Float4 value);
    ::g::Uno::Rect GetTextBounds1(uString* text, int start, int end);
    ::g::Java::Object* Handle();
    void TextSize(float value);
    void Typeface(::g::Fuse::Controls::Native::Android::Typeface* value);
    static ::g::Java::Object* Create();
    static void GetTextBounds(::g::Java::Object* handle, uString* text, int start, int end, uArray* r);
    static TextPaint* New1();
    static void SetAntiAlias(::g::Java::Object* handle, bool value);
    static void SetColor(::g::Java::Object* handle, int color);
    static void SetTextSize(::g::Java::Object* handle, float textSize);
    static void SetTypeface(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle);
};
// }

}}} // ::g::Fuse::Android
