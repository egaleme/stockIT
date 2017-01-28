// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IToggleViewHost :415
// {
uInterfaceType* IToggleViewHost_typeof();

struct IToggleViewHost
{
    void(*fp_OnValueChanged)(uObject*, bool*);
    static void OnValueChanged(const uInterface& __this, bool newValue) { __this.VTable<IToggleViewHost>()->fp_OnValueChanged(__this, &newValue); }
};
// }

}}}} // ::g::Fuse::Controls::Native
