// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract interface IRouterOutlet :735
// {
uInterfaceType* IRouterOutlet_typeof();

struct IRouterOutlet
{
    void(*fp_CancelPrepare)(uObject*);
    void(*fp_GetCurrent)(uObject*, uString**, uString**, ::g::Fuse::Visual**);
    void(*fp_Goto)(uObject*, uString**, uString**, int*, int*, ::g::Fuse::Visual**, int*);
    void(*fp_PartialPrepareGoto)(uObject*, double*);
    void(*fp_get_Type)(uObject*, int*);
    static void CancelPrepare(const uInterface& __this) { __this.VTable<IRouterOutlet>()->fp_CancelPrepare(__this); }
    static void GetCurrent(const uInterface& __this, uString** path, uString** parameter, ::g::Fuse::Visual** active) { __this.VTable<IRouterOutlet>()->fp_GetCurrent(__this, path, parameter, active); }
    static int Goto(const uInterface& __this, uString** path, uString** parameter, int gotoMode, int operation, ::g::Fuse::Visual** active) { int __retval; return __this.VTable<IRouterOutlet>()->fp_Goto(__this, path, parameter, &gotoMode, &operation, active, &__retval), __retval; }
    static void PartialPrepareGoto(const uInterface& __this, double progress) { __this.VTable<IRouterOutlet>()->fp_PartialPrepareGoto(__this, &progress); }
    static int Type(const uInterface& __this) { int __retval; return __this.VTable<IRouterOutlet>()->fp_get_Type(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Navigation
