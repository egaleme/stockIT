// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface INativeViewRenderer :493
// {
uInterfaceType* INativeViewRenderer_typeof();

struct INativeViewRenderer
{
    void(*fp_Draw)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*);
    void(*fp_Invalidate)(uObject*);
    static void Draw(const uInterface& __this, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density);
    static void Invalidate(const uInterface& __this) { __this.VTable<INativeViewRenderer>()->fp_Invalidate(__this); }
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void INativeViewRenderer::Draw(const uInterface& __this, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density) { __this.VTable<INativeViewRenderer>()->fp_Draw(__this, &localToClipTransform, &position, &size, &density); }
// }

}}}} // ::g::Fuse::Controls::Native
