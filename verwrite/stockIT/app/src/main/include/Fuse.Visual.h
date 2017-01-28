// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.InteractionItem.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct FastProperty1Link;}}
namespace g{namespace Fuse{struct FastProperty1Link1;}}
namespace g{namespace Fuse{struct FastProperty2Link;}}
namespace g{namespace Fuse{struct FastProperty2Link1;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct PendingRemoveVisual;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Transform;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__ParameterProperty;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{

// public interfacemodifiers class Visual :5158
// {
struct Visual_type : ::g::Fuse::Node_type
{
    ::g::Uno::Collections::IList interface4;
    ::g::Uno::UX::IPropertyListener interface5;
    ::g::Uno::Collections::ICollection interface6;
    ::g::Uno::Collections::IEnumerable interface7;
    void(*fp_get_AbsoluteViewportOrigin)(::g::Fuse::Visual*, ::g::Uno::Float2*);
    void(*fp_get_CanAdjustMarginBox)(::g::Fuse::Visual*, bool*);
    void(*fp_Draw)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*);
    void(*fp_DrawSelection)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*);
    void(*fp_GetMarginSize)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_get_HitTestChildrenBounds)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**);
    void(*fp_get_HitTestLocalBounds)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**);
    void(*fp_InvalidateLocalTransform)(::g::Fuse::Visual*);
    void(*fp_get_IsLayoutRoot)(::g::Fuse::Visual*, bool*);
    void(*fp_get_IsLocalVisible)(::g::Fuse::Visual*, bool*);
    void(*fp_IsMarginBoxDependent)(::g::Fuse::Visual*, ::g::Fuse::Visual*, int*);
    void(*fp_get_LocalRenderBounds)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**);
    void(*fp_OnAdjustMarginBoxPosition)(::g::Fuse::Visual*, ::g::Uno::Float2*);
    void(*fp_OnArrangeMarginBox)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_OnChildAdded)(::g::Fuse::Visual*, ::g::Fuse::Node*);
    void(*fp_OnChildRemoved)(::g::Fuse::Visual*, ::g::Fuse::Node*);
    void(*fp_OnHitTest)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*);
    void(*fp_OnInvalidateLayout)(::g::Fuse::Visual*);
    void(*fp_OnInvalidateRenderBounds)(::g::Fuse::Visual*, bool*);
    void(*fp_OnInvalidateVisual)(::g::Fuse::Visual*);
    void(*fp_OnInvalidateVisualComposition)(::g::Fuse::Visual*);
    void(*fp_OnInvalidateWorldTransform)(::g::Fuse::Visual*);
    void(*fp_OnIsVisibleChanged)(::g::Fuse::Visual*);
    void(*fp_OnPropertyChanged2)(::g::Fuse::Visual*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*);
    void(*fp_OnZOrderInvalidated)(::g::Fuse::Visual*);
    void(*fp_PrependImplicitTransform)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*);
    void(*fp_PrependInverseTransformOrigin)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*);
    void(*fp_PrependTransformOrigin)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*);
    void(*fp_get_VisualContext)(::g::Fuse::Visual*, int*);
};

