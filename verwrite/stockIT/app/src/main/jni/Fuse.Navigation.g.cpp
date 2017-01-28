// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Motion.Simulation.BoundedRegion2D.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.ActivePageChangedHandler.h>
#include <Fuse.Navigation.AllowedNavigationDirections.h>
#include <Fuse.Navigation.BackButtonAction.h>
#include <Fuse.Navigation.BackForwardNavigationTriggerAction.h>
#include <Fuse.Navigation.DeactivatingAnimation.h>
#include <Fuse.Navigation.DirectNavigation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.EndSeekArgs.h>
#include <Fuse.Navigation.EnterExitAnimation.h>
#include <Fuse.Navigation.EnteringAnimation.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Navigation.ExplicitNavigation.h>
#include <Fuse.Navigation.GoBack.h>
#include <Fuse.Navigation.GoForward.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Navigation.IRouterOutlet.h>
#include <Fuse.Navigation.ISeekableNavigation.h>
#include <Fuse.Navigation.LinearNavigation.h>
#include <Fuse.Navigation.ModifyRouteHow.h>
#include <Fuse.Navigation.NavigatedArgs.h>
#include <Fuse.Navigation.NavigatedHandler.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.Navigation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.NavigationArgs.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.NavigationGotoMode.h>
#include <Fuse.Navigation.NavigationHandler.h>
#include <Fuse.Navigation.NavigationMode.h>
#include <Fuse.Navigation.NavigationPageCountHandler.h>
#include <Fuse.Navigation.NavigationPageProperty.h>
#include <Fuse.Navigation.NavigationPageProxy.h>
#include <Fuse.Navigation.NavigationPageState.h>
#include <Fuse.Navigation.NavigationState.h>
#include <Fuse.Navigation.NavigationTriggerAction.h>
#include <Fuse.Navigation.OutletType.h>
#include <Fuse.Navigation.PageResourceBinding-1.h>
#include <Fuse.Navigation.Route.h>
#include <Fuse.Navigation.Router.GetRouteCallback.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.RouterCancelNavigation.h>
#include <Fuse.Navigation.RouterModify.h>
#include <Fuse.Navigation.RoutingOperation.h>
#include <Fuse.Navigation.RoutingResult.h>
#include <Fuse.Navigation.SnapTo.h>
#include <Fuse.Navigation.StructuredNavigation.h>
#include <Fuse.Navigation.StructuredNavigation.NavigationStructure.h>
#include <Fuse.Navigation.SwipeDirection.h>
#include <Fuse.Navigation.SwipeNavigate.h>
#include <Fuse.Navigation.UpdateSeekArgs.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Navigation.VisualNavigation.PageData.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileInactive.h>
#include <Fuse.Navigation.WhileInEnterState.h>
#include <Fuse.Navigation.WhileInExitState.h>
#include <Fuse.Navigation.WhileNavigating.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IArray.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.Json.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Time.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[92];
static uType* TYPES[58];

namespace g{
namespace Fuse{
namespace Navigation{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class ActivatingAnimation :1368
// {
static void ActivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ActivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ActivatingAnimation", options);
    type->fp_build_ = ActivatingAnimation_build;
    type->fp_ctor_ = (void*)ActivatingAnimation__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))ActivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))ActivatingAnimation__OnNavigationStateChanged_fn;
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

// public generated ActivatingAnimation() :1368
void ActivatingAnimation__ctor_6_fn(ActivatingAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :1370
void ActivatingAnimation__ForceUpdate_fn(ActivatingAnimation* __this)
{
    __this->Seek(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// private double InvertProgress(double p) :1375
void ActivatingAnimation__InvertProgress_fn(ActivatingAnimation* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated ActivatingAnimation New() :1368
void ActivatingAnimation__New2_fn(ActivatingAnimation** __retval)
{
    *__retval = ActivatingAnimation::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1380
void ActivatingAnimation__OnNavigationStateChanged_fn(ActivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) < ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress(__this->InvertProgress((double)(__this->Scale() * ps.Progress)), d, state);
}

// public generated ActivatingAnimation() [instance] :1368
void ActivatingAnimation::ctor_6()
{
    ctor_5();
}

// private double InvertProgress(double p) [instance] :1375
double ActivatingAnimation::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated ActivatingAnimation New() [static] :1368
ActivatingAnimation* ActivatingAnimation::New2()
{
    ActivatingAnimation* obj1 = (ActivatingAnimation*)uNew(ActivatingAnimation_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public delegate void ActivePageChangedHandler(object sender, Fuse.Visual active) :642
uDelegateType* ActivePageChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.ActivePageChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Visual_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum AllowedNavigationDirections :3670
uEnumType* AllowedNavigationDirections_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.AllowedNavigationDirections", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 1LL,
        "Backward", 2LL,
        "Both", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum BackButtonAction :2381
uEnumType* BackButtonAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.BackButtonAction", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "GoBack", 0LL,
        "None", 1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class BackForwardNavigationTriggerAction :4153
// {
static void BackForwardNavigationTriggerAction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("No Navigation context was found");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction, _NavigationContext), 0);
}

BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof()
{
    static uSStrong<BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(BackForwardNavigationTriggerAction);
    options.TypeSize = sizeof(BackForwardNavigationTriggerAction_type);
    type = (BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.BackForwardNavigationTriggerAction", options);
    type->fp_build_ = BackForwardNavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))BackForwardNavigationTriggerAction__Perform_fn;
    return type;
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() :4156
void BackForwardNavigationTriggerAction__get_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) :4156
void BackForwardNavigationTriggerAction__set_NavigationContext_fn(BackForwardNavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :4158
void BackForwardNavigationTriggerAction__Perform_fn(BackForwardNavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* nav = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(v);

    if (nav != NULL)
        __this->Perform1(nav, n);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"No Navigati...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 4168, ::STRINGS[2/*"Perform"*/]);
}

// public generated Fuse.Navigation.IBaseNavigation get_NavigationContext() [instance] :4156
uObject* BackForwardNavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.IBaseNavigation value) [instance] :4156
void BackForwardNavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class DeactivatingAnimation :1415
// {
static void DeactivatingAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DeactivatingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.DeactivatingAnimation", options);
    type->fp_build_ = DeactivatingAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))DeactivatingAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))DeactivatingAnimation__OnNavigationStateChanged_fn;
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

// protected override sealed void ForceUpdate() :1417
void DeactivatingAnimation__ForceUpdate_fn(DeactivatingAnimation* __this)
{
    __this->Seek((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress), 0);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1422
void DeactivatingAnimation__OnNavigationStateChanged_fn(DeactivatingAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.Progress) > ::g::Uno::Math::Abs1(ps.PreviousProgress)) ? 0 : 1;
    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class DirectNavigation :184
// {
static void DirectNavigation_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Unexpected null page");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[4] = uString::Const("SetProgressState");
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(22,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::DirectNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(DirectNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.DirectNavigation", options);
    type->fp_build_ = DirectNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))DirectNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))DirectNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))DirectNavigation__OnRooted_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))DirectNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))DirectNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
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

// public override sealed Fuse.Visual get_Active() :241
void DirectNavigation__get_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :242
void DirectNavigation__set_Active_fn(DirectNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->TransitionTo(value, false);
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :205
void DirectNavigation__Goto_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    int mode_ = *mode;

    if ((mode_ == 1) || (mode_ == 0))
        __this->TransitionTo(visual, mode_ == 1);
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :192
void DirectNavigation__OnChildAddedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->UpdateState(true);
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :198
void DirectNavigation__OnChildRemovedWhileRooted_fn(DirectNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);

    if (__this->_active == child)
        __this->Goto(NULL, 0);
}

// protected override sealed void OnRooted() :186
void DirectNavigation__OnRooted_fn(DirectNavigation* __this)
{
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);
    __this->UpdateState(true);
}

// private void SetProgressState(Fuse.Visual elm, int progress) :248
void DirectNavigation__SetProgressState_fn(DirectNavigation* __this, ::g::Fuse::Visual* elm, int* progress)
{
    __this->SetProgressState(elm, *progress);
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) :212
void DirectNavigation__TransitionTo_fn(DirectNavigation* __this, ::g::Fuse::Visual* visual, bool* bypass)
{
    __this->TransitionTo(visual, *bypass);
}

// private void UpdateState(bool bypass) :225
void DirectNavigation__UpdateState_fn(DirectNavigation* __this, bool* bypass)
{
    __this->UpdateState(*bypass);
}

// private void SetProgressState(Fuse.Visual elm, int progress) [instance] :248
void DirectNavigation::SetProgressState(::g::Fuse::Visual* elm, int progress)
{
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(elm);

    if (pd == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unexpected ...*/], elm, ::STRINGS[1/*"C:\\Users\\...*/], 253, ::STRINGS[4/*"SetProgress...*/]);
        return;
    }

    uPtr(pd)->PreviousProgress = uPtr(pd)->Progress;
    pd->Progress = (float)progress;
}

// private void TransitionTo(Fuse.Visual visual, bool bypass) [instance] :212
void DirectNavigation::TransitionTo(::g::Fuse::Visual* visual, bool bypass)
{
    ::g::Fuse::Visual* oldActive = _active;
    _active = visual;
    UpdateState(bypass);

    if (oldActive != _active)
    {
        OnActiveChanged(_active);
        OnNavigated(_active);
    }
}

// private void UpdateState(bool bypass) [instance] :225
void DirectNavigation::UpdateState(bool bypass)
{
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret2;

    for (int t = 0; t < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); t++)
    {
        ::g::Fuse::Visual* c = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[3/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(t), &ret2), ret2))->Visual();
        bool active = _active == c;
        int newProgress = active ? 0 : -1;
        SetProgressState(c, newProgress);
    }

    OnPageProgressChanged1(bypass ? 1 : 0);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class EdgeNavigation :295
// {
// static EdgeNavigation() :295
static void EdgeNavigation__cctor_2_fn(uType* __type)
{
    EdgeNavigation::_edgeHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void EdgeNavigation_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Element");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[6] = uString::Const("OnRooted");
    ::STRINGS[7] = uString::Const("EdgeNavigation must be rooted in an Element");
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Navigation::VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[5] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Gestures::Internal::EdgeSwiper_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(22,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _active), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Navigation::EdgeNavigation, _mains), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::EdgeNavigation, _maxProgress), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Navigation::NavigationEdge_typeof(), ::TYPES[8/*Fuse.Gestures.Internal.EdgeSwiper*/], NULL), offsetof(::g::Fuse::Navigation::EdgeNavigation, _swipers), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::EdgeNavigation::_edgeHandle_, uFieldFlagsStatic);
}

::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(EdgeNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.EdgeNavigation", options);
    type->fp_build_ = EdgeNavigation_build;
    type->fp_cctor_ = EdgeNavigation__cctor_2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))EdgeNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))EdgeNavigation__GoBack_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))EdgeNavigation__OnUnrooted_fn;
    type->fp_Toggle = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))EdgeNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))EdgeNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))EdgeNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))EdgeNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))EdgeNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))EdgeNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
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

// public override sealed Fuse.Visual get_Active() :348
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :352
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->Goto(value, 0);
}

// public override sealed bool get_CanGoBack() :489
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval)
{
    return *__retval = __this->IsAnyPanelActive(), void();
}

// private void CheckChildren() :403
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this)
{
    __this->CheckChildren();
}

// private void ClearChildren() :392
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) :306
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = EdgeNavigation::GetEdge(elm);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :496
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection8;
    ::g::Fuse::Navigation::NavigationPageState collection9;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret13;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum7 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret13), ret13); enum7.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum7.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == page)
            return *__retval = (collection8 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection8.Progress = (1.0f - (float)uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress()), collection8.PreviousProgress = 0.0f, collection8), void();
    }

    collection9 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection9.Progress = (float)-__this->_maxProgress;
    collection9.PreviousProgress = 0.0f;
    return *__retval = collection9, void();
}

// public override sealed void GoBack() :483
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret14;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum6 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret14), ret14); enum6.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum6.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :320
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    int mode_ = *mode;
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret15;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_swipers), &ret15), ret15); enum1.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum1.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target() == element)
            uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Enable();
        else
            uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Disable();
    }

    __this->_active = element;
}

// internal bool IsAnyPanelActive() :473
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval)
{
    *__retval = __this->IsAnyPanelActive();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :377
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :383
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    __this->CheckChildren();
}

// private void OnProgressChanged(object s, double progress) :434
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress)
{
    __this->OnProgressChanged(s, *progress);
}

// protected override sealed void OnRooted() :358
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this)
{
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (!uIs((::g::Fuse::Visual*)__this->Parent(), ::TYPES[4/*Fuse.Elements.Element*/]))
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[5/*"Element"*/], __this->Parent(), __this, ::STRINGS[1/*"C:\\Users\\...*/], 363, ::STRINGS[6/*"OnRooted"*/]);
        U_THROW(::g::Uno::Exception::New2(::STRINGS[7/*"EdgeNavigat...*/]));
    }

    __this->CheckChildren();
}

// protected override sealed void OnUnrooted() :371
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this)
{
    __this->ClearChildren();
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// public override sealed void Toggle(Fuse.Visual page) :337
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page)
{
    if (__this->Active() == page)
        __this->Active(NULL);
    else
        __this->Active(page);
}

uSStrong< ::g::Fuse::PropertyHandle*> EdgeNavigation::_edgeHandle_;

// private void CheckChildren() [instance] :403
void EdgeNavigation::CheckChildren()
{
    ::g::Fuse::Navigation::VisualNavigation__PageData* ret11;
    ClearChildren();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Pages()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Navigation.VisualNavigation.PageData>*/])); i++)
    {
        ::g::Fuse::Visual* nodeChild = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Pages()), ::TYPES[3/*Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData>*/]), uCRef<int>(i), &ret11), ret11))->Visual();
        ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(nodeChild, ::TYPES[4/*Fuse.Elements.Element*/]);
        int edge = (element == NULL) ? 4 : EdgeNavigation::GetEdge(element);

        if (edge == 4)
            ::g::Uno::Collections::List__Add_fn(uPtr(_mains), nodeChild);
        else
        {
            ::g::Fuse::Gestures::Internal::EdgeSwiper* s = ::g::Fuse::Gestures::Internal::EdgeSwiper::New1();
            s->Edge(edge);
            s->Target(element);
            s->add_ProgressChanged(uDelegate::New(::TYPES[5/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
            s->Rooted(uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[4/*Fuse.Elements.Element*/]));
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_swipers), uCRef<int>(edge), s);
        }
    }

    OnPageProgressChanged1(1);
}

// private void ClearChildren() [instance] :392
void EdgeNavigation::ClearChildren()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret12;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret12), ret12); enum2.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > s = enum2.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);
        uPtr(s.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->remove_ProgressChanged(uDelegate::New(::TYPES[5/*Uno.Action<object, double>*/], (void*)EdgeNavigation__OnProgressChanged_fn, this));
        uPtr(s.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Unrooted();
    }

    uPtr(_swipers)->Clear();
    uPtr(_mains)->Clear();
}

// internal bool IsAnyPanelActive() [instance] :473
bool EdgeNavigation::IsAnyPanelActive()
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret16;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum5 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret16), ret16); enum5.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum5.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > 0.0)
            return true;
    }

    return false;
}

// private void OnProgressChanged(object s, double progress) [instance] :434
void EdgeNavigation::OnProgressChanged(uObject* s, double progress)
{
    ::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > ret18;
    ::g::Fuse::Gestures::Internal::EdgeSwiper* swiper = uAs< ::g::Fuse::Gestures::Internal::EdgeSwiper*>(s, ::TYPES[8/*Fuse.Gestures.Internal.EdgeSwiper*/]);
    ::g::Fuse::Elements::Element* panel = uPtr(swiper)->Target();

    if ((panel == NULL) || (swiper == NULL))
        return;

    ::g::Fuse::Visual* maxPage = NULL;
    _maxProgress = 0.0;

    for (::g::Uno::Collections::Dictionary__Enumerator<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > enum3 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_swipers), &ret18), ret18); enum3.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<int, uStrong< ::g::Fuse::Gestures::Internal::EdgeSwiper*> > sw = enum3.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>.Enumerator*/]);

        if (uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress() > _maxProgress)
        {
            maxPage = uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Target();
            _maxProgress = uPtr(sw.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Navigation.NavigationEdge, Fuse.Gestures.Internal.EdgeSwiper>*/]))->Progress();
        }
    }

    _active = maxPage;
    OnPageProgressChanged1(2);
}

// public static Fuse.Navigation.NavigationEdge GetEdge(Fuse.Visual elm) [static] :306
int EdgeNavigation::GetEdge(::g::Fuse::Visual* elm)
{
    EdgeNavigation_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(elm)->Properties())->TryGet(EdgeNavigation::_edgeHandle(), &res))
        return uUnbox<int>(::g::Fuse::Navigation::NavigationEdge_typeof(), res);

    return 4;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class EndSeekArgs :3644
// {
static void EndSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::SnapTo_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _SnapTo), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::EndSeekArgs, _Velocity), 0);
}

uType* EndSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EndSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.EndSeekArgs", options);
    type->fp_build_ = EndSeekArgs_build;
    return type;
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) :3649
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo, float* velocity)
{
    __this->ctor_(*snapTo, *velocity);
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) :3649
void EndSeekArgs__New1_fn(int* snapTo, float* velocity, EndSeekArgs** __retval)
{
    *__retval = EndSeekArgs::New1(*snapTo, *velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() :3647
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval)
{
    *__retval = __this->SnapTo();
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) :3647
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value)
{
    __this->SnapTo(*value);
}

// public generated float get_Velocity() :3646
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval)
{
    *__retval = __this->Velocity();
}

// private generated void set_Velocity(float value) :3646
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value)
{
    __this->Velocity(*value);
}

// public EndSeekArgs(Fuse.Navigation.SnapTo snapTo, [float velocity]) [instance] :3649
void EndSeekArgs::ctor_(int snapTo, float velocity)
{
    SnapTo(snapTo);
    Velocity(velocity);
}

// public generated Fuse.Navigation.SnapTo get_SnapTo() [instance] :3647
int EndSeekArgs::SnapTo()
{
    return _SnapTo;
}

// private generated void set_SnapTo(Fuse.Navigation.SnapTo value) [instance] :3647
void EndSeekArgs::SnapTo(int value)
{
    _SnapTo = value;
}

// public generated float get_Velocity() [instance] :3646
float EndSeekArgs::Velocity()
{
    return _Velocity;
}

// private generated void set_Velocity(float value) [instance] :3646
void EndSeekArgs::Velocity(float value)
{
    _Velocity = value;
}

// public EndSeekArgs New(Fuse.Navigation.SnapTo snapTo, [float velocity]) [static] :3649
EndSeekArgs* EndSeekArgs::New1(int snapTo, float velocity)
{
    EndSeekArgs* obj1 = (EndSeekArgs*)uNew(EndSeekArgs_typeof());
    obj1->ctor_(snapTo, velocity);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class EnterExitAnimation :1248
// {
static void EnterExitAnimation_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(35,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, NegativeProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::EnterExitAnimation, PositiveProgress), 0);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnterExitAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnterExitAnimation", options);
    type->fp_build_ = EnterExitAnimation_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::NavigationAnimation*))EnterExitAnimation__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::NavigationAnimation*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))EnterExitAnimation__OnNavigationStateChanged_fn;
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

// protected generated EnterExitAnimation() :1248
void EnterExitAnimation__ctor_6_fn(EnterExitAnimation* __this)
{
    __this->ctor_6();
}

// protected override sealed void ForceUpdate() :1250
void EnterExitAnimation__ForceUpdate_fn(EnterExitAnimation* __this)
{
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;

    if (__this->IsMatch((double)p))
        __this->Seek((double)::g::Uno::Math::Abs1(p), 0);
}

// private bool IsMatch(double progress) :1257
void EnterExitAnimation__IsMatch_fn(EnterExitAnimation* __this, double* progress, bool* __retval)
{
    *__retval = __this->IsMatch(*progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :1265
void EnterExitAnimation__OnNavigationStateChanged_fn(EnterExitAnimation* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    ::g::Fuse::Navigation::NavigationPageState ps = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext());
    int d = (::g::Uno::Math::Abs1(ps.PreviousProgress) < ::g::Uno::Math::Abs1(ps.Progress)) ? 0 : 1;

    if (!__this->IsMatch((double)ps.Progress))
    {
        __this->Seek(0.0, d);
        return;
    }

    __this->GoProgress((double)(__this->Scale() * ::g::Uno::Math::Abs1(ps.Progress)), d, state);
}

// protected generated EnterExitAnimation() [instance] :1248
void EnterExitAnimation::ctor_6()
{
    ctor_5();
}

// private bool IsMatch(double progress) [instance] :1257
bool EnterExitAnimation::IsMatch(double progress)
{
    return (PositiveProgress && (progress >= 0.0)) || (NegativeProgress && (progress <= 0.0));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public class EnteringAnimation :1340
// {
static void EnteringAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(EnteringAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.EnteringAnimation", options);
    type->fp_build_ = EnteringAnimation_build;
    type->fp_ctor_ = (void*)EnteringAnimation__New2_fn;
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

// public EnteringAnimation() :1342
void EnteringAnimation__ctor_7_fn(EnteringAnimation* __this)
{
    __this->ctor_7();
}

// public EnteringAnimation New() :1342
void EnteringAnimation__New2_fn(EnteringAnimation** __retval)
{
    *__retval = EnteringAnimation::New2();
}

// public EnteringAnimation() [instance] :1342
void EnteringAnimation::ctor_7()
{
    ctor_6();
    PositiveProgress = true;
}

// public EnteringAnimation New() [static] :1342
EnteringAnimation* EnteringAnimation::New2()
{
    EnteringAnimation* obj1 = (EnteringAnimation*)uNew(EnteringAnimation_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public class ExitingAnimation :1305
// {
static void ExitingAnimation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4));
    type->SetFields(37);
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnterExitAnimation_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ExitingAnimation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Navigation.ExitingAnimation", options);
    type->fp_build_ = ExitingAnimation_build;
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

// public ExitingAnimation() :1307
void ExitingAnimation__ctor_7_fn(ExitingAnimation* __this)
{
    __this->ctor_7();
}

// public ExitingAnimation() [instance] :1307
void ExitingAnimation::ctor_7()
{
    ctor_6();
    NegativeProgress = true;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class ExplicitNavigation :522
// {
static void ExplicitNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation_type, interface6));
    type->SetFields(22,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::ExplicitNavigation, _active), 0);
}

::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ExplicitNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::VisualNavigation_type);
    type = (::g::Fuse::Navigation::VisualNavigation_type*)uClassType::New("Fuse.Navigation.ExplicitNavigation", options);
    type->fp_build_ = ExplicitNavigation_build;
    type->fp_ctor_ = (void*)ExplicitNavigation__New2_fn;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))ExplicitNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))ExplicitNavigation__set_Active_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::VisualNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))ExplicitNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::VisualNavigation__get_CanGoForward_fn;
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

// public generated ExplicitNavigation() :522
void ExplicitNavigation__ctor_4_fn(ExplicitNavigation* __this)
{
    __this->ctor_4();
}

// public override sealed Fuse.Visual get_Active() :539
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :540
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value)
{
    if (__this->_active != value)
    {
        __this->_active = value;
        __this->OnActiveChanged(__this->_active);
        __this->OnNavigated(__this->_active);
    }
}

