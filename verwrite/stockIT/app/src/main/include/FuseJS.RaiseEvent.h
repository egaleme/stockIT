// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseJS\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace FuseJS{struct RaiseEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace FuseJS{

// internal sealed class RaiseEvent :877
// {
uType* RaiseEvent_typeof();
void RaiseEvent__ctor__fn(RaiseEvent* __this);
void RaiseEvent__New1_fn(RaiseEvent** __retval);
void RaiseEvent__Raise_fn(RaiseEvent* __this);

struct RaiseEvent : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Args;
    uStrong<uString*> Name;
    uStrong< ::g::Fuse::Node*> Source;

    void ctor_();
    void Raise();
    static RaiseEvent* New1();
};
// }

}} // ::g::FuseJS
