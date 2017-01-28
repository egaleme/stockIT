// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct External;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class External :2535
// {
uType* External_typeof();
void External__ctor__fn(External* __this, uObject* o);
void External__Equals_fn(External* __this, uObject* o, bool* __retval);
void External__GetHashCode_fn(External* __this, int* __retval);
void External__New1_fn(uObject* o, External** __retval);

struct External : uObject
{
    uStrong<uObject*> Object;

    void ctor_(uObject* o);
    static External* New1(uObject* o);
};
// }

}}} // ::g::Fuse::Scripting
