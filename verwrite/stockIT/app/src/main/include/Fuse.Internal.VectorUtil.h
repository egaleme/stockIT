// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct VectorUtil;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static class VectorUtil :1669
// {
uClassType* VectorUtil_typeof();
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval);
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval);
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval);

struct VectorUtil : uObject
{
    static float Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static float DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p);
    static ::g::Uno::Float2 Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static ::g::Uno::Float2 Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static float ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b);
};
// }

}}} // ::g::Fuse::Internal
