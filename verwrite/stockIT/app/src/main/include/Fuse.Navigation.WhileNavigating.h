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
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigating;}}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class WhileNavigating :4623
// {
::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();
void WhileNavigating__ctor_6_fn(WhileNavigating* __this);
void WhileNavigating__OnRooted_fn(WhileNavigating* __this);
void WhileNavigating__OnStateChanged_fn(WhileNavigating* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this);

struct WhileNavigating : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _context;

    void ctor_6();
    void OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args);
};
// }

}}} // ::g::Fuse::Navigation
