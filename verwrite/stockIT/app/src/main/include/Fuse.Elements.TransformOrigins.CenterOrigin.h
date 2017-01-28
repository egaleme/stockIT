// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITransformOrigin.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__CenterOrigin;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TransformOrigins.CenterOrigin :2280
// {
struct TransformOrigins__CenterOrigin_type : uType
{
    ::g::Fuse::Elements::ITransformOrigin interface0;
};

TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof();
void TransformOrigins__CenterOrigin__ctor__fn(TransformOrigins__CenterOrigin* __this);
void TransformOrigins__CenterOrigin__GetOffset_fn(TransformOrigins__CenterOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval);
void TransformOrigins__CenterOrigin__New1_fn(TransformOrigins__CenterOrigin** __retval);

struct TransformOrigins__CenterOrigin : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetOffset(::g::Fuse::Elements::Element* elm);
    static TransformOrigins__CenterOrigin* New1();
};
// }

}}} // ::g::Fuse::Elements
