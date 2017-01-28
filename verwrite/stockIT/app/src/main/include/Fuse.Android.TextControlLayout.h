// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Android{struct StaticLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextPaint;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class TextControlLayout :174
// {
uType* TextControlLayout_typeof();
void TextControlLayout__ctor__fn(TextControlLayout* __this);
void TextControlLayout__Invalidate_fn(TextControlLayout* __this);
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout** __retval);
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout* value);
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval);
void TextControlLayout__New1_fn(TextControlLayout** __retval);
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval);
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value);
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval);
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint);

struct TextControlLayout : uObject
{
    bool _cacheMin;
    bool _cacheValid;
    float _cacheWrapWidthPoints;
    uStrong< ::g::Fuse::Android::StaticLayout*> _Layout;
    ::g::Uno::Recti _PixelBounds;

    void ctor_();
    void Invalidate();
    ::g::Fuse::Android::StaticLayout* Layout();
    void Layout(::g::Fuse::Android::StaticLayout* value);
    bool Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float wrapWidthPoints, bool useMin);
    ::g::Uno::Recti PixelBounds();
    void PixelBounds(::g::Uno::Recti value);
    int TextAlignmentToAndroidLayoutAlignment(int textAlignment);
    void UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint);
    static TextControlLayout* New1();
};
// }

}}} // ::g::Fuse::Android
