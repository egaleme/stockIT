// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{

// public abstract interface IFlush :847
// {
uInterfaceType* IFlush_typeof();

struct IFlush
{
    void(*fp_Flush)(uObject*, ::g::Fuse::DrawContext*);
    static void Flush(const uInterface& __this, ::g::Fuse::DrawContext* dc) { __this.VTable<IFlush>()->fp_Flush(__this, dc); }
};
// }

}} // ::g::Fuse
