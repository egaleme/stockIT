// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IView :360
// {
uInterfaceType* IView_typeof();

struct IView
{
    void(*fp_set_Background)(uObject*, ::g::Fuse::Drawing::Brush*);
    void(*fp_Hide)(uObject*);
    void(*fp_set_Opacity)(uObject*, float*);
    void(*fp_Show)(uObject*);
    void(*fp_set_Size)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_Transform)(uObject*, ::g::Uno::Float4x4*);
    static void Background(const uInterface& __this, ::g::Fuse::Drawing::Brush* value) { __this.VTable<IView>()->fp_set_Background(__this, value); }
    static void Hide(const uInterface& __this) { __this.VTable<IView>()->fp_Hide(__this); }
    static void Opacity(const uInterface& __this, float value) { __this.VTable<IView>()->fp_set_Opacity(__this, &value); }
    static void Show(const uInterface& __this) { __this.VTable<IView>()->fp_Show(__this); }
    static void Size(const uInterface& __this, ::g::Uno::Float2 value);
    static void Transform(const uInterface& __this, ::g::Uno::Float4x4 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IView::Size(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<IView>()->fp_set_Size(__this, &value); }
inline void IView::Transform(const uInterface& __this, ::g::Uno::Float4x4 value) { __this.VTable<IView>()->fp_set_Transform(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
