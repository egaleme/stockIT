// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{

// public sealed class RootViewport :9077
// {
struct RootViewport_type : ::g::Fuse::Visual_type
{
    ::g::Fuse::IViewport interface8;
    ::g::Uno::IDisposable interface9;
    ::g::Fuse::ICommonViewport interface10;
};

RootViewport_type* RootViewport_typeof();
void RootViewport__ctor_3_fn(RootViewport* __this, ::g::Uno::Platform::Window* window, float* overridePixelsPerPoint);
void RootViewport__Draw_fn(RootViewport* __this, ::g::Fuse::DrawContext* dc);
void RootViewport__EstablishSize_fn(RootViewport* __this);
void RootViewport__EstablishSizeInternals_fn(RootViewport* __this);
void RootViewport__New2_fn(::g::Uno::Platform::Window* window, float* overridePixelsPerPoint, RootViewport** __retval);
void RootViewport__OnGotFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnLostFocus_fn(RootViewport* __this, uObject* sender, ::g::Uno::EventArgs* args);
void RootViewport__OnResized_fn(RootViewport* __this, uObject* s, uObject* a);
void RootViewport__get_PixelSize_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__get_PixelsPerPoint_fn(RootViewport* __this, float* __retval);
void RootViewport__PointToWorldRay_fn(RootViewport* __this, ::g::Uno::Float2* pixelPos, ::g::Uno::Geometry::Ray* __retval);
void RootViewport__add_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__remove_Resized_fn(RootViewport* __this, uDelegate* value);
void RootViewport__get_Size_fn(RootViewport* __this, ::g::Uno::Float2* __retval);
void RootViewport__UnoIDisposableDispose_fn(RootViewport* __this);
void RootViewport__get_VisualContext_fn(RootViewport* __this, int* __retval);
void RootViewport__WorldToLocalRay_fn(RootViewport* __this, uObject* world, ::g::Uno::Geometry::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Uno::Geometry::Ray* __retval);

struct RootViewport : ::g::Fuse::Visual
{
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    float _overridePixelsPerPoint;
    ::g::Uno::Float2 _pixelSize;
    float _pixelsPerOSPoint;
    float _pixelsPerPoint;
    bool _sizeOverridden;
    uStrong<uObject*> Frustum;
    uStrong< ::g::Uno::Platform::Window*> Window;
    uStrong<uDelegate*> Resized1;

    void ctor_3(::g::Uno::Platform::Window* window, float overridePixelsPerPoint);
    void EstablishSize();
    void EstablishSizeInternals();
    void OnGotFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnLostFocus(uObject* sender, ::g::Uno::EventArgs* args);
    void OnResized(uObject* s, uObject* a);
    ::g::Uno::Float2 PixelSize();
    float PixelsPerPoint();
    ::g::Uno::Geometry::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    void add_Resized(uDelegate* value);
    void remove_Resized(uDelegate* value);
    ::g::Uno::Float2 Size();
    ::g::Uno::Geometry::Ray WorldToLocalRay(uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
    static RootViewport* New2(::g::Uno::Platform::Window* window, float overridePixelsPerPoint);
};
// }

}} // ::g::Fuse
