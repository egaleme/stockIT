// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class NativeViewHost :1279
// {
struct NativeViewHost_type : ::g::Fuse::Controls::Control_type
{
    void(*fp_get_Renderer)(::g::Fuse::Controls::NativeViewHost*, uObject**);
};

NativeViewHost_type* NativeViewHost_typeof();
void NativeViewHost__ctor_7_fn(NativeViewHost* __this, int* initialState);
void NativeViewHost__CalcRenderBounds_fn(NativeViewHost* __this, ::g::Fuse::VisualBounds** __retval);
void NativeViewHost__CreateNativeViewGroup_fn(NativeViewHost* __this, uObject** __retval);
void NativeViewHost__DrawWithChildren_fn(NativeViewHost* __this, ::g::Fuse::DrawContext* dc);
void NativeViewHost__FindGraphicsView_fn(NativeViewHost* __this, ::g::Fuse::Visual* visual, ::g::Fuse::Controls::GraphicsView** __retval);
void NativeViewHost__get_GraphicsViewAncestor_fn(NativeViewHost* __this, ::g::Fuse::Controls::GraphicsView** __retval);
void NativeViewHost__get_IsInGraphicsContext_fn(NativeViewHost* __this, bool* __retval);
void NativeViewHost__get_NativeParent_fn(NativeViewHost* __this, uObject** __retval);
void NativeViewHost__get_NativeTransform_fn(NativeViewHost* __this, ::g::Uno::Float4x4* __retval);
void NativeViewHost__OnInvalidateVisual_fn(NativeViewHost* __this);
void NativeViewHost__OnInvalidateWorldTransform_fn(NativeViewHost* __this);
void NativeViewHost__OnRooted_fn(NativeViewHost* __this);
void NativeViewHost__OnUnrooted_fn(NativeViewHost* __this);
void NativeViewHost__get_Renderer_fn(NativeViewHost* __this, uObject** __retval);
void NativeViewHost__get_RenderToTexture_fn(NativeViewHost* __this, bool* __retval);
void NativeViewHost__set_RenderToTexture_fn(NativeViewHost* __this, bool* value);
void NativeViewHost__RootOnNativeParent_fn(NativeViewHost* __this);
void NativeViewHost__get_VisualContext_fn(NativeViewHost* __this, int* __retval);

struct NativeViewHost : ::g::Fuse::Controls::LayoutControl
{
    bool _draw;
    uStrong< ::g::Fuse::Controls::GraphicsView*> _lastGraphicsView;
    uStrong<uObject*> _renderer;
    bool _renderToTexture;
    uStrong<uObject*> _toggeling;

    void ctor_7(int initialState);
    ::g::Fuse::Controls::GraphicsView* FindGraphicsView(::g::Fuse::Visual* visual);
    ::g::Fuse::Controls::GraphicsView* GraphicsViewAncestor();
    bool IsInGraphicsContext();
    uObject* Renderer() { uObject* __retval; return (((NativeViewHost_type*)__type)->fp_get_Renderer)(this, &__retval), __retval; }
    bool RenderToTexture();
    void RenderToTexture(bool value);
    static uObject* Renderer(NativeViewHost* __this) { uObject* __retval; return NativeViewHost__get_Renderer_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Controls
