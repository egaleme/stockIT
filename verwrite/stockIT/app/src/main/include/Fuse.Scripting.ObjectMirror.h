// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IObject.h>
#include <Fuse.Scripting.ValueMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObjectMirror;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ObjectMirror :1446
// {
struct ObjectMirror_type : ::g::Fuse::Scripting::ValueMirror_type
{
    ::g::Fuse::Scripting::IObject interface0;
};

ObjectMirror_type* ObjectMirror_typeof();
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval);
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval);
void ObjectMirror__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval);
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this);

struct ObjectMirror : ::g::Fuse::Scripting::ValueMirror
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;

    void ctor_1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    static ObjectMirror* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Scripting
