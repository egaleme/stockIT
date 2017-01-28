// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__RemoveAt;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.RemoveAt :1896
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveAt_typeof();
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index);
void Observable__RemoveAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, Observable__RemoveAt** __retval);
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub);

struct Observable__RemoveAt : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index);
    static Observable__RemoveAt* New1(::g::Fuse::Scripting::Observable* obs, int index);
};
// }

}}} // ::g::Fuse::Scripting
