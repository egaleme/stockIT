// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal class ObservableProperty :2036
// {
struct ObservableProperty_type : uType
{
    ::g::Fuse::Scripting::IObserver interface0;
    ::g::Uno::UX::IPropertyListener interface1;
};

ObservableProperty_type* ObservableProperty_typeof();
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void ObservableProperty__FuseScriptingIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue);
void ObservableProperty__FuseScriptingIObserverOnClear_fn(ObservableProperty* __this);
void ObservableProperty__FuseScriptingIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value);
void ObservableProperty__FuseScriptingIObserverOnNewAll_fn(ObservableProperty* __this, ::g::Fuse::Scripting::ListMirror* values);
void ObservableProperty__FuseScriptingIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue);
void ObservableProperty__FuseScriptingIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index);
void ObservableProperty__FuseScriptingIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue);
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Observable** __retval);
void ObservableProperty__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval);
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val);
void ObservableProperty__Reset_fn(ObservableProperty* __this);
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value);
void ObservableProperty__Subscribe_fn(ObservableProperty* __this);
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct ObservableProperty : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong< ::g::Fuse::Scripting::Observable*> _observable;
    uStrong< ::g::Uno::UX::Property*> _property;
    uStrong< ::g::Fuse::Scripting::Observable__Subscription*> _subscription;

    void ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    ::g::Fuse::Scripting::Observable* GetObservable();
    void PushValue(uObject* val);
    void Reset();
    void Set(uObject* value);
    void Subscribe();
    static ObservableProperty* New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Scripting
