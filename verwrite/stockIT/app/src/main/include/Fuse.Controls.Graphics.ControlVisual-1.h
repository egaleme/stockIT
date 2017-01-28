// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls\0.43.11\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual;}}}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class ControlVisual<T> :6
// {
struct ControlVisual_type : ::g::Fuse::Visual_type
{
    void(*fp_Attach)(::g::Fuse::Controls::Graphics::ControlVisual*);
    void(*fp_Detach)(::g::Fuse::Controls::Graphics::ControlVisual*);
};

ControlVisual_type* ControlVisual_typeof();
void ControlVisual__ctor_4_fn(ControlVisual* __this);
void ControlVisual__get_Control_fn(ControlVisual* __this, uTRef __retval);
void ControlVisual__FindControl_fn(ControlVisual* __this, uTRef __retval);
void ControlVisual__get_HitTestLocalBounds_fn(ControlVisual* __this, ::g::Fuse::VisualBounds** __retval);
void ControlVisual__OnRooted_fn(ControlVisual* __this);
void ControlVisual__OnUnrooted_fn(ControlVisual* __this);

struct ControlVisual : ::g::Fuse::Controls::Graphics::Visual
{
    uTField _control() { return __type->Field(this, 57); }

    void ctor_4();
    void Attach() { (((ControlVisual_type*)__type)->fp_Attach)(this); }
    template<class T>
    T Control() { T __retval; return ControlVisual__get_Control_fn(this, &__retval), __retval; }
    void Detach() { (((ControlVisual_type*)__type)->fp_Detach)(this); }
    template<class T>
    T FindControl() { T __retval; return ControlVisual__FindControl_fn(this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::Graphics
