// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Android{struct StaticLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer;}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer__BackgroundRender;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Android{

// private sealed class TextRenderer.BackgroundRender :440
// {
uType* TextRenderer__BackgroundRender_typeof();
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds);
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this);
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval);
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this);

struct TextRenderer__BackgroundRender : uObject
{
    uStrong< ::g::Fuse::Android::StaticLayout*> _layout;
    ::g::Uno::Recti _pixelBounds;
    uStrong< ::g::Uno::Graphics::Texture2D*> _result;
    uStrong< ::g::Fuse::Android::TextRenderer*> _textRenderer;
    uint64_t _textureVersion;

    void ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds);
    void DoneCallback();
    void UpdateTextureAsync();
    static TextRenderer__BackgroundRender* New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds);
};
// }

}}} // ::g::Fuse::Android
