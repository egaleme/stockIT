// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct DrawManager;}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class DrawManager :1226
// {
uClassType* DrawManager_typeof();
void DrawManager__EndDraw_fn(::g::Fuse::DrawContext* dc);
void DrawManager__add_Prepared_fn(uDelegate* value);
void DrawManager__remove_Prepared_fn(uDelegate* value);
void DrawManager__PrepareDraw_fn(::g::Fuse::DrawContext* dc);

struct DrawManager : uObject
{
    static uSStrong<uDelegate*> Prepared1_;
    static uSStrong<uDelegate*>& Prepared1() { return Prepared1_; }

    static void EndDraw(::g::Fuse::DrawContext* dc);
    static void PrepareDraw(::g::Fuse::DrawContext* dc);
    static void add_Prepared(uDelegate* value);
    static void remove_Prepared(uDelegate* value);
};
// }

}}} // ::g::Fuse::Internal
