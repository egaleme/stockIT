// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\caching\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal abstract interface IElementBatchDrawable :838
// {
uInterfaceType* IElementBatchDrawable_typeof();

struct IElementBatchDrawable
{
    void(*fp_Draw)(uObject*, ::g::Fuse::DrawContext*, ::g::Uno::Float4x4*, ::g::Uno::Rect*);
    static void Draw(const uInterface& __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace);
};

}}} // ::g::Fuse::Elements

#include <Uno.Float4x4.h>
#include <Uno.Rect.h>

namespace g{
namespace Fuse{
namespace Elements{

inline void IElementBatchDrawable::Draw(const uInterface& __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace) { __this.VTable<IElementBatchDrawable>()->fp_Draw(__this, dc, &localToClipTransform, &scissorRectInClipSpace); }
// }

}}} // ::g::Fuse::Elements
