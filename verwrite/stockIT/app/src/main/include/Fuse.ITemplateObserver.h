// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ITemplateObserver :7540
// {
uInterfaceType* ITemplateObserver_typeof();

struct ITemplateObserver
{
    void(*fp_OnTemplatesChangedWileRooted)(uObject*);
    static void OnTemplatesChangedWileRooted(const uInterface& __this) { __this.VTable<ITemplateObserver>()->fp_OnTemplatesChangedWileRooted(__this); }
};
// }

}} // ::g::Fuse
