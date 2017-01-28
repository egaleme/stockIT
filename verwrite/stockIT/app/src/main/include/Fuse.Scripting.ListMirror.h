// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.ValueMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ListMirror :2598
// {
struct ListMirror_type : ::g::Fuse::Scripting::ValueMirror_type
{
    ::g::Fuse::Scripting::IArray interface0;
    void(*fp_get_Item)(::g::Fuse::Scripting::ListMirror*, int*, uObject**);
    void(*fp_get_Length)(::g::Fuse::Scripting::ListMirror*, int*);
};

ListMirror_type* ListMirror_typeof();
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw);

struct ListMirror : ::g::Fuse::Scripting::ValueMirror
{
    void ctor_1(uObject* raw);
    uObject* Item(int index) { uObject* __retval; return (((ListMirror_type*)__type)->fp_get_Item)(this, &index, &__retval), __retval; }
    int Length() { int __retval; return (((ListMirror_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
