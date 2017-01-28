// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ILeafView :373
// {
uInterfaceType* ILeafView_typeof();

struct ILeafView
{
    void(*fp_Measure)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*);
    static ::g::Uno::Float2 Measure(const uInterface& __this, ::g::Fuse::LayoutParams lp, float density);
};

}}}} // ::g::Fuse::Controls::Native

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline ::g::Uno::Float2 ILeafView::Measure(const uInterface& __this, ::g::Fuse::LayoutParams lp, float density) { ::g::Uno::Float2 __retval; return __this.VTable<ILeafView>()->fp_Measure(__this, &lp, &density, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::Native