Visual_type* Visual_typeof();
void Visual__ctor_2_fn(Visual* __this);
void Visual__get__areChildrenFlat_fn(Visual* __this, bool* __retval);
void Visual__set__areChildrenFlat_fn(Visual* __this, bool* value);
void Visual__get__areChildrenFlatCached_fn(Visual* __this, bool* __retval);
void Visual__set__areChildrenFlatCached_fn(Visual* __this, bool* value);
void Visual__get__isLocalFlat_fn(Visual* __this, bool* __retval);
void Visual__set__isLocalFlat_fn(Visual* __this, bool* value);
void Visual__get__isLocalFlatCached_fn(Visual* __this, bool* __retval);
void Visual__set__isLocalFlatCached_fn(Visual* __this, bool* value);
void Visual__get_AbsoluteViewportOrigin_fn(Visual* __this, ::g::Uno::Float2* __retval);
void Visual__get_AbsoluteZoom_fn(Visual* __this, float* __retval);
void Visual__Add1_fn(Visual* __this, ::g::Fuse::Node* item);
void Visual__AddDrawCost_fn(Visual* __this, double* cost);
void Visual__AddEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler);
void Visual__AddParameterChangedListener_fn(Visual* __this, ::g::Fuse::Scripting::Function* func);
void Visual__AdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position);
void Visual__AppendSubtreeData_fn(Visual* __this, ::g::Uno::Collections::List* result);
void Visual__get_AreChildrenFlat_fn(Visual* __this, bool* __retval);
void Visual__ArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Visual__AssignZOrder_fn(uObject* nodes);
void Visual__BeginInteraction_fn(Visual* __this, uObject* id, uDelegate* cancelled);
void Visual__BeginRemoveChild_fn(Visual* __this, ::g::Fuse::Node* n, uDelegate* then);
void Visual__BeginRemoveVisual_fn(Visual* __this, Visual* child, uDelegate* then);
void Visual__bringIntoView_fn(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args);
void Visual__BringIntoView_fn(Visual* __this);
void Visual__BringToFront_fn(Visual* __this, Visual* item);
void Visual__CalcAreChildrenFlat_fn(Visual* __this, bool* __retval);
void Visual__CalcIsLocalFlat_fn(Visual* __this, bool* __retval);
void Visual__CalcRenderBoundsInParentSpace_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__CalcWorldTransform_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__get_CanAdjustMarginBox_fn(Visual* __this, bool* __retval);
void Visual__CancelInteractions_fn(Visual* __this, int* how);
void Visual__CancelPendingRemove_fn(Visual* __this);
void Visual__get_Children_fn(Visual* __this, uObject** __retval);
void Visual__Clear_fn(Visual* __this, int* p);
void Visual__Clear1_fn(Visual* __this, int* p);
void Visual__ClearBit_fn(Visual* __this, int* p);
void Visual__ClearBit1_fn(Visual* __this, int* p);
void Visual__ClearBit2_fn(Visual* __this, int* nb);
void Visual__ConcludePendingRemove_fn(Visual* __this);
void Visual__get_DrawCost_fn(Visual* __this, double* __retval);
void Visual__DrawLocalRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect, float* lineWidth, ::g::Uno::Float4* color, ::g::Uno::Float4x4* localToClipTransform);
void Visual__DrawLocalSelectionRect_fn(Visual* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* rect);
void Visual__DrawSelection_fn(Visual* __this, ::g::Fuse::DrawContext* dc);
void Visual__EmitZOrderChanged_fn(Visual* __this);
void Visual__EndInteraction_fn(Visual* __this, uObject* id);
void Visual__EnsureSortedZOrder_fn(Visual* __this);
void Visual__EnsureZOrder_fn(Visual* __this);
void Visual__Find_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty1Link1** __retval);
void Visual__Find1_fn(Visual* __this, uType* __type, int* p, ::g::Fuse::FastProperty2Link1** __retval);
void Visual__FindByType_fn(Visual* __this, uType* __type, Visual** __retval);
void Visual__FindPrevious_fn(Visual* __this, int* p, ::g::Fuse::FastProperty1Link** __retval);
void Visual__FindPrevious1_fn(Visual* __this, int* p, ::g::Fuse::FastProperty2Link** __retval);
void Visual__FindTemplate_fn(Visual* __this, uString* key, ::g::Uno::UX::Template** __retval);
void Visual__FindViewport_fn(Visual* __this, uObject** __retval);
void Visual__FirstChild_fn(Visual* __this, uType* __type, ::g::Fuse::Node** __retval);
void Visual__get_FirstVisualChild_fn(Visual* __this, Visual** __retval);
void Visual__Get_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval);
void Visual__Get1_fn(Visual* __this, uType* __type, int* p, void* defaultValue, uTRef __retval);
void Visual__GetHitWindowPoint_fn(Visual* __this, ::g::Uno::Float2* windowPoint, Visual** __retval);
void Visual__GetMarginSize_fn(Visual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Visual__GetNearestAncestorOfType_fn(Visual* __this, uType* __type, Visual** __retval);
void Visual__getParameterProperty_fn(Visual* v, ::g::Uno::UX::Property1** __retval);
void Visual__GetTransformTo_fn(Visual* __this, Visual* other, ::g::Uno::Float4x4* __retval);
void Visual__GetTransformToAncestor_fn(Visual* __this, Visual* ancestor, ::g::Uno::Float4x4* __retval);
void Visual__GetZOrderChild_fn(Visual* __this, int* index, Visual** __retval);
void Visual__HasBit_fn(Visual* __this, int* p, bool* __retval);
void Visual__HasBit1_fn(Visual* __this, int* p, bool* __retval);
void Visual__HasBit2_fn(Visual* __this, int* nb, bool* __retval);
void Visual__get_HasChildren_fn(Visual* __this, bool* __retval);
void Visual__get_HasExplicitTransforms_fn(Visual* __this, bool* __retval);
void Visual__get_HasMarginBox_fn(Visual* __this, bool* __retval);
void Visual__get_HasPendingRemove_fn(Visual* __this, bool* __retval);
void Visual__get_HasResources_fn(Visual* __this, bool* __retval);
void Visual__get_HasVisualChildren_fn(Visual* __this, bool* __retval);
void Visual__HitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc);
void Visual__get_HitTestBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__get_HitTestChildrenBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__get_HitTestLocalBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__get_HitTestTransform_fn(Visual* __this, int* __retval);
void Visual__IfSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__IfSnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__IfSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__Insert1_fn(Visual* __this, int* index, ::g::Fuse::Node* item);
void Visual__Insert2_fn(Visual* __this, uType* __type, int* p, void* value);
void Visual__Insert3_fn(Visual* __this, uType* __type, int* p, void* value);
void Visual__InsertCleanup_fn(Visual* __this, ::g::Fuse::Node* item);
void Visual__InsertNodes_fn(Visual* __this, int* index, uObject* items);
void Visual__get_InternLocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__InternSnap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__InternSnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__InvalidateFlat_fn(Visual* __this);
void Visual__InvalidateHitTestBounds_fn(Visual* __this);
void Visual__InvalidateLayout_fn(Visual* __this, int* reason);
void Visual__InvalidateLocalTransform_fn(Visual* __this);
void Visual__InvalidateRenderBounds_fn(Visual* __this);
void Visual__InvalidateVisual_fn(Visual* __this);
void Visual__InvalidateVisualComposition_fn(Visual* __this);
void Visual__InvalidateWorldTransform_fn(Visual* __this);
void Visual__InvalidateZOrder_fn(Visual* __this);
void Visual__InvokeEventHandler_fn(Visual* __this, uObject* obj, uObject* args);
void Visual__get_IsContextEnabled_fn(Visual* __this, bool* __retval);
void Visual__get_IsEnabled_fn(Visual* __this, bool* __retval);
void Visual__set_IsEnabled_fn(Visual* __this, bool* value);
void Visual__add_IsInteractingChanged_fn(Visual* __this, uDelegate* value);
void Visual__remove_IsInteractingChanged_fn(Visual* __this, uDelegate* value);
void Visual__get_IsLayoutRoot_fn(Visual* __this, bool* __retval);
void Visual__get_IsLocalFlat_fn(Visual* __this, bool* __retval);
void Visual__get_IsLocalVisible_fn(Visual* __this, bool* __retval);
void Visual__IsMarginBoxDependent_fn(Visual* __this, Visual* child, int* __retval);
void Visual__get_IsVisible_fn(Visual* __this, bool* __retval);
void Visual__add_IsVisibleChanged_fn(Visual* __this, uDelegate* value);
void Visual__remove_IsVisibleChanged_fn(Visual* __this, uDelegate* value);
void Visual__get_Layer_fn(Visual* __this, int* __retval);
void Visual__set_Layer_fn(Visual* __this, int* value);
void Visual__get_LayoutRole_fn(Visual* __this, int* __retval);
void Visual__set_LayoutRole_fn(Visual* __this, int* value);
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__get_LocalTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval);
void Visual__get_LocalTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__get_LocalTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval);
void Visual__get_LocalTransformInverseInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__get_MarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* __retval);
void Visual__OnAdded_fn(Visual* __this, ::g::Fuse::Node* b);
void Visual__OnAdjustMarginBoxPosition_fn(Visual* __this, ::g::Uno::Float2* position);
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Visual__OnBeginRemoveVisual_fn(Visual* __this, ::g::Fuse::PendingRemoveVisual* args);
void Visual__OnBringIntoView_fn(Visual* __this, Visual* elm);
void Visual__OnChildAdded_fn(Visual* __this, ::g::Fuse::Node* elm);
void Visual__OnChildRemoved_fn(Visual* __this, ::g::Fuse::Node* elm);
void Visual__OnHitTest_fn(Visual* __this, ::g::Fuse::HitTestContext* htc);
void Visual__OnInteractionsChanged_fn(Visual* __this);
void Visual__OnInvalidateChildZOffset_fn(Visual* __this, Visual* child);
void Visual__OnInvalidateLayout_fn(Visual* __this);
void Visual__OnInvalidateRenderBounds_fn(Visual* __this, bool* __retval);
void Visual__OnInvalidateVisual_fn(Visual* __this);
void Visual__OnInvalidateVisualComposition_fn(Visual* __this);
void Visual__OnInvalidateWorldTransform_fn(Visual* __this);
void Visual__OnIsContextEnabledChanged_fn(Visual* __this);
void Visual__OnIsEnabledChanged_fn(Visual* __this, uObject* origin);
void Visual__OnIsVisibleChanged_fn(Visual* __this);
void Visual__OnLocalVisibleChanged_fn(Visual* __this);
void Visual__OnMatrixChanged_fn(Visual* __this, ::g::Fuse::Transform* t);
void Visual__onParameterChanged_fn(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args);
void Visual__OnParameterChanged_fn(Visual* __this);
void Visual__OnPropertyChanged2_fn(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);
void Visual__OnRemoved_fn(Visual* __this, ::g::Fuse::Node* b);
void Visual__OnResourceChanged_fn(Visual* __this, ::g::Uno::UX::Resource* res);
void Visual__OnRooted_fn(Visual* __this);
void Visual__OnSubtreeDataContextChanged_fn(Visual* __this);
void Visual__OnTemplatesChanged_fn(Visual* __this, ::g::Uno::UX::Template* t);
void Visual__OnTransformAdded_fn(Visual* __this, ::g::Fuse::Transform* t);
void Visual__OnTransformRemoved_fn(Visual* __this, ::g::Fuse::Transform* t);
void Visual__OnUnrooted_fn(Visual* __this);
void Visual__OnVisualAdded_fn(Visual* __this, Visual* v);
void Visual__OnVisualRemoved_fn(Visual* __this, Visual* v);
void Visual__OnZOrderInvalidated_fn(Visual* __this);
void Visual__get_Parameter_fn(Visual* __this, uString** __retval);
void Visual__set_Parameter_fn(Visual* __this, uString* value);
void Visual__get_ParentWorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__PerformLayout_fn(Visual* __this);
void Visual__PerformLayout1_fn(Visual* __this, ::g::Uno::Float2* clientSize);
void Visual__PrependExplicitTransforms_fn(Visual* __this, ::g::Fuse::FastMatrix* m);
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m);
void Visual__PrependInverseTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m);
void Visual__PrependLocalTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m);
void Visual__PrependTransformOrigin_fn(Visual* __this, ::g::Fuse::FastMatrix* m);
void Visual__RaiseEvent_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne);
void Visual__RearrangeMarginBox_fn(Visual* __this);
void Visual__Remove1_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval);
void Visual__RemoveAllChildren_fn(Visual* __this, uType* __type);
void Visual__RemoveDrawCost_fn(Visual* __this, double* cost);
void Visual__RemoveEventHandler_fn(Visual* __this, ::g::Fuse::PropertyHandle* ph, int* ne, uObject* handler);
void Visual__add_RequestBringIntoView_fn(Visual* __this, uDelegate* value);
void Visual__remove_RequestBringIntoView_fn(Visual* __this, uDelegate* value);
void Visual__ResetParameterListeners_fn(Visual* __this);
void Visual__get_Resources_fn(Visual* __this, uObject** __retval);
void Visual__SendToBack_fn(Visual* __this, Visual* item);
void Visual__Set_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue);
void Visual__Set1_fn(Visual* __this, uType* __type, int* p, void* value, void* defaultValue);
void Visual__SetBit_fn(Visual* __this, int* p);
void Visual__SetBit1_fn(Visual* __this, int* p, bool* value);
void Visual__SetBit2_fn(Visual* __this, int* p);
void Visual__SetBit3_fn(Visual* __this, int* p, bool* value);
void Visual__SetBit4_fn(Visual* __this, int* nb);
void Visual__SetResource_fn(Visual* __this, uString* key, uObject* value);
void Visual__Snap_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__SnapDown_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__get_SnapToPixels_fn(Visual* __this, bool* __retval);
void Visual__set_SnapToPixels_fn(Visual* __this, bool* value);
void Visual__SnapUp_fn(Visual* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Visual__SoftInvalidateZOrder_fn(Visual* __this, bool* force);
void Visual__get_Templates_fn(Visual* __this, uObject** __retval);
void Visual__TryGetResource_fn(Visual* __this, uString* key, uDelegate* acceptor, uObject** resource, bool* __retval);
void Visual__TryParentToLocal_fn(Visual* __this, ::g::Uno::Float2* parentPoint, ::g::Uno::Float2* result, bool* __retval);
void Visual__UnoCollectionsICollectionFuseNodeClear_fn(Visual* __this);
void Visual__UnoCollectionsICollectionFuseNodeContains_fn(Visual* __this, ::g::Fuse::Node* item, bool* __retval);
void Visual__UnoCollectionsICollectionFuseNodeget_Count_fn(Visual* __this, int* __retval);
void Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn(Visual* __this, uObject** __retval);
void Visual__UnoCollectionsIListFuseNodeget_Item_fn(Visual* __this, int* index, ::g::Fuse::Node** __retval);
void Visual__UnoCollectionsIListFuseNodeRemoveAt_fn(Visual* __this, int* index);
void Visual__UpdateContextSnapToPixelsCache_fn(Visual* __this);
void Visual__UpdateIsContextEnabledCache_fn(Visual* __this);
void Visual__UpdateIsVisibleCache_fn(Visual* __this);
void Visual__UpdateLayout_fn(Visual* __this);
void Visual__get_ValidFrameCount_fn(Visual* __this, int* __retval);
void Visual__get_Viewport_fn(Visual* __this, uObject** __retval);
void Visual__VisitSubtree_fn(Visual* __this, uDelegate* action);
void Visual__get_VisualContext_fn(Visual* __this, int* __retval);
void Visual__WindowToLocal_fn(Visual* __this, ::g::Uno::Float2* windowCoord, ::g::Uno::Float2* __retval);
void Visual__get_WorldTransform_fn(Visual* __this, ::g::Uno::Float4x4* __retval);
void Visual__get_WorldTransformInternal_fn(Visual* __this, ::g::Fuse::FastMatrix** __retval);
void Visual__add_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value);
void Visual__remove_WorldTransformInvalidated_fn(Visual* __this, uDelegate* value);
void Visual__get_WorldTransformInverse_fn(Visual* __this, ::g::Uno::Float4x4* __retval);
void Visual__get_ZOffset_fn(Visual* __this, float* __retval);
void Visual__set_ZOffset_fn(Visual* __this, float* value);
void Visual__get_ZOrder_fn(Visual* __this, ::g::Uno::Collections::List** __retval);
void Visual__add_ZOrderChanged_fn(Visual* __this, uDelegate* value);
void Visual__remove_ZOrderChanged_fn(Visual* __this, uDelegate* value);
void Visual__get_ZOrderChildCount_fn(Visual* __this, int* __retval);
void Visual__ZOrderComparator_fn(Visual* __this, Visual* a, Visual* b, int* __retval);

