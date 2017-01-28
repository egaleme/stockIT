// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPlayback :265
// {
uInterfaceType* IPlayback_typeof();

struct IPlayback
{
    void(*fp_get_CanPause)(uObject*, bool*);
    void(*fp_get_CanPlayTo)(uObject*, bool*);
    void(*fp_get_CanResume)(uObject*, bool*);
    void(*fp_get_CanStop)(uObject*, bool*);
    void(*fp_Pause)(uObject*);
    void(*fp_PlayTo)(uObject*, double*);
    void(*fp_get_Progress)(uObject*, double*);
    void(*fp_set_Progress)(uObject*, double*);
    void(*fp_Resume)(uObject*);
    void(*fp_Stop)(uObject*);
    static bool CanPause(const uInterface& __this) { bool __retval; return __this.VTable<IPlayback>()->fp_get_CanPause(__this, &__retval), __retval; }
    static bool CanPlayTo(const uInterface& __this) { bool __retval; return __this.VTable<IPlayback>()->fp_get_CanPlayTo(__this, &__retval), __retval; }
    static bool CanResume(const uInterface& __this) { bool __retval; return __this.VTable<IPlayback>()->fp_get_CanResume(__this, &__retval), __retval; }
    static bool CanStop(const uInterface& __this) { bool __retval; return __this.VTable<IPlayback>()->fp_get_CanStop(__this, &__retval), __retval; }
    static void Pause(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Pause(__this); }
    static void PlayTo(const uInterface& __this, double progress) { __this.VTable<IPlayback>()->fp_PlayTo(__this, &progress); }
    static double Progress(const uInterface& __this) { double __retval; return __this.VTable<IPlayback>()->fp_get_Progress(__this, &__retval), __retval; }
    static void Progress(const uInterface& __this, double value) { __this.VTable<IPlayback>()->fp_set_Progress(__this, &value); }
    static void Resume(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Resume(__this); }
    static void Stop(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Stop(__this); }
};
// }

}}} // ::g::Fuse::Triggers
