// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.GraphicsView.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct SurfaceView;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class SurfaceView :1849
// {
::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof();
void SurfaceView__ctor_2_fn(SurfaceView* __this);
void SurfaceView__AddCallback_fn(SurfaceView* __this, ::g::Java::Object* handle);
void SurfaceView__Create_fn(::g::Java::Object** __retval);
void SurfaceView__GetSurface_fn(::g::Java::Object* holder, ::g::Java::Object** __retval);
void SurfaceView__New1_fn(SurfaceView** __retval);
void SurfaceView__OnSurfaceChanged_fn(SurfaceView* __this, ::g::Java::Object* holder, int* f, int* w, int* h);
void SurfaceView__OnSurfaceCreated_fn(SurfaceView* __this, ::g::Java::Object* holder);
void SurfaceView__OnSurfaceDestroyed_fn(SurfaceView* __this, ::g::Java::Object* holder);
void SurfaceView__OnSurfaceRedrawNeeded_fn(SurfaceView* __this, ::g::Java::Object* holder);

struct SurfaceView : ::g::Fuse::Controls::Native::Android::GraphicsView
{
    void ctor_2();
    void AddCallback(::g::Java::Object* handle);
    void OnSurfaceChanged(::g::Java::Object* holder, int f, int w, int h);
    void OnSurfaceCreated(::g::Java::Object* holder);
    void OnSurfaceDestroyed(::g::Java::Object* holder);
    void OnSurfaceRedrawNeeded(::g::Java::Object* holder);
    static ::g::Java::Object* Create();
    static ::g::Java::Object* GetSurface(::g::Java::Object* holder);
    static SurfaceView* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
