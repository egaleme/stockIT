// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FixedViewport;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{

// internal sealed class FixedViewport :3224
// {
struct FixedViewport_type : uType
{
    ::g::Fuse::IRenderViewport interface0;
    ::g::Fuse::IViewport interface1;
    ::g::Fuse::ICommonViewport interface2;
};

FixedViewport_type* FixedViewport_typeof();
void FixedViewport__ctor__fn(FixedViewport* __this, ::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum);
void FixedViewport__New1_fn(::g::Uno::Int2* pixelSize, float* pixelsPerPoint, uObject* frustum, FixedViewport** __retval);
void FixedViewport__get_PixelSize_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_PixelsPerPoint_fn(FixedViewport* __this, float* __retval);
void FixedViewport__PointToWorldRay_fn(FixedViewport* __this, ::g::Uno::Float2* pointPos, ::g::Uno::Geometry::Ray* __retval);
void FixedViewport__get_Size_fn(FixedViewport* __this, ::g::Uno::Float2* __retval);
void FixedViewport__get_ViewProjectionTransform_fn(FixedViewport* __this, ::g::Uno::Float4x4* __retval);
void FixedViewport__WorldToLocalRay_fn(FixedViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct FixedViewport : uObject
{
    uStrong<uObject*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerPoint;

    void ctor_(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
    static FixedViewport* New1(::g::Uno::Int2 pixelSize, float pixelsPerPoint, uObject* frustum);
};
// }

}} // ::g::Fuse
