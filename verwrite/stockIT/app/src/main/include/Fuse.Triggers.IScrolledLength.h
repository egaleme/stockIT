// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IScrolledLength :646
// {
uInterfaceType* IScrolledLength_typeof();

struct IScrolledLength
{
    void(*fp_GetPoints)(uObject*, float*, ::g::Fuse::Controls::ScrollViewBase*, ::g::Uno::Float2*);
    static ::g::Uno::Float2 GetPoints(const uInterface& __this, float value, ::g::Fuse::Controls::ScrollViewBase* scrollable);
};

}}} // ::g::Fuse::Triggers

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Triggers{

inline ::g::Uno::Float2 IScrolledLength::GetPoints(const uInterface& __this, float value, ::g::Fuse::Controls::ScrollViewBase* scrollable) { ::g::Uno::Float2 __retval; return __this.VTable<IScrolledLength>()->fp_GetPoints(__this, &value, scrollable, &__retval), __retval; }
// }

}}} // ::g::Fuse::Triggers
