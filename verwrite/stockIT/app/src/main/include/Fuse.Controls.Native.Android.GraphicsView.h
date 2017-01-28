// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsView;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class GraphicsView :325
// {
struct GraphicsView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_1_fn(GraphicsView* __this, ::g::Java::Object* handle);
void GraphicsView__BeginDraw_fn(GraphicsView* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsView__DestroySurface_fn(GraphicsView* __this);
void GraphicsView__EndDraw_fn(GraphicsView* __this);
void GraphicsView__SetSurface_fn(GraphicsView* __this, ::g::Java::Object* surfaceHandle);

struct GraphicsView : ::g::Fuse::Controls::Native::Android::View
{
    void* _eglSurface;
    void* _nativeWindow;
    uStrong< ::g::Java::Object*> _surfaceHandle;

    void ctor_1(::g::Java::Object* handle);
    bool BeginDraw(::g::Uno::Int2 size);
    void DestroySurface();
    void EndDraw();
    void SetSurface(::g::Java::Object* surfaceHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
