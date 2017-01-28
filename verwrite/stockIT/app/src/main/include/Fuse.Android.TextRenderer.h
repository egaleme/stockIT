// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ITextRenderer.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct StaticLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextControlLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextPaint;}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class TextRenderer :276
// {
struct TextRenderer_type : uType
{
    ::g::Fuse::Controls::ITextRenderer interface0;
};

TextRenderer_type* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* Control);
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size);
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval);
void TextRenderer__DisposeTexture_fn(TextRenderer* __this);
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval);
void TextRenderer__Invalidate_fn(TextRenderer* __this);
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* Control, TextRenderer** __retval);
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2* dposition, ::g::Uno::Float2* size);
void TextRenderer__PrepareDraw_fn(TextRenderer* __this);
void TextRenderer__SetTexture_fn(TextRenderer* __this, ::g::Uno::Graphics::Texture2D* newTexture);
void TextRenderer__SoftDispose_fn(TextRenderer* __this);
void TextRenderer__UpdateLayout_fn(TextRenderer* __this);
void TextRenderer__UpdatePaint_fn(TextRenderer* __this);
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, ::g::Uno::Graphics::Texture2D** __retval);

struct TextRenderer : uObject
{
    ::g::Uno::Float2 _arrangePosition;
    ::g::Uno::Float2 _arrangeSize;
    uStrong< ::g::Fuse::Controls::TextControl*> _control;
    bool _emitNewTexture;
    uStrong< ::g::Fuse::Android::TextControlLayout*> _measureLayout;
    uStrong< ::g::Fuse::Android::TextPaint*> _paint;
    bool _renderThreaded;
    uStrong< ::g::Fuse::Android::TextControlLayout*> _textLayout;
    uStrong< ::g::Uno::Graphics::Texture2D*> _texture;
    uint64_t _textureVersion;
    uint64_t _wantedVersion;

    void ctor_(::g::Fuse::Controls::TextControl* Control);
    void Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size);
    void DisposeTexture();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Rect GetRenderBounds();
    void Invalidate();
    void OnBitmapDraw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2 dposition, ::g::Uno::Float2 size);
    void PrepareDraw();
    void SetTexture(::g::Uno::Graphics::Texture2D* newTexture);
    void SoftDispose();
    void UpdateLayout();
    void UpdatePaint();
    ::g::Uno::Graphics::Texture2D* UpdateTexture(::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds);
    static uObject* Create(::g::Fuse::Controls::TextControl* control);
    static TextRenderer* New1(::g::Fuse::Controls::TextControl* Control);
};
// }

}}} // ::g::Fuse::Android
