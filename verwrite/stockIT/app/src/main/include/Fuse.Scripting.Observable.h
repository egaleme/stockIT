// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.ListMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class Observable :1488
// {
::g::Fuse::Scripting::ListMirror_type* Observable_typeof();
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool* supressCallback);
void Observable__Create_fn(::g::Fuse::Scripting::Context* context, Observable** __retval);
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval);
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval);
void Observable__get_Length_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool* supressCallback, Observable** __retval);
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval);
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval);
void Observable__ObserversCleanup_fn(Observable* __this);
void Observable__RemoveSubscriber_fn(Observable* __this);
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval);
void Observable__Unsubscribe_fn(Observable* __this);
void Observable__UnsubscribeValues_fn(Observable* __this);

struct Observable : ::g::Fuse::Scripting::ListMirror
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    bool _isUnsubscribed;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong< ::g::Fuse::Scripting::Function*> _observeChange;
    uStrong< ::g::Uno::Collections::List*> _observers;
    bool _usingObservers;
    uStrong< ::g::Uno::Collections::List*> _values;

    void ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool supressCallback);
    bool IsUnsubscribed();
    ::g::Fuse::Scripting::Object* Object();
    uObject* ObserveChange(uArray* args);
    void ObserversCleanup();
    void RemoveSubscriber();
    void SetValue(int index, uObject* value);
    Observable__Subscription* Subscribe(uObject* observer);
    void UnsubscribeValues();
    static Observable* Create(::g::Fuse::Scripting::Context* context);
    static Observable* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, bool supressCallback);
};
// }

}}} // ::g::Fuse::Scripting