// public override sealed void Goto(Fuse.Visual visual, Fuse.Navigation.NavigationGotoMode mode) :524
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int* mode)
{
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    __this->SetPageProgress(visual, 0.0f, false);
    __this->Active(visual);
    __this->OnPageProgressChanged1((mode_ == 1) ? 1 : 0);
}

// public generated ExplicitNavigation New() :522
void ExplicitNavigation__New2_fn(ExplicitNavigation** __retval)
{
    *__retval = ExplicitNavigation::New2();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) :572
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update)
{
    __this->SetPageProgress(page, *progress, *update);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) :567
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update)
{
    __this->SetPageProgress1(page, *progress, *previous, *update);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) :556
void ExplicitNavigation__SetPageProgress2_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update, bool* havPrev)
{
    __this->SetPageProgress2(page, *progress, *previous, *update, *havPrev);
}

// public void SetState(Fuse.Navigation.NavigationState state) :582
void ExplicitNavigation__SetState_fn(ExplicitNavigation* __this, int* state)
{
    __this->SetState(*state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) :577
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int* mode)
{
    __this->UpdateProgress(*mode);
}

// public generated ExplicitNavigation() [instance] :522
void ExplicitNavigation::ctor_4()
{
    ctor_3();
}

// public void SetPageProgress(Fuse.Visual page, float progress, [bool update]) [instance] :572
void ExplicitNavigation::SetPageProgress(::g::Fuse::Visual* page, float progress, bool update)
{
    SetPageProgress2(page, progress, 0.0f, update, false);
}

// public void SetPageProgress(Fuse.Visual page, float progress, float previous, [bool update]) [instance] :567
void ExplicitNavigation::SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update)
{
    SetPageProgress2(page, progress, previous, update, true);
}

// private void SetPageProgress(Fuse.Visual page, float progress, float previous, bool update, bool havPrev) [instance] :556
void ExplicitNavigation::SetPageProgress2(::g::Fuse::Visual* page, float progress, float previous, bool update, bool havPrev)
{
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = GetPageData(page);

    if (pd == NULL)
        return;

    uPtr(pd)->PreviousProgress = (havPrev ? previous : uPtr(pd)->Progress);
    pd->Progress = progress;

    if (update)
        OnPageProgressChanged1(0);
}

// public void SetState(Fuse.Navigation.NavigationState state) [instance] :582
void ExplicitNavigation::SetState(int state)
{
    OnStateChanged(state);
}

// public void UpdateProgress(Fuse.Navigation.NavigationMode mode) [instance] :577
void ExplicitNavigation::UpdateProgress(int mode)
{
    OnPageProgressChanged1(mode);
}

// public generated ExplicitNavigation New() [static] :522
ExplicitNavigation* ExplicitNavigation::New2()
{
    ExplicitNavigation* obj1 = (ExplicitNavigation*)uNew(ExplicitNavigation_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// private sealed class Router.GetRouteCallback :2341
// {
static void Router__GetRouteCallback_build(uType* type)
{
    ::TYPES[9] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _context), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router__GetRouteCallback, _route), 0);
}

uType* Router__GetRouteCallback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Router__GetRouteCallback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Router.GetRouteCallback", options);
    type->fp_build_ = Router__GetRouteCallback_build;
    return type;
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :2346
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(route, callback, context);
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) :2346
void Router__GetRouteCallback__New1_fn(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context, Router__GetRouteCallback** __retval)
{
    *__retval = Router__GetRouteCallback::New1(route, callback, context);
}

// public void Run() :2352
void Router__GetRouteCallback__Run_fn(Router__GetRouteCallback* __this)
{
    __this->Run();
}

// private Fuse.Scripting.Array ToArray() :2355
void Router__GetRouteCallback__ToArray_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray();
}

// public GetRouteCallback(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [instance] :2346
void Router__GetRouteCallback::ctor_(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    _route = route;
    _callback = callback;
    _context = context;
}

// public void Run() [instance] :2352
void Router__GetRouteCallback::Run()
{
    uPtr(_callback)->Call(uArray::Init<uObject*>(::TYPES[9/*object[]*/], 1, (::g::Fuse::Scripting::Array*)ToArray()));
}

// private Fuse.Scripting.Array ToArray() [instance] :2355
::g::Fuse::Scripting::Array* Router__GetRouteCallback::ToArray()
{
    ::g::Fuse::Navigation::Route* route = _route;
    int len = uPtr(route)->Length();
    ::g::Fuse::Scripting::Array* arr = uPtr(_context)->NewArray(uArray::Init<uObject*>(::TYPES[9/*object[]*/], 1, uBox<int>(::g::Uno::Int_typeof(), len * 2)));

    for (int i = 0; i < len; i++)
    {
        uPtr(arr)->Item(i * 2, uPtr(route)->Path);
        arr->Item((i * 2) + 1, uPtr(_context)->ParseJson(route->Parameter));
        route = uPtr(route)->SubRoute;
    }

    return arr;
}

// public GetRouteCallback New(Fuse.Navigation.Route route, Fuse.Scripting.Function callback, Fuse.Scripting.Context context) [static] :2346
Router__GetRouteCallback* Router__GetRouteCallback::New1(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context)
{
    Router__GetRouteCallback* obj1 = (Router__GetRouteCallback*)uNew(Router__GetRouteCallback_typeof());
    obj1->ctor_(route, callback, context);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class GoBack :4201
// {
static void GoBack_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoBack);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoBack", options);
    type->fp_build_ = GoBack_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoBack__Perform1_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :4203
void GoBack__Perform1_fn(GoBack* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoBack(uInterface(uPtr(ctx), ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoBack(uInterface(uPtr(ctx), ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/]));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class GoForward :4236
// {
static void GoForward_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    type->SetFields(9);
}

::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(GoForward);
    options.TypeSize = sizeof(::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.GoForward", options);
    type->fp_build_ = GoForward_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::BackForwardNavigationTriggerAction*, uObject*, ::g::Fuse::Node*))GoForward__Perform1_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.IBaseNavigation ctx, Fuse.Node node) :4239
void GoForward__Perform1_fn(GoForward* __this, uObject* ctx, ::g::Fuse::Node* node)
{
    if (::g::Fuse::Navigation::IBaseNavigation::CanGoForward(uInterface(uPtr(ctx), ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/])))
        ::g::Fuse::Navigation::IBaseNavigation::GoForward(uInterface(uPtr(ctx), ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/]));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public delegate void HistoryChangedHandler(object sender) :639
uDelegateType* HistoryChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.HistoryChangedHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract interface IBaseNavigation :648
// {
uInterfaceType* IBaseNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IBaseNavigation", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract interface INavigation :666
// {
uInterfaceType* INavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.INavigation", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal abstract interface IPagePropertyListener :1615
// {
uInterfaceType* IPagePropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPagePropertyListener", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal abstract interface IPageResourceBinding :1449
// {
uInterfaceType* IPageResourceBinding_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IPageResourceBinding", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract interface IRouterOutlet :735
// {
uInterfaceType* IRouterOutlet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.IRouterOutlet", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal abstract interface ISeekableNavigation :686
// {
uInterfaceType* ISeekableNavigation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Navigation.ISeekableNavigation", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class LinearNavigation :3570
// {
static void LinearNavigation_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation_type, interface7));
    type->SetFields(32);
}

::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(LinearNavigation);
    options.TypeSize = sizeof(::g::Fuse::Navigation::StructuredNavigation_type);
    type = (::g::Fuse::Navigation::StructuredNavigation_type*)uClassType::New("Fuse.Navigation.LinearNavigation", options);
    type->fp_build_ = LinearNavigation_build;
    type->fp_ctor_ = (void*)LinearNavigation__New2_fn;
    type->interface7.fp_BeginSeek = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface7.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface7.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))::g::Fuse::Navigation::StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))::g::Fuse::Navigation::StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))::g::Fuse::Navigation::StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))::g::Fuse::Navigation::StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))::g::Fuse::Navigation::StructuredNavigation__get_CanGoForward_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))::g::Fuse::Navigation::StructuredNavigation__OnChildRemovedWhileRooted_fn;
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

// public LinearNavigation() :3572
void LinearNavigation__ctor_5_fn(LinearNavigation* __this)
{
    __this->ctor_5();
}

// public LinearNavigation New() :3572
void LinearNavigation__New2_fn(LinearNavigation** __retval)
{
    *__retval = LinearNavigation::New2();
}

// public LinearNavigation() [instance] :3572
void LinearNavigation::ctor_5()
{
    ctor_4(0);
}

// public LinearNavigation New() [static] :3572
LinearNavigation* LinearNavigation::New2()
{
    LinearNavigation* obj1 = (LinearNavigation*)uNew(LinearNavigation_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum ModifyRouteHow :2389
uEnumType* ModifyRouteHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.ModifyRouteHow", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Push", 0LL,
        "Goto", 1LL,
        "Replace", 2LL,
        "PrepareBack", 3LL,
        "PreparePush", 4LL,
        "PrepareGoto", 5LL,
        "FinishPrepared", 6LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class NavigatedArgs :622
// {
static void NavigatedArgs_build(uType* type)
{
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("");
    ::TYPES[11] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(NavigatedArgs_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigatedArgs, _NewVisual), 0);
}

NavigatedArgs_type* NavigatedArgs_typeof()
{
    static uSStrong<NavigatedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigatedArgs);
    options.TypeSize = sizeof(NavigatedArgs_type);
    type = (NavigatedArgs_type*)uClassType::New("Fuse.Navigation.NavigatedArgs", options);
    type->fp_build_ = NavigatedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))NavigatedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public NavigatedArgs(Fuse.Visual newVisual) :626
void NavigatedArgs__ctor_1_fn(NavigatedArgs* __this, ::g::Fuse::Visual* newVisual)
{
    __this->ctor_1(newVisual);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :631
void NavigatedArgs__FuseScriptingIScriptEventSerialize_fn(NavigatedArgs* __this, uObject* s)
{
    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()), NULL))
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[11/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[8/*"name"*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(__this->NewVisual())->Name()));
    else
        ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[11/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[8/*"name"*/], ::STRINGS[9/*""*/]);
}

// public NavigatedArgs New(Fuse.Visual newVisual) :626
void NavigatedArgs__New2_fn(::g::Fuse::Visual* newVisual, NavigatedArgs** __retval)
{
    *__retval = NavigatedArgs::New2(newVisual);
}

// public generated Fuse.Visual get_NewVisual() :624
void NavigatedArgs__get_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->NewVisual();
}

// private generated void set_NewVisual(Fuse.Visual value) :624
void NavigatedArgs__set_NewVisual_fn(NavigatedArgs* __this, ::g::Fuse::Visual* value)
{
    __this->NewVisual(value);
}

// public NavigatedArgs(Fuse.Visual newVisual) [instance] :626
void NavigatedArgs::ctor_1(::g::Fuse::Visual* newVisual)
{
    ctor_();
    NewVisual(newVisual);
}

// public generated Fuse.Visual get_NewVisual() [instance] :624
::g::Fuse::Visual* NavigatedArgs::NewVisual()
{
    return _NewVisual;
}

// private generated void set_NewVisual(Fuse.Visual value) [instance] :624
void NavigatedArgs::NewVisual(::g::Fuse::Visual* value)
{
    _NewVisual = value;
}

// public NavigatedArgs New(Fuse.Visual newVisual) [static] :626
NavigatedArgs* NavigatedArgs::New2(::g::Fuse::Visual* newVisual)
{
    NavigatedArgs* obj1 = (NavigatedArgs*)uNew(NavigatedArgs_typeof());
    obj1->ctor_1(newVisual);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public delegate void NavigatedHandler(object sender, Fuse.Navigation.NavigatedArgs args) :638
uDelegateType* NavigatedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigatedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigatedArgs_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class NavigateTo :4080
// {
static void NavigateTo_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[12] = ::g::Fuse::Navigation::StructuredNavigation_typeof();
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Bypass), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _ClearForwardHistory), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigateTo, _Target), 0);
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(NavigateTo);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateTo", options);
    type->fp_build_ = NavigateTo_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateTo__Perform1_fn;
    return type;
}

// public generated bool get_Bypass() :4090
void NavigateTo__get_Bypass_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value) :4090
void NavigateTo__set_Bypass_fn(NavigateTo* __this, bool* value)
{
    __this->Bypass(*value);
}

// public generated bool get_ClearForwardHistory() :4095
void NavigateTo__get_ClearForwardHistory_fn(NavigateTo* __this, bool* __retval)
{
    *__retval = __this->ClearForwardHistory();
}

// public generated void set_ClearForwardHistory(bool value) :4095
void NavigateTo__set_ClearForwardHistory_fn(NavigateTo* __this, bool* value)
{
    __this->ClearForwardHistory(*value);
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :4097
void NavigateTo__Perform1_fn(NavigateTo* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    int mode = __this->Bypass() ? 1 : 0;

    if (__this->Target() != NULL)
    {
        ::g::Fuse::Navigation::INavigation::Goto(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->Target(), mode);

        if (__this->ClearForwardHistory() && uIs(ctx, ::TYPES[12/*Fuse.Navigation.StructuredNavigation*/]))
            uPtr(uAs< ::g::Fuse::Navigation::StructuredNavigation*>(ctx, ::TYPES[12/*Fuse.Navigation.StructuredNavigation*/]))->QueueClearForwardHistory();
    }
}

// public generated Fuse.Visual get_Target() :4085
void NavigateTo__get_Target_fn(NavigateTo* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :4085
void NavigateTo__set_Target_fn(NavigateTo* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated bool get_Bypass() [instance] :4090
bool NavigateTo::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance] :4090
void NavigateTo::Bypass(bool value)
{
    _Bypass = value;
}

// public generated bool get_ClearForwardHistory() [instance] :4095
bool NavigateTo::ClearForwardHistory()
{
    return _ClearForwardHistory;
}

// public generated void set_ClearForwardHistory(bool value) [instance] :4095
void NavigateTo::ClearForwardHistory(bool value)
{
    _ClearForwardHistory = value;
}

// public generated Fuse.Visual get_Target() [instance] :4085
::g::Fuse::Visual* NavigateTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :4085
void NavigateTo::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class NavigateToggle :4135
// {
static void NavigateToggle_build(uType* type)
{
    ::STRINGS[10] = uString::Const("No Page was found");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(9,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::NavigateToggle, _Target), 0);
}

::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::NavigationTriggerAction_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(NavigateToggle);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationTriggerAction_type);
    type = (::g::Fuse::Navigation::NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigateToggle", options);
    type->fp_build_ = NavigateToggle_build;
    type->fp_Perform1 = (void(*)(::g::Fuse::Navigation::NavigationTriggerAction*, uObject*, ::g::Fuse::Node*))NavigateToggle__Perform1_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Navigation.INavigation ctx, Fuse.Node n) :4140
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* ind1;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Fuse::Visual* page = ::g::Fuse::Navigation::Navigation::TryFindPage1((ind1 = __this->Target(), (ind1 != NULL) ? ind1 : v));

    if (page != NULL)
        ::g::Fuse::Navigation::INavigation::Toggle(uInterface(uPtr(ctx), ::TYPES[0/*Fuse.Navigation.INavigation*/]), page);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[10/*"No Page was...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 4149, ::STRINGS[2/*"Perform"*/]);
}

// public generated Fuse.Visual get_Target() :4138
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :4138
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public generated Fuse.Visual get_Target() [instance] :4138
::g::Fuse::Visual* NavigateToggle::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :4138
void NavigateToggle::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public interfacemodifiers class Navigation :819
// {
// static Navigation() :819
static void Navigation__cctor__fn(uType* __type)
{
    Navigation::_contextHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Navigation_build(uType* type)
{
    ::STRINGS[11] = uString::Const("TryFindBaseNavigation requires rooting to have started");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[12] = uString::Const("TryFindBaseNavigation");
    ::STRINGS[13] = uString::Const("TryFindPage requires rooting to have started");
    ::STRINGS[14] = uString::Const("TryFindPage");
    ::STRINGS[15] = uString::Const("`Page` set to a value that is not within an navigation");
    ::TYPES[10] = ::g::Fuse::Navigation::IBaseNavigation_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::Navigation::_contextHandle_, uFieldFlagsStatic);
}

uType* Navigation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Navigation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Navigation", options);
    type->fp_build_ = Navigation_build;
    type->fp_cctor_ = Navigation__cctor__fn;
    return type;
}

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) :821
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::GetLocalNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) :974
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval)
{
    *__retval = Navigation::GetNavigationNavigation(n);
}

// public static bool IsPage(Fuse.Node n) :988
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval)
{
    *__retval = Navigation::IsPage(n);
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) :840
void Navigation__TryFind_fn(::g::Fuse::Visual* node, uObject** __retval)
{
    *__retval = Navigation::TryFind(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) :874
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation(node);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) :847
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval)
{
    *__retval = Navigation::TryFindBaseNavigation1(node, parent);
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) :905
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage(node, nav, pageBind);
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) :884
void Navigation__TryFindPage1_fn(::g::Fuse::Visual* node, ::g::Fuse::Visual** __retval)
{
    *__retval = Navigation::TryFindPage1(node);
}

uSStrong< ::g::Fuse::PropertyHandle*> Navigation::_contextHandle_;

// internal static Fuse.Navigation.IBaseNavigation GetLocalNavigation(Fuse.Visual node) [static] :821
uObject* Navigation::GetLocalNavigation(::g::Fuse::Visual* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Node* ret1;
    uObject* n = Navigation::GetNavigationNavigation(node);

    if (n != NULL)
        return n;

    uObject* t = uAs<uObject*>(node, ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/]);

    if (t != NULL)
        return t;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        uObject* c = uAs<uObject*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(node)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret1), ret1), ::TYPES[10/*Fuse.Navigation.IBaseNavigation*/]);

        if ((c != NULL) && !uIs(c, ::TYPES[1/*Fuse.Visual*/]))
            return c;
    }

    return NULL;
}

// public static Fuse.Navigation.IBaseNavigation GetNavigationNavigation(Fuse.Visual n) [static] :974
uObject* Navigation::GetNavigationNavigation(::g::Fuse::Visual* n)
{
    Navigation_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Navigation::_contextHandle(), &v))
        return (uObject*)v;

    return NULL;
}

// public static bool IsPage(Fuse.Node n) [static] :988
bool Navigation::IsPage(::g::Fuse::Node* n)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return false;

    return uPtr(v)->LayoutRole() == 0;
}

// public static Fuse.Navigation.INavigation TryFind(Fuse.Visual node) [static] :840
uObject* Navigation::TryFind(::g::Fuse::Visual* node)
{
    Navigation_typeof()->Init();
    return uAs<uObject*>(Navigation::TryFindBaseNavigation(node), ::TYPES[0/*Fuse.Navigation.INavigation*/]);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node) [static] :874
uObject* Navigation::TryFindBaseNavigation(::g::Fuse::Node* node)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* v;
    return Navigation::TryFindBaseNavigation1(node, &v);
}

// public static Fuse.Navigation.IBaseNavigation TryFindBaseNavigation(Fuse.Node node, Fuse.Visual& parent) [static] :847
uObject* Navigation::TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent)
{
    Navigation_typeof()->Init();
    *parent = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[11/*"TryFindBase...*/], node, ::STRINGS[1/*"C:\\Users\\...*/], 852, ::STRINGS[12/*"TryFindBase...*/]);
        return NULL;
    }

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[1/*Fuse.Visual*/]);

        if (v != NULL)
        {
            uObject* n = Navigation::GetLocalNavigation(v);

            if (n != NULL)
            {
                *parent = v;
                return n;
            }
        }

        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// internal static Fuse.Visual TryFindPage(Fuse.Node node, Fuse.Navigation.INavigation& nav, Fuse.Visual& pageBind) [static] :905
::g::Fuse::Visual* Navigation::TryFindPage(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind)
{
    Navigation_typeof()->Init();
    ::g::Fuse::Visual* prev = uAs< ::g::Fuse::Visual*>(node, ::TYPES[1/*Fuse.Visual*/]);
    *nav = NULL;
    *pageBind = NULL;

    if (!uPtr(node)->IsRootingStarted())
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[13/*"TryFindPage...*/], node, ::STRINGS[1/*"C:\\Users\\...*/], 913, ::STRINGS[14/*"TryFindPage"*/]);
        return NULL;
    }

    bool first = true;

    while (node != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[1/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* p = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (p != NULL)
            {
                *pageBind = v;

                if (uPtr(p)->IsRootingStarted())
                {
                    *nav = Navigation::TryFind(p);

                    if (*nav == NULL)
                    {
                        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[15/*"`Page` set ...*/], p, ::STRINGS[1/*"C:\\Users\\...*/], 934, ::STRINGS[14/*"TryFindPage"*/]);
                        return NULL;
                    }
                }

                return p;
            }

            if (!first)
            {
                uObject* n = Navigation::GetLocalNavigation(v);

                if (n != NULL)
                {
                    *nav = uAs<uObject*>(n, ::TYPES[0/*Fuse.Navigation.INavigation*/]);

                    if (*nav == NULL)
                        return NULL;

                    return prev;
                }
            }

            prev = v;
        }

        first = false;
        node = uPtr(node)->ContextParent();
    }

    return NULL;
}

// public static Fuse.Visual TryFindPage(Fuse.Visual node) [static] :884
::g::Fuse::Visual* Navigation::TryFindPage1(::g::Fuse::Visual* node)
{
    Navigation_typeof()->Init();
    uObject* nav;
    ::g::Fuse::Visual* bind;
    return Navigation::TryFindPage(node, &nav, &bind);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class NavigationAnimation :1151
// {
static void NavigationAnimation_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[16] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(NavigationAnimation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(NavigationAnimation_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(NavigationAnimation_type, interface4));
    type->SetFields(30,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delay), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delayProgress), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _delayVariant), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation, _scale), 0);
}

NavigationAnimation_type* NavigationAnimation_typeof()
{
    static uSStrong<NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(NavigationAnimation);
    options.TypeSize = sizeof(NavigationAnimation_type);
    type = (NavigationAnimation_type*)uClassType::New("Fuse.Navigation.NavigationAnimation", options);
    type->fp_build_ = NavigationAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))NavigationAnimation__OnUnrooted_fn;
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

// internal NavigationAnimation() :1153
void NavigationAnimation__ctor_5_fn(NavigationAnimation* __this)
{
    __this->ctor_5();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) :1207
void NavigationAnimation__GoProgress_fn(NavigationAnimation* __this, double* p, int* variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(*p, *variant, state);
}

// private void GoProgressPlay() :1236
void NavigationAnimation__GoProgressPlay_fn(NavigationAnimation* __this)
{
    __this->GoProgressPlay();
}

