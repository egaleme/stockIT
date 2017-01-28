// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface Marshal.IConverter :1160
// {
uInterfaceType* Marshal__IConverter_typeof();

struct Marshal__IConverter
{
    void(*fp_CanConvert)(uObject*, uType*, bool*);
    void(*fp_TryConvert)(uObject*, uType*, uObject*, uObject**);
    static bool CanConvert(const uInterface& __this, uType* t) { bool __retval; return __this.VTable<Marshal__IConverter>()->fp_CanConvert(__this, t, &__retval), __retval; }
    static uObject* TryConvert(const uInterface& __this, uType* t, uObject* o) { uObject* __retval; return __this.VTable<Marshal__IConverter>()->fp_TryConvert(__this, t, o, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
