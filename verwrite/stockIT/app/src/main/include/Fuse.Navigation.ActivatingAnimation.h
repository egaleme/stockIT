// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ActivatingAnimation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class ActivatingAnimation :1368
// {
::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();
void ActivatingAnimation__ctor_6_fn(ActivatingAnimation* __this);
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this);
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval);
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval);
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct ActivatingAnimation : ::g::Fuse::Navigation::NavigationAnimation
{
    void ctor_6();
    double InvertProgress(double p);
    static ActivatingAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