// protected Fuse.Navigation.INavigation get_NavContext() :1156
void NavigationAnimation__get_NavContext_fn(NavigationAnimation* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :1166
void NavigationAnimation__NavReady_fn(NavigationAnimation* __this)
{
    __this->NavReady();
}

// private void NavUnready() :1180
void NavigationAnimation__NavUnready_fn(NavigationAnimation* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :1159
void NavigationAnimation__OnRooted_fn(NavigationAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationAnimation__NavReady_fn, __this), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationAnimation__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :1172
void NavigationAnimation__OnUnrooted_fn(NavigationAnimation* __this)
{
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    __this->_delay = false;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :1155
void NavigationAnimation__get_PageContext_fn(NavigationAnimation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Scale() :1200
void NavigationAnimation__get_Scale_fn(NavigationAnimation* __this, float* __retval)
{
    *__retval = __this->Scale();
}

// public void set_Scale(float value) :1201
void NavigationAnimation__set_Scale_fn(NavigationAnimation* __this, float* value)
{
    __this->Scale(*value);
}

// internal NavigationAnimation() [instance] :1153
void NavigationAnimation::ctor_5()
{
    _scale = 1.0f;
    ctor_4();
}

// internal void GoProgress(double p, Fuse.Animations.AnimationVariant variant, Fuse.Navigation.NavigationArgs state) [instance] :1207
void NavigationAnimation::GoProgress(double p, int variant, ::g::Fuse::Navigation::NavigationArgs* state)
{
    if (uPtr(state)->Mode() == 0)
    {
        _delayVariant = variant;
        _delayProgress = p;

        if (!_delay)
        {
            _delay = true;
            ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationAnimation__GoProgressPlay_fn, this), 0);
        }
    }
    else if (uPtr(state)->Mode() == 2)
    {
        _delay = false;
        DirectSeek(p, variant);
    }
    else
    {
        _delay = false;
        BypassSeek(p, variant);
    }
}

// private void GoProgressPlay() [instance] :1236
void NavigationAnimation::GoProgressPlay()
{
    if (!_delay)
        return;

    _delay = false;
    PlayTo(_delayProgress, _delayVariant);
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :1156
uObject* NavigationAnimation::NavContext()
{
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :1166
void NavigationAnimation::NavReady()
{
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[16/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :1180
void NavigationAnimation::NavUnready()
{
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[16/*Fuse.Navigation.NavigationHandler*/], this, offsetof(NavigationAnimation_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :1155
::g::Fuse::Visual* NavigationAnimation::PageContext()
{
    return uPtr(_proxy)->Page();
}

// public float get_Scale() [instance] :1200
float NavigationAnimation::Scale()
{
    return _scale;
}

// public void set_Scale(float value) [instance] :1201
void NavigationAnimation::Scale(float value)
{
    _scale = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class NavigationArgs :777
// {
static void NavigationArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Navigation::NavigationMode_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Mode), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _PreviousProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::NavigationArgs, _Progress), 0);
}

uType* NavigationArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NavigationArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.NavigationArgs", options);
    type->fp_build_ = NavigationArgs_build;
    return type;
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :783
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int* mode)
{
    __this->ctor_1(*progress, *prevProgress, *mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() :779
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) :779
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int* value)
{
    __this->Mode(*value);
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) :783
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int* mode, NavigationArgs** __retval)
{
    *__retval = NavigationArgs::New2(*progress, *prevProgress, *mode);
}

// public generated double get_PreviousProgress() :781
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->PreviousProgress();
}

// private generated void set_PreviousProgress(double value) :781
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value)
{
    __this->PreviousProgress(*value);
}

// public generated double get_Progress() :780
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private generated void set_Progress(double value) :780
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value)
{
    __this->Progress(*value);
}

// public NavigationArgs(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [instance] :783
void NavigationArgs::ctor_1(double progress, double prevProgress, int mode)
{
    ctor_();
    Progress(progress);
    PreviousProgress(prevProgress);
    Mode(mode);
}

// public generated Fuse.Navigation.NavigationMode get_Mode() [instance] :779
int NavigationArgs::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Navigation.NavigationMode value) [instance] :779
void NavigationArgs::Mode(int value)
{
    _Mode = value;
}

// public generated double get_PreviousProgress() [instance] :781
double NavigationArgs::PreviousProgress()
{
    return _PreviousProgress;
}

// private generated void set_PreviousProgress(double value) [instance] :781
void NavigationArgs::PreviousProgress(double value)
{
    _PreviousProgress = value;
}

// public generated double get_Progress() [instance] :780
double NavigationArgs::Progress()
{
    return _Progress;
}

// private generated void set_Progress(double value) [instance] :780
void NavigationArgs::Progress(double value)
{
    _Progress = value;
}

// public NavigationArgs New(double progress, double prevProgress, [Fuse.Navigation.NavigationMode mode]) [static] :783
NavigationArgs* NavigationArgs::New2(double progress, double prevProgress, int mode)
{
    NavigationArgs* obj1 = (NavigationArgs*)uNew(NavigationArgs_typeof());
    obj1->ctor_1(progress, prevProgress, mode);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum NavigationEdge :286
uEnumType* NavigationEdge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationEdge", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "None", 4LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum NavigationGotoMode :609
uEnumType* NavigationGotoMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationGotoMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Transition", 0LL,
        "Bypass", 1LL,
        "Prepare", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public delegate void NavigationHandler(object sender, Fuse.Navigation.NavigationArgs state) :792
uDelegateType* NavigationHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Navigation::NavigationArgs_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum NavigationMode :770
uEnumType* NavigationMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Switch", 0LL,
        "Bypass", 1LL,
        "Seek", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public delegate void NavigationPageCountHandler(object sender) :640
uDelegateType* NavigationPageCountHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Navigation.NavigationPageCountHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public static class NavigationPageProperty :1620
// {
// static NavigationPageProperty() :1620
static void NavigationPageProperty__cctor__fn(uType* __type)
{
    NavigationPageProperty::_pageProperty_ = ::g::Fuse::Properties::CreateHandle();
    NavigationPageProperty::RootedBindings_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[17/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/]));
    NavigationPageProperty::_watchers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/]));
}

static void NavigationPageProperty_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPageResourceBinding_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[19] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::IPagePropertyListener_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_pageProperty_, uFieldFlagsStatic,
        ::TYPES[18/*Uno.Collections.Dictionary<Fuse.Visual, Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>>*/], (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::_watchers_, uFieldFlagsStatic,
        ::TYPES[17/*Uno.Collections.List<Fuse.Navigation.IPageResourceBinding>*/], (uintptr_t)&::g::Fuse::Navigation::NavigationPageProperty::RootedBindings_, uFieldFlagsStatic);
}

uClassType* NavigationPageProperty_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Navigation.NavigationPageProperty", options);
    type->fp_build_ = NavigationPageProperty_build;
    type->fp_cctor_ = NavigationPageProperty__cctor__fn;
    return type;
}

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1643
void NavigationPageProperty__AddPageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::AddPageWatcher(where, callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) :1697
void NavigationPageProperty__GetNavigationPage_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = NavigationPageProperty::GetNavigationPage(n);
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) :1629
void NavigationPageProperty__GetWatcherList_fn(::g::Fuse::Visual* where, bool* optional, ::g::Uno::Collections::List** __retval)
{
    *__retval = NavigationPageProperty::GetWatcherList(where, *optional);
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) :1648
void NavigationPageProperty__RemovePageWatcher_fn(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty::RemovePageWatcher(where, callback);
}

uSStrong< ::g::Fuse::PropertyHandle*> NavigationPageProperty::_pageProperty_;
uSStrong< ::g::Uno::Collections::Dictionary*> NavigationPageProperty::_watchers_;
uSStrong< ::g::Uno::Collections::List*> NavigationPageProperty::RootedBindings_;

// internal static void AddPageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1643
void NavigationPageProperty::AddPageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(NavigationPageProperty::GetWatcherList(where, false)), callback);
}

// public static Fuse.Visual GetNavigationPage(Fuse.Visual n) [static] :1697
::g::Fuse::Visual* NavigationPageProperty::GetNavigationPage(::g::Fuse::Visual* n)
{
    NavigationPageProperty_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(NavigationPageProperty::_pageProperty(), &v))
        return uCast< ::g::Fuse::Visual*>(v, ::TYPES[1/*Fuse.Visual*/]);

    return NULL;
}

// private static Uno.Collections.List<Fuse.Navigation.IPagePropertyListener> GetWatcherList(Fuse.Visual where, [bool optional]) [static] :1629
::g::Uno::Collections::List* NavigationPageProperty::GetWatcherList(::g::Fuse::Visual* where, bool optional)
{
    NavigationPageProperty_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* o;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(NavigationPageProperty::_watchers()), where, (void**)(&o), &ret2), ret2))
        return o;

    if (optional)
        return NULL;

    ::g::Uno::Collections::List* q = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[19/*Uno.Collections.List<Fuse.Navigation.IPagePropertyListener>*/]);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NavigationPageProperty::_watchers()), where, q);
    return q;
}

// internal static void RemovePageWatcher(Fuse.Visual where, Fuse.Navigation.IPagePropertyListener callback) [static] :1648
void NavigationPageProperty::RemovePageWatcher(::g::Fuse::Visual* where, uObject* callback)
{
    NavigationPageProperty_typeof()->Init();
    bool ret3;
    bool ret4;
    ::g::Uno::Collections::List* list = NavigationPageProperty::GetWatcherList(where, true);

    if (list == NULL)
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(list), callback, &ret3);

    if (list->Count() == 0)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NavigationPageProperty::_watchers()), where, &ret4);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class NavigationPageProxy :1000
// {
static void NavigationPageProxy_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Got an undesired ready event");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[17] = uString::Const("OnPageRootingCompleted");
    ::STRINGS[18] = uString::Const("Attempting rooting to null source");
    ::STRINGS[19] = uString::Const("Rooted");
    ::STRINGS[20] = uString::Const("Unable to locate Page");
    ::STRINGS[21] = uString::Const("Something went wrong locating a Navigator");
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Navigation::IPagePropertyListener_typeof(), offsetof(NavigationPageProxy_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _navigation), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _pageBind), 0,
        ::TYPES[15/*Uno.Action*/], offsetof(::g::Fuse::Navigation::NavigationPageProxy, _ready), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _source), 0,
        ::TYPES[15/*Uno.Action*/], offsetof(::g::Fuse::Navigation::NavigationPageProxy, _unready), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _waitRootingCompleted), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageProxy, _Page), 0);
}

NavigationPageProxy_type* NavigationPageProxy_typeof()
{
    static uSStrong<NavigationPageProxy_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NavigationPageProxy);
    options.TypeSize = sizeof(NavigationPageProxy_type);
    type = (NavigationPageProxy_type*)uClassType::New("Fuse.Navigation.NavigationPageProxy", options);
    type->fp_build_ = NavigationPageProxy_build;
    return type;
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) :1016
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready)
{
    __this->ctor_(ready, unready);
}

// public Fuse.Navigation.INavigation get_Navigation() :1009
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) :1016
void NavigationPageProxy__New1_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval)
{
    *__retval = NavigationPageProxy::New1(ready, unready);
}

// private void OnPageRootingCompleted() :1060
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this)
{
    __this->OnPageRootingCompleted();
}

// public generated Fuse.Visual get_Page() :1006
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Page();
}

// private generated void set_Page(Fuse.Visual value) :1006
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value)
{
    __this->Page(value);
}

// public void Rooted(Fuse.Visual source) :1022
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source)
{
    __this->Rooted(source);
}

// public void Unrooted() :1074
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this)
{
    __this->Unrooted();
}

// public NavigationPageProxy(Uno.Action ready, Uno.Action unready) [instance] :1016
void NavigationPageProxy::ctor_(uDelegate* ready, uDelegate* unready)
{
    _ready = ready;
    _unready = unready;
}

// public Fuse.Navigation.INavigation get_Navigation() [instance] :1009
uObject* NavigationPageProxy::Navigation()
{
    return _navigation;
}

// private void OnPageRootingCompleted() [instance] :1060
void NavigationPageProxy::OnPageRootingCompleted()
{
    if ((!_waitRootingCompleted || (Page() == NULL)) || (_source == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[16/*"Got an unde...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1064, ::STRINGS[17/*"OnPageRooti...*/]);
        return;
    }

    uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
    _waitRootingCompleted = false;
    Rooted(_source);
}

// public generated Fuse.Visual get_Page() [instance] :1006
::g::Fuse::Visual* NavigationPageProxy::Page()
{
    return _Page;
}

// private generated void set_Page(Fuse.Visual value) [instance] :1006
void NavigationPageProxy::Page(::g::Fuse::Visual* value)
{
    _Page = value;
}

// public void Rooted(Fuse.Visual source) [instance] :1022
void NavigationPageProxy::Rooted(::g::Fuse::Visual* source)
{
    _source = source;

    if (_source == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[18/*"Attempting ...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1027, ::STRINGS[19/*"Rooted"*/]);
        return;
    }

    Page(::g::Fuse::Navigation::Navigation::TryFindPage(_source, &_navigation, &_pageBind));

    if (Page() == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[20/*"Unable to l...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1034, ::STRINGS[19/*"Rooted"*/]);
        return;
    }

    if (!uPtr(Page())->IsRootingStarted())
    {
        uPtr(Page())->add_RootingCompleted(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
        _waitRootingCompleted = true;
        _navigation = NULL;
        _pageBind = NULL;
        return;
    }

    if (_navigation == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[21/*"Something w...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1051, ::STRINGS[19/*"Rooted"*/]);
        return;
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::AddPageWatcher(_pageBind, (uObject*)this);

    uPtr(_ready)->InvokeVoid();
}

// public void Unrooted() [instance] :1074
void NavigationPageProxy::Unrooted()
{
    if (Page() != NULL)
    {
        if (_navigation != NULL)
            uPtr(_unready)->InvokeVoid();

        if (_waitRootingCompleted)
        {
            uPtr(Page())->remove_RootingCompleted(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)NavigationPageProxy__OnPageRootingCompleted_fn, this));
            _waitRootingCompleted = false;
        }
    }

    if (_pageBind != NULL)
        ::g::Fuse::Navigation::NavigationPageProperty::RemovePageWatcher(_pageBind, (uObject*)this);

    Page(NULL);
    _navigation = NULL;
    _source = NULL;
}

// public NavigationPageProxy New(Uno.Action ready, Uno.Action unready) [static] :1016
NavigationPageProxy* NavigationPageProxy::New1(uDelegate* ready, uDelegate* unready)
{
    NavigationPageProxy* obj1 = (NavigationPageProxy*)uNew(NavigationPageProxy_typeof());
    obj1->ctor_(ready, unready);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public struct NavigationPageState :657
// {
static void NavigationPageState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, Progress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::NavigationPageState, PreviousProgress), 0);
}

uStructType* NavigationPageState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(NavigationPageState);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Navigation.NavigationPageState", options);
    type->fp_build_ = NavigationPageState_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum NavigationState :794
uEnumType* NavigationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.NavigationState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Stable", 0LL,
        "Seek", 1LL,
        "Transition", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal enum StructuredNavigation.NavigationStructure :3081
uEnumType* StructuredNavigation__NavigationStructure_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.StructuredNavigation.NavigationStructure", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Hierarchical", 1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class NavigationTriggerAction :4033
// {
static void NavigationTriggerAction_build(uType* type)
{
    ::STRINGS[22] = uString::Const("No navigation context was found");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetFields(8,
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(::g::Fuse::Navigation::NavigationTriggerAction, _NavigationContext), 0);
}

NavigationTriggerAction_type* NavigationTriggerAction_typeof()
{
    static uSStrong<NavigationTriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(NavigationTriggerAction);
    options.TypeSize = sizeof(NavigationTriggerAction_type);
    type = (NavigationTriggerAction_type*)uClassType::New("Fuse.Navigation.NavigationTriggerAction", options);
    type->fp_build_ = NavigationTriggerAction_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))NavigationTriggerAction__Perform_fn;
    return type;
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() :4035
void NavigationTriggerAction__get_NavigationContext_fn(NavigationTriggerAction* __this, uObject** __retval)
{
    *__retval = __this->NavigationContext();
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) :4035
void NavigationTriggerAction__set_NavigationContext_fn(NavigationTriggerAction* __this, uObject* value)
{
    __this->NavigationContext(value);
}

// protected override sealed void Perform(Fuse.Node n) :4037
void NavigationTriggerAction__Perform_fn(NavigationTriggerAction* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    uObject* ind1 = __this->NavigationContext();
    uObject* ctx = (ind1 != NULL) ? ind1 : (uObject*)::g::Fuse::Navigation::Navigation::TryFind(v);

    if (ctx == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[22/*"No navigati...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 4045, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    __this->Perform1(ctx, n);
}

// public generated Fuse.Navigation.INavigation get_NavigationContext() [instance] :4035
uObject* NavigationTriggerAction::NavigationContext()
{
    return _NavigationContext;
}

// public generated void set_NavigationContext(Fuse.Navigation.INavigation value) [instance] :4035
void NavigationTriggerAction::NavigationContext(uObject* value)
{
    _NavigationContext = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum OutletType :710
uEnumType* OutletType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.OutletType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Outlet", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class VisualNavigation.PageData :4380
// {
static void VisualNavigation__PageData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, PreviousProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, Progress), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation__PageData, _Visual), 0);
}

uType* VisualNavigation__PageData_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(VisualNavigation__PageData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.VisualNavigation.PageData", options);
    type->fp_build_ = VisualNavigation__PageData_build;
    return type;
}

// public PageData(Fuse.Visual visual) :4388
void VisualNavigation__PageData__ctor__fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_(visual);
}

// public PageData New(Fuse.Visual visual) :4388
void VisualNavigation__PageData__New1_fn(::g::Fuse::Visual* visual, VisualNavigation__PageData** __retval)
{
    *__retval = VisualNavigation__PageData::New1(visual);
}

// public generated Fuse.Visual get_Visual() :4382
void VisualNavigation__PageData__get_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :4382
void VisualNavigation__PageData__set_Visual_fn(VisualNavigation__PageData* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public PageData(Fuse.Visual visual) [instance] :4388
void VisualNavigation__PageData::ctor_(::g::Fuse::Visual* visual)
{
    Visual(visual);
}

// public generated Fuse.Visual get_Visual() [instance] :4382
::g::Fuse::Visual* VisualNavigation__PageData::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :4382
void VisualNavigation__PageData::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public PageData New(Fuse.Visual visual) [static] :4388
VisualNavigation__PageData* VisualNavigation__PageData::New1(::g::Fuse::Visual* visual)
{
    VisualNavigation__PageData* obj1 = (VisualNavigation__PageData*)uNew(VisualNavigation__PageData_typeof());
    obj1->ctor_(visual);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class PageResourceBinding<T> :1456
// {
static void PageResourceBinding_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Visual");
    ::STRINGS[24] = uString::Const("Node");
    ::TYPES[20] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[21] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(PageResourceBinding_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(PageResourceBinding_type, interface3),
        ::g::Fuse::Navigation::IPageResourceBinding_typeof(), offsetof(PageResourceBinding_type, interface4));
    type->SetFields(13,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::PageResourceBinding, _currentPage), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _hasDefault), 0,
        ::TYPES[0/*Fuse.Navigation.INavigation*/], offsetof(::g::Fuse::Navigation::PageResourceBinding, _nav), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Key), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Navigation::PageResourceBinding, _Target), 0);
}

PageResourceBinding_type* PageResourceBinding_typeof()
{
    static uSStrong<PageResourceBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 19;
    options.GenericCount = 1;
    options.InterfaceCount = 5;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PageResourceBinding);
    options.TypeSize = sizeof(PageResourceBinding_type);
    type = (PageResourceBinding_type*)uClassType::New("Fuse.Navigation.PageResourceBinding`1", options);
    type->fp_build_ = PageResourceBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))PageResourceBinding__OnUnrooted_fn;
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

// private bool Acceptor(object obj) :1609
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private void GotoPage(Fuse.Visual page) :1579
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page)
{
    __this->GotoPage(page);
}

// public generated string get_Key() :1462
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :1462
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value)
{
    __this->Key(value);
}

// private object get_LocalObject() :1550
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval)
{
    *__retval = __this->LocalObject();
}

// private void OnChanged() :1588
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this)
{
    __this->OnChanged();
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) :1574
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    __this->OnNavigated(s, args);
}

// protected override sealed void OnRooted() :1498
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Uno::Collections::List__Add_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this);
    __this->UpdateSource();
}

// protected override sealed void OnUnrooted() :1539
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this)
{
    bool ret2;
    __this->ReleaseCurrent();
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Fuse::Navigation::NavigationPageProperty::RootedBindings()), (uObject*)__this, &ret2);
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->Key(), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)PageResourceBinding__OnChanged_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseCurrent() :1529
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this)
{
    __this->ReleaseCurrent();
}

// public generated Uno.UX.Property<T> get_Target() :1459
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :1459
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void UpdateSource() :1507
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this)
{
    __this->UpdateSource();
}

// private bool Acceptor(object obj) [instance] :1609
bool PageResourceBinding::Acceptor(uObject* obj)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(obj, __types[0]);
}

// private void GotoPage(Fuse.Visual page) [instance] :1579
void PageResourceBinding::GotoPage(::g::Fuse::Visual* page)
{
    if (page == _currentPage)
        return;

    _currentPage = page;
    OnChanged();
}

// public generated string get_Key() [instance] :1462
uString* PageResourceBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :1462
void PageResourceBinding::Key(uString* value)
{
    _Key = value;
}

// private object get_LocalObject() [instance] :1550
uObject* PageResourceBinding::LocalObject()
{
    ::g::Fuse::Node* n = Parent();

    while (n != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

        if (v != NULL)
        {
            ::g::Fuse::Visual* page = ::g::Fuse::Navigation::NavigationPageProperty::GetNavigationPage(v);

            if (page != NULL)
                return page;

            uObject* navi = ::g::Fuse::Navigation::Navigation::GetLocalNavigation(v);

            if (navi != NULL)
                return navi;
        }

        n = uPtr(n)->ContextParent();
    }

    return NULL;
}

// private void OnChanged() [instance] :1588
void PageResourceBinding::OnChanged()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    ::g::Fuse::Visual* page = _currentPage;

    if (page != NULL)
    {
        if ((::g::Uno::String::op_Equality(Key(), ::STRINGS[23/*"Visual"*/]) || ::g::Uno::String::op_Equality(Key(), ::STRINGS[24/*"Node"*/])) && uIs(page, __types[0]))
            uPtr(Target())->Set_ex(uUnboxAny(__types[0], page), NULL);
        else
        {
            uObject* resource;

            if (uPtr(page)->TryGetResource(Key(), uDelegate::New(::TYPES[20/*Uno.Predicate<object>*/], (void*)PageResourceBinding__Acceptor_fn, this), &resource))
                uPtr(Target())->Set_ex(uUnboxAny(__types[0], resource), NULL);
            else if (_hasDefault)
                uPtr(Target())->Set_ex(_default(), NULL);
        }
    }
}

// private void OnNavigated(object s, Fuse.Navigation.NavigatedArgs args) [instance] :1574
void PageResourceBinding::OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args)
{
    GotoPage(uPtr(args)->NewVisual());
}

// private void ReleaseCurrent() [instance] :1529
void PageResourceBinding::ReleaseCurrent()
{
    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        _nav = NULL;
    }

    _currentPage = NULL;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :1459
