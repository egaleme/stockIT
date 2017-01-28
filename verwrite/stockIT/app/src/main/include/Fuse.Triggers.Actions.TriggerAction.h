// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract class TriggerAction :838
// {
struct TriggerAction_type : uType
{
    void(*fp_Perform)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*);
};

TriggerAction_type* TriggerAction_typeof();
void TriggerAction__ctor_1_fn(TriggerAction* __this);
void TriggerAction__get_AtProgress_fn(TriggerAction* __this, float* __retval);
void TriggerAction__set_AtProgress_fn(TriggerAction* __this, float* value);
void TriggerAction__get_Delay_fn(TriggerAction* __this, float* __retval);
void TriggerAction__set_Delay_fn(TriggerAction* __this, float* value);
void TriggerAction__get_IsActive_fn(TriggerAction* __this, bool* __retval);
void TriggerAction__set_IsActive_fn(TriggerAction* __this, bool* value);
void TriggerAction__get_IsProgressTriggered_fn(TriggerAction* __this, bool* __retval);
void TriggerAction__PerformFromNode_fn(TriggerAction* __this, ::g::Fuse::Node* target);
void TriggerAction__ProgressWhen_fn(TriggerAction* __this, float* totalDuration, float* __retval);
void TriggerAction__get_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node** __retval);
void TriggerAction__set_TargetNode_fn(TriggerAction* __this, ::g::Fuse::Node* value);
void TriggerAction__get_When_fn(TriggerAction* __this, int* __retval);
void TriggerAction__set_When_fn(TriggerAction* __this, int* value);

struct TriggerAction : ::g::Uno::UX::PropertyObject
{
    float _delay;
    bool _hasDelay;
    bool _hasProgress;
    bool _isActive;
    float _progress;
    int _when;
    uStrong< ::g::Fuse::Node*> _TargetNode;

    void ctor_1();
    float AtProgress();
    void AtProgress(float value);
    float Delay();
    void Delay(float value);
    bool IsActive();
    void IsActive(bool value);
    bool IsProgressTriggered();
    void Perform(::g::Fuse::Node* target) { (((TriggerAction_type*)__type)->fp_Perform)(this, target); }
    void PerformFromNode(::g::Fuse::Node* target);
    float ProgressWhen(float totalDuration);
    ::g::Fuse::Node* TargetNode();
    void TargetNode(::g::Fuse::Node* value);
    int When();
    void When(int value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
