// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[1];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls\0.43.11\graphics\$.uno
// -----------------------------------------------------------------------------------------

// public abstract class ControlVisual<T> :6
// {
static void ControlVisual_build(uType* type)
{
    ::STRINGS[0] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ControlVisual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(ControlVisual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ControlVisual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(ControlVisual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(ControlVisual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ControlVisual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(ControlVisual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(ControlVisual_type, interface7));
    type->SetFields(57,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

ControlVisual_type* ControlVisual_typeof()
{
    static uSStrong<ControlVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Graphics::Visual_typeof();
    options.FieldCount = 58;
    options.GenericCount = 1;
    options.InterfaceCount = 8;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ControlVisual);
    options.TypeSize = sizeof(ControlVisual_type);
    type = (ControlVisual_type*)uClassType::New("Fuse.Controls.Graphics.ControlVisual`1", options);
    type->fp_build_ = ControlVisual_build;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))ControlVisual__get_HitTestLocalBounds_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ControlVisual__OnUnrooted_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// protected generated ControlVisual() :6
void ControlVisual__ctor_4_fn(ControlVisual* __this)
{
    __this->ctor_4();
}

// protected T get_Control() :20
void ControlVisual__get_Control_fn(ControlVisual* __this, uTRef __retval)
{
    return __retval.Store(__this->_control()), void();
}

// private T FindControl() :8
void ControlVisual__FindControl_fn(ControlVisual* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->Precalced(0/*T*/),
    };
    ::g::Fuse::Node* p = __this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return __retval.Store(__types[0], uUnboxAny(__types[0], p)), void();

        p = uPtr(p)->Parent();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// protected override sealed Fuse.VisualBounds get_HitTestLocalBounds() :46
void ControlVisual__get_HitTestLocalBounds_fn(ControlVisual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override sealed void OnRooted() :22
void ControlVisual__OnRooted_fn(ControlVisual* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(ControlVisual_typeof())->Precalced(0/*T*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Fuse::Visual__OnRooted_fn(__this);
    __this->_control() = (ControlVisual__FindControl_fn(__this, &ret1), ret1);

    if (uBoxPtr(__types[0], __this->_control()) == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[0/*" must be ro...*/]), __types[0])));

    __this->Attach();
}

// protected override sealed void OnUnrooted() :33
void ControlVisual__OnUnrooted_fn(ControlVisual* __this)
{
    __this->Detach();
    __this->_control().Default();
    ::g::Fuse::Visual__OnUnrooted_fn(__this);
}

// protected generated ControlVisual() [instance] :6
void ControlVisual::ctor_4()
{
    ctor_3();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls\0.43.11\graphics\$.uno
// -----------------------------------------------------------------------------------------

// public abstract class Visual :60
// {
static void Visual_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Visual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Visual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Visual_type, interface7));
    type->SetFields(55,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::Graphics::Visual, _ActualSize), 0);
}

::g::Fuse::Visual_type* Visual_typeof()
{
    static uSStrong< ::g::Fuse::Visual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Visual_typeof();
    options.FieldCount = 57;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(Visual);
    options.TypeSize = sizeof(::g::Fuse::Visual_type);
    type = (::g::Fuse::Visual_type*)uClassType::New("Fuse.Controls.Graphics.Visual", options);
    type->fp_build_ = Visual_build;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Visual*, ::g::Fuse::VisualBounds**))Visual__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Visual__OnArrangeMarginBox_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Visual*, ::g::Fuse::FastMatrix*))Visual__PrependImplicitTransform_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// protected generated Visual() :60
void Visual__ctor_3_fn(Visual* __this)
{
    __this->ctor_3();
}

// protected generated float2 get_ActualSize() :62
void Visual__get_ActualSize_fn(Visual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :62
void Visual__set_ActualSize_fn(Visual* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// public override sealed Fuse.VisualBounds get_LocalRenderBounds() :97
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// protected override float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :66
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = lp_.Size();

    if (!lp_.HasSize())
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(lp_);

        if (!lp_.HasX())
            sz.X = rsz.X;

        if (!lp_.HasY())
            sz.Y = rsz.Y;
    }

    __this->_position = position_;
    __this->ActualSize(sz);
    __this->InvalidateLocalTransform();
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :85
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->_position, 0.0f));
}

// protected generated Visual() [instance] :60
void Visual::ctor_3()
{
    ctor_2();
}

// protected generated float2 get_ActualSize() [instance] :62
::g::Uno::Float2 Visual::ActualSize()
{
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :62
void Visual::ActualSize(::g::Uno::Float2 value)
{
    _ActualSize = value;
}
// }

}}}} // ::g::Fuse::Controls::Graphics