::g::Uno::UX::Property1* PageResourceBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :1459
void PageResourceBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void UpdateSource() [instance] :1507
void PageResourceBinding::UpdateSource()
{
    uObject* local = LocalObject();

    if ((local == _nav) || (local == _currentPage))
        return;

    ReleaseCurrent();
    _nav = uAs<uObject*>(local, ::TYPES[0/*Fuse.Navigation.INavigation*/]);
    _currentPage = uAs< ::g::Fuse::Visual*>(local, ::TYPES[1/*Fuse.Visual*/]);

    if (_nav != NULL)
    {
        ::g::Fuse::Navigation::INavigation::add_Navigated(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[21/*Fuse.Navigation.NavigatedHandler*/], (void*)PageResourceBinding__OnNavigated_fn, this));
        GotoPage(::g::Fuse::Navigation::INavigation::ActivePage(uInterface(uPtr(_nav), ::TYPES[0/*Fuse.Navigation.INavigation*/])));
    }
    else
        OnChanged();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class Route :1729
// {
static void Route_build(uType* type)
{
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[25] = uString::Const("?");
    ::STRINGS[26] = uString::Const("/");
    ::STRINGS[27] = uString::Const("count can't be < 0");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[28] = uString::Const("SubDepth");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Parameter), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::Route, Path), 0,
        type, offsetof(::g::Fuse::Navigation::Route, SubRoute), 0);
}

uType* Route_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Route);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.Route", options);
    type->fp_build_ = Route_build;
    return type;
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1746
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute)
{
    __this->ctor_(path, parameter, subRoute);
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) :1764
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval)
{
    *__retval = __this->Append(subRoute);
}

// internal string Format() :1788
void Route__Format_fn(Route* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// public int get_Length() :1756
void Route__get_Length_fn(Route* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) :1746
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval)
{
    *__retval = Route::New1(path, parameter, subRoute);
}

// internal Fuse.Navigation.Route SubDepth(int count) :1880
void Route__SubDepth_fn(Route* __this, int* count, Route** __retval)
{
    *__retval = __this->SubDepth(*count);
}

// internal Fuse.Navigation.Route Up() :1776
void Route__Up_fn(Route* __this, Route** __retval)
{
    *__retval = __this->Up();
}

// public Route(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [instance] :1746
void Route::ctor_(uString* path, uString* parameter, Route* subRoute)
{
    Path = path;
    Parameter = parameter;
    SubRoute = subRoute;
}

// public Fuse.Navigation.Route Append(Fuse.Navigation.Route subRoute) [instance] :1764
Route* Route::Append(Route* subRoute)
{
    Route* sub = (SubRoute == NULL) ? subRoute : (Route*)uPtr(SubRoute)->Append(subRoute);
    return Route::New1(Path, Parameter, sub);
}

// internal string Format() [instance] :1788
uString* Route::Format()
{
    uString* ind1 = Path;
    uString* q = (ind1 != NULL) ? ind1 : ::STRINGS[9/*""*/];

    if (::g::Uno::String::op_Inequality(Parameter, NULL))
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[25/*"?"*/], Parameter));

    if (SubRoute != NULL)
        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::String::op_Addition2(::STRINGS[26/*"/"*/], uPtr(SubRoute)->Format()));

    return q;
}

// public int get_Length() [instance] :1756
int Route::Length()
{
    if (SubRoute == NULL)
        return 1;
    else
        return uPtr(SubRoute)->Length() + 1;
}

// internal Fuse.Navigation.Route SubDepth(int count) [instance] :1880
Route* Route::SubDepth(int count)
{
    if (count < 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[27/*"count can't...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1884, ::STRINGS[28/*"SubDepth"*/]);
        return NULL;
    }

    if (count == 0)
        return this;

    if (SubRoute == NULL)
        return NULL;

    return uPtr(SubRoute)->SubDepth(count - 1);
}

// internal Fuse.Navigation.Route Up() [instance] :1776
Route* Route::Up()
{
    if (SubRoute == NULL)
        return this;
    else if (uPtr(SubRoute)->SubRoute == NULL)
        return Route::New1(Path, Parameter, NULL);

    return Route::New1(Path, Parameter, uPtr(SubRoute)->Up());
}

// public Route New(string path, [string parameter], [Fuse.Navigation.Route subRoute]) [static] :1746
Route* Route::New1(uString* path, uString* parameter, Route* subRoute)
{
    Route* obj3 = (Route*)uNew(Route_typeof());
    obj3->ctor_(path, parameter, subRoute);
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public partial sealed class Router :1906
// {
// static Router() :1908
static void Router__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[23/*Fuse.Scripting.ScriptMember[]*/], 8, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[29/*"bookmark"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Bookmark_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[30/*"getRoute"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GetRoute_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[31/*"goBack"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GoBack1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[32/*"goto"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Goto1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[33/*"gotoRelative"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__GotoRelative_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[34/*"modify"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Modify1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[35/*"push"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__Push1_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[24/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.Router>*/], ::STRINGS[36/*"pushRelative"*/], uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.Router, object[]>*/], (void*)Router__PushRelative_fn), 2)));
}

static void Router_build(uType* type)
{
    ::STRINGS[29] = uString::Const("bookmark");
    ::STRINGS[30] = uString::Const("getRoute");
    ::STRINGS[31] = uString::Const("goBack");
    ::STRINGS[32] = uString::Const("goto");
    ::STRINGS[33] = uString::Const("gotoRelative");
    ::STRINGS[34] = uString::Const("modify");
    ::STRINGS[35] = uString::Const("push");
    ::STRINGS[36] = uString::Const("pushRelative");
    ::STRINGS[37] = uString::Const("`Router.bookmark` takes one argument");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[38] = uString::Const("Bookmark");
    ::STRINGS[39] = uString::Const("`Router.bookmark` should be passed an object");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[40] = uString::Const("relative");
    ::STRINGS[41] = uString::Const("Could not find an outlet from the `relative` node");
    ::STRINGS[42] = uString::Const("path");
    ::STRINGS[43] = uString::Const("`path` should be an array");
    ::STRINGS[44] = uString::Const("Unrecognized argument: ");
    ::STRINGS[45] = uString::Const("A `name` is required for the bookmark");
    ::STRINGS[46] = uString::Const("No active navigation that can be cancelled");
    ::STRINGS[47] = uString::Const("CancelNavigation");
    ::STRINGS[48] = uString::Const("Router.gotoRelative(): requires 1+ parameters");
    ::STRINGS[49] = uString::Const("GetRelative");
    ::STRINGS[50] = uString::Const("Router.gotoRelative(): did not find an outlet from the provided Node");
    ::STRINGS[51] = uString::Const("Router.getRoute(): must provide exactly 1 argument.");
    ::STRINGS[52] = uString::Const("GetRoute");
    ::STRINGS[53] = uString::Const("Router.getRoute(): argument must be a function.");
    ::STRINGS[54] = uString::Const("Router.goBack takes no parameters");
    ::STRINGS[55] = uString::Const("GoBack");
    ::STRINGS[56] = uString::Const("Router.goto(): invalid route provided");
    ::STRINGS[57] = uString::Const("Goto");
    ::STRINGS[58] = uString::Const("PrepareBack does not support an explicit route");
    ::STRINGS[59] = uString::Const("Modify");
    ::STRINGS[60] = uString::Const("There is no history for PrepareBack");
    ::STRINGS[61] = uString::Const("`Router.modify` takes one argument");
    ::STRINGS[62] = uString::Const("`Router.modify` should be passed an object");
    ::STRINGS[63] = uString::Const("how");
    ::STRINGS[64] = uString::Const("transition");
    ::STRINGS[65] = uString::Const("Unknown bookmark: ");
    ::STRINGS[66] = uString::Const("Cannot pop() - history is empty");
    ::STRINGS[67] = uString::Const("Pop");
    ::STRINGS[68] = uString::Const("Invalid outlet depth in prepare progress");
    ::STRINGS[69] = uString::Const("SetPrepareProgress");
    ::STRINGS[70] = uString::Const("Unable to navigate to route: ");
    ::STRINGS[71] = uString::Const("SetRoute");
    ::STRINGS[72] = uString::Const("No router outlet found to handle route: ");
    ::STRINGS[73] = uString::Const("SetRouteImpl");
    ::STRINGS[74] = uString::Const("SubRoute requested but outlet has no active path: ");
    ::STRINGS[75] = uString::Const("Route parameter must be serializeable, it contains reference loops or is too large");
    ::STRINGS[76] = uString::Const("ValidateParameter");
    ::STRINGS[77] = uString::Const("Route parameter must be serializeable, cannot contain Observables.");
    ::STRINGS[78] = uString::Const("Route parameter must be serializeable, cannot contain functions.");
    ::TYPES[22] = ::g::Uno::Type_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[24] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[25] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Navigation::Route_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Navigation::Route_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[29] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Node_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::IArray_typeof();
    ::TYPES[32] = ::g::Fuse::Navigation::IRouterOutlet_typeof();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[30/*Fuse.Node*/], NULL);
    ::TYPES[33] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.ModifyRouteHow>*/, ::g::Fuse::Navigation::ModifyRouteHow_typeof(), NULL);
    ::TYPES[35] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<Fuse.Navigation.NavigationGotoMode>*/, ::g::Fuse::Navigation::NavigationGotoMode_typeof(), NULL);
    ::TYPES[36] = ::g::Fuse::Input::KeyPressedHandler_typeof();
    ::TYPES[9] = uObject_typeof()->Array();
    ::TYPES[37] = ::g::Uno::String_typeof();
    ::TYPES[38] = ::TYPES[1/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Navigation.Router>*/, type, NULL);
    ::TYPES[39] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[40] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Router_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Router_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(Router_type, interface4));
    type->SetFields(13,
        ::g::Fuse::Navigation::BackButtonAction_typeof(), offsetof(::g::Fuse::Navigation::Router, _backButtonAction), 0,
        ::TYPES[27/*Uno.Collections.List<Fuse.Navigation.Route>*/], offsetof(::g::Fuse::Navigation::Router, _history), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::Router, _isMasterRouter), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareCurrent), 0,
        ::g::Fuse::Navigation::Route_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareNext), 0,
        ::g::Fuse::Navigation::RoutingOperation_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareOperation), 0,
        ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/], offsetof(::g::Fuse::Navigation::Router, _prepareOutlet), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::Router, _prepareProgress), 0,
        ::TYPES[26/*Uno.Collections.Dictionary<string, Fuse.Navigation.Route>*/], offsetof(::g::Fuse::Navigation::Router, Bookmarks), 0,
        ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(::g::Fuse::Navigation::Router, HistoryChanged1), 0,
        ::g::Fuse::Navigation::Route_typeof(), (uintptr_t)&::g::Fuse::Navigation::Router::_masterCurrent_, uFieldFlagsStatic,
        ::TYPES[27/*Uno.Collections.List<Fuse.Navigation.Route>*/], (uintptr_t)&::g::Fuse::Navigation::Router::_masterHistory_, uFieldFlagsStatic);
}

Router_type* Router_typeof()
{
    static uSStrong<Router_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Router);
    options.TypeSize = sizeof(Router_type);
    type = (Router_type*)uClassType::New("Fuse.Navigation.Router", options);
    type->fp_build_ = Router_build;
    type->fp_ctor_ = (void*)Router__New2_fn;
    type->fp_cctor_ = Router__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Router__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Router__OnUnrooted_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))Router__FuseNavigationIBaseNavigationGoForward_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))Router__FuseNavigationIBaseNavigationget_CanGoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))Router__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))Router__get_CanGoBack_fn;
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

// public generated Router() :1906
void Router__ctor_2_fn(Router* __this)
{
    __this->ctor_2();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() :2522
void Router__get_BackButtonAction_fn(Router* __this, int* __retval)
{
    *__retval = __this->BackButtonAction();
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) :2523
void Router__set_BackButtonAction_fn(Router* __this, int* value)
{
    __this->BackButtonAction(*value);
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2169
void Router__Bookmark_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Bookmark(c, r, args);
}

// public void CancelNavigation() :2754
void Router__CancelNavigation_fn(Router* __this)
{
    __this->CancelNavigation();
}

// public bool get_CanGoBack() :2633
void Router__get_CanGoBack_fn(Router* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// private void ClearPrepared() :2722
void Router__ClearPrepared_fn(Router* __this)
{
    __this->ClearPrepared();
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) :2885
void Router__FindOutletDown_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletDown(active);
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) :2907
void Router__FindOutletUp_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval)
{
    *__retval = __this->FindOutletUp(active);
}

// private void FinishPrepared() :2695
void Router__FinishPrepared_fn(Router* __this)
{
    __this->FinishPrepared();
}

// private bool Fuse.Navigation.IBaseNavigation.get_CanGoForward() :2936
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.Navigation.IBaseNavigation.GoForward() :2935
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this)
{
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) :2855
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* from, uObject* to, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrent(from, to);
}

// public Fuse.Navigation.Route GetCurrentRoute() :2547
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->GetCurrentRoute();
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) :2870
void Router__GetOutletDepth_fn(Router* __this, uObject* outlet, int* __retval)
{
    *__retval = __this->GetOutletDepth(outlet);
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :1993
void Router__GetRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::GetRelative(c, r, args);
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2324
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GetRoute(c, r, args);
}

// public void GoBack() :2625
void Router__GoBack_fn(Router* __this)
{
    __this->GoBack();
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2048
void Router__GoBack1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GoBack1(c, r, args);
}

// public void Goto(Fuse.Navigation.Route route) :2553
void Router__Goto_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Goto(route);
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :1935
void Router__Goto1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Goto1(c, r, args);
}

// private void GotoMasterRoute() :2533
void Router__GotoMasterRoute_fn(Router* __this)
{
    __this->GotoMasterRoute();
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :1971
void Router__GotoRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::GotoRelative(c, r, args);
}

// private void GoUp() :2645
void Router__GoUp_fn(Router* __this)
{
    __this->GoUp();
}

// private bool HasOtherRouter(Fuse.Visual n) :2924
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = __this->HasOtherRouter(n);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2938
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :2938
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public bool get_IsMasterRouter() :2503
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval)
{
    *__retval = __this->IsMasterRouter();
}

// public void set_IsMasterRouter(bool value) :2504
void Router__set_IsMasterRouter_fn(Router* __this, bool* value)
{
    __this->IsMasterRouter(*value);
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode) :2564
void Router__Modify_fn(Router* __this, int* how, ::g::Fuse::Navigation::Route* route, int* mode)
{
    __this->Modify(*how, route, *mode);
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2088
void Router__Modify1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Modify1(c, r, args);
}

// public generated Router New() :1906
void Router__New2_fn(Router** __retval)
{
    *__retval = Router::New2();
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) :2939
void Router__OnHistoryChanged_fn(Router* __this, ::g::Fuse::Navigation::Route* current)
{
    __this->OnHistoryChanged(current);
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) :2507
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    __this->OnKeyPressed(sender, args);
}

// protected override sealed void OnRooted() :2457
void Router__OnRooted_fn(Router* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_history)->Clear();
    ::g::Fuse::VisualEvent__AddGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[36/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));

    if (__this->IsMasterRouter())
    {
        ::g::Fuse::Visual* n = __this->Parent();
        bool root = true;

        while (n != NULL)
        {
            if (__this->HasOtherRouter(n))
            {
                root = false;
                break;
            }

            n = uPtr(n)->Parent();
        }

        if (root)
        {
            if (Router::_masterHistory() != NULL)
                __this->_history = Router::_masterHistory();
            else
                Router::_masterHistory() = __this->_history;

            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Router__GotoMasterRoute_fn, __this), -1, 0);
        }
    }
}

// protected override sealed void OnUnrooted() :2491
void Router__OnUnrooted_fn(Router* __this)
{
    ::g::Fuse::VisualEvent__RemoveGlobalHandler_fn(uPtr(::g::Fuse::Input::Keyboard::KeyPressed()), uDelegate::New(::TYPES[36/*Fuse.Input.KeyPressedHandler*/], (void*)Router__OnKeyPressed_fn, __this));
}

// private void OnUpFromRoot() :2660
void Router__OnUpFromRoot_fn(Router* __this)
{
    __this->OnUpFromRoot();
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, Fuse.Scripting.IArray path) :2286
void Router__ParseRoute_fn(::g::Fuse::Scripting::Context* c, uObject* path, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::ParseRoute(c, path);
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, object[] args, [int pos]) :2294
void Router__ParseRoute1_fn(::g::Fuse::Scripting::Context* c, uArray* args, int* pos, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = Router::ParseRoute1(c, args, *pos);
}

// private void Pop() :2666
void Router__Pop_fn(Router* __this)
{
    __this->Pop();
}

// public double get_PrepareProgress() :2731
void Router__get_PrepareProgress_fn(Router* __this, double* __retval)
{
    *__retval = __this->PrepareProgress();
}

// public void set_PrepareProgress(double value) :2732
void Router__set_PrepareProgress_fn(Router* __this, double* value)
{
    __this->PrepareProgress(*value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation) :2686
void Router__PrepareRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* operation)
{
    __this->PrepareRoute(r, *operation);
}

// public void Push(Fuse.Navigation.Route route) :2559
void Router__Push_fn(Router* __this, ::g::Fuse::Navigation::Route* route)
{
    __this->Push(route);
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :2034
void Router__Push1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::Push1(c, r, args);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) :1986
void Router__PushRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router::PushRelative(c, r, args);
}

// private void SetPrepareProgress(double value) :2735
void Router__SetPrepareProgress_fn(Router* __this, double* value)
{
    __this->SetPrepareProgress(*value);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) :2769
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, bool* userRequest, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRoute(r, *gotoMode, *operation, *userRequest);
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, Fuse.Navigation.IRouterOutlet& majorChange) :2797
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int* gotoMode, int* operation, uObject** majorChange, ::g::Fuse::Navigation::Route** __retval)
{
    *__retval = __this->SetRouteImpl(root, r, *gotoMode, *operation, majorChange);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) :2952
void Router__TryFindRouter_fn(::g::Fuse::Node* n, Router** __retval)
{
    *__retval = Router::TryFindRouter(n);
}

// private static bool ValidateParameter(Fuse.Scripting.Context c, object arg, int depth) :2243
void Router__ValidateParameter_fn(::g::Fuse::Scripting::Context* c, uObject* arg, int* depth, bool* __retval)
{
    *__retval = Router::ValidateParameter(c, arg, *depth);
}

uSStrong< ::g::Fuse::Navigation::Route*> Router::_masterCurrent_;
uSStrong< ::g::Uno::Collections::List*> Router::_masterHistory_;

// public generated Router() [instance] :1906
void Router::ctor_2()
{
    _isMasterRouter = true;
    Bookmarks = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[26/*Uno.Collections.Dictionary<string, Fuse.Navigation.Route>*/]));
    _history = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[27/*Uno.Collections.List<Fuse.Navigation.Route>*/]));
    _prepareProgress = 0.0;
    ctor_1();
}

// public Fuse.Navigation.BackButtonAction get_BackButtonAction() [instance] :2522
int Router::BackButtonAction()
{
    return _backButtonAction;
}

// public void set_BackButtonAction(Fuse.Navigation.BackButtonAction value) [instance] :2523
void Router::BackButtonAction(int value)
{
    _backButtonAction = value;
}

// public void CancelNavigation() [instance] :2754
void Router::CancelNavigation()
{
    if (_prepareOutlet != NULL)
    {
        ::g::Fuse::Navigation::IRouterOutlet::CancelPrepare(uInterface(uPtr(_prepareOutlet), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]));
        ClearPrepared();
    }
    else
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[46/*"No active n...*/], NULL, ::STRINGS[1/*"C:\\Users\\...*/], 2765, ::STRINGS[47/*"CancelNavig...*/]);
}

// public bool get_CanGoBack() [instance] :2633
bool Router::CanGoBack()
{
    return uPtr(_history)->Count() > 0;
}

// private void ClearPrepared() [instance] :2722
void Router::ClearPrepared()
{
    _prepareOutlet = NULL;
    _prepareCurrent = NULL;
    _prepareNext = NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletDown(Fuse.Node active) [instance] :2885
uObject* Router::FindOutletDown(::g::Fuse::Node* active)
{
    ::g::Fuse::Node* ret3;
    uObject* ro = uAs<uObject*>(active, ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]);

    if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/])) & 2) == 2))
        return ro;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[1/*Fuse.Visual*/]);

    if (v != NULL)
    {
        if (HasOtherRouter(v))
            return NULL;

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
        {
            ro = FindOutletDown((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(v)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3));

            if (ro != NULL)
                return ro;
        }
    }

    return NULL;
}

// private Fuse.Navigation.IRouterOutlet FindOutletUp(Fuse.Node active) [instance] :2907
uObject* Router::FindOutletUp(::g::Fuse::Node* active)
{
    while (active != NULL)
    {
        uObject* ro = uAs<uObject*>(active, ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]);

        if ((ro != NULL) && ((::g::Fuse::Navigation::IRouterOutlet::Type(uInterface(uPtr(ro), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/])) & 2) == 2))
            return ro;

        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(active, ::TYPES[1/*Fuse.Visual*/]);

        if ((v != NULL) && HasOtherRouter(v))
            return NULL;

        active = uPtr(active)->Parent();
    }

    return NULL;
}

// private void FinishPrepared() [instance] :2695
void Router::FinishPrepared()
{
    if (_prepareOutlet == NULL)
        return;

    switch (_prepareOperation)
    {
        case 3:
        {
            if (uPtr(_history)->Count() != 0)
                uPtr(_history)->RemoveAt(uPtr(_history)->Count() - 1);

            break;
        }
        case 1:
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_history), GetCurrentRoute());
            break;
        }
        case 0:
        {
            uPtr(_history)->Clear();
            break;
        }
    }

    ::g::Fuse::Navigation::Route* c = SetRoute(_prepareNext, 0, _prepareOperation, true);
    OnHistoryChanged(c);
    ClearPrepared();
}

// private Fuse.Navigation.Route GetCurrent(Fuse.Visual from, [Fuse.Navigation.IRouterOutlet to]) [instance] :2855
::g::Fuse::Navigation::Route* Router::GetCurrent(::g::Fuse::Visual* from, uObject* to)
{
    if (from == NULL)
        return NULL;

    uObject* outlet = FindOutletDown(from);

    if ((outlet == NULL) || (outlet == to))
        return NULL;

    uString* opath;
    uString* oparameter;
    ::g::Fuse::Navigation::IRouterOutlet::GetCurrent(uInterface(uPtr(outlet), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, &from);
    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, GetCurrent(from, to));
}

// public Fuse.Navigation.Route GetCurrentRoute() [instance] :2547
::g::Fuse::Navigation::Route* Router::GetCurrentRoute()
{
    return GetCurrent(Parent(), NULL);
}

// private int GetOutletDepth(Fuse.Navigation.IRouterOutlet outlet) [instance] :2870
int Router::GetOutletDepth(uObject* outlet)
{
    int c = 0;
    ::g::Fuse::Visual* n = uPtr(uAs< ::g::Fuse::Node*>(outlet, ::TYPES[30/*Fuse.Node*/]))->Parent();

    while ((n != NULL) && (n != Parent()))
    {
        n = uPtr(n)->Parent();

        if (uIs(n, ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]))
            c++;
    }

    return c;
}

// public void GoBack() [instance] :2625
void Router::GoBack()
{
    if (uPtr(_history)->Count() > 0)
        Pop();
    else
        GoUp();
}

// public void Goto(Fuse.Navigation.Route route) [instance] :2553
void Router::Goto(::g::Fuse::Navigation::Route* route)
{
    Modify(1, route, 0);
}

// private void GotoMasterRoute() [instance] :2533
void Router::GotoMasterRoute()
{
    if (Router::_masterCurrent() != NULL)
        SetRoute(Router::_masterCurrent(), 1, 0, false);
}

