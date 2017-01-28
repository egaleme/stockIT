// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileActive;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class WhileActive :4793
// {
::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();
void WhileActive__ctor_7_fn(WhileActive* __this);
void WhileActive__ForceUpdate_fn(WhileActive* __this);
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval);
void WhileActive__New2_fn(WhileActive** __retval);
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state);

struct WhileActive : ::g::Fuse::Navigation::WhileNavigationTrigger
{
    void ctor_7();
    double InvertProgress(double p);
    static WhileActive* New2();
};
// }

}}} // ::g::Fuse::Navigation
