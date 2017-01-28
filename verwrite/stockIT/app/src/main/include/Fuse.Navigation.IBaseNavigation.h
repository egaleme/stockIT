// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface IBaseNavigation :648
// {
uInterfaceType* IBaseNavigation_typeof();

struct IBaseNavigation
{
    void(*fp_get_CanGoBack)(uObject*, bool*);
    void(*fp_get_CanGoForward)(uObject*, bool*);
    void(*fp_GoBack)(uObject*);
    void(*fp_GoForward)(uObject*);
    static bool CanGoBack(const uInterface& __this) { bool __retval; return __this.VTable<IBaseNavigation>()->fp_get_CanGoBack(__this, &__retval), __retval; }
    static bool CanGoForward(const uInterface& __this) { bool __retval; return __this.VTable<IBaseNavigation>()->fp_get_CanGoForward(__this, &__retval), __retval; }
    static void GoBack(const uInterface& __this) { __this.VTable<IBaseNavigation>()->fp_GoBack(__this); }
    static void GoForward(const uInterface& __this) { __this.VTable<IBaseNavigation>()->fp_GoForward(__this); }
};
// }

}}} // ::g::Fuse::Navigation
