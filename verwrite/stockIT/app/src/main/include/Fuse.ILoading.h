// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface ILoading :235
// {
uInterfaceType* ILoading_typeof();

struct ILoading
{
    void(*fp_get_IsLoading)(uObject*, bool*);
    static bool IsLoading(const uInterface& __this) { bool __retval; return __this.VTable<ILoading>()->fp_get_IsLoading(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
