// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class WhileNavigationTrigger :4683
// {
struct WhileNavigationTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_ForceUpdate)(::g::Fuse::Navigation::WhileNavigationTrigger*);
    void(*fp_OnNavigationStateChanged)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*);
};

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();
void WhileNavigationTrigger__ctor_6_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress);
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value);
void WhileNavigationTrigger__get_NavContext_fn(WhileNavigationTrigger* __this, uObject** __retval);
void WhileNavigationTrigger__NavReady_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__NavUnready_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this);
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Visual** __retval);
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval);
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value);

struct WhileNavigationTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    bool _hasLimit;
    float _limit;
    uStrong< ::g::Fuse::Navigation::NavigationPageProxy*> _proxy;
    float _threshold;

    void ctor_6();
    void ForceUpdate() { (((WhileNavigationTrigger_type*)__type)->fp_ForceUpdate)(this); }
    void GoProgress(double progress);
    float Limit();
    void Limit(float value);
    uObject* NavContext();
    void NavReady();
    void NavUnready();
    void OnNavigationStateChanged(uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state) { (((WhileNavigationTrigger_type*)__type)->fp_OnNavigationStateChanged)(this, sender, state); }
    ::g::Fuse::Visual* PageContext();
    float Threshold();
    void Threshold(float value);
};
// }

}}} // ::g::Fuse::Navigation
