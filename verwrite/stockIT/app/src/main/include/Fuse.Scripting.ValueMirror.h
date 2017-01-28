// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ValueMirror :2572
// {
struct ValueMirror_type : uType
{
    void(*fp_Unsubscribe)(::g::Fuse::Scripting::ValueMirror*);
};

ValueMirror_type* ValueMirror_typeof();
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw);
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval);
void ValueMirror__Unbox_fn(uObject* obj, uObject** __retval);
void ValueMirror__Unsubscribe1_fn(uObject* obj);

struct ValueMirror : uObject
{
    uStrong<uObject*> _raw;

    void ctor_(uObject* raw);
    uObject* Raw();
    void Unsubscribe() { (((ValueMirror_type*)__type)->fp_Unsubscribe)(this); }
    static uObject* Unbox(uObject* obj);
    static void Unsubscribe1(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
