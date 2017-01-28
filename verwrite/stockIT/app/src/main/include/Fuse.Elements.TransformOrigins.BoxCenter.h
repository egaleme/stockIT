// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITransformOrigin.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__BoxCenter;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TransformOrigins.BoxCenter :2290
// {
struct TransformOrigins__BoxCenter_type : uType
{
    ::g::Fuse::Elements::ITransformOrigin interface0;
};

TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof();
void TransformOrigins__BoxCenter__ctor__fn(TransformOrigins__BoxCenter* __this);
void TransformOrigins__BoxCenter__GetOffset_fn(TransformOrigins__BoxCenter* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval);
void TransformOrigins__BoxCenter__New1_fn(TransformOrigins__BoxCenter** __retval);

struct TransformOrigins__BoxCenter : uObject
{
    ::g::Uno::Float2 Depth;

    void ctor_();
    ::g::Uno::Float3 GetOffset(::g::Fuse::Elements::Element* elm);
    static TransformOrigins__BoxCenter* New1();
};
// }

}}} // ::g::Fuse::Elements