struct Visual : ::g::Fuse::Node
{
    ::g::Fuse::LayoutParams _ambLayoutParams;
    ::g::Uno::Float2 _ambMargin;
    ::g::Uno::Float2 _ambPosition;
    ::g::Uno::Float2 _cachedRenderTargetSize;
    ::g::Fuse::Internal::MiniList _children;
    double _drawCost;
    uStrong< ::g::Fuse::FastProperty1Link*> _fastProperties1;
    uStrong< ::g::Fuse::FastProperty2Link*> _fastProperties2;
    int _fastPropertyBits1;
    int _fastPropertyBits2;
    int _firstNonUnderlay;
    uStrong<Visual*> _focusDelegate;
    bool _hasMarginBox;
    uStrong< ::g::Fuse::VisualBounds*> _hitTestBoundsCache;
    uStrong< ::g::Uno::Collections::Dictionary*> _interactions;
    static uSStrong< ::g::Fuse::PropertyHandle*> _isContextEnabledChangedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _isContextEnabledChangedHandle() { return Visual_typeof()->Init(), _isContextEnabledChangedHandle_; }
    static ::g::Uno::UX::Selector _isEnabledName_;
    static ::g::Uno::UX::Selector& _isEnabledName() { return Visual_typeof()->Init(), _isEnabledName_; }
    bool _isFocusable;
    bool _isHitTestBoundsCacheValid;
    bool _isVisibleCached;
    static uSStrong< ::g::Fuse::PropertyHandle*> _isVisibleChangedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _isVisibleChangedHandle() { return Visual_typeof()->Init(), _isVisibleChangedHandle_; }
    int _lastInvalidate;
    static uSStrong< ::g::Fuse::PropertyHandle*> _layerProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layerProperty() { return Visual_typeof()->Init(), _layerProperty_; }
    int _layoutDirty;
    static uSStrong< ::g::Fuse::PropertyHandle*> _layoutRoleProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _layoutRoleProperty() { return Visual_typeof()->Init(), _layoutRoleProperty_; }
    uStrong< ::g::Fuse::FastMatrix*> _localTransform;
    uStrong< ::g::Fuse::FastMatrix*> _localTransformInverse;
    int _nodebits;
    bool _nodeZOrders;
    int _observerCount;
    uStrong<uString*> _parameter;
    uStrong< ::g::Uno::Collections::List*> _parameterListeners;
    uStrong<Visual__ParameterProperty*> _parameterProperty;
    static bool _performingLayout_;
    static bool& _performingLayout() { return Visual_typeof()->Init(), _performingLayout_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _resourcesHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _resourcesHandle() { return Visual_typeof()->Init(), _resourcesHandle_; }
    bool _sortedZOrder;
    uStrong<uObject*> _templates;
    int _transformCount;
    uStrong<uObject*> _viewport;
    uStrong< ::g::Fuse::FastMatrix*> _worldTransform;
    static uSStrong< ::g::Fuse::PropertyHandle*> _worldTransformInvalidatedHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _worldTransformInvalidatedHandle() { return Visual_typeof()->Init(), _worldTransformInvalidatedHandle_; }
    uStrong< ::g::Fuse::FastMatrix*> _worldTransformInverse;
    float _zOffset;
    uStrong< ::g::Uno::Collections::List*> _zOrder;
    static ::g::Uno::UX::Selector ParameterName_;
    static ::g::Uno::UX::Selector& ParameterName() { return Visual_typeof()->Init(), ParameterName_; }
    int ZLayer;
    bool ZOffsetFixed;
    int ZOffsetNatural;
    uStrong<uDelegate*> IsInteractingChanged1;
    uStrong<uDelegate*> RequestBringIntoView1;
    uStrong<uDelegate*> ZOrderChanged1;

    void ctor_2();
    bool _areChildrenFlat();
    void _areChildrenFlat(bool value);
    bool _areChildrenFlatCached();
    void _areChildrenFlatCached(bool value);
    bool _isLocalFlat();
    void _isLocalFlat(bool value);
    bool _isLocalFlatCached();
    void _isLocalFlatCached(bool value);
    ::g::Uno::Float2 AbsoluteViewportOrigin();
    float AbsoluteZoom();
    void Add1(::g::Fuse::Node* item);
    void AddDrawCost(double cost);
    void AddEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler);
    void AddParameterChangedListener(::g::Fuse::Scripting::Function* func);
    void AdjustMarginBoxPosition(::g::Uno::Float2 position);
    bool AreChildrenFlat();
    ::g::Uno::Float2 ArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp);
    void BeginInteraction(uObject* id, uDelegate* cancelled);
    void BeginRemoveChild(::g::Fuse::Node* n, uDelegate* then);
    void BeginRemoveVisual(Visual* child, uDelegate* then);
    void BringIntoView();
    void BringToFront(Visual* item);
    bool CalcAreChildrenFlat();
    bool CalcIsLocalFlat();
    ::g::Fuse::VisualBounds* CalcRenderBoundsInParentSpace();
    ::g::Fuse::FastMatrix* CalcWorldTransform();
    bool CanAdjustMarginBox() { bool __retval; return (((Visual_type*)__type)->fp_get_CanAdjustMarginBox)(this, &__retval), __retval; }
    void CancelInteractions(int how);
    void CancelPendingRemove();
    uObject* Children();
    void Clear(int p);
    void Clear1(int p);
    void ClearBit(int p);
    void ClearBit1(int p);
    void ClearBit2(int nb);
    void ConcludePendingRemove();
    void Draw(::g::Fuse::DrawContext* dc) { (((Visual_type*)__type)->fp_Draw)(this, dc); }
    double DrawCost();
    void DrawLocalRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect, float lineWidth, ::g::Uno::Float4 color, ::g::Uno::Float4x4 localToClipTransform);
    void DrawLocalSelectionRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect rect);
    void DrawSelection(::g::Fuse::DrawContext* dc) { (((Visual_type*)__type)->fp_DrawSelection)(this, dc); }
    void EmitZOrderChanged();
    void EndInteraction(uObject* id);
    void EnsureSortedZOrder();
    void EnsureZOrder();
    ::g::Fuse::FastProperty1Link1* Find(uType* __type, int p);
    ::g::Fuse::FastProperty2Link1* Find1(uType* __type, int p);
    Visual* FindByType(uType* __type);
    ::g::Fuse::FastProperty1Link* FindPrevious(int p);
    ::g::Fuse::FastProperty2Link* FindPrevious1(int p);
    ::g::Uno::UX::Template* FindTemplate(uString* key);
    uObject* FindViewport();
    ::g::Fuse::Node* FirstChild(uType* __type);
    Visual* FirstVisualChild();
    template<class T>
    T Get(uType* __type, int p, T defaultValue) { T __retval; return Visual__Get_fn(this, __type, &p, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
    template<class T>
    T Get1(uType* __type, int p, T defaultValue) { T __retval; return Visual__Get1_fn(this, __type, &p, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
    Visual* GetHitWindowPoint(::g::Uno::Float2 windowPoint);
    ::g::Uno::Float2 GetMarginSize(::g::Fuse::LayoutParams lp);
    Visual* GetNearestAncestorOfType(uType* __type);
    ::g::Uno::Float4x4 GetTransformTo(Visual* other);
    ::g::Uno::Float4x4 GetTransformToAncestor(Visual* ancestor);
    Visual* GetZOrderChild(int index);
    bool HasBit(int p);
    bool HasBit1(int p);
    bool HasBit2(int nb);
    bool HasChildren();
    bool HasExplicitTransforms();
    bool HasMarginBox();
    bool HasPendingRemove();
    bool HasResources();
    bool HasVisualChildren();
    void HitTest(::g::Fuse::HitTestContext* htc);
    ::g::Fuse::VisualBounds* HitTestBounds();
    ::g::Fuse::VisualBounds* HitTestChildrenBounds() { ::g::Fuse::VisualBounds* __retval; return (((Visual_type*)__type)->fp_get_HitTestChildrenBounds)(this, &__retval), __retval; }
    ::g::Fuse::VisualBounds* HitTestLocalBounds() { ::g::Fuse::VisualBounds* __retval; return (((Visual_type*)__type)->fp_get_HitTestLocalBounds)(this, &__retval), __retval; }
    int HitTestTransform();
    ::g::Uno::Float2 IfSnap(::g::Uno::Float2 p);
    ::g::Uno::Float2 IfSnapDown(::g::Uno::Float2 p);
    ::g::Uno::Float2 IfSnapUp(::g::Uno::Float2 p);
    void Insert1(int index, ::g::Fuse::Node* item);
    template<class T>
    void Insert2(uType* __type, int p, T value) { Visual__Insert2_fn(this, __type, &p, uConstrain(__type->U(0), value)); }
    template<class T>
    void Insert3(uType* __type, int p, T value) { Visual__Insert3_fn(this, __type, &p, uConstrain(__type->U(0), value)); }
    void InsertCleanup(::g::Fuse::Node* item);
    void InsertNodes(int index, uObject* items);
    ::g::Fuse::FastMatrix* InternLocalTransformInternal();
    ::g::Uno::Float2 InternSnap(::g::Uno::Float2 p);
    ::g::Uno::Float2 InternSnapUp(::g::Uno::Float2 p);
    void InvalidateFlat();
    void InvalidateHitTestBounds();
    void InvalidateLayout(int reason);
    void InvalidateLocalTransform() { (((Visual_type*)__type)->fp_InvalidateLocalTransform)(this); }
    void InvalidateRenderBounds();
    void InvalidateVisual();
    void InvalidateVisualComposition();
    void InvalidateWorldTransform();
    void InvalidateZOrder();
    void InvokeEventHandler(uObject* obj, uObject* args);
    bool IsContextEnabled();
    bool IsEnabled();
    void IsEnabled(bool value);
    void add_IsInteractingChanged(uDelegate* value);
    void remove_IsInteractingChanged(uDelegate* value);
    bool IsLayoutRoot() { bool __retval; return (((Visual_type*)__type)->fp_get_IsLayoutRoot)(this, &__retval), __retval; }
    bool IsLocalFlat();
    bool IsLocalVisible() { bool __retval; return (((Visual_type*)__type)->fp_get_IsLocalVisible)(this, &__retval), __retval; }
    int IsMarginBoxDependent(Visual* child) { int __retval; return (((Visual_type*)__type)->fp_IsMarginBoxDependent)(this, child, &__retval), __retval; }
    bool IsVisible();
    void add_IsVisibleChanged(uDelegate* value);
    void remove_IsVisibleChanged(uDelegate* value);
    int Layer();
    void Layer(int value);
    int LayoutRole();
    void LayoutRole(int value);
    ::g::Fuse::VisualBounds* LocalRenderBounds() { ::g::Fuse::VisualBounds* __retval; return (((Visual_type*)__type)->fp_get_LocalRenderBounds)(this, &__retval), __retval; }
    ::g::Uno::Float4x4 LocalTransform();
    ::g::Fuse::FastMatrix* LocalTransformInternal();
    ::g::Uno::Float4x4 LocalTransformInverse();
    ::g::Fuse::FastMatrix* LocalTransformInverseInternal();
    ::g::Uno::Float2 MarginBoxPosition();
    void OnAdded(::g::Fuse::Node* b);
    void OnAdjustMarginBoxPosition(::g::Uno::Float2 position);
    ::g::Uno::Float2 OnArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp);
    void OnBeginRemoveVisual(::g::Fuse::PendingRemoveVisual* args);
    void OnBringIntoView(Visual* elm);
    void OnChildAdded(::g::Fuse::Node* elm) { (((Visual_type*)__type)->fp_OnChildAdded)(this, elm); }
    void OnChildRemoved(::g::Fuse::Node* elm) { (((Visual_type*)__type)->fp_OnChildRemoved)(this, elm); }
    void OnHitTest(::g::Fuse::HitTestContext* htc) { (((Visual_type*)__type)->fp_OnHitTest)(this, htc); }
    void OnInteractionsChanged();
    void OnInvalidateChildZOffset(Visual* child);
    void OnInvalidateLayout() { (((Visual_type*)__type)->fp_OnInvalidateLayout)(this); }
    bool OnInvalidateRenderBounds() { bool __retval; return (((Visual_type*)__type)->fp_OnInvalidateRenderBounds)(this, &__retval), __retval; }
    void OnInvalidateVisual() { (((Visual_type*)__type)->fp_OnInvalidateVisual)(this); }
    void OnInvalidateVisualComposition() { (((Visual_type*)__type)->fp_OnInvalidateVisualComposition)(this); }
    void OnInvalidateWorldTransform() { (((Visual_type*)__type)->fp_OnInvalidateWorldTransform)(this); }
    void OnIsContextEnabledChanged();
    void OnIsEnabledChanged(uObject* origin);
    void OnIsVisibleChanged() { (((Visual_type*)__type)->fp_OnIsVisibleChanged)(this); }
    void OnLocalVisibleChanged();
    void OnMatrixChanged(::g::Fuse::Transform* t);
    void OnParameterChanged();
    void OnPropertyChanged2(::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property);
    void OnRemoved(::g::Fuse::Node* b);
    void OnResourceChanged(::g::Uno::UX::Resource* res);
    void OnSubtreeDataContextChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* t);
    void OnTransformAdded(::g::Fuse::Transform* t);
    void OnTransformRemoved(::g::Fuse::Transform* t);
    void OnVisualAdded(Visual* v);
    void OnVisualRemoved(Visual* v);
    void OnZOrderInvalidated() { (((Visual_type*)__type)->fp_OnZOrderInvalidated)(this); }
    uString* Parameter();
    void Parameter(uString* value);
    ::g::Fuse::FastMatrix* ParentWorldTransformInternal();
    void PerformLayout();
    void PerformLayout1(::g::Uno::Float2 clientSize);
    void PrependExplicitTransforms(::g::Fuse::FastMatrix* m);
    void PrependImplicitTransform(::g::Fuse::FastMatrix* m) { (((Visual_type*)__type)->fp_PrependImplicitTransform)(this, m); }
    void PrependInverseTransformOrigin(::g::Fuse::FastMatrix* m) { (((Visual_type*)__type)->fp_PrependInverseTransformOrigin)(this, m); }
    void PrependLocalTransform(::g::Fuse::FastMatrix* m);
    void PrependTransformOrigin(::g::Fuse::FastMatrix* m) { (((Visual_type*)__type)->fp_PrependTransformOrigin)(this, m); }
    void RaiseEvent(::g::Fuse::PropertyHandle* ph, int ne);
    void RearrangeMarginBox();
    bool Remove1(::g::Fuse::Node* item);
    void RemoveAllChildren(uType* __type);
    void RemoveDrawCost(double cost);
    void RemoveEventHandler(::g::Fuse::PropertyHandle* ph, int ne, uObject* handler);
    void add_RequestBringIntoView(uDelegate* value);
    void remove_RequestBringIntoView(uDelegate* value);
    void ResetParameterListeners();
    uObject* Resources();
    void SendToBack(Visual* item);
    template<class T>
    void Set(uType* __type, int p, T value, T defaultValue) { Visual__Set_fn(this, __type, &p, uConstrain(__type->U(0), value), uConstrain(__type->U(0), defaultValue)); }
    template<class T>
    void Set1(uType* __type, int p, T value, T defaultValue) { Visual__Set1_fn(this, __type, &p, uConstrain(__type->U(0), value), uConstrain(__type->U(0), defaultValue)); }
    void SetBit(int p);
    void SetBit1(int p, bool value);
    void SetBit2(int p);
    void SetBit3(int p, bool value);
    void SetBit4(int nb);
    void SetResource(uString* key, uObject* value);
    ::g::Uno::Float2 Snap(::g::Uno::Float2 p);
    ::g::Uno::Float2 SnapDown(::g::Uno::Float2 p);
    bool SnapToPixels();
    void SnapToPixels(bool value);
    ::g::Uno::Float2 SnapUp(::g::Uno::Float2 p);
    void SoftInvalidateZOrder(bool force);
    uObject* Templates();
    bool TryParentToLocal(::g::Uno::Float2 parentPoint, ::g::Uno::Float2* result);
    void UpdateContextSnapToPixelsCache();
    void UpdateIsContextEnabledCache();
    void UpdateIsVisibleCache();
    void UpdateLayout();
    int ValidFrameCount();
    uObject* Viewport();
    int VisualContext() { int __retval; return (((Visual_type*)__type)->fp_get_VisualContext)(this, &__retval), __retval; }
    ::g::Uno::Float2 WindowToLocal(::g::Uno::Float2 windowCoord);
    ::g::Uno::Float4x4 WorldTransform();
    ::g::Fuse::FastMatrix* WorldTransformInternal();
    void add_WorldTransformInvalidated(uDelegate* value);
    void remove_WorldTransformInvalidated(uDelegate* value);
    ::g::Uno::Float4x4 WorldTransformInverse();
    float ZOffset();
    void ZOffset(float value);
    ::g::Uno::Collections::List* ZOrder();
    void add_ZOrderChanged(uDelegate* value);
    void remove_ZOrderChanged(uDelegate* value);
    int ZOrderChildCount();
    int ZOrderComparator(Visual* a, Visual* b);
    static void AssignZOrder(uObject* nodes);
    static void bringIntoView(::g::Fuse::Scripting::Context* c, Visual* n, uArray* args);
    static void DrawSelection(Visual* __this, ::g::Fuse::DrawContext* dc) { Visual__DrawSelection_fn(__this, dc); }
    static ::g::Uno::Float2 GetMarginSize(Visual* __this, ::g::Fuse::LayoutParams lp);
    static ::g::Uno::UX::Property1* getParameterProperty(Visual* v);
    static void InvalidateLocalTransform(Visual* __this) { Visual__InvalidateLocalTransform_fn(__this); }
    static int IsMarginBoxDependent(Visual* __this, Visual* child) { int __retval; return Visual__IsMarginBoxDependent_fn(__this, child, &__retval), __retval; }
    static void OnAdjustMarginBoxPosition(Visual* __this, ::g::Uno::Float2 position);
    static ::g::Uno::Float2 OnArrangeMarginBox(Visual* __this, ::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp);
    static void OnChildAdded(Visual* __this, ::g::Fuse::Node* elm) { Visual__OnChildAdded_fn(__this, elm); }
    static void OnChildRemoved(Visual* __this, ::g::Fuse::Node* elm) { Visual__OnChildRemoved_fn(__this, elm); }
    static void OnHitTest(Visual* __this, ::g::Fuse::HitTestContext* htc) { Visual__OnHitTest_fn(__this, htc); }
    static void OnInvalidateLayout(Visual* __this) { Visual__OnInvalidateLayout_fn(__this); }
    static bool OnInvalidateRenderBounds(Visual* __this) { bool __retval; return Visual__OnInvalidateRenderBounds_fn(__this, &__retval), __retval; }
    static void OnInvalidateVisual(Visual* __this) { Visual__OnInvalidateVisual_fn(__this); }
    static void OnInvalidateVisualComposition(Visual* __this) { Visual__OnInvalidateVisualComposition_fn(__this); }
    static void OnInvalidateWorldTransform(Visual* __this) { Visual__OnInvalidateWorldTransform_fn(__this); }
    static void OnIsVisibleChanged(Visual* __this) { Visual__OnIsVisibleChanged_fn(__this); }
    static void onParameterChanged(::g::Fuse::Scripting::Context* c, Visual* v, uArray* args);
    static void OnPropertyChanged2(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property);
    static void OnZOrderInvalidated(Visual* __this) { Visual__OnZOrderInvalidated_fn(__this); }
    static void PrependImplicitTransform(Visual* __this, ::g::Fuse::FastMatrix* m) { Visual__PrependImplicitTransform_fn(__this, m); }
    static void PrependInverseTransformOrigin(Visual* __this, ::g::Fuse::FastMatrix* m) { Visual__PrependInverseTransformOrigin_fn(__this, m); }
    static void PrependTransformOrigin(Visual* __this, ::g::Fuse::FastMatrix* m) { Visual__PrependTransformOrigin_fn(__this, m); }
    static ::g::Uno::Float2 AbsoluteViewportOrigin(Visual* __this);
    static bool CanAdjustMarginBox(Visual* __this) { bool __retval; return Visual__get_CanAdjustMarginBox_fn(__this, &__retval), __retval; }
    static ::g::Fuse::VisualBounds* HitTestChildrenBounds(Visual* __this) { ::g::Fuse::VisualBounds* __retval; return Visual__get_HitTestChildrenBounds_fn(__this, &__retval), __retval; }
    static ::g::Fuse::VisualBounds* HitTestLocalBounds(Visual* __this) { ::g::Fuse::VisualBounds* __retval; return Visual__get_HitTestLocalBounds_fn(__this, &__retval), __retval; }
    static bool IsLayoutRoot(Visual* __this) { bool __retval; return Visual__get_IsLayoutRoot_fn(__this, &__retval), __retval; }
    static bool IsLocalVisible(Visual* __this) { bool __retval; return Visual__get_IsLocalVisible_fn(__this, &__retval), __retval; }
    static ::g::Fuse::VisualBounds* LocalRenderBounds(Visual* __this) { ::g::Fuse::VisualBounds* __retval; return Visual__get_LocalRenderBounds_fn(__this, &__retval), __retval; }
    static int VisualContext(Visual* __this) { int __retval; return Visual__get_VisualContext_fn(__this, &__retval), __retval; }
};

}} // ::g::Fuse

