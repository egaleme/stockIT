// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileValue;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct ValueChangedArgs;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileValue<T> :3805
// {
struct WhileValue_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPulseTrigger interface5;
    void(*fp_get_IsOn)(::g::Fuse::Triggers::WhileValue*, bool*);
};

WhileValue_type* WhileValue_typeof();
void WhileValue__ctor_6_fn(WhileValue* __this);
void WhileValue__FindValueNode_fn(uType* __type, ::g::Fuse::Node* n, uObject** __retval);
void WhileValue__OnRooted_fn(WhileValue* __this);
void WhileValue__OnUnrooted_fn(WhileValue* __this);
void WhileValue__OnValueChanged_fn(WhileValue* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* a);
void WhileValue__Pulse1_fn(WhileValue* __this);
void WhileValue__get_Source_fn(WhileValue* __this, uObject** __retval);
void WhileValue__set_Source_fn(WhileValue* __this, uObject* value);
void WhileValue__get_Value_fn(WhileValue* __this, uTRef __retval);
void WhileValue__set_Value_fn(WhileValue* __this, void* value);
void WhileValue__add_ValueChanged_fn(WhileValue* __this, uDelegate* value);
void WhileValue__remove_ValueChanged_fn(WhileValue* __this, uDelegate* value);

struct WhileValue : ::g::Fuse::Triggers::WhileTrigger
{
    bool _hasValue;
    uStrong<uObject*> _obj;
    uStrong<uObject*> _source;
    uTField _value() { return __type->Field(this, 34); }
    uStrong<uDelegate*> ValueChanged1;

    void ctor_6();
    bool IsOn() { bool __retval; return (((WhileValue_type*)__type)->fp_get_IsOn)(this, &__retval), __retval; }
    void OnValueChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* a);
    void Pulse1();
    uObject* Source();
    void Source(uObject* value);
    template<class T>
    T Value() { T __retval; return WhileValue__get_Value_fn(this, &__retval), __retval; }
    template<class T>
    void Value(T value) { WhileValue__set_Value_fn(this, uConstrain(__type->GetBase(WhileValue_typeof())->T(0), value)); }
    void add_ValueChanged(uDelegate* value);
    void remove_ValueChanged(uDelegate* value);
    static uObject* FindValueNode(uType* __type, ::g::Fuse::Node* n);
};
// }

}}} // ::g::Fuse::Triggers
