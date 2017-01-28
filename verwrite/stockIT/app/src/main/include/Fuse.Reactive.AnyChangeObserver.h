// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct AnyChangeObserver;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class AnyChangeObserver :11
// {
struct AnyChangeObserver_type : uType
{
    ::g::Fuse::Scripting::IObserver interface0;
};

AnyChangeObserver_type* AnyChangeObserver_typeof();
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange);
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval);
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue);
void AnyChangeObserver__OnClear_fn(AnyChangeObserver* __this);
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value);
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::ListMirror* values);
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue);
void AnyChangeObserver__OnRemoveAt_fn(AnyChangeObserver* __this, int* index);
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value);

struct AnyChangeObserver : uObject
{
    uStrong<uDelegate*> _anyChange;
    bool _hasInitialValue;

    void ctor_(uDelegate* anyChange);
    void OnAdd(uObject* addedValue);
    void OnClear();
    void OnInsertAt(int index, uObject* value);
    void OnNewAll(::g::Fuse::Scripting::ListMirror* values);
    void OnNewAt(int index, uObject* newValue);
    void OnRemoveAt(int index);
    void OnSet(uObject* value);
    static AnyChangeObserver* New1(uDelegate* anyChange);
};
// }

}}} // ::g::Fuse::Reactive
