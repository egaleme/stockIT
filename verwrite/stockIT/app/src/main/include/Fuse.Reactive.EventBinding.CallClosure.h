// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IEventSerializer.h>
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class EventBinding.CallClosure :746
// {
struct EventBinding__CallClosure_type : uType
{
    ::g::Fuse::Scripting::IEventSerializer interface0;
};

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof();
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender);
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value);
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value);
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value);
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value);
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value);
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this);
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval);

struct EventBinding__CallClosure : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _args;
    uStrong<uObject*> _data;
    uStrong< ::g::Fuse::Node*> _node;
    ::g::Uno::UX::Selector _sender;
    uStrong< ::g::Fuse::Scripting::Function*> Function;

    void ctor_(uObject* args, uObject* sender);
    void AddBool(uString* key, bool value);
    void AddDouble(uString* key, double value);
    void AddInt(uString* key, int value);
    void AddObject(uString* key, uObject* value);
    void AddString(uString* key, uString* value);
    void Call();
    static EventBinding__CallClosure* New1(uObject* args, uObject* sender);
};
// }

}}} // ::g::Fuse::Reactive
