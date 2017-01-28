// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.ListMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ArrayMirror :8
// {
::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof();
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval);
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval);
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval);
void ArrayMirror__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval);
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this);

struct ArrayMirror : ::g::Fuse::Scripting::ListMirror
{
    uStrong<uArray*> _items;

    void ctor_2(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr);
    uArray* ItemsReadonly();
    static ArrayMirror* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Array* arr);
};
// }

}}} // ::g::Fuse::Scripting
