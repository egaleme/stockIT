// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class Observable.Subscription :1534
// {
struct Observable__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Observable* om, uObject* obs);
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__New1_fn(::g::Fuse::Scripting::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval);
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value);
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uType* __type, uArray* newValues);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue);
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval);

struct Observable__Subscription : uObject
{
    static int _counter_;
    static int& _counter() { return Observable__Subscription_typeof()->Init(), _counter_; }
    uStrong<uObject*> _obs;
    uStrong< ::g::Fuse::Scripting::Observable*> _om;
    int _origin;
    bool _Removed;

    void ctor_(::g::Fuse::Scripting::Observable* om, uObject* obs);
    void ClearExclusive();
    void Dispose();
    uObject* Observer();
    bool Removed();
    void Removed(bool value);
    void ReplaceAllExclusive(uType* __type, uArray* newValues);
    void SetExclusive(uObject* newValue);
    bool ShouldSend(int origin);
    static Observable__Subscription* New1(::g::Fuse::Scripting::Observable* om, uObject* obs);
};
// }

}}} // ::g::Fuse::Scripting
