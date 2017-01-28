// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract interface ITransformOrigin :2235
// {
uInterfaceType* ITransformOrigin_typeof();

struct ITransformOrigin
{
    void(*fp_GetOffset)(uObject*, ::g::Fuse::Elements::Element*, ::g::Uno::Float3*);
    static ::g::Uno::Float3 GetOffset(const uInterface& __this, ::g::Fuse::Elements::Element* elm);
};

}}} // ::g::Fuse::Elements

#include <Uno.Float3.h>

namespace g{
namespace Fuse{
namespace Elements{

inline ::g::Uno::Float3 ITransformOrigin::GetOffset(const uInterface& __this, ::g::Fuse::Elements::Element* elm) { ::g::Uno::Float3 __retval; return __this.VTable<ITransformOrigin>()->fp_GetOffset(__this, elm, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
