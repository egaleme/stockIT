// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITransformOrigin.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__TopLeftOrigin;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TransformOrigins.TopLeftOrigin :2275
// {
struct TransformOrigins__TopLeftOrigin_type : uType
{
    ::g::Fuse::Elements::ITransformOrigin interface0;
};

TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof();
void TransformOrigins__TopLeftOrigin__ctor__fn(TransformOrigins__TopLeftOrigin* __this);
void TransformOrigins__TopLeftOrigin__GetOffset_fn(TransformOrigins__TopLeftOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval);
void TransformOrigins__TopLeftOrigin__New1_fn(TransformOrigins__TopLeftOrigin** __retval);

struct TransformOrigins__TopLeftOrigin : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetOffset(::g::Fuse::Elements::Element* elm);
    static TransformOrigins__TopLeftOrigin* New1();
};
// }

}}} // ::g::Fuse::Elements
