// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollRegion;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class ScrollRegion :714
// {
uType* ScrollRegion_typeof();
void ScrollRegion__CalcWithin_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, ::g::Uno::Float2* __retval);
void ScrollRegion__IsInZone_fn(ScrollRegion* __this, ::g::Fuse::Controls::ScrollViewBase* scrollable, bool* __retval);

struct ScrollRegion : uObject
{
    uStrong<uObject*> RelativeTo;
    int To;
    float Within;

    ::g::Uno::Float2 CalcWithin(::g::Fuse::Controls::ScrollViewBase* scrollable);
    bool IsInZone(::g::Fuse::Controls::ScrollViewBase* scrollable);
};
// }

}}} // ::g::Fuse::Triggers