// private void GoUp() [instance] :2645
void Router::GoUp()
{
    ::g::Fuse::Navigation::Route* cur = GetCurrentRoute();
    ::g::Fuse::Navigation::Route* up = uPtr(cur)->Up();

    if (up == cur)
        OnUpFromRoot();
    else
    {
        ::g::Fuse::Navigation::Route* c = SetRoute(up, 0, 3, true);
        OnHistoryChanged(c);
    }
}

// private bool HasOtherRouter(Fuse.Visual n) [instance] :2924
bool Router::HasOtherRouter(::g::Fuse::Visual* n)
{
    ::g::Fuse::Node* ret4;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Node* q = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(n)->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4);

        if ((q != this) && uIs(q, __type))
            return true;
    }

    return false;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2938
void Router::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :2938
void Router::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public bool get_IsMasterRouter() [instance] :2503
bool Router::IsMasterRouter()
{
    return _isMasterRouter;
}

// public void set_IsMasterRouter(bool value) [instance] :2504
void Router::IsMasterRouter(bool value)
{
    _isMasterRouter = value;
}

// internal void Modify(Fuse.Navigation.ModifyRouteHow how, Fuse.Navigation.Route route, Fuse.Navigation.NavigationGotoMode mode) [instance] :2564
void Router::Modify(int how, ::g::Fuse::Navigation::Route* route, int mode)
{
    ::g::Fuse::Navigation::Route* ret5;
    ::g::Fuse::Navigation::Route* current = NULL;

    switch (how)
    {
        case 1:
        {
            uPtr(_history)->Clear();
            current = SetRoute(route, mode, 0, true);
            OnHistoryChanged(current);
            break;
        }
        case 0:
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_history), GetCurrentRoute());
            current = SetRoute(route, mode, 1, true);
            OnHistoryChanged(current);
            break;
        }
        case 2:
        {
            current = SetRoute(route, mode, 2, true);
            OnHistoryChanged(current);
            break;
        }
        case 3:
        {
            if (route != NULL)
                ::g::Fuse::Diagnostics::UserWarning(::STRINGS[58/*"PrepareBack...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 2588, ::STRINGS[59/*"Modify"*/]);

            if (uPtr(_history)->Count() == 0)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[60/*"There is no...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 2592, ::STRINGS[59/*"Modify"*/]);
                return;
            }

            ::g::Fuse::Navigation::Route* popRoute = (::g::Uno::Collections::List__get_Item_fn(uPtr(_history), uCRef<int>(uPtr(_history)->Count() - 1), &ret5), ret5);
            PrepareRoute(popRoute, 3);
            break;
        }
        case 4:
        {
            PrepareRoute(route, 1);
            break;
        }
        case 5:
        {
            PrepareRoute(route, 0);
            break;
        }
        case 6:
        {
            FinishPrepared();
            break;
        }
    }
}

// private void OnHistoryChanged(Fuse.Navigation.Route current) [instance] :2939
void Router::OnHistoryChanged(::g::Fuse::Navigation::Route* current)
{
    if (current == NULL)
        current = GetCurrentRoute();

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);

    if (IsMasterRouter())
        Router::_masterCurrent() = current;
}

// private void OnKeyPressed(object sender, Fuse.Input.KeyEventArgs args) [instance] :2507
void Router::OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args)
{
    if (uPtr(args)->Key() == 201)
    {
        if (BackButtonAction() == 0)
            GoBack();
    }
}

// private void OnUpFromRoot() [instance] :2660
void Router::OnUpFromRoot()
{
}

// private void Pop() [instance] :2666
void Router::Pop()
{
    ::g::Fuse::Navigation::Route* ret10;

    if (uPtr(_history)->Count() == 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[66/*"Cannot pop(...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 2670, ::STRINGS[67/*"Pop"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = (::g::Uno::Collections::List__get_Item_fn(uPtr(_history), uCRef<int>(uPtr(_history)->Count() - 1), &ret10), ret10);
    uPtr(_history)->RemoveAt(uPtr(_history)->Count() - 1);
    ::g::Fuse::Navigation::Route* c = SetRoute(route, 0, 3, true);
    OnHistoryChanged(c);
}

// public double get_PrepareProgress() [instance] :2731
double Router::PrepareProgress()
{
    return _prepareProgress;
}

// public void set_PrepareProgress(double value) [instance] :2732
void Router::PrepareProgress(double value)
{
    SetPrepareProgress(value);
}

// private void PrepareRoute(Fuse.Navigation.Route r, Fuse.Navigation.RoutingOperation operation) [instance] :2686
void Router::PrepareRoute(::g::Fuse::Navigation::Route* r, int operation)
{
    _prepareCurrent = GetCurrentRoute();
    _prepareNext = SetRouteImpl(Parent(), r, 2, operation, &_prepareOutlet);
    _prepareOperation = operation;
    _prepareProgress = 0.0;
}

// public void Push(Fuse.Navigation.Route route) [instance] :2559
void Router::Push(::g::Fuse::Navigation::Route* route)
{
    Modify(0, route, 0);
}

// private void SetPrepareProgress(double value) [instance] :2735
void Router::SetPrepareProgress(double value)
{
    if (((_prepareCurrent == NULL) || (_prepareNext == NULL)) || (_prepareOutlet == NULL))
        return;

    int depth = GetOutletDepth(_prepareOutlet);
    ::g::Fuse::Navigation::Route* pc = uPtr(_prepareCurrent)->SubDepth(depth);
    ::g::Fuse::Navigation::Route* pn = uPtr(_prepareNext)->SubDepth(depth);

    if ((pc == NULL) || (pn == NULL))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[68/*"Invalid out...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 2746, ::STRINGS[69/*"SetPrepareP...*/]);
        return;
    }

    _prepareProgress = value;
    ::g::Fuse::Navigation::IRouterOutlet::PartialPrepareGoto(uInterface(uPtr(_prepareOutlet), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]), _prepareProgress);
}

// private Fuse.Navigation.Route SetRoute(Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, [bool userRequest]) [instance] :2769
::g::Fuse::Navigation::Route* Router::SetRoute(::g::Fuse::Navigation::Route* r, int gotoMode, int operation, bool userRequest)
{
    ClearPrepared();
    ::g::Fuse::Navigation::Route* current = GetCurrentRoute();
    uObject* ignore;
    ::g::Fuse::Navigation::Route* outR = SetRouteImpl(Parent(), r, gotoMode, operation, &ignore);

    if (outR == NULL)
    {
        uString* msg = ::g::Uno::String::op_Addition2(::STRINGS[70/*"Unable to n...*/], uPtr(r)->Format());

        if (userRequest)
            ::g::Fuse::Diagnostics::UserError(msg, this, ::STRINGS[1/*"C:\\Users\\...*/], 2783, ::STRINGS[71/*"SetRoute"*/]);
        else
            ::g::Fuse::Diagnostics::InternalError(msg, this, ::STRINGS[1/*"C:\\Users\\...*/], 2785, ::STRINGS[71/*"SetRoute"*/]);

        uPtr(_history)->Clear();
        ::g::Fuse::Navigation::Route* c = SetRouteImpl(Parent(), current, 1, 0, &ignore);
        OnHistoryChanged(c);
        return NULL;
    }

    return outR;
}

// private Fuse.Navigation.Route SetRouteImpl(Fuse.Visual root, Fuse.Navigation.Route r, Fuse.Navigation.NavigationGotoMode gotoMode, Fuse.Navigation.RoutingOperation operation, Fuse.Navigation.IRouterOutlet& majorChange) [instance] :2797
::g::Fuse::Navigation::Route* Router::SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::Route* r, int gotoMode, int operation, uObject** majorChange)
{
    *majorChange = NULL;
    uObject* outlet = FindOutletDown(root);

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[72/*"No router o...*/], r), this, ::STRINGS[1/*"C:\\Users\\...*/], 2804, ::STRINGS[73/*"SetRouteImpl"*/]);
        return NULL;
    }

    ::g::Fuse::Visual* active;
    uString* opath = uPtr(r)->Path;
    uString* oparameter = r->Parameter;
    int didTransition = ::g::Fuse::Navigation::IRouterOutlet::Goto(uInterface(uPtr(outlet), ::TYPES[32/*Fuse.Navigation.IRouterOutlet*/]), &opath, &oparameter, gotoMode, operation, &active);

    if (didTransition == 3)
        return NULL;

    bool trackMajorChange = true;

    if (didTransition == 2)
    {
        gotoMode = 1;
        *majorChange = outlet;
        trackMajorChange = false;
    }

    ::g::Fuse::Navigation::Route* outSubRoute = NULL;

    if (r->SubRoute != NULL)
    {
        if (active == NULL)
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[74/*"SubRoute re...*/], r), this, ::STRINGS[1/*"C:\\Users\\...*/], 2829, ::STRINGS[73/*"SetRouteImpl"*/]);
            return NULL;
        }
        else
        {
            if (trackMajorChange)
                outSubRoute = SetRouteImpl(active, uPtr(r)->SubRoute, gotoMode, operation, majorChange);
            else
            {
                uObject* ignore;
                outSubRoute = SetRouteImpl(active, uPtr(r)->SubRoute, gotoMode, operation, &ignore);
            }

            if (outSubRoute == NULL)
                return NULL;
        }
    }
    else
        outSubRoute = GetCurrent(active, NULL);

    return ::g::Fuse::Navigation::Route::New1(opath, oparameter, outSubRoute);
}

// private static void Bookmark(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2169
void Router::Bookmark(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    uString* ret2;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[37/*"`Router.boo...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2175, ::STRINGS[38/*"Bookmark"*/]);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[28/*Fuse.Scripting.Object*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[39/*"`Router.boo...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2182, ::STRINGS[38/*"Bookmark"*/]);
        return;
    }

    uString* name = NULL;
    uObject* relative = NULL;
    ::g::Fuse::Navigation::Route* route = NULL;
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = uPtr(obj)->Item(p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[8/*"name"*/]))
            name = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[29/*Fuse.Scripting.Marshal.ToType<string>*/], o, &ret2), ret2);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[40/*"relative"*/]))
        {
            uObject* node = ::g::Fuse::Scripting::Context::Wrap(o);
            relative = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[30/*Fuse.Node*/]));

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[41/*"Could not f...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2206, ::STRINGS[38/*"Bookmark"*/]);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[42/*"path"*/]))
        {
            uObject* path = uAs<uObject*>(o, ::TYPES[31/*Fuse.Scripting.IArray*/]);

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"`path` shou...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2215, ::STRINGS[38/*"Bookmark"*/]);
                return;
            }

            route = Router::ParseRoute(c, path);
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[44/*"Unrecognize...*/], p), r, ::STRINGS[1/*"C:\\Users\\...*/], 2223, ::STRINGS[38/*"Bookmark"*/]);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::Route* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(route);
    }

    if (::g::Uno::String::op_Equality(name, NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[45/*"A `name` is...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2236, ::STRINGS[38/*"Bookmark"*/]);
        return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(r)->Bookmarks), name, route);
}

// private static Fuse.Navigation.Route GetRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :1993
::g::Fuse::Navigation::Route* Router::GetRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return NULL;

    if (uPtr(args)->Length() < 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[48/*"Router.goto...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 1999, ::STRINGS[49/*"GetRelative"*/]);
        return NULL;
    }

    uObject* node = ::g::Fuse::Scripting::Context::Wrap(uPtr(args)->Strong<uObject*>(0));
    uObject* outlet = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[30/*Fuse.Node*/]));

    if (outlet == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[50/*"Router.goto...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2007, ::STRINGS[49/*"GetRelative"*/]);
        return NULL;
    }

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 1);
    ::g::Fuse::Navigation::Route* current = r->GetCurrent(r->Parent(), outlet);
    ::g::Fuse::Navigation::Route* route = (current == NULL) ? where : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(where);
    return route;
}

// private static void GetRoute(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2324
void Router::GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[51/*"Router.getR...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2328, ::STRINGS[52/*"GetRoute"*/]);
        return;
    }

    ::g::Fuse::Scripting::Function* callback = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[33/*Fuse.Scripting.Function*/]);

    if (callback == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[53/*"Router.getR...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2334, ::STRINGS[52/*"GetRoute"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = uPtr(r)->GetCurrentRoute();
    uPtr(c)->Invoke(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)Router__GetRouteCallback__Run_fn, Router__GetRouteCallback::New1(route, callback, c)));
}

// private static void GoBack(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2048
void Router::GoBack1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[54/*"Router.goBa...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2054, ::STRINGS[55/*"GoBack"*/]);
        return;
    }

    uPtr(r)->GoBack();
}

// private static void Goto(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :1935
void Router::Goto1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 0);

    if (where != NULL)
        uPtr(r)->Goto(where);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[56/*"Router.goto...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 1946, ::STRINGS[57/*"Goto"*/]);
}

// private static void GotoRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :1971
void Router::GotoRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Goto(route);
}

// private static void Modify(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2088
void Router::Modify1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    int ret6;
    int ret7;
    uString* ret8;
    bool ret9;

    if (!uPtr(r)->IsRootingCompleted())
        return;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[61/*"`Router.mod...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2094, ::STRINGS[59/*"Modify"*/]);
        return;
    }

    ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[28/*Fuse.Scripting.Object*/]);

    if (obj == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[62/*"`Router.mod...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2101, ::STRINGS[59/*"Modify"*/]);
        return;
    }

    int how = 1;
    ::g::Fuse::Navigation::Route* route = NULL;
    uObject* relative = NULL;
    int mode = 0;
    uArray* keys = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(keys)->Length(); ++i)
    {
        uString* p = uPtr(keys)->Strong<uString*>(i);
        uObject* o = uPtr(obj)->Item(p);

        if (::g::Uno::String::op_Equality(p, ::STRINGS[63/*"how"*/]))
            how = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[34/*Fuse.Scripting.Marshal.ToType<Fuse.Navigation.ModifyRouteHow>*/], o, &ret6), ret6);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[42/*"path"*/]))
        {
            uObject* path = uAs<uObject*>(o, ::TYPES[31/*Fuse.Scripting.IArray*/]);

            if (path == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[43/*"`path` shou...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2124, ::STRINGS[59/*"Modify"*/]);
                return;
            }

            route = Router::ParseRoute(c, path);
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[40/*"relative"*/]))
        {
            uObject* node = ::g::Fuse::Scripting::Context::Wrap(o);
            relative = uPtr(r)->FindOutletUp(uAs< ::g::Fuse::Node*>(node, ::TYPES[30/*Fuse.Node*/]));

            if (relative == NULL)
            {
                ::g::Fuse::Diagnostics::UserError(::STRINGS[41/*"Could not f...*/], r, ::STRINGS[1/*"C:\\Users\\...*/], 2136, ::STRINGS[59/*"Modify"*/]);
                return;
            }
        }
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[64/*"transition"*/]))
            mode = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[35/*Fuse.Scripting.Marshal.ToType<Fuse.Navigation.NavigationGotoMode>*/], o, &ret7), ret7);
        else if (::g::Uno::String::op_Equality(p, ::STRINGS[29/*"bookmark"*/]))
        {
            uString* bk = (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[29/*Fuse.Scripting.Marshal.ToType<string>*/], o, &ret8), ret8);

            if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(r)->Bookmarks), bk, (void**)(&route), &ret9), ret9))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[65/*"Unknown boo...*/], bk), r, ::STRINGS[1/*"C:\\Users\\...*/], 2149, ::STRINGS[59/*"Modify"*/]);
                return;
            }
        }
        else
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[44/*"Unrecognize...*/], p), r, ::STRINGS[1/*"C:\\Users\\...*/], 2155, ::STRINGS[59/*"Modify"*/]);
            return;
        }
    }

    if (relative != NULL)
    {
        ::g::Fuse::Navigation::Route* current = uPtr(r)->GetCurrent(uPtr(r)->Parent(), relative);
        route = (current == NULL) ? route : (::g::Fuse::Navigation::Route*)uPtr(current)->Append(route);
    }

    uPtr(r)->Modify(how, route, mode);
}

// public generated Router New() [static] :1906
Router* Router::New2()
{
    Router* obj1 = (Router*)uNew(Router_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, Fuse.Scripting.IArray path) [static] :2286
::g::Fuse::Navigation::Route* Router::ParseRoute(::g::Fuse::Scripting::Context* c, uObject* path)
{
    Router_typeof()->Init();
    uArray* cvt = uArray::New(::TYPES[9/*object[]*/], ::g::Fuse::Scripting::IArray::Length(uInterface(uPtr(path), ::TYPES[31/*Fuse.Scripting.IArray*/])));

    for (int i = 0; i < cvt->Length(); ++i)
        uPtr(cvt)->Strong<uObject*>(i) = ::g::Fuse::Scripting::IArray::Item(uInterface(uPtr(path), ::TYPES[31/*Fuse.Scripting.IArray*/]), i);

    return Router::ParseRoute1(c, cvt, 0);
}

// private static Fuse.Navigation.Route ParseRoute(Fuse.Scripting.Context c, object[] args, [int pos]) [static] :2294
::g::Fuse::Navigation::Route* Router::ParseRoute1(::g::Fuse::Scripting::Context* c, uArray* args, int pos)
{
    Router_typeof()->Init();

    if (uPtr(args)->Length() <= pos)
        return NULL;

    if (uPtr(args)->Length() <= (pos + 1))
        return ::g::Fuse::Navigation::Route::New1(uAs<uString*>(uPtr(args)->Strong<uObject*>(pos), ::TYPES[37/*string*/]), NULL, NULL);

    uObject* arg = uPtr(args)->Strong<uObject*>(pos + 1);

    if (!Router::ValidateParameter(c, arg, 0))
        return NULL;

    uString* path = uAs<uString*>(args->Strong<uObject*>(pos), ::TYPES[37/*string*/]);
    uString* parameter = ::g::Fuse::Scripting::Json::Stringify(arg, true);
    return ::g::Fuse::Navigation::Route::New1(path, parameter, Router::ParseRoute1(c, args, pos + 2));
}

// private static void Push(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :2034
void Router::Push1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();

    if (!uPtr(r)->IsRootingCompleted())
        return;

    ::g::Fuse::Navigation::Route* where = Router::ParseRoute1(c, args, 0);
    uPtr(r)->Push(where);
}

// private static void PushRelative(Fuse.Scripting.Context c, Fuse.Navigation.Router r, object[] args) [static] :1986
void Router::PushRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args)
{
    Router_typeof()->Init();
    ::g::Fuse::Navigation::Route* route = Router::GetRelative(c, r, args);

    if (route != NULL)
        uPtr(r)->Push(route);
}

// internal static Fuse.Navigation.Router TryFindRouter(Fuse.Node n) [static] :2952
Router* Router::TryFindRouter(::g::Fuse::Node* n)
{
    Router_typeof()->Init();
    ::g::Fuse::Node* p = n;

    while (p != NULL)
    {
        ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(p, ::TYPES[1/*Fuse.Visual*/]);

        if (v != NULL)
        {
            Router* r = (Router*)uPtr(v)->FirstChild(::TYPES[38/*Fuse.Visual.FirstChild<Fuse.Navigation.Router>*/]);

            if (r != NULL)
                return r;
        }

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// private static bool ValidateParameter(Fuse.Scripting.Context c, object arg, int depth) [static] :2243
bool Router::ValidateParameter(::g::Fuse::Scripting::Context* c, uObject* arg, int depth)
{
    Router_typeof()->Init();

    if (depth > 50)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[75/*"Route param...*/], NULL, ::STRINGS[1/*"C:\\Users\\...*/], 2247, ::STRINGS[76/*"ValidatePar...*/]);
        return false;
    }

    if (uIs(arg, ::TYPES[28/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* obj = uCast< ::g::Fuse::Scripting::Object*>(arg, ::TYPES[28/*Fuse.Scripting.Object*/]);

        if (uPtr(obj)->InstanceOf(uPtr(c)->Observable()))
        {
            ::g::Fuse::Diagnostics::UserError(::STRINGS[77/*"Route param...*/], NULL, ::STRINGS[1/*"C:\\Users\\...*/], 2256, ::STRINGS[76/*"ValidatePar...*/]);
            return false;
        }

        uArray* keys = uPtr(obj)->Keys();

        for (int i = 0; i < uPtr(keys)->Length(); i++)
        {
            uString* key = uPtr(keys)->Strong<uString*>(i);

            if (!Router::ValidateParameter(c, uPtr(obj)->Item(key), depth + 1))
                return false;
        }
    }

    if (uIs(arg, ::TYPES[39/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* arr = uCast< ::g::Fuse::Scripting::Array*>(arg, ::TYPES[39/*Fuse.Scripting.Array*/]);

        for (int i1 = 0; i1 < uPtr(arr)->Length(); i1++)
            if (!Router::ValidateParameter(c, uPtr(arr)->Item(i1), depth + 1))
                return false;
    }

    if (uIs(arg, ::TYPES[33/*Fuse.Scripting.Function*/]))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[78/*"Route param...*/], NULL, ::STRINGS[1/*"C:\\Users\\...*/], 2279, ::STRINGS[76/*"ValidatePar...*/]);
        return false;
    }

    return true;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class RouterCancelNavigation :2986
// {
static void RouterCancelNavigation_build(uType* type)
{
    ::STRINGS[79] = uString::Const("Router not set and none could be found");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    type->SetFields(8,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Fuse::Navigation::RouterCancelNavigation, _Router), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RouterCancelNavigation_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(RouterCancelNavigation);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.RouterCancelNavigation", options);
    type->fp_build_ = RouterCancelNavigation_build;
    type->fp_ctor_ = (void*)RouterCancelNavigation__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterCancelNavigation__Perform_fn;
    return type;
}

// public generated RouterCancelNavigation() :2986
void RouterCancelNavigation__ctor_2_fn(RouterCancelNavigation* __this)
{
    __this->ctor_2();
}

// public generated RouterCancelNavigation New() :2986
void RouterCancelNavigation__New2_fn(RouterCancelNavigation** __retval)
{
    *__retval = RouterCancelNavigation::New2();
}

// protected override sealed void Perform(Fuse.Node n) :2991
void RouterCancelNavigation__Perform_fn(RouterCancelNavigation* __this, ::g::Fuse::Node* n)
{
    ::g::Fuse::Navigation::Router* ind1 = __this->Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[79/*"Router not ...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 2996, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    uPtr(useRouter)->CancelNavigation();
}

// public generated Fuse.Navigation.Router get_Router() :2989
void RouterCancelNavigation__get_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :2989
void RouterCancelNavigation__set_Router_fn(RouterCancelNavigation* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public generated RouterCancelNavigation() [instance] :2986
void RouterCancelNavigation::ctor_2()
{
    ctor_1();
}

// public generated Fuse.Navigation.Router get_Router() [instance] :2989
::g::Fuse::Navigation::Router* RouterCancelNavigation::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :2989
void RouterCancelNavigation::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public generated RouterCancelNavigation New() [static] :2986
RouterCancelNavigation* RouterCancelNavigation::New2()
{
    RouterCancelNavigation* obj2 = (RouterCancelNavigation*)uNew(RouterCancelNavigation_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class RouterModify :3016
// {
static void RouterModify_build(uType* type)
{
    ::STRINGS[79] = uString::Const("Router not set and none could be found");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::STRINGS[65] = uString::Const("Unknown bookmark: ");
    type->SetFields(8,
        ::g::Fuse::Navigation::ModifyRouteHow_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _how), 0,
        ::g::Fuse::Navigation::NavigationGotoMode_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _transition), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _Bookmark), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Fuse::Navigation::RouterModify, _Router), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* RouterModify_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 12;
    options.ObjectSize = sizeof(RouterModify);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Navigation.RouterModify", options);
    type->fp_build_ = RouterModify_build;
    type->fp_ctor_ = (void*)RouterModify__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))RouterModify__Perform_fn;
    return type;
}

// public generated RouterModify() :3016
void RouterModify__ctor_2_fn(RouterModify* __this)
{
    __this->ctor_2();
}

// public generated string get_Bookmark() :3030
void RouterModify__get_Bookmark_fn(RouterModify* __this, uString** __retval)
{
    *__retval = __this->Bookmark();
}

// public generated void set_Bookmark(string value) :3030
void RouterModify__set_Bookmark_fn(RouterModify* __this, uString* value)
{
    __this->Bookmark(value);
}

// public Fuse.Navigation.ModifyRouteHow get_How() :3025
void RouterModify__get_How_fn(RouterModify* __this, int* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) :3026
void RouterModify__set_How_fn(RouterModify* __this, int* value)
{
    __this->How(*value);
}

// public generated RouterModify New() :3016
void RouterModify__New2_fn(RouterModify** __retval)
{
    *__retval = RouterModify::New2();
}

// protected override sealed void Perform(Fuse.Node n) :3040
void RouterModify__Perform_fn(RouterModify* __this, ::g::Fuse::Node* n)
{
    bool ret3;
    ::g::Fuse::Navigation::Router* ind1 = __this->Router();
    ::g::Fuse::Navigation::Router* useRouter = (ind1 != NULL) ? ind1 : (::g::Fuse::Navigation::Router*)::g::Fuse::Navigation::Router::TryFindRouter(n);

    if (useRouter == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[79/*"Router not ...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 3045, ::STRINGS[2/*"Perform"*/]);
        return;
    }

    ::g::Fuse::Navigation::Route* route = NULL;

    if (::g::Uno::String::op_Inequality(__this->Bookmark(), NULL))
    {
        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(__this->Router())->Bookmarks), __this->Bookmark(), (void**)(&route), &ret3), ret3))
        {
            ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[65/*"Unknown boo...*/], __this->Bookmark()), __this, ::STRINGS[1/*"C:\\Users\\...*/], 3055, ::STRINGS[2/*"Perform"*/]);
            return;
        }
    }

    uPtr(__this->Router())->Modify(__this->How(), route, __this->Transition());
}

