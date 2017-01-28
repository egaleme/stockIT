// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IArray :2427
// {
uInterfaceType* IArray_typeof();

struct IArray
{
    void(*fp_get_Item)(uObject*, int*, uObject**);
    void(*fp_get_Length)(uObject*, int*);
    static uObject* Item(const uInterface& __this, int index) { uObject* __retval; return __this.VTable<IArray>()->fp_get_Item(__this, &index, &__retval), __retval; }
    static int Length(const uInterface& __this) { int __retval; return __this.VTable<IArray>()->fp_get_Length(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
