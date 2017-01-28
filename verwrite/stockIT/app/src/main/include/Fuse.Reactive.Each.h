// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :573
// {
::g::Fuse::Reactive::Instantiator_type* Each_typeof();
void Each__ctor_5_fn(Each* __this);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__New4_fn(Each** __retval);

struct Each : ::g::Fuse::Reactive::Instantiator
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return Each_typeof()->Init(), _eachHandle_; }

    void ctor_5();
    uObject* Items();
    void Items(uObject* value);
    static Each* New4();
};
// }

}}} // ::g::Fuse::Reactive
