// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation__PageData;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class VisualNavigation.PageData :4380
// {
uType* VisualNavigation__PageData_typeof();
void VisualNavigation__PageData__ctor__fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* visual);
void VisualNavigation__PageData__New1_fn(::g::Fuse::Visual* visual, VisualNavigation__PageData** __retval);
void VisualNavigation__PageData__get_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual** __retval);
void VisualNavigation__PageData__set_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* value);

struct VisualNavigation__PageData : uObject
{
    int Index;
    float PreviousProgress;
    float Progress;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_(::g::Fuse::Visual* visual);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static VisualNavigation__PageData* New1(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Navigation
