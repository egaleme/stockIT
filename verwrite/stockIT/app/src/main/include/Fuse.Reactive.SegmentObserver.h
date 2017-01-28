// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct BindAttempt;}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct SegmentObserver;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObjectMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class SegmentObserver :238
// {
struct SegmentObserver_type : uType
{
    ::g::Fuse::Scripting::IObserver interface0;
    ::g::Uno::IDisposable interface1;
};

SegmentObserver_type* SegmentObserver_typeof();
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt);
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path);
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval);
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval);
void SegmentObserver__Dispose_fn(SegmentObserver* __this);
void SegmentObserver__Fail_fn(SegmentObserver* __this);
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val);
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ObjectMirror* obj);
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path);
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path);
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval);
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval);
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue);
void SegmentObserver__OnClear_fn(SegmentObserver* __this);
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value);
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ListMirror* values);
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue);
void SegmentObserver__OnRemoveAt_fn(SegmentObserver* __this, int* index);
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value);
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Observable* obs);
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval);

struct SegmentObserver : uObject
{
    uStrong< ::g::Fuse::Reactive::ContextBinding*> _b;
    uStrong< ::g::Fuse::Reactive::BindAttempt*> _bindAttempt;
    bool _failed;
    bool _isDisposed;
    bool _isInnerLink;
    uStrong<uString*> _key;
    uStrong<SegmentObserver*> _next;
    uStrong<uObject*> _subscription;
    uStrong<uString*> _unhandledPath;

    void ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt);
    void ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path);
    bool CanFail();
    void Dispose();
    void Fail();
    void HandleNewDataContext(uObject* val);
    void HandleObject(::g::Fuse::Scripting::ObjectMirror* obj);
    void HandlePath(uObject* dc, uString* path);
    void Init(uObject* dc, uString* path);
    void OnAdd(uObject* addedValue);
    void OnClear();
    void OnInsertAt(int index, uObject* value);
    void OnNewAll(::g::Fuse::Scripting::ListMirror* values);
    void OnNewAt(int index, uObject* newValue);
    void OnRemoveAt(int index);
    void OnSet(uObject* value);
    void SubscribeAndFail(::g::Fuse::Scripting::Observable* obs);
    static uString* CombineKeyAndPath(uString* key, uString* path);
    static SegmentObserver* New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt);
    static SegmentObserver* New2(::g::Fuse::Reactive::ContextBinding* b, uString* path);
    static uString* TakeKeyFromPath(uString** path);
};
// }

}}} // ::g::Fuse::Reactive
