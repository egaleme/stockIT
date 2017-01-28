// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface IPlayerFeedback :4109
// {
uInterfaceType* IPlayerFeedback_typeof();

struct IPlayerFeedback
{
    void(*fp_OnPlaybackDone)(uObject*, uObject*);
    void(*fp_OnProgressUpdated)(uObject*, uObject*, bool*);
    void(*fp_OnStable)(uObject*, uObject*);
    static void OnPlaybackDone(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnPlaybackDone(__this, s); }
    static void OnProgressUpdated(const uInterface& __this, uObject* s, bool animating) { __this.VTable<IPlayerFeedback>()->fp_OnProgressUpdated(__this, s, &animating); }
    static void OnStable(const uInterface& __this, uObject* s) { __this.VTable<IPlayerFeedback>()->fp_OnStable(__this, s); }
};
// }

}}} // ::g::Fuse::Animations