// public generated Fuse.Navigation.Router get_Router() :3019
void RouterModify__get_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router** __retval)
{
    *__retval = __this->Router();
}

// public generated void set_Router(Fuse.Navigation.Router value) :3019
void RouterModify__set_Router_fn(RouterModify* __this, ::g::Fuse::Navigation::Router* value)
{
    __this->Router(value);
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() :3036
void RouterModify__get_Transition_fn(RouterModify* __this, int* __retval)
{
    *__retval = __this->Transition();
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) :3037
void RouterModify__set_Transition_fn(RouterModify* __this, int* value)
{
    __this->Transition(*value);
}

// public generated RouterModify() [instance] :3016
void RouterModify::ctor_2()
{
    _how = 1;
    ctor_1();
}

// public generated string get_Bookmark() [instance] :3030
uString* RouterModify::Bookmark()
{
    return _Bookmark;
}

// public generated void set_Bookmark(string value) [instance] :3030
void RouterModify::Bookmark(uString* value)
{
    _Bookmark = value;
}

// public Fuse.Navigation.ModifyRouteHow get_How() [instance] :3025
int RouterModify::How()
{
    return _how;
}

// public void set_How(Fuse.Navigation.ModifyRouteHow value) [instance] :3026
void RouterModify::How(int value)
{
    _how = value;
}

// public generated Fuse.Navigation.Router get_Router() [instance] :3019
::g::Fuse::Navigation::Router* RouterModify::Router()
{
    return _Router;
}

// public generated void set_Router(Fuse.Navigation.Router value) [instance] :3019
void RouterModify::Router(::g::Fuse::Navigation::Router* value)
{
    _Router = value;
}

// public Fuse.Navigation.NavigationGotoMode get_Transition() [instance] :3036
int RouterModify::Transition()
{
    return _transition;
}

// public void set_Transition(Fuse.Navigation.NavigationGotoMode value) [instance] :3037
void RouterModify::Transition(int value)
{
    _transition = value;
}

// public generated RouterModify New() [static] :3016
RouterModify* RouterModify::New2()
{
    RouterModify* obj2 = (RouterModify*)uNew(RouterModify_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum RoutingOperation :701
uEnumType* RoutingOperation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingOperation", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Goto", 0LL,
        "Push", 1LL,
        "Replace", 2LL,
        "Pop", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum RoutingResult :722
uEnumType* RoutingResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.RoutingResult", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoChange", 0LL,
        "MinorChange", 1LL,
        "Change", 2LL,
        "Invalid", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal enum SnapTo :3637
uEnumType* SnapTo_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SnapTo", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Forward", 0LL,
        "Current", 1LL,
        "Backward", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public interfacemodifiers class StructuredNavigation :3079
// {
static void StructuredNavigation_build(uType* type)
{
    ::STRINGS[80] = uString::Const("Seek being called on an unrooted navigation");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[81] = uString::Const("Fuse.Navigation.ISeekableNavigation.Seek");
    ::STRINGS[82] = uString::Const("Attempting to navigate to element with different parent");
    ::STRINGS[83] = uString::Const("GotoImpl");
    ::STRINGS[84] = uString::Const("Updated called without a region");
    ::STRINGS[85] = uString::Const("OnUpdated");
    ::STRINGS[86] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[87] = uString::Const("set_Motion");
    ::TYPES[41] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[42] = ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof();
    ::TYPES[43] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(StructuredNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(StructuredNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(StructuredNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(StructuredNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(StructuredNavigation_type, interface6),
        ::g::Fuse::Navigation::ISeekableNavigation_typeof(), offsetof(StructuredNavigation_type, interface7));
    type->SetFields(22,
        ::TYPES[1/*Fuse.Visual*/], offsetof(::g::Fuse::Navigation::StructuredNavigation, _active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _hasUpdated), 0,
        ::g::Fuse::Motion::MotionConfig_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _motion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _prevProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _progress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _queueClearForwardHistory), 0,
        ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/], offsetof(::g::Fuse::Navigation::StructuredNavigation, _region), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _reuseExistingVisual), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _seekBase), 0,
        StructuredNavigation__NavigationStructure_typeof(), offsetof(::g::Fuse::Navigation::StructuredNavigation, _Mode), 0);
}

StructuredNavigation_type* StructuredNavigation_typeof()
{
    static uSStrong<StructuredNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::VisualNavigation_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(StructuredNavigation);
    options.TypeSize = sizeof(StructuredNavigation_type);
    type = (StructuredNavigation_type*)uClassType::New("Fuse.Navigation.StructuredNavigation", options);
    type->fp_build_ = StructuredNavigation_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**))StructuredNavigation__get_Active_fn;
    type->fp_set_Active = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*))StructuredNavigation__set_Active_fn;
    type->fp_get_CanGoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->fp_GoBack = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoBack_fn;
    type->fp_GoForward = (void(*)(::g::Fuse::Navigation::VisualNavigation*))StructuredNavigation__GoForward_fn;
    type->fp_Goto = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->fp_OnChildAddedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = (void(*)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StructuredNavigation__OnUnrooted_fn;
    type->interface7.fp_BeginSeek = (void(*)(uObject*))StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn;
    type->interface7.fp_Seek = (void(*)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn;
    type->interface7.fp_EndSeek = (void(*)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*))StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))StructuredNavigation__GetPageState_fn;
    type->interface4.fp_Goto = (void(*)(uObject*, ::g::Fuse::Visual*, int*))StructuredNavigation__Goto_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))::g::Fuse::Navigation::VisualNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))::g::Fuse::Navigation::VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))::g::Fuse::Navigation::VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))::g::Fuse::Navigation::VisualNavigation__remove_StateChanged_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))StructuredNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))StructuredNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))StructuredNavigation__get_CanGoForward_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))StructuredNavigation__OnChildRemovedWhileRooted_fn;
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

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) :3091
void StructuredNavigation__ctor_4_fn(StructuredNavigation* __this, int* mode)
{
    __this->ctor_4(*mode);
}

// public override sealed Fuse.Visual get_Active() :3433
void StructuredNavigation__get_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = __this->_active, void();
}

// public override sealed void set_Active(Fuse.Visual value) :3434
void StructuredNavigation__set_Active_fn(StructuredNavigation* __this, ::g::Fuse::Visual* value)
{
    __this->Goto(value, 0);
}

// private void AnimationDone() :3417
void StructuredNavigation__AnimationDone_fn(StructuredNavigation* __this)
{
    __this->AnimationDone();
}

// private Fuse.Visual get_Back() :3543
void StructuredNavigation__get_Back_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Back();
}

// public override sealed bool get_CanGoBack() :3341
void StructuredNavigation__get_CanGoBack_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Back()), void();
}

// public override sealed bool get_CanGoForward() :3333
void StructuredNavigation__get_CanGoForward_fn(StructuredNavigation* __this, bool* __retval)
{
    return *__retval = __this->HasPages() && (__this->_active != __this->Front()), void();
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) :3315
void StructuredNavigation__ChangeProgress_fn(StructuredNavigation* __this, float* prev, float* next, int* mode)
{
    __this->ChangeProgress(*prev, *next, *mode);
}

// private void CheckNeedUpdate([bool off]) :3251
void StructuredNavigation__CheckNeedUpdate_fn(StructuredNavigation* __this, bool* off)
{
    __this->CheckNeedUpdate(*off);
}

// private int ClampProgress(int progress) :3531
void StructuredNavigation__ClampProgress1_fn(StructuredNavigation* __this, int* progress, int* __retval)
{
    *__retval = __this->ClampProgress1(*progress);
}

// private void ClearForwardHistory() :3513
void StructuredNavigation__ClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->ClearForwardHistory();
}

// private Fuse.Visual get_Front() :3548
void StructuredNavigation__get_Front_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Front();
}

// private void Fuse.Navigation.ISeekableNavigation.BeginSeek() :3450
void StructuredNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(StructuredNavigation* __this)
{
    __this->_seekBase = (float)__this->Progress();

    if (__this->_region != NULL)
    {
        __this->ResetRegionLimits();
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]));
    }

    __this->OnStateChanged(1);
}

// private void Fuse.Navigation.ISeekableNavigation.EndSeek(Fuse.Navigation.EndSeekArgs args) :3484
void StructuredNavigation__FuseNavigationISeekableNavigationEndSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args)
{
    ::g::Uno::Float2 ret4;
    int targetIndex = 0;

    switch (uPtr(args)->SnapTo())
    {
        case 0:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
        case 2:
        {
            targetIndex = __this->ClampProgress1((int)::g::Uno::Math::Ceil(__this->Progress()));
            break;
        }
        case 1:
        {
            double diff = __this->Progress() - ::g::Uno::Math::Floor(__this->Progress());
            targetIndex = __this->ClampProgress1((diff > 0.5) ? (int)::g::Uno::Math::Ceil(__this->Progress()) : (int)::g::Uno::Math::Floor(__this->Progress()));
            break;
        }
    }

    if (__this->_region != NULL)
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->Velocity(), 0.0f));

    if (!__this->TransitionToChild(__this->GetPage(targetIndex), false, true))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(__this->_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret4), ret4));
}

// private void Fuse.Navigation.ISeekableNavigation.Seek(Fuse.Navigation.UpdateSeekArgs args) :3470
void StructuredNavigation__FuseNavigationISeekableNavigationSeek_fn(StructuredNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args)
{
    ::g::Uno::Float2 ret5;

    if (__this->_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[80/*"Seek being ...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 3474, ::STRINGS[81/*"Fuse.Naviga...*/]);
        return;
    }

    float prev = (float)__this->Progress();
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(__this->_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(uPtr(args)->RelativeDelta(), 0.0f));
    __this->ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret5), ret5).X, 2);
    __this->CheckNeedUpdate(false);
}

// public override sealed Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :3321
void StructuredNavigation__GetPageState_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    ::g::Fuse::Navigation::VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = ((float)__this->Progress() - (float)uPtr(pd)->Index);
    collection2.PreviousProgress = (__this->_prevProgress - (float)uPtr(pd)->Index);
    return *__retval = collection2, void();
}

// public override sealed void GoBack() :3353
void StructuredNavigation__GoBack_fn(StructuredNavigation* __this)
{
    if (__this->CanGoBack())
        __this->TransitionToChild(__this->Previous(), false, false);
}

// public override sealed void GoForward() :3347
void StructuredNavigation__GoForward_fn(StructuredNavigation* __this)
{
    if (__this->CanGoForward())
        __this->TransitionToChild(__this->Next(), false, false);
}

// public override sealed void Goto(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :3156
void StructuredNavigation__Goto_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    int mode_ = *mode;

    if ((mode_ != 0) && (mode_ != 1))
        return;

    if (__this->Parent() == NULL)
    {
        __this->SetActive(element);
        return;
    }

    if (element == __this->_active)
        return;

    if (element == NULL)
        __this->SetActive(NULL);
    else
        __this->GotoImpl(element, mode_);
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) :3178
void StructuredNavigation__GotoImpl_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, int* mode)
{
    __this->GotoImpl(element, *mode);
}

// private int get_MaxIndex() :3538
void StructuredNavigation__get_MaxIndex_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->MaxIndex();
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() :3089
void StructuredNavigation__get_Mode_fn(StructuredNavigation* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) :3089
void StructuredNavigation__set_Mode_fn(StructuredNavigation* __this, int* value)
{
    __this->Mode(*value);
}

// public Fuse.Motion.MotionConfig get_Motion() :3100
void StructuredNavigation__get_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.MotionConfig value) :3106
void StructuredNavigation__set_Motion_fn(StructuredNavigation* __this, ::g::Fuse::Motion::MotionConfig* value)
{
    __this->Motion(value);
}

// private Fuse.Visual get_Next() :3558
void StructuredNavigation__get_Next_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Next();
}

// public override sealed void OnChildAddedWhileRooted(Fuse.Node child) :3380
void StructuredNavigation__OnChildAddedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildAddedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active != NULL)
        __this->SetProgress((float)__this->GetPageIndex(__this->_active));

    if (__this->_active == NULL)
        __this->SetActive(v);

    __this->OnHistoryChanged();
}

// public override sealed void OnChildRemovedWhileRooted(Fuse.Node child) :3396
void StructuredNavigation__OnChildRemovedWhileRooted_fn(StructuredNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Navigation::VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child);
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    if (__this->_active == child)
        __this->SetActive(NULL);

    __this->OnHistoryChanged();
    __this->ChangeProgress((float)__this->Progress(), (float)__this->Progress(), 1);
}

// protected override sealed void OnRooted() :3116
void StructuredNavigation__OnRooted_fn(StructuredNavigation* __this)
{
    bool ret7;
    ::g::Fuse::Navigation::VisualNavigation__OnRooted_fn(__this);

    if (((__this->_active != NULL) && (uPtr(__this->_active)->Parent() != NULL)) && (__this->Parent() != uPtr(__this->_active)->Parent()))
        __this->SetActive(NULL);

    if ((__this->_active != NULL) && !(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(__this->Parent())->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->_active, &ret7), ret7))
        __this->SetActive(NULL);

    if ((__this->PageCount() > 0) && (__this->_active == NULL))
        __this->SetActive(__this->GetPage(0));

    if (__this->_active != NULL)
        __this->GotoImpl(__this->_active, 1);

    __this->_region = uPtr(__this->Motion())->AcquireSimulation();
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(__this->_progress, 0.0f)));
}

// protected override sealed void OnUnrooted() :3138
void StructuredNavigation__OnUnrooted_fn(StructuredNavigation* __this)
{
    ::g::Uno::Float2 ret8;

    if (__this->_region != NULL)
    {
        __this->_progress = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret8), ret8).X;
        __this->_region = NULL;
        uPtr(__this->Motion())->ReleaseSimulation();
    }

    __this->CheckNeedUpdate(true);
    ::g::Fuse::Navigation::VisualNavigation__OnUnrooted_fn(__this);
}

// private void OnUpdated() :3270
void StructuredNavigation__OnUpdated_fn(StructuredNavigation* __this)
{
    __this->OnUpdated();
}

// private Fuse.Visual get_Previous() :3553
void StructuredNavigation__get_Previous_fn(StructuredNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Previous();
}

// public double get_Progress() :3413
void StructuredNavigation__get_Progress_fn(StructuredNavigation* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void QueueClearForwardHistory() :3216
void StructuredNavigation__QueueClearForwardHistory_fn(StructuredNavigation* __this)
{
    __this->QueueClearForwardHistory();
}

// private void ResetRegionLimits() :3289
void StructuredNavigation__ResetRegionLimits_fn(StructuredNavigation* __this)
{
    __this->ResetRegionLimits();
}

// private void SetActive(Fuse.Visual page) :3440
void StructuredNavigation__SetActive_fn(StructuredNavigation* __this, ::g::Fuse::Visual* page)
{
    __this->SetActive(page);
}

// private void SetProgress(float value) :3295
void StructuredNavigation__SetProgress_fn(StructuredNavigation* __this, float* value)
{
    __this->SetProgress(*value);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) :3224
void StructuredNavigation__TransitionToChild_fn(StructuredNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval)
{
    *__retval = __this->TransitionToChild(element, *bypass, *clamp);
}

// internal StructuredNavigation(Fuse.Navigation.StructuredNavigation.NavigationStructure mode) [instance] :3091
void StructuredNavigation::ctor_4(int mode)
{
    _reuseExistingVisual = true;
    ctor_3();
    Mode(mode);
}

// private void AnimationDone() [instance] :3417
void StructuredNavigation::AnimationDone()
{
    if (_queueClearForwardHistory)
    {
        ClearForwardHistory();
        _queueClearForwardHistory = false;
    }

    OnNavigated(_active);
    OnHistoryChanged();
    OnStateChanged(0);
}

// private Fuse.Visual get_Back() [instance] :3543
::g::Fuse::Visual* StructuredNavigation::Back()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(MaxIndex()) : NULL;
}

// private void ChangeProgress(float prev, float next, Fuse.Navigation.NavigationMode mode) [instance] :3315
void StructuredNavigation::ChangeProgress(float prev, float next, int mode)
{
    _prevProgress = prev;
    OnPageProgressChanged((double)next, (double)prev, mode);
}

// private void CheckNeedUpdate([bool off]) [instance] :3251
void StructuredNavigation::CheckNeedUpdate(bool off)
{
    bool needUpdated = (_region != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::TYPES[41/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        AnimationDone();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)StructuredNavigation__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// private int ClampProgress(int progress) [instance] :3531
int StructuredNavigation::ClampProgress1(int progress)
{
    return ::g::Uno::Math::Clamp8(progress, 0, MaxIndex());
}

// private void ClearForwardHistory() [instance] :3513
void StructuredNavigation::ClearForwardHistory()
{
    bool ret3;

    if (HasPages() && (_active != Front()))
    {
        int target = GetPageIndex(_active);

        for (int i = target - 1; i >= 0; i--)
            ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/]), GetPage(i), &ret3);
    }

    OnHistoryChanged();
}

// private Fuse.Visual get_Front() [instance] :3548
::g::Fuse::Visual* StructuredNavigation::Front()
{
    return (PageCount() > 0) ? (::g::Fuse::Visual*)GetPage(0) : NULL;
}

// public void GotoImpl(Fuse.Visual element, Fuse.Navigation.NavigationGotoMode mode) [instance] :3178
void StructuredNavigation::GotoImpl(::g::Fuse::Visual* element, int mode)
{
    bool ret6;

    if ((uPtr(element)->Parent() != NULL) && (uPtr(element)->Parent() != Parent()))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[82/*"Attempting ...*/], element, ::STRINGS[1/*"C:\\Users\\...*/], 3183, ::STRINGS[83/*"GotoImpl"*/]);
        SetActive(NULL);
        return;
    }

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/]), element, &ret6), ret6))
    {
        if (Mode() == 1)
        {
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
        else
            return;
    }
    else if (!_reuseExistingVisual)
    {
        if (Mode() == 1)
        {
            double diff = Progress() - (double)GetPageIndex(_active);
            uPtr(Parent())->BeginRemoveChild(element, NULL);
            SetProgress((float)((double)GetPageIndex(_active) + diff));
            ClearForwardHistory();
            ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), element);
        }
    }

    TransitionToChild(element, (mode & 1) == 1, false);
    OnHistoryChanged();
}

// private int get_MaxIndex() [instance] :3538
int StructuredNavigation::MaxIndex()
{
    return PageCount() - 1;
}

// internal generated Fuse.Navigation.StructuredNavigation.NavigationStructure get_Mode() [instance] :3089
int StructuredNavigation::Mode()
{
    return _Mode;
}

// internal generated void set_Mode(Fuse.Navigation.StructuredNavigation.NavigationStructure value) [instance] :3089
void StructuredNavigation::Mode(int value)
{
    _Mode = value;
}

// public Fuse.Motion.MotionConfig get_Motion() [instance] :3100
::g::Fuse::Motion::MotionConfig* StructuredNavigation::Motion()
{
    if (_motion == NULL)
        _motion = ::g::Fuse::Motion::NavigationMotion::New2();

    return _motion;
}

// public void set_Motion(Fuse.Motion.MotionConfig value) [instance] :3106
void StructuredNavigation::Motion(::g::Fuse::Motion::MotionConfig* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[86/*"Motion shou...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 3110, ::STRINGS[87/*"set_Motion"*/]);
}

// private Fuse.Visual get_Next() [instance] :3558
::g::Fuse::Visual* StructuredNavigation::Next()
{
    return GetPage(GetPageIndex(_active) - 1);
}

// private void OnUpdated() [instance] :3270
void StructuredNavigation::OnUpdated()
{
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;

    if (_region == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[84/*"Updated cal...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 3274, ::STRINGS[85/*"OnUpdated"*/]);
        return;
    }

    float prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret9), ret9).X;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::TYPES[41/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    ChangeProgress(prev, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret10), ret10).X, 2);
    CheckNeedUpdate(true);
}

// private Fuse.Visual get_Previous() [instance] :3553
::g::Fuse::Visual* StructuredNavigation::Previous()
{
    return GetPage(GetPageIndex(_active) + 1);
}

// public double get_Progress() [instance] :3413
double StructuredNavigation::Progress()
{
    ::g::Uno::Float2 ret13;
    return (double)((_region == NULL) ? _progress : (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret13), ret13).X);
}

// public void QueueClearForwardHistory() [instance] :3216
void StructuredNavigation::QueueClearForwardHistory()
{
    _queueClearForwardHistory = true;
}

// private void ResetRegionLimits() [instance] :3289
void StructuredNavigation::ResetRegionLimits()
{
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2((float)MaxIndex(), 0.0f));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New1(0.0f));
}

// private void SetActive(Fuse.Visual page) [instance] :3440
void StructuredNavigation::SetActive(::g::Fuse::Visual* page)
{
    if (page == _active)
        return;

    _active = page;
    OnActiveChanged(_active);
}

