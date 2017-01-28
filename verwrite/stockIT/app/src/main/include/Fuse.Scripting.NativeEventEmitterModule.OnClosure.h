// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule__OnClosure;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeEventEmitterModule.OnClosure :632
// {
uType* NativeEventEmitterModule__OnClosure_typeof();
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener);
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval);
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);

struct NativeEventEmitterModule__OnClosure : uObject
{
    uStrong<uObject*> _eventName;
    uStrong<uDelegate*> _listener;

    void ctor_(uObject* eventName, uDelegate* listener);
    void On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o);
    static NativeEventEmitterModule__OnClosure* New1(uObject* eventName, uDelegate* listener);
};
// }

}}} // ::g::Fuse::Scripting
