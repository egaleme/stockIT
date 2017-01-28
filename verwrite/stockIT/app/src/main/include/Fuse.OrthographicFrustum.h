// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IFrustum.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct OrthographicFrustum;}}

namespace g{
namespace Fuse{

// public sealed class OrthographicFrustum :8141
// {
struct OrthographicFrustum_type : uType
{
    ::g::Fuse::IFrustum interface0;
};

OrthographicFrustum_type* OrthographicFrustum_typeof();
void OrthographicFrustum__ctor__fn(OrthographicFrustum* __this);
void OrthographicFrustum__GetProjectionTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__GetProjectionTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__GetViewTransform_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__GetViewTransformInverse_fn(OrthographicFrustum* __this, uObject* viewport, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__get_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__set_LocalFromWorld_fn(OrthographicFrustum* __this, ::g::Uno::Float4x4* value);
void OrthographicFrustum__MatrixProjection_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__MatrixProjectionInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__MatrixView_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__MatrixViewInverse_fn(OrthographicFrustum* __this, ::g::Uno::Float2* origin, ::g::Uno::Float2* viewSize, ::g::Uno::Float4x4* __retval);
void OrthographicFrustum__New1_fn(OrthographicFrustum** __retval);
void OrthographicFrustum__get_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval);
void OrthographicFrustum__set_Origin_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value);
void OrthographicFrustum__get_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* __retval);
void OrthographicFrustum__set_Size_fn(OrthographicFrustum* __this, ::g::Uno::Float2* value);

struct OrthographicFrustum : uObject
{
    bool _hasLocalFromWorld;
    bool _hasOrigin;
    bool _hasSize;
    ::g::Uno::Float4x4 _localFromWorld;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _size;

    void ctor_();
    ::g::Uno::Float4x4 GetProjectionTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetProjectionTransformInverse(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransform(uObject* viewport);
    ::g::Uno::Float4x4 GetViewTransformInverse(uObject* viewport);
    ::g::Uno::Float4x4 LocalFromWorld();
    void LocalFromWorld(::g::Uno::Float4x4 value);
    ::g::Uno::Float4x4 MatrixProjection(::g::Uno::Float2 viewSize);
    ::g::Uno::Float4x4 MatrixProjectionInverse(::g::Uno::Float2 viewSize);
    ::g::Uno::Float4x4 MatrixView(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize);
    ::g::Uno::Float4x4 MatrixViewInverse(::g::Uno::Float2 origin, ::g::Uno::Float2 viewSize);
    ::g::Uno::Float2 Origin();
    void Origin(::g::Uno::Float2 value);
    ::g::Uno::Float2 Size();
    void Size(::g::Uno::Float2 value);
    static OrthographicFrustum* New1();
};
// }

}} // ::g::Fuse
