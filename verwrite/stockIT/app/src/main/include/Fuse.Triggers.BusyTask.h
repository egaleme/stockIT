// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class BusyTask :112
// {
uType* BusyTask_typeof();
void BusyTask__ctor__fn(BusyTask* __this, ::g::Fuse::Node* n, int* type, int* act);
void BusyTask__AddListener_fn(::g::Fuse::Node* n, uDelegate* handler);
void BusyTask__done_fn(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
void BusyTask__Done_fn(BusyTask* __this);
void BusyTask__GetBusyActivity_fn(::g::Fuse::Node* n, int* match, int* __retval);
void BusyTask__IsBusyHandled_fn(::g::Fuse::Node* n, int* activity, bool* __retval);
void BusyTask__New1_fn(::g::Fuse::Node* n, int* type, int* act, BusyTask** __retval);
void BusyTask__OnBusyChanged_fn(::g::Fuse::Node* n);
void BusyTask__OnRooted_fn(BusyTask* __this);
void BusyTask__OnUnrooted_fn(BusyTask* __this);
void BusyTask__RemoveListener_fn(::g::Fuse::Node* n, uDelegate* handler);
void BusyTask__SetBusy_fn(::g::Fuse::Node* n, BusyTask** bt, int* act);
void BusyTask__SetNodeActivity_fn(BusyTask* __this, ::g::Fuse::Node* n, int* act);

struct BusyTask : uObject
{
    int _activity;
    static uSStrong< ::g::Uno::Collections::Dictionary*> _listeners_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _listeners() { return BusyTask_typeof()->Init(), _listeners_; }
    uStrong< ::g::Fuse::Node*> _node;
    static uSStrong< ::g::Uno::Collections::List*> _tasks_;
    static uSStrong< ::g::Uno::Collections::List*>& _tasks() { return BusyTask_typeof()->Init(), _tasks_; }
    int _type;

    void ctor_(::g::Fuse::Node* n, int type, int act);
    void Done();
    void OnRooted();
    void OnUnrooted();
    void SetNodeActivity(::g::Fuse::Node* n, int act);
    static void AddListener(::g::Fuse::Node* n, uDelegate* handler);
    static void done(::g::Fuse::Scripting::Context* c, BusyTask* bt, uArray* args);
    static int GetBusyActivity(::g::Fuse::Node* n, int match);
    static bool IsBusyHandled(::g::Fuse::Node* n, int activity);
    static BusyTask* New1(::g::Fuse::Node* n, int type, int act);
    static void OnBusyChanged(::g::Fuse::Node* n);
    static void RemoveListener(::g::Fuse::Node* n, uDelegate* handler);
    static void SetBusy(::g::Fuse::Node* n, BusyTask** bt, int act);
};
// }

}}} // ::g::Fuse::Triggers
