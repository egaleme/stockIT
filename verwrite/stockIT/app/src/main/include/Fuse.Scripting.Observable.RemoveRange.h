// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observable.Operation.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__RemoveRange;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.RemoveRange :1918
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveRange_typeof();
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Scripting::Observable* obs, int* index, int* count);
void Observable__RemoveRange__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval);
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub);

struct Observable__RemoveRange : ::g::Fuse::Scripting::Observable__Operation
{
    int _count;
    int _index;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, int count);
    static Observable__RemoveRange* New1(::g::Fuse::Scripting::Observable* obs, int index, int count);
};
// }

}}} // ::g::Fuse::Scripting
