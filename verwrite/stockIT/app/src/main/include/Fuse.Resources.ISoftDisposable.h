// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract interface ISoftDisposable :253
// {
uInterfaceType* ISoftDisposable_typeof();

struct ISoftDisposable
{
    void(*fp_SoftDispose)(uObject*);
    static void SoftDispose(const uInterface& __this) { __this.VTable<ISoftDisposable>()->fp_SoftDispose(__this); }
};
// }

}}} // ::g::Fuse::Resources
