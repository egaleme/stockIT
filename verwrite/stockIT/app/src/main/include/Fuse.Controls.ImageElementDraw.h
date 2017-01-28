// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Controls{struct ImageElementDraw;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ImageElementDraw :709
// {
uType* ImageElementDraw_typeof();
void ImageElementDraw__ctor__fn(ImageElementDraw* __this);
void ImageElementDraw__Draw_fn(ImageElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::Texture2D* tex, int* resampleMode, ::g::Uno::Float4* Color);
void ImageElementDraw__GetSamplerState_fn(ImageElementDraw* __this, int* resampleMode, ::g::Uno::Graphics::SamplerState* __retval);
void ImageElementDraw__init_DrawCalls_fn(ImageElementDraw* __this);
void ImageElementDraw__New1_fn(ImageElementDraw** __retval);

struct ImageElementDraw : uObject
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_eecabc7e;
    ::g::Uno::Float4x4 Draw_LocalTransform_eecabc7e_4_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_eecabc7e_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_eecabc7e_7_2_1;
    static uSStrong<ImageElementDraw*> Impl_;
    static uSStrong<ImageElementDraw*>& Impl() { return ImageElementDraw_typeof()->Init(), Impl_; }

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::Texture2D* tex, int resampleMode, ::g::Uno::Float4 Color);
    ::g::Uno::Graphics::SamplerState GetSamplerState(int resampleMode);
    void init_DrawCalls();
    static ImageElementDraw* New1();
};
// }

}}} // ::g::Fuse::Controls
