// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.NavigationInternal.EnterHorizontal.h>
#include <Fuse.Controls.NavigationInternal.EnterVertical.h>
#include <Fuse.Controls.NavigationInternal.ExitHorizontal.h>
#include <Fuse.Controls.NavigationInternal.ExitVertical.h>
#include <Fuse.Controls.NavigationInternal.NavEnterHorizontal.h>
#include <Fuse.Controls.NavigationInternal.NavExitHorizontal.h>
#include <Fuse.Controls.NavigationInternal.NavRemoveHorizontal.h>
#include <Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.ReleasePage.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.TransitionDirection.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\navigationinternal\$.uno
// --------------------------------------------------------------------------------------------------------------

// public partial sealed class EnterHorizontal :11
// {
// static EnterHorizontal() :68
static void EnterHorizontal__cctor_1_fn(uType* __type)
{
}

static void EnterHorizontal_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnteringAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnterHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.EnterHorizontal", options);
    type->fp_build_ = EnterHorizontal_build;
    type->fp_ctor_ = (void*)EnterHorizontal__New3_fn;
    type->fp_cctor_ = EnterHorizontal__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnterHorizontal() :72
void EnterHorizontal__ctor_8_fn(EnterHorizontal* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :76
void EnterHorizontal__InitializeUX_fn(EnterHorizontal* __this)
{
    __this->InitializeUX();
}

// public EnterHorizontal New() :72
void EnterHorizontal__New3_fn(EnterHorizontal** __retval)
{
    *__retval = EnterHorizontal::New3();
}

// public EnterHorizontal() [instance] :72
void EnterHorizontal::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :76
void EnterHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->X(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public EnterHorizontal New() [static] :72
EnterHorizontal* EnterHorizontal::New3()
{
    EnterHorizontal* obj1 = (EnterHorizontal*)uNew(EnterHorizontal_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\navigationinternal\$.uno
// --------------------------------------------------------------------------------------------------------------

// public partial sealed class EnterVertical :28
// {
// static EnterVertical() :94
static void EnterVertical__cctor_1_fn(uType* __type)
{
}

static void EnterVertical_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnteringAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnterVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.EnterVertical", options);
    type->fp_build_ = EnterVertical_build;
    type->fp_ctor_ = (void*)EnterVertical__New3_fn;
    type->fp_cctor_ = EnterVertical__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnterVertical() :98
void EnterVertical__ctor_8_fn(EnterVertical* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :102
void EnterVertical__InitializeUX_fn(EnterVertical* __this)
{
    __this->InitializeUX();
}

// public EnterVertical New() :98
void EnterVertical__New3_fn(EnterVertical** __retval)
{
    *__retval = EnterVertical::New3();
}

// public EnterVertical() [instance] :98
void EnterVertical::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :102
void EnterVertical::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->Y(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public EnterVertical New() [static] :98
EnterVertical* EnterVertical::New3()
{
    EnterVertical* obj1 = (EnterVertical*)uNew(EnterVertical_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\navigationinternal\$.uno
// --------------------------------------------------------------------------------------------------------------

// public partial sealed class ExitHorizontal :44
// {
// static ExitHorizontal() :120
static void ExitHorizontal__cctor_1_fn(uType* __type)
{
}

static void ExitHorizontal_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::ExitingAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ExitHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.ExitHorizontal", options);
    type->fp_build_ = ExitHorizontal_build;
    type->fp_ctor_ = (void*)ExitHorizontal__New3_fn;
    type->fp_cctor_ = ExitHorizontal__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitHorizontal() :124
void ExitHorizontal__ctor_8_fn(ExitHorizontal* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :128
void ExitHorizontal__InitializeUX_fn(ExitHorizontal* __this)
{
    __this->InitializeUX();
}

// public ExitHorizontal New() :124
void ExitHorizontal__New3_fn(ExitHorizontal** __retval)
{
    *__retval = ExitHorizontal::New3();
}

// public ExitHorizontal() [instance] :124
void ExitHorizontal::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :128
void ExitHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->X(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public ExitHorizontal New() [static] :124
ExitHorizontal* ExitHorizontal::New3()
{
    ExitHorizontal* obj1 = (ExitHorizontal*)uNew(ExitHorizontal_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\navigationinternal\$.uno
// --------------------------------------------------------------------------------------------------------------

// public partial sealed class ExitVertical :60
// {
// static ExitVertical() :146
static void ExitVertical__cctor_1_fn(uType* __type)
{
}

static void ExitVertical_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::ExitingAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ExitVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.ExitVertical", options);
    type->fp_build_ = ExitVertical_build;
    type->fp_ctor_ = (void*)ExitVertical__New3_fn;
    type->fp_cctor_ = ExitVertical__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitVertical() :150
void ExitVertical__ctor_8_fn(ExitVertical* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :154
void ExitVertical__InitializeUX_fn(ExitVertical* __this)
{
    __this->InitializeUX();
}

// public ExitVertical New() :150
void ExitVertical__New3_fn(ExitVertical** __retval)
{
    *__retval = ExitVertical::New3();
}

// public ExitVertical() [instance] :150
void ExitVertical::ctor_8()
{
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :154
void ExitVertical::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->Y(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public ExitVertical New() [static] :150
ExitVertical* ExitVertical::New3()
{
    ExitVertical* obj1 = (ExitVertical*)uNew(ExitVertical_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------

// public partial sealed class NavEnterHorizontal :170
// {
// static NavEnterHorizontal() :172
static void NavEnterHorizontal__cctor_1_fn(uType* __type)
{
}

static void NavEnterHorizontal_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(38);
}

::g::Fuse::Triggers::Trigger_type* NavEnterHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Transition_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavEnterHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavEnterHorizontal", options);
    type->fp_build_ = NavEnterHorizontal_build;
    type->fp_ctor_ = (void*)NavEnterHorizontal__New3_fn;
    type->fp_cctor_ = NavEnterHorizontal__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavEnterHorizontal() :176
void NavEnterHorizontal__ctor_6_fn(NavEnterHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :180
void NavEnterHorizontal__InitializeUX_fn(NavEnterHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavEnterHorizontal New() :176
void NavEnterHorizontal__New3_fn(NavEnterHorizontal** __retval)
{
    *__retval = NavEnterHorizontal::New3();
}

// public NavEnterHorizontal() [instance] :176
void NavEnterHorizontal::ctor_6()
{
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :180
void NavEnterHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Actions::ReleasePage* temp1 = ::g::Fuse::Triggers::Actions::ReleasePage::New2();
    Direction(1);
    temp->X(1.0f);
    temp->Duration(0.3);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp1->AtProgress(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
}

// public NavEnterHorizontal New() [static] :176
NavEnterHorizontal* NavEnterHorizontal::New3()
{
    NavEnterHorizontal* obj1 = (NavEnterHorizontal*)uNew(NavEnterHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------

// public partial sealed class NavExitHorizontal :202
// {
// static NavExitHorizontal() :204
static void NavExitHorizontal__cctor_1_fn(uType* __type)
{
}

static void NavExitHorizontal_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(38);
}

::g::Fuse::Triggers::Trigger_type* NavExitHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Transition_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavExitHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavExitHorizontal", options);
    type->fp_build_ = NavExitHorizontal_build;
    type->fp_ctor_ = (void*)NavExitHorizontal__New3_fn;
    type->fp_cctor_ = NavExitHorizontal__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavExitHorizontal() :208
void NavExitHorizontal__ctor_6_fn(NavExitHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :212
void NavExitHorizontal__InitializeUX_fn(NavExitHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavExitHorizontal New() :208
void NavExitHorizontal__New3_fn(NavExitHorizontal** __retval)
{
    *__retval = NavExitHorizontal::New3();
}

// public NavExitHorizontal() [instance] :208
void NavExitHorizontal::ctor_6()
{
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :212
void NavExitHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Actions::ReleasePage* temp1 = ::g::Fuse::Triggers::Actions::ReleasePage::New2();
    Direction(2);
    temp->X(-1.0f);
    temp->Duration(0.3);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp1->AtProgress(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
}

// public NavExitHorizontal New() [static] :208
NavExitHorizontal* NavExitHorizontal::New3()
{
    NavExitHorizontal* obj1 = (NavExitHorizontal*)uNew(NavExitHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------

// public partial sealed class NavRemoveHorizontal :234
// {
// static NavRemoveHorizontal() :236
static void NavRemoveHorizontal__cctor_1_fn(uType* __type)
{
}

static void NavRemoveHorizontal_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface4),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface5));
    type->SetFields(31);
}

::g::Fuse::Triggers::RemovingAnimation_type* NavRemoveHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::RemovingAnimation_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(NavRemoveHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::RemovingAnimation_type);
    type = (::g::Fuse::Triggers::RemovingAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavRemoveHorizontal", options);
    type->fp_build_ = NavRemoveHorizontal_build;
    type->fp_ctor_ = (void*)NavRemoveHorizontal__New3_fn;
    type->fp_cctor_ = NavRemoveHorizontal__cctor_1_fn;
    type->interface5.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))::g::Fuse::Triggers::RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavRemoveHorizontal() :240
void NavRemoveHorizontal__ctor_6_fn(NavRemoveHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :244
void NavRemoveHorizontal__InitializeUX_fn(NavRemoveHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavRemoveHorizontal New() :240
void NavRemoveHorizontal__New3_fn(NavRemoveHorizontal** __retval)
{
    *__retval = NavRemoveHorizontal::New3();
}

// public NavRemoveHorizontal() [instance] :240
void NavRemoveHorizontal::ctor_6()
{
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :244
void NavRemoveHorizontal::InitializeUX()
{
    ::g::Fuse::Animations::Scale* temp = ::g::Fuse::Animations::Scale::New2();
    temp->Factor(0.7f);
    temp->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public NavRemoveHorizontal New() [static] :240
NavRemoveHorizontal* NavRemoveHorizontal::New3()
{
    NavRemoveHorizontal* obj1 = (NavRemoveHorizontal*)uNew(NavRemoveHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------

// public partial sealed class PageWhileNavigatingFreeze :260
// {
// static PageWhileNavigatingFreeze() :264
static void PageWhileNavigatingFreeze__cctor_1_fn(uType* __type)
{
    PageWhileNavigatingFreeze::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"IsFrozen"*/]);
}

static void PageWhileNavigatingFreeze_build(uType* type)
{
    ::STRINGS[0] = uString::Const("IsFrozen");
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(32,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::Fuse::Controls::NavigationInternal::PageWhileNavigatingFreeze, page), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::Fuse::Controls::NavigationInternal::PageWhileNavigatingFreeze, page_IsFrozen_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Controls::NavigationInternal::PageWhileNavigatingFreeze::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Triggers::Trigger_type* PageWhileNavigatingFreeze_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigating_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PageWhileNavigatingFreeze);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze", options);
    type->fp_build_ = PageWhileNavigatingFreeze_build;
    type->fp_cctor_ = PageWhileNavigatingFreeze__cctor_1_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageWhileNavigatingFreeze(Fuse.Controls.Page page) :268
void PageWhileNavigatingFreeze__ctor_7_fn(PageWhileNavigatingFreeze* __this, ::g::Fuse::Controls::Page* page1)
{
    __this->ctor_7(page1);
}

// private void InitializeUX() :274
void PageWhileNavigatingFreeze__InitializeUX_fn(PageWhileNavigatingFreeze* __this)
{
    __this->InitializeUX();
}

// public PageWhileNavigatingFreeze New(Fuse.Controls.Page page) :268
void PageWhileNavigatingFreeze__New3_fn(::g::Fuse::Controls::Page* page1, PageWhileNavigatingFreeze** __retval)
{
    *__retval = PageWhileNavigatingFreeze::New3(page1);
}

::g::Uno::UX::Selector PageWhileNavigatingFreeze::__selector0_;

// public PageWhileNavigatingFreeze(Fuse.Controls.Page page) [instance] :268
void PageWhileNavigatingFreeze::ctor_7(::g::Fuse::Controls::Page* page1)
{
    ctor_6();
    page = page1;
    InitializeUX();
}

// private void InitializeUX() [instance] :274
void PageWhileNavigatingFreeze::InitializeUX()
{
    page_IsFrozen_inst = ::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(page, PageWhileNavigatingFreeze::__selector0());
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<bool>*/], page_IsFrozen_inst);
    ::g::Fuse::Animations::Change__set_Value_fn(temp, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public PageWhileNavigatingFreeze New(Fuse.Controls.Page page) [static] :268
PageWhileNavigatingFreeze* PageWhileNavigatingFreeze::New3(::g::Fuse::Controls::Page* page1)
{
    PageWhileNavigatingFreeze* obj1 = (PageWhileNavigatingFreeze*)uNew(PageWhileNavigatingFreeze_typeof());
    obj1->ctor_7(page1);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
