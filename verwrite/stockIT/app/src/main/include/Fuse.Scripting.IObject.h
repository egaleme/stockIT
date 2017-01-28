// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IObject :2433
// {
uInterfaceType* IObject_typeof();

struct IObject
{
    void(*fp_ContainsKey)(uObject*, uString*, bool*);
    void(*fp_get_Item)(uObject*, uString*, uObject**);
    static bool ContainsKey(const uInterface& __this, uString* key) { bool __retval; return __this.VTable<IObject>()->fp_ContainsKey(__this, key, &__retval), __retval; }
    static uObject* Item(const uInterface& __this, uString* key) { uObject* __retval; return __this.VTable<IObject>()->fp_get_Item(__this, key, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
