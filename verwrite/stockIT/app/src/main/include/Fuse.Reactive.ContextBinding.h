// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ContextBinding :8
// {
struct ContextBinding_type : ::g::Fuse::Binding_type
{
    void(*fp_NewValue)(::g::Fuse::Reactive::ContextBinding*, uObject*);
};

ContextBinding_type* ContextBinding_typeof();
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key);
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval);
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value);
void ContextBinding__OnRooted_fn(ContextBinding* __this);
void ContextBinding__OnUnrooted_fn(ContextBinding* __this);

struct ContextBinding : ::g::Fuse::Binding
{
    uStrong<uObject*> _pathSubscription;
    uStrong<uString*> _Key;

    void ctor_1(uString* key);
    uString* Key();
    void Key(uString* value);
    void NewValue(uObject* obj) { (((ContextBinding_type*)__type)->fp_NewValue)(this, obj); }
};
// }

}}} // ::g::Fuse::Reactive