// private void SetProgress(float value) [instance] :3295
void StructuredNavigation::SetProgress(float value)
{
    ::g::Uno::Float2 ret11;
    ::g::Uno::Float2 ret12;
    float prev;

    if (_region != NULL)
    {
        ResetRegionLimits();
        prev = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret11), ret11).X;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), uCRef(::g::Uno::Float2__New2(value, 0.0f)));
        value = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::TYPES[43/*Fuse.Motion.Simulation.MotionSimulation<float2>*/]), &ret12), ret12).X;
    }
    else
    {
        prev = _progress;
        _progress = value;
    }

    ChangeProgress(prev, value, 1);
}

// private bool TransitionToChild(Fuse.Visual element, [bool bypass], [bool clamp]) [instance] :3224
bool StructuredNavigation::TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp)
{
    float targetProgress = (float)GetPageIndex(element);
    SetActive(element);

    if (bypass || !IsRootingCompleted())
    {
        SetProgress(targetProgress);
        OnNavigated(element);
        return false;
    }

    if (Progress() == (double)targetProgress)
    {
        OnStateChanged(0);
        return false;
    }

    OnStateChanged(2);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::TYPES[42/*Fuse.Motion.Simulation.BoundedRegion2D*/]), ::g::Uno::Float2__New2(targetProgress, 0.0f));
    CheckNeedUpdate(false);
    return true;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public enum SwipeDirection :3659
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Navigation.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Right", 0LL,
        "Left", 1LL,
        "Down", 2LL,
        "Up", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class SwipeNavigate :3683
// {
// static SwipeNavigate() :3683
static void SwipeNavigate__cctor_1_fn(uType* __type)
{
    SwipeNavigate::elasticDecay_ = 0.015f;
    SwipeNavigate::elasticScale_ = 0.4f;
}

static void SwipeNavigate_build(uType* type)
{
    ::TYPES[44] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[45] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::Node_typeof();
    ::TYPES[46] = ::g::Fuse::Navigation::ISeekableNavigation_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    ::TYPES[47] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[48] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[49] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentCoord), 0,
        ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _currentNavigation), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _down), 0,
        ::g::Fuse::Navigation::SwipeDirection_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _forwardDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _hasMaxPages), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _horizontalGesture), 0,
        ::TYPES[4/*Fuse.Elements.Element*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _lengthNode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _maxPages), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _prevDistance), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _startTime), 0,
        ::g::Fuse::Navigation::AllowedNavigationDirections_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _swipeAllow), 0,
        ::TYPES[44/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Navigation::SwipeNavigate, _velocity), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _verticalGesture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::SwipeNavigate, _VelocityThreshold), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticDecay_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Navigation::SwipeNavigate::elasticScale_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* SwipeNavigate_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(SwipeNavigate);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Navigation.SwipeNavigate", options);
    type->fp_build_ = SwipeNavigate_build;
    type->fp_ctor_ = (void*)SwipeNavigate__New2_fn;
    type->fp_cctor_ = SwipeNavigate__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeNavigate__OnUnrooted_fn;
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

// public SwipeNavigate() :3797
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this)
{
    __this->ctor_3();
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() :3944
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->AllowedDirections();
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) :3945
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value)
{
    __this->AllowedDirections(*value);
}

// private Fuse.Navigation.SnapTo DetermineSnap() :4004
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->DetermineSnap();
}

// private float2 get_Distance() :3913
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Distance();
}

// private double get_ElapsedTime() :3918
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval)
{
    *__retval = __this->ElapsedTime();
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() :3721
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->ForwardDirection();
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) :3722
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->ForwardDirection(*value);
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() :3948
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval)
{
    *__retval = __this->GetNavigationArgs();
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) :3735
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval)
{
    *__retval = __this->Invert(*sd);
}

// private bool get_IsHorizontal() :3778
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval)
{
    *__retval = __this->IsHorizontal();
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() :3687
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval)
{
    *__retval = __this->Navigation();
}

// public SwipeNavigate New() :3797
void SwipeNavigate__New2_fn(SwipeNavigate** __retval)
{
    *__retval = SwipeNavigate::New2();
}

// private void OnLostCapture() :3804
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :3835
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :3816
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :3873
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// protected override sealed void OnRooted() :3696
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[47/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[48/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[49/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
}

// protected override sealed void OnUnrooted() :3705
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this)
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), __this->Parent(), uDelegate::New(::TYPES[47/*Fuse.Input.PointerPressedHandler*/], (void*)SwipeNavigate__OnPointerPressed_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), __this->Parent(), uDelegate::New(::TYPES[48/*Fuse.Input.PointerMovedHandler*/], (void*)SwipeNavigate__OnPointerMoved_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), __this->Parent(), uDelegate::New(::TYPES[49/*Fuse.Input.PointerReleasedHandler*/], (void*)SwipeNavigate__OnPointerReleased_fn, __this));
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private float get_ProgressVelocity() :3923
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->ProgressVelocity();
}

// private float2 get_Scale() :3900
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Scale();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() :3731
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval)
{
    *__retval = __this->SwipeDirection();
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) :3732
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value)
{
    __this->SwipeDirection(*value);
}

// public generated float get_VelocityThreshold() :3747
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval)
{
    *__retval = __this->VelocityThreshold();
}

// public generated void set_VelocityThreshold(float value) :3747
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value)
{
    __this->VelocityThreshold(*value);
}

float SwipeNavigate::elasticDecay_;
float SwipeNavigate::elasticScale_;

// public SwipeNavigate() [instance] :3797
void SwipeNavigate::ctor_3()
{
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[44/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _forwardDirection = 1;
    _horizontalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[45/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(75.0f, 105.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-75.0f, -105.0f)));
    _verticalGesture = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[45/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-15.0f, 15.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-165.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(165.0f, 180.0f)));
    _down = -1;
    _swipeAllow = 3;
    ctor_2();
    VelocityThreshold(300.0f);
}

// public Fuse.Navigation.AllowedNavigationDirections get_AllowedDirections() [instance] :3944
int SwipeNavigate::AllowedDirections()
{
    return _swipeAllow;
}

// public void set_AllowedDirections(Fuse.Navigation.AllowedNavigationDirections value) [instance] :3945
void SwipeNavigate::AllowedDirections(int value)
{
    _swipeAllow = value;
}

// private Fuse.Navigation.SnapTo DetermineSnap() [instance] :4004
int SwipeNavigate::DetermineSnap()
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    float diff = IsHorizontal() ? (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret2), ret2).X : (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3).Y;

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        diff = -diff;

    int q = 1;

    if ((diff < -VelocityThreshold()) && ((AllowedDirections() & 1) == 1))
        q = 0;

    if ((diff > VelocityThreshold()) && ((AllowedDirections() & 2) == 2))
        q = 2;

    return q;
}

// private float2 get_Distance() [instance] :3913
::g::Uno::Float2 SwipeNavigate::Distance()
{
    return ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
}

// private double get_ElapsedTime() [instance] :3918
double SwipeNavigate::ElapsedTime()
{
    return ::g::Fuse::Time::FrameTime() - _startTime;
}

// public Fuse.Navigation.SwipeDirection get_ForwardDirection() [instance] :3721
int SwipeNavigate::ForwardDirection()
{
    return _forwardDirection;
}

// public void set_ForwardDirection(Fuse.Navigation.SwipeDirection value) [instance] :3722
void SwipeNavigate::ForwardDirection(int value)
{
    _forwardDirection = value;
}

// private Fuse.Navigation.UpdateSeekArgs GetNavigationArgs() [instance] :3948
::g::Fuse::Navigation::UpdateSeekArgs* SwipeNavigate::GetNavigationArgs()
{
    float distance, scale;

    if (IsHorizontal())
    {
        distance = Distance().X;
        scale = Scale().X;
    }
    else
    {
        distance = Distance().Y;
        scale = Scale().Y;
    }

    if ((ForwardDirection() == 0) || (ForwardDirection() == 2))
        distance = -distance;

    float rel = distance / scale;

    if (!((AllowedDirections() & 2) == 2))
        rel = ::g::Uno::Math::Min1(0.0f, rel);

    if (!((AllowedDirections() & 1) == 1))
        rel = ::g::Uno::Math::Max1(0.0f, rel);

    if (_hasMaxPages)
        rel = ::g::Uno::Math::Clamp1(rel, -_maxPages, _maxPages);

    float clampDistance = rel * scale;
    float delta = clampDistance - _prevDistance;
    _prevDistance = clampDistance;
    return ::g::Fuse::Navigation::UpdateSeekArgs::New1(delta, clampDistance, scale, ElapsedTime());
}

// private Fuse.Navigation.SwipeDirection Invert(Fuse.Navigation.SwipeDirection sd) [instance] :3735
int SwipeNavigate::Invert(int sd)
{
    switch (sd)
    {
        case 1:
            return 0;
        case 0:
            return 1;
        case 3:
            return 2;
        case 2:
            return 3;
    }

    return 1;
}

// private bool get_IsHorizontal() [instance] :3778
bool SwipeNavigate::IsHorizontal()
{
    return (ForwardDirection() == 1) || (ForwardDirection() == 0);
}

// private Fuse.Navigation.ISeekableNavigation get_Navigation() [instance] :3687
uObject* SwipeNavigate::Navigation()
{
    return uAs<uObject*>(::g::Fuse::Navigation::Navigation::TryFindBaseNavigation(ContextParent()), ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/]);
}

// private void OnLostCapture() [instance] :3804
void SwipeNavigate::OnLostCapture()
{
    _down = -1;

    if (_currentNavigation != NULL)
    {
        if (uPtr(uAs< ::g::Fuse::Node*>(_currentNavigation, ::TYPES[30/*Fuse.Node*/]))->IsRootingCompleted())
            ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(_currentNavigation), ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(1, 0.0f));

        _currentNavigation = NULL;
    }
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :3835
void SwipeNavigate::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    if (_currentNavigation == NULL)
        return;

    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(args->IsHardCapturedTo(this) ? 0 : 1));

    if (args->IsHardCapturedTo(this))
        ::g::Fuse::Navigation::ISeekableNavigation::Seek(uInterface(uPtr(_currentNavigation), ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/]), GetNavigationArgs());
    else
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = IsHorizontal() ? uPtr(_horizontalGesture)->IsWithinBounds(diff) : uPtr(_verticalGesture)->IsWithinBounds(diff);

        if (withinBounds)
        {
            _startCoord = (_currentCoord = uPtr(args)->WindowPoint());
            _prevDistance = 0.0f;
            _startTime = ::g::Fuse::Time::FrameTime();

            if (args->TryHardCapture(this, uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
                ::g::Fuse::Navigation::ISeekableNavigation::BeginSeek(uInterface(uPtr(_currentNavigation), ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/]));
            else
                OnLostCapture();
        }
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :3816
void SwipeNavigate::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    _currentNavigation = Navigation();

    if (_currentNavigation == NULL)
        return;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)SwipeNavigate__OnLostCapture_fn, this), NULL))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = (_currentCoord = args->WindowPoint());
        _prevDistance = 0.0f;
        _startTime = ::g::Fuse::Time::FrameTime();
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_startCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(args->Timestamp()));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :3873
void SwipeNavigate::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    _currentCoord = uPtr(args)->WindowPoint();
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSampleTime_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(args->Timestamp()), uCRef<int>(2));
    _down = -1;

    if (_currentNavigation == NULL)
        return;

    if (args->IsHardCapturedTo(this))
    {
        ::g::Fuse::Navigation::ISeekableNavigation::EndSeek(uInterface(uPtr(_currentNavigation), ::TYPES[46/*Fuse.Navigation.ISeekableNavigation*/]), ::g::Fuse::Navigation::EndSeekArgs::New1(DetermineSnap(), ProgressVelocity()));
        uPtr(args)->ReleaseHardCapture(this);
    }
    else
    {
        if (uPtr(args)->IsSoftCapturedTo(this))
            uPtr(args)->ReleaseSoftCapture(this);
    }

    _currentNavigation = NULL;
}

// private float get_ProgressVelocity() [instance] :3923
float SwipeNavigate::ProgressVelocity()
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;

    switch (SwipeDirection())
    {
        case 1:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret4), ret4).X / Scale().X;
        case 0:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret5), ret5).X / Scale().X;
        case 3:
            return -(::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret6), ret6).Y / Scale().Y;
        case 2:
            return (::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7).Y / Scale().Y;
    }

    return 0.0f;
}

// private float2 get_Scale() [instance] :3900
::g::Uno::Float2 SwipeNavigate::Scale()
{
    if (_lengthNode != NULL)
        return uPtr(_lengthNode)->ActualSize();

    ::g::Fuse::Elements::Element* e = uAs< ::g::Fuse::Elements::Element*>(Parent(), ::TYPES[4/*Fuse.Elements.Element*/]);

    if (e == NULL)
        return ::g::Uno::Float2__New1(1.0f);

    return uPtr(e)->ActualSize();
}

// public Fuse.Navigation.SwipeDirection get_SwipeDirection() [instance] :3731
int SwipeNavigate::SwipeDirection()
{
    return Invert(ForwardDirection());
}

// public void set_SwipeDirection(Fuse.Navigation.SwipeDirection value) [instance] :3732
void SwipeNavigate::SwipeDirection(int value)
{
    ForwardDirection(Invert(value));
}

// public generated float get_VelocityThreshold() [instance] :3747
float SwipeNavigate::VelocityThreshold()
{
    return _VelocityThreshold;
}

// public generated void set_VelocityThreshold(float value) [instance] :3747
void SwipeNavigate::VelocityThreshold(float value)
{
    _VelocityThreshold = value;
}

// public SwipeNavigate New() [static] :3797
SwipeNavigate* SwipeNavigate::New2()
{
    SwipeNavigate* obj1 = (SwipeNavigate*)uNew(SwipeNavigate_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class UpdateSeekArgs :3606
// {
static void UpdateSeekArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _scale), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _time), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Delta), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::UpdateSeekArgs, _Distance), 0);
}

uType* UpdateSeekArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(UpdateSeekArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Navigation.UpdateSeekArgs", options);
    type->fp_build_ = UpdateSeekArgs_build;
    return type;
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) :3624
void UpdateSeekArgs__ctor__fn(UpdateSeekArgs* __this, float* delta, float* distance, float* scale, double* time)
{
    __this->ctor_(*delta, *distance, *scale, *time);
}

// public generated float get_Delta() :3608
void UpdateSeekArgs__get_Delta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Delta();
}

// private generated void set_Delta(float value) :3608
void UpdateSeekArgs__set_Delta_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Delta(*value);
}

// public generated float get_Distance() :3609
void UpdateSeekArgs__get_Distance_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// private generated void set_Distance(float value) :3609
void UpdateSeekArgs__set_Distance_fn(UpdateSeekArgs* __this, float* value)
{
    __this->Distance(*value);
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) :3624
void UpdateSeekArgs__New1_fn(float* delta, float* distance, float* scale, double* time, UpdateSeekArgs** __retval)
{
    *__retval = UpdateSeekArgs::New1(*delta, *distance, *scale, *time);
}

// public float get_RelativeDelta() :3613
void UpdateSeekArgs__get_RelativeDelta_fn(UpdateSeekArgs* __this, float* __retval)
{
    *__retval = __this->RelativeDelta();
}

// public UpdateSeekArgs(float delta, float distance, float scale, double time) [instance] :3624
void UpdateSeekArgs::ctor_(float delta, float distance, float scale, double time)
{
    Delta(delta);
    Distance(distance);
    _scale = scale;
    _time = time;
}

// public generated float get_Delta() [instance] :3608
float UpdateSeekArgs::Delta()
{
    return _Delta;
}

// private generated void set_Delta(float value) [instance] :3608
void UpdateSeekArgs::Delta(float value)
{
    _Delta = value;
}

// public generated float get_Distance() [instance] :3609
float UpdateSeekArgs::Distance()
{
    return _Distance;
}

// private generated void set_Distance(float value) [instance] :3609
void UpdateSeekArgs::Distance(float value)
{
    _Distance = value;
}

// public float get_RelativeDelta() [instance] :3613
float UpdateSeekArgs::RelativeDelta()
{
    return Delta() / _scale;
}

// public UpdateSeekArgs New(float delta, float distance, float scale, double time) [static] :3624
UpdateSeekArgs* UpdateSeekArgs::New1(float delta, float distance, float scale, double time)
{
    UpdateSeekArgs* obj1 = (UpdateSeekArgs*)uNew(UpdateSeekArgs_typeof());
    obj1->ctor_(delta, distance, scale, time);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public interfacemodifiers class VisualNavigation :4262
// {
// static VisualNavigation() :4264
static void VisualNavigation__cctor_1_fn(uType* __type)
{
    VisualNavigation::ActiveIndexName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[88/*"ActiveIndex"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[23/*Fuse.Scripting.ScriptMember[]*/], 1, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[50/*Fuse.Scripting.ScriptMethod<Fuse.Navigation.VisualNavigation>*/], ::STRINGS[32/*"goto"*/], uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Scripting.Context, Fuse.Navigation.VisualNavigation, object[]>*/], (void*)VisualNavigation__gotoNode_fn), 2)));
}

static void VisualNavigation_build(uType* type)
{
    ::STRINGS[88] = uString::Const("ActiveIndex");
    ::STRINGS[32] = uString::Const("goto");
    ::STRINGS[89] = uString::Const("Navigation.goto() : Argument must be a node object");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[90] = uString::Const("gotoNode");
    ::TYPES[22] = ::g::Uno::Type_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[50] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[51] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[52] = ::g::Uno::Collections::List_typeof()->MakeType(VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Visual_typeof(), VisualNavigation__PageData_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[54] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[55] = ::g::Fuse::Navigation::ActivePageChangedHandler_typeof();
    ::TYPES[40] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[21] = ::g::Fuse::Navigation::NavigatedHandler_typeof();
    ::TYPES[56] = ::g::Fuse::Navigation::NavigationPageCountHandler_typeof();
    ::TYPES[16] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[57] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VisualNavigation_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(VisualNavigation_type, interface3),
        ::g::Fuse::Navigation::INavigation_typeof(), offsetof(VisualNavigation_type, interface4),
        ::g::Fuse::IParentObserver_typeof(), offsetof(VisualNavigation_type, interface5),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(VisualNavigation_type, interface6));
    type->SetFields(13,
        ::g::Fuse::Navigation::NavigationState_typeof(), offsetof(::g::Fuse::Navigation::VisualNavigation, _navState), 0,
        ::TYPES[53/*Uno.Collections.Dictionary<Fuse.Visual, Fuse.Navigation.VisualNavigation.PageData>*/], offsetof(::g::Fuse::Navigation::VisualNavigation, _pageMap), 0,
        ::TYPES[52/*Uno.Collections.List<Fuse.Navigation.VisualNavigation.PageData>*/], offsetof(::g::Fuse::Navigation::VisualNavigation, _pages), 0,
        ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, ActivePageChanged1), 0,
        ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, HistoryChanged1), 0,
        ::TYPES[21/*Fuse.Navigation.NavigatedHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, Navigated1), 0,
        ::TYPES[56/*Fuse.Navigation.NavigationPageCountHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, PageCountChanged1), 0,
        ::TYPES[16/*Fuse.Navigation.NavigationHandler*/], offsetof(::g::Fuse::Navigation::VisualNavigation, PageProgressChanged1), 0,
        ::TYPES[57/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], offsetof(::g::Fuse::Navigation::VisualNavigation, StateChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Navigation::VisualNavigation::ActiveIndexName_, uFieldFlagsStatic);
}

VisualNavigation_type* VisualNavigation_typeof()
{
    static uSStrong<VisualNavigation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 23;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(VisualNavigation);
    options.TypeSize = sizeof(VisualNavigation_type);
    type = (VisualNavigation_type*)uClassType::New("Fuse.Navigation.VisualNavigation", options);
    type->fp_build_ = VisualNavigation_build;
    type->fp_cctor_ = VisualNavigation__cctor_1_fn;
    type->fp_get_CanGoBack = VisualNavigation__get_CanGoBack_fn;
    type->fp_get_CanGoForward = VisualNavigation__get_CanGoForward_fn;
    type->fp_GetPageState = VisualNavigation__GetPageState_fn;
    type->fp_GoBack = VisualNavigation__GoBack_fn;
    type->fp_GoForward = VisualNavigation__GoForward_fn;
    type->fp_OnChildAddedWhileRooted = VisualNavigation__OnChildAddedWhileRooted_fn;
    type->fp_OnChildRemovedWhileRooted = VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))VisualNavigation__OnUnrooted_fn;
    type->fp_Toggle = VisualNavigation__Toggle_fn;
    type->interface4.fp_GetPageState = (void(*)(uObject*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*))VisualNavigation__GetPageState_fn;
    type->interface4.fp_Toggle = (void(*)(uObject*, ::g::Fuse::Visual*))VisualNavigation__Toggle_fn;
    type->interface4.fp_get_ActivePage = (void(*)(uObject*, ::g::Fuse::Visual**))VisualNavigation__get_ActivePage_fn;
    type->interface4.fp_get_State = (void(*)(uObject*, int*))VisualNavigation__get_State_fn;
    type->interface4.fp_add_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_PageProgressChanged_fn;
    type->interface4.fp_remove_PageProgressChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_PageProgressChanged_fn;
    type->interface4.fp_add_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__add_Navigated_fn;
    type->interface4.fp_remove_Navigated = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_Navigated_fn;
    type->interface4.fp_add_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__add_StateChanged_fn;
    type->interface4.fp_remove_StateChanged = (void(*)(uObject*, uDelegate*))VisualNavigation__remove_StateChanged_fn;
    type->interface5.fp_OnChildAddedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildAddedWhileRooted_fn;
    type->interface5.fp_OnChildRemovedWhileRooted = (void(*)(uObject*, ::g::Fuse::Node*))VisualNavigation__OnChildRemovedWhileRooted_fn;
    type->interface6.fp_GoForward = (void(*)(uObject*))VisualNavigation__GoForward_fn;
    type->interface6.fp_GoBack = (void(*)(uObject*))VisualNavigation__GoBack_fn;
    type->interface6.fp_get_CanGoBack = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoBack_fn;
    type->interface6.fp_get_CanGoForward = (void(*)(uObject*, bool*))VisualNavigation__get_CanGoForward_fn;
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

// internal VisualNavigation() :4284
void VisualNavigation__ctor_3_fn(VisualNavigation* __this)
{
    __this->ctor_3();
}

// public Fuse.Visual get_ActivePage() :4483
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->ActivePage();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :4352
void VisualNavigation__add_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_ActivePageChanged(value);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) :4352
void VisualNavigation__remove_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_ActivePageChanged(value);
}

// public virtual bool get_CanGoBack() :4376
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual bool get_CanGoForward() :4377
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public Fuse.Visual GetPage(int index) :4476
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int* index, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->GetPage(*index);
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) :4399
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, VisualNavigation__PageData** __retval)
{
    *__retval = __this->GetPageData(page);
}

// protected int GetPageIndex(Fuse.Visual child) :4490
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int* __retval)
{
    *__retval = __this->GetPageIndex(child);
}

