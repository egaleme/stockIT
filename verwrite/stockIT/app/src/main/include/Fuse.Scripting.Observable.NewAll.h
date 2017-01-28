// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__NewAll;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.NewAll :1844
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof();
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin);
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval);
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub);
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this);

struct Observable__NewAll : ::g::Fuse::Scripting::Observable__Operation
{
    uStrong< ::g::Fuse::Scripting::ArrayMirror*> _newValues;
    int _origin;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin);
    static Observable__NewAll* New1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin);
};
// }

}}} // ::g::Fuse::Scripting