#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Rect.h>
#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float2 Visual::AbsoluteViewportOrigin() { ::g::Uno::Float2 __retval; return (((Visual_type*)__type)->fp_get_AbsoluteViewportOrigin)(this, &__retval), __retval; }
inline ::g::Uno::Float2 Visual::GetMarginSize(::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((Visual_type*)__type)->fp_GetMarginSize)(this, &lp, &__retval), __retval; }
inline void Visual::OnAdjustMarginBoxPosition(::g::Uno::Float2 position) { (((Visual_type*)__type)->fp_OnAdjustMarginBoxPosition)(this, &position); }
inline ::g::Uno::Float2 Visual::OnArrangeMarginBox(::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((Visual_type*)__type)->fp_OnArrangeMarginBox)(this, &position, &lp, &__retval), __retval; }
inline void Visual::OnPropertyChanged2(::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property) { (((Visual_type*)__type)->fp_OnPropertyChanged2)(this, sender, &property); }
inline ::g::Uno::Float2 Visual::GetMarginSize(Visual* __this, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return Visual__GetMarginSize_fn(__this, &lp, &__retval), __retval; }
inline void Visual::OnAdjustMarginBoxPosition(Visual* __this, ::g::Uno::Float2 position) { Visual__OnAdjustMarginBoxPosition_fn(__this, &position); }
inline ::g::Uno::Float2 Visual::OnArrangeMarginBox(Visual* __this, ::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return Visual__OnArrangeMarginBox_fn(__this, &position, &lp, &__retval), __retval; }
inline void Visual::OnPropertyChanged2(Visual* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property) { Visual__OnPropertyChanged2_fn(__this, sender, &property); }
inline ::g::Uno::Float2 Visual::AbsoluteViewportOrigin(Visual* __this) { ::g::Uno::Float2 __retval; return Visual__get_AbsoluteViewportOrigin_fn(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
