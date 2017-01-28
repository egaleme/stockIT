// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct ViewportHelpers;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// internal static class ViewportHelpers :3135
// {
uClassType* ViewportHelpers_typeof();
void ViewportHelpers__LocalPlaneIntersection_fn(::g::Uno::Geometry::Ray* local, ::g::Uno::Float2* __retval);
void ViewportHelpers__PointToWorldRay_fn(uObject* viewport, ::g::Uno::Float4x4* viewProjectionInverse, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void ViewportHelpers__WorldToLocalRay_fn(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct ViewportHelpers : uObject
{
    static ::g::Uno::Float2 LocalPlaneIntersection(::g::Uno::Geometry::Ray local);
    static ::g::Uno::Geometry::Ray PointToWorldRay(uObject* viewport, ::g::Uno::Float4x4 viewProjectionInverse, ::g::Uno::Float2 pointPos);
    static ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* viewport, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
};
// }

}} // ::g::Fuse
