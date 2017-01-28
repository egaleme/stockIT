// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Clear;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.Clear :1788
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__Clear_typeof();
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Scripting::Observable* obs, int* origin);
void Observable__Clear__New1_fn(::g::Fuse::Scripting::Observable* obs, int* origin, Observable__Clear** __retval);
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub);
void Observable__Clear__Unsubscribe_fn(Observable__Clear* __this);

struct Observable__Clear : ::g::Fuse::Scripting::Observable__Operation
{
    int _origin;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int origin);
    static Observable__Clear* New1(::g::Fuse::Scripting::Observable* obs, int origin);
};
// }

}}} // ::g::Fuse::Scripting