// public virtual Fuse.Navigation.NavigationPageState GetPageState(Fuse.Visual page) :4291
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval)
{
    ::g::Fuse::Navigation::NavigationPageState collection1;
    ::g::Fuse::Navigation::NavigationPageState collection2;
    VisualNavigation__PageData* pd = __this->GetPageData(page);

    if (pd == NULL)
        return *__retval = (collection1 = uDefault< ::g::Fuse::Navigation::NavigationPageState>(), collection1.Progress = 0.0f, collection1.PreviousProgress = 0.0f, collection1), void();

    collection2 = uDefault< ::g::Fuse::Navigation::NavigationPageState>();
    collection2.Progress = uPtr(pd)->Progress;
    collection2.PreviousProgress = uPtr(pd)->PreviousProgress;
    return *__retval = collection2, void();
}

// public virtual void GoBack() :4375
void VisualNavigation__GoBack_fn(VisualNavigation* __this)
{
}

// public virtual void GoForward() :4374
void VisualNavigation__GoForward_fn(VisualNavigation* __this)
{
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) :4277
void VisualNavigation__gotoNode_fn(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    VisualNavigation::gotoNode(c, nav, args);
}

// protected bool get_HasPages() :4487
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval)
{
    *__retval = __this->HasPages();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :4366
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :4366
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) :4338
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_Navigated(value);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) :4338
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_Navigated(value);
}

// protected void OnActiveChanged(Fuse.Visual newElement) :4358
void VisualNavigation__OnActiveChanged_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnActiveChanged(newElement);
}

// public virtual void OnChildAddedWhileRooted(Fuse.Node child) :4450
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    __this->UpdatePages();
}

// public virtual void OnChildRemovedWhileRooted(Fuse.Node child) :4459
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child)
{
    bool ret5;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(child, ::TYPES[1/*Fuse.Visual*/]);

    if (v == NULL)
        return;

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_pageMap), v, &ret5);
    __this->UpdatePages();
}

// protected void OnHistoryChanged() :4368
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this)
{
    __this->OnHistoryChanged();
}

// protected void OnNavigated(Fuse.Visual newElement) :4343
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement)
{
    __this->OnNavigated(newElement);
}

// protected void OnPageCountChanged() :4319
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this)
{
    __this->OnPageCountChanged();
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) :4332
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int* mode)
{
    __this->OnPageProgressChanged(*current, *prev, *mode);
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) :4327
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int* mode)
{
    __this->OnPageProgressChanged1(*mode);
}

// protected override void OnRooted() :4410
void VisualNavigation__OnRooted_fn(VisualNavigation* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_pageMap)->Clear();
    __this->UpdatePages();
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) :4309
void VisualNavigation__OnStateChanged_fn(VisualNavigation* __this, int* newState)
{
    __this->OnStateChanged(*newState);
}

// protected override void OnUnrooted() :4443
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this)
{
    uPtr(__this->_pages)->Clear();
    uPtr(__this->_pageMap)->Clear();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public int get_PageCount() :4473
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->PageCount();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :4300
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageCountChanged(value);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) :4300
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageCountChanged(value);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :4325
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_PageProgressChanged(value);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) :4325
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_PageProgressChanged(value);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() :4397
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval)
{
    *__retval = __this->Pages();
}

// public Fuse.Navigation.NavigationState get_State() :4305
void VisualNavigation__get_State_fn(VisualNavigation* __this, int* __retval)
{
    *__retval = __this->State();
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :4307
void VisualNavigation__add_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) :4307
void VisualNavigation__remove_StateChanged_fn(VisualNavigation* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public virtual void Toggle(Fuse.Visual page) :4288
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page)
{
}

// private void UpdatePages() :4417
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this)
{
    __this->UpdatePages();
}

::g::Uno::UX::Selector VisualNavigation::ActiveIndexName_;

// internal VisualNavigation() [instance] :4284
void VisualNavigation::ctor_3()
{
    _pages = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[52/*Uno.Collections.List<Fuse.Navigation.VisualNavigation.PageData>*/]));
    _pageMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[53/*Uno.Collections.Dictionary<Fuse.Visual, Fuse.Navigation.VisualNavigation.PageData>*/]));
    ctor_2();
}

// public Fuse.Visual get_ActivePage() [instance] :4483
::g::Fuse::Visual* VisualNavigation::ActivePage()
{
    return Active();
}

// public generated void add_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :4352
void VisualNavigation::add_ActivePageChanged(uDelegate* value)
{
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivePageChanged1, value), ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public generated void remove_ActivePageChanged(Fuse.Navigation.ActivePageChangedHandler value) [instance] :4352
void VisualNavigation::remove_ActivePageChanged(uDelegate* value)
{
    ActivePageChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivePageChanged1, value), ::TYPES[55/*Fuse.Navigation.ActivePageChangedHandler*/]);
}

// public Fuse.Visual GetPage(int index) [instance] :4476
::g::Fuse::Visual* VisualNavigation::GetPage(int index)
{
    VisualNavigation__PageData* ret3;

    if ((index < 0) || (index >= uPtr(_pages)->Count()))
        return NULL;

    return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pages), uCRef<int>(index), &ret3), ret3))->Visual();
}

// protected Fuse.Navigation.VisualNavigation.PageData GetPageData(Fuse.Visual page) [instance] :4399
VisualNavigation__PageData* VisualNavigation::GetPageData(::g::Fuse::Visual* page)
{
    bool ret4;

    if (page == NULL)
        return NULL;

    VisualNavigation__PageData* pd;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), page, (void**)(&pd), &ret4), ret4))
        return NULL;

    return pd;
}

// protected int GetPageIndex(Fuse.Visual child) [instance] :4490
int VisualNavigation::GetPageIndex(::g::Fuse::Visual* child)
{
    VisualNavigation__PageData* pd = GetPageData(child);

    if (pd == NULL)
        return -1;

    return uPtr(pd)->Index;
}

// protected bool get_HasPages() [instance] :4487
bool VisualNavigation::HasPages()
{
    return uPtr(_pages)->Count() > 0;
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :4366
void VisualNavigation::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :4366
void VisualNavigation::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[40/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void add_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :4338
void VisualNavigation::add_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Navigated1, value), ::TYPES[21/*Fuse.Navigation.NavigatedHandler*/]);
}

// public generated void remove_Navigated(Fuse.Navigation.NavigatedHandler value) [instance] :4338
void VisualNavigation::remove_Navigated(uDelegate* value)
{
    Navigated1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Navigated1, value), ::TYPES[21/*Fuse.Navigation.NavigatedHandler*/]);
}

// protected void OnActiveChanged(Fuse.Visual newElement) [instance] :4358
void VisualNavigation::OnActiveChanged(::g::Fuse::Visual* newElement)
{
    OnPropertyChanged(VisualNavigation::ActiveIndexName());

    if (::g::Uno::Delegate::op_Inequality(ActivePageChanged1, NULL))
        uPtr(ActivePageChanged1)->Invoke(2, this, newElement);
}

// protected void OnHistoryChanged() [instance] :4368
void VisualNavigation::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(this);
}

// protected void OnNavigated(Fuse.Visual newElement) [instance] :4343
void VisualNavigation::OnNavigated(::g::Fuse::Visual* newElement)
{
    uDelegate* handler = Navigated1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Fuse::Navigation::NavigatedArgs*)::g::Fuse::Navigation::NavigatedArgs::New2(newElement));
}

// protected void OnPageCountChanged() [instance] :4319
void VisualNavigation::OnPageCountChanged()
{
    if (::g::Uno::Delegate::op_Inequality(PageCountChanged1, NULL))
        uPtr(PageCountChanged1)->InvokeVoid(this);
}

// protected void OnPageProgressChanged(double current, double prev, Fuse.Navigation.NavigationMode mode) [instance] :4332
void VisualNavigation::OnPageProgressChanged(double current, double prev, int mode)
{
    if (::g::Uno::Delegate::op_Inequality(PageProgressChanged1, NULL))
        uPtr(PageProgressChanged1)->Invoke(2, this, (::g::Fuse::Navigation::NavigationArgs*)::g::Fuse::Navigation::NavigationArgs::New2(current, prev, mode));
}

// protected void OnPageProgressChanged(Fuse.Navigation.NavigationMode mode) [instance] :4327
void VisualNavigation::OnPageProgressChanged1(int mode)
{
    OnPageProgressChanged(0.0, 0.0, mode);
}

// protected void OnStateChanged(Fuse.Navigation.NavigationState newState) [instance] :4309
void VisualNavigation::OnStateChanged(int newState)
{
    ::g::Uno::UX::ValueChangedArgs* ret6;

    if (newState == _navState)
        return;

    _navState = newState;

    if (::g::Uno::Delegate::op_Inequality(StateChanged1, NULL))
        uPtr(StateChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[54/*Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState>*/], uCRef<int>(newState), &ret6), ret6));
}

// public int get_PageCount() [instance] :4473
int VisualNavigation::PageCount()
{
    return uPtr(_pages)->Count();
}

// public generated void add_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :4300
void VisualNavigation::add_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageCountChanged1, value), ::TYPES[56/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void remove_PageCountChanged(Fuse.Navigation.NavigationPageCountHandler value) [instance] :4300
void VisualNavigation::remove_PageCountChanged(uDelegate* value)
{
    PageCountChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageCountChanged1, value), ::TYPES[56/*Fuse.Navigation.NavigationPageCountHandler*/]);
}

// public generated void add_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :4325
void VisualNavigation::add_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageProgressChanged1, value), ::TYPES[16/*Fuse.Navigation.NavigationHandler*/]);
}

// public generated void remove_PageProgressChanged(Fuse.Navigation.NavigationHandler value) [instance] :4325
void VisualNavigation::remove_PageProgressChanged(uDelegate* value)
{
    PageProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageProgressChanged1, value), ::TYPES[16/*Fuse.Navigation.NavigationHandler*/]);
}

// protected internal Uno.Collections.IList<Fuse.Navigation.VisualNavigation.PageData> get_Pages() [instance] :4397
uObject* VisualNavigation::Pages()
{
    return (uObject*)_pages;
}

// public Fuse.Navigation.NavigationState get_State() [instance] :4305
int VisualNavigation::State()
{
    return _navState;
}

// public generated void add_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :4307
void VisualNavigation::add_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::TYPES[57/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// public generated void remove_StateChanged(Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState> value) [instance] :4307
void VisualNavigation::remove_StateChanged(uDelegate* value)
{
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::TYPES[57/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/]);
}

// private void UpdatePages() [instance] :4417
void VisualNavigation::UpdatePages()
{
    ::g::Fuse::Node* ret7;
    bool ret8;
    uPtr(_pages)->Clear();
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* x = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(Parent())->Children()), ::TYPES[14/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret7), ret7), ::TYPES[1/*Fuse.Visual*/]);

        if (!::g::Fuse::Navigation::Navigation::IsPage(x))
            continue;

        VisualNavigation__PageData* pd;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_pageMap), x, (void**)(&pd), &ret8), ret8))
        {
            pd = VisualNavigation__PageData::New1(x);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_pageMap), x, pd);
        }

        uPtr(pd)->Index = c;
        ::g::Uno::Collections::List__Add_fn(uPtr(_pages), pd);
        c++;
    }

    OnPageCountChanged();
}

// private static void gotoNode(Fuse.Scripting.Context c, Fuse.Navigation.VisualNavigation nav, object[] args) [static] :4277
void VisualNavigation::gotoNode(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args)
{
    VisualNavigation_typeof()->Init();
    ::g::Fuse::Visual* target = uAs< ::g::Fuse::Visual*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*Fuse.Visual*/]);

    if (target != NULL)
        uPtr(nav)->Goto(target, 0);
    else
        ::g::Fuse::Diagnostics::UserError(::STRINGS[89/*"Navigation....*/], nav, ::STRINGS[1/*"C:\\Users\\...*/], 4281, ::STRINGS[90/*"gotoNode"*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileActive :4793
// {
static void WhileActive_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileActive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileActive", options);
    type->fp_build_ = WhileActive_build;
    type->fp_ctor_ = (void*)WhileActive__New2_fn;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileActive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileActive__OnNavigationStateChanged_fn;
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

// public generated WhileActive() :4793
void WhileActive__ctor_7_fn(WhileActive* __this)
{
    __this->ctor_7();
}

// protected override sealed void ForceUpdate() :4795
void WhileActive__ForceUpdate_fn(WhileActive* __this)
{
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// private double InvertProgress(double p) :4800
void WhileActive__InvertProgress_fn(WhileActive* __this, double* p, double* __retval)
{
    *__retval = __this->InvertProgress(*p);
}

// public generated WhileActive New() :4793
void WhileActive__New2_fn(WhileActive** __retval)
{
    *__retval = WhileActive::New2();
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4805
void WhileActive__OnNavigationStateChanged_fn(WhileActive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress(__this->InvertProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// public generated WhileActive() [instance] :4793
void WhileActive::ctor_7()
{
    ctor_6();
}

// private double InvertProgress(double p) [instance] :4800
double WhileActive::InvertProgress(double p)
{
    return 1.0 - ::g::Uno::Math::Min(1.0, ::g::Uno::Math::Abs(p));
}

// public generated WhileActive New() [static] :4793
WhileActive* WhileActive::New2()
{
    WhileActive* obj1 = (WhileActive*)uNew(WhileActive_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileInactive :4834
// {
static void WhileInactive_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInactive);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInactive", options);
    type->fp_build_ = WhileInactive_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInactive__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInactive__OnNavigationStateChanged_fn;
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

// protected override sealed void ForceUpdate() :4836
void WhileInactive__ForceUpdate_fn(WhileInactive* __this)
{
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4841
void WhileInactive__OnNavigationStateChanged_fn(WhileInactive* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress((double)::g::Uno::Math::Abs1(::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileInEnterState :4870
// {
static void WhileInEnterState_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInEnterState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInEnterState", options);
    type->fp_build_ = WhileInEnterState_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInEnterState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInEnterState__OnNavigationStateChanged_fn;
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

// protected override sealed void ForceUpdate() :4872
void WhileInEnterState__ForceUpdate_fn(WhileInEnterState* __this)
{
    __this->GoProgress((double)::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4877
void WhileInEnterState__OnNavigationStateChanged_fn(WhileInEnterState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    float p = ::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress;
    __this->GoProgress((double)p);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class WhileInExitState :4852
// {
static void WhileInExitState_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger_type, interface4));
    type->SetFields(35);
}

::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigationTrigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileInExitState);
    options.TypeSize = sizeof(::g::Fuse::Navigation::WhileNavigationTrigger_type);
    type = (::g::Fuse::Navigation::WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileInExitState", options);
    type->fp_build_ = WhileInExitState_build;
    type->fp_ForceUpdate = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*))WhileInExitState__ForceUpdate_fn;
    type->fp_OnNavigationStateChanged = (void(*)(::g::Fuse::Navigation::WhileNavigationTrigger*, uObject*, ::g::Fuse::Navigation::NavigationArgs*))WhileInExitState__OnNavigationStateChanged_fn;
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

// protected override sealed void ForceUpdate() :4854
void WhileInExitState__ForceUpdate_fn(WhileInExitState* __this)
{
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}

// internal override sealed void OnNavigationStateChanged(object sender, Fuse.Navigation.NavigationArgs state) :4859
void WhileInExitState__OnNavigationStateChanged_fn(WhileInExitState* __this, uObject* sender, ::g::Fuse::Navigation::NavigationArgs* state)
{
    __this->GoProgress((double)-::g::Fuse::Navigation::INavigation::GetPageState(uInterface(uPtr(__this->NavContext()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), __this->PageContext()).Progress);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public class WhileNavigating :4623
// {
static void WhileNavigating_build(uType* type)
{
    ::STRINGS[91] = uString::Const("WhileNavigating requires a Navigation context");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Navigation\\0.43.11\\$.uno");
    ::STRINGS[6] = uString::Const("OnRooted");
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[57] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Fuse::Navigation::NavigationState_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4));
    type->SetFields(31,
        ::TYPES[0/*Fuse.Navigation.INavigation*/], offsetof(::g::Fuse::Navigation::WhileNavigating, _context), 0);
}

::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Navigation.WhileNavigating", options);
    type->fp_build_ = WhileNavigating_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigating__OnUnrooted_fn;
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

// public generated WhileNavigating() :4623
void WhileNavigating__ctor_6_fn(WhileNavigating* __this)
{
    __this->ctor_6();
}

// protected override sealed void OnRooted() :4627
void WhileNavigating__OnRooted_fn(WhileNavigating* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_context = ::g::Fuse::Navigation::Navigation::TryFind(__this->Parent());

    if (__this->_context == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[91/*"WhileNaviga...*/], __this, ::STRINGS[1/*"C:\\Users\\...*/], 4633, ::STRINGS[6/*"OnRooted"*/]);
        return;
    }

    ::g::Fuse::Navigation::INavigation::add_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[57/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
    __this->SetActive(::g::Fuse::Navigation::INavigation::State(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/])) != 0);
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) :4651
void WhileNavigating__OnStateChanged_fn(WhileNavigating* __this, uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnStateChanged(s, args);
}

// protected override sealed void OnUnrooted() :4641
void WhileNavigating__OnUnrooted_fn(WhileNavigating* __this)
{
    if (__this->_context != NULL)
    {
        ::g::Fuse::Navigation::INavigation::remove_StateChanged(uInterface(uPtr(__this->_context), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[57/*Uno.UX.ValueChangedHandler<Fuse.Navigation.NavigationState>*/], (void*)WhileNavigating__OnStateChanged_fn, __this));
        __this->_context = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated WhileNavigating() [instance] :4623
void WhileNavigating::ctor_6()
{
    ctor_5();
}

// private void OnStateChanged(object s, Uno.UX.ValueChangedArgs<Fuse.Navigation.NavigationState> args) [instance] :4651
void WhileNavigating::OnStateChanged(uObject* s, ::g::Uno::UX::ValueChangedArgs* args)
{
    int ret2;
    SetActive((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2) != 0);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public abstract class WhileNavigationTrigger :4683
// {
static void WhileNavigationTrigger_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::INavigation_typeof();
    ::TYPES[16] = ::g::Fuse::Navigation::NavigationHandler_typeof();
    ::TYPES[15] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileNavigationTrigger_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileNavigationTrigger_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileNavigationTrigger_type, interface4));
    type->SetFields(31,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _hasLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _limit), 0,
        ::g::Fuse::Navigation::NavigationPageProxy_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Navigation::WhileNavigationTrigger, _threshold), 0);
}

WhileNavigationTrigger_type* WhileNavigationTrigger_typeof()
{
    static uSStrong<WhileNavigationTrigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 35;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(WhileNavigationTrigger);
    options.TypeSize = sizeof(WhileNavigationTrigger_type);
    type = (WhileNavigationTrigger_type*)uClassType::New("Fuse.Navigation.WhileNavigationTrigger", options);
    type->fp_build_ = WhileNavigationTrigger_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileNavigationTrigger__OnUnrooted_fn;
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

// internal WhileNavigationTrigger() :4685
void WhileNavigationTrigger__ctor_6_fn(WhileNavigationTrigger* __this)
{
    __this->ctor_6();
}

// internal void GoProgress(double progress) :4761
void WhileNavigationTrigger__GoProgress_fn(WhileNavigationTrigger* __this, double* progress)
{
    __this->GoProgress(*progress);
}

// public float get_Limit() :4721
void WhileNavigationTrigger__get_Limit_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Limit();
}

// public void set_Limit(float value) :4722
void WhileNavigationTrigger__set_Limit_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Limit(*value);
}

// protected Fuse.Navigation.INavigation get_NavContext() :4730
void WhileNavigationTrigger__get_NavContext_fn(WhileNavigationTrigger* __this, uObject** __retval)
{
    *__retval = __this->NavContext();
}

// private void NavReady() :4740
void WhileNavigationTrigger__NavReady_fn(WhileNavigationTrigger* __this)
{
    __this->NavReady();
}

// private void NavUnready() :4753
void WhileNavigationTrigger__NavUnready_fn(WhileNavigationTrigger* __this)
{
    __this->NavUnready();
}

// protected override sealed void OnRooted() :4733
void WhileNavigationTrigger__OnRooted_fn(WhileNavigationTrigger* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_proxy = ::g::Fuse::Navigation::NavigationPageProxy::New1(uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)WhileNavigationTrigger__NavReady_fn, __this), uDelegate::New(::TYPES[15/*Uno.Action*/], (void*)WhileNavigationTrigger__NavUnready_fn, __this));
    uPtr(__this->_proxy)->Rooted(__this->Parent());
}

// protected override sealed void OnUnrooted() :4746
void WhileNavigationTrigger__OnUnrooted_fn(WhileNavigationTrigger* __this)
{
    uPtr(__this->_proxy)->Unrooted();
    __this->_proxy = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// protected Fuse.Visual get_PageContext() :4729
void WhileNavigationTrigger__get_PageContext_fn(WhileNavigationTrigger* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->PageContext();
}

// public float get_Threshold() :4710
void WhileNavigationTrigger__get_Threshold_fn(WhileNavigationTrigger* __this, float* __retval)
{
    *__retval = __this->Threshold();
}

// public void set_Threshold(float value) :4711
void WhileNavigationTrigger__set_Threshold_fn(WhileNavigationTrigger* __this, float* value)
{
    __this->Threshold(*value);
}

// internal WhileNavigationTrigger() [instance] :4685
void WhileNavigationTrigger::ctor_6()
{
    _threshold = 1.0f;
    ctor_5();
}

// internal void GoProgress(double progress) [instance] :4761
void WhileNavigationTrigger::GoProgress(double progress)
{
    bool set = progress >= (double)Threshold();

    if (_hasLimit)
        set = set && (progress <= (double)Limit());

    SetActive(set);
}

// public float get_Limit() [instance] :4721
float WhileNavigationTrigger::Limit()
{
    return _limit;
}

// public void set_Limit(float value) [instance] :4722
void WhileNavigationTrigger::Limit(float value)
{
    _limit = value;
    _hasLimit = true;
}

// protected Fuse.Navigation.INavigation get_NavContext() [instance] :4730
uObject* WhileNavigationTrigger::NavContext()
{
    return uPtr(_proxy)->Navigation();
}

// private void NavReady() [instance] :4740
void WhileNavigationTrigger::NavReady()
{
    ::g::Fuse::Navigation::INavigation::add_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[16/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
    ForceUpdate();
}

// private void NavUnready() [instance] :4753
void WhileNavigationTrigger::NavUnready()
{
    ::g::Fuse::Navigation::INavigation::remove_PageProgressChanged(uInterface(uPtr(uPtr(_proxy)->Navigation()), ::TYPES[0/*Fuse.Navigation.INavigation*/]), uDelegate::New(::TYPES[16/*Fuse.Navigation.NavigationHandler*/], this, offsetof(WhileNavigationTrigger_type, fp_OnNavigationStateChanged)));
}

// protected Fuse.Visual get_PageContext() [instance] :4729
::g::Fuse::Visual* WhileNavigationTrigger::PageContext()
{
    return uPtr(_proxy)->Page();
}

// public float get_Threshold() [instance] :4710
float WhileNavigationTrigger::Threshold()
{
    return _threshold;
}

// public void set_Threshold(float value) [instance] :4711
void WhileNavigationTrigger::Threshold(float value)
{
    _threshold = value;
}
// }

}}} // ::g::Fuse::Navigation
