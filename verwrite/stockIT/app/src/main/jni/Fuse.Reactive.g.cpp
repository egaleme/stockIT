// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.AnyChangeObserver.h>
#include <Fuse.Reactive.BindAttempt.h>
#include <Fuse.Reactive.BindingTypes.h>
#include <Fuse.Reactive.ClearDataBinding-1.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.DataToResourceBinding-1.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.CallClosure.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.Instantiator.CountItem.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.EvaluateDataContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.PathObserver.h>
#include <Fuse.Reactive.PropertyBinding.h>
#include <Fuse.Reactive.ReadClearDataBinding-1.h>
#include <Fuse.Reactive.ReadDataBinding-1.h>
#include <Fuse.Reactive.RootableScriptModule.h>
#include <Fuse.Reactive.SegmentObserver.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.WriteClearDataBinding-1.h>
#include <Fuse.Reactive.WriteDataBinding-1.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.ClassInstance.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ObjectMirror.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.Subscription.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IValueConvertible.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Value.h>
static uString* STRINGS[56];
static uType* TYPES[49];

namespace g{
namespace Fuse{
namespace Reactive{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class AnyChangeObserver :11
// {
static void AnyChangeObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(AnyChangeObserver_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _anyChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::AnyChangeObserver, _hasInitialValue), 0);
}

AnyChangeObserver_type* AnyChangeObserver_typeof()
{
    static uSStrong<AnyChangeObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AnyChangeObserver);
    options.TypeSize = sizeof(AnyChangeObserver_type);
    type = (AnyChangeObserver_type*)uClassType::New("Fuse.Reactive.AnyChangeObserver", options);
    type->fp_build_ = AnyChangeObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))AnyChangeObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))AnyChangeObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))AnyChangeObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))AnyChangeObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))AnyChangeObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))AnyChangeObserver__OnInsertAt_fn;
    return type;
}

// public AnyChangeObserver(Uno.Action anyChange) :16
void AnyChangeObserver__ctor__fn(AnyChangeObserver* __this, uDelegate* anyChange)
{
    __this->ctor_(anyChange);
}

// public AnyChangeObserver New(Uno.Action anyChange) :16
void AnyChangeObserver__New1_fn(uDelegate* anyChange, AnyChangeObserver** __retval)
{
    *__retval = AnyChangeObserver::New1(anyChange);
}

// public void OnAdd(object addedValue) :50
void AnyChangeObserver__OnAdd_fn(AnyChangeObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :21
void AnyChangeObserver__OnClear_fn(AnyChangeObserver* __this)
{
    __this->OnClear();
}

// public void OnInsertAt(int index, object value) :62
void AnyChangeObserver__OnInsertAt_fn(AnyChangeObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :27
void AnyChangeObserver__OnNewAll_fn(AnyChangeObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :33
void AnyChangeObserver__OnNewAt_fn(AnyChangeObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :56
void AnyChangeObserver__OnRemoveAt_fn(AnyChangeObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :44
void AnyChangeObserver__OnSet_fn(AnyChangeObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// public AnyChangeObserver(Uno.Action anyChange) [instance] :16
void AnyChangeObserver::ctor_(uDelegate* anyChange)
{
    _anyChange = anyChange;
}

// public void OnAdd(object addedValue) [instance] :50
void AnyChangeObserver::OnAdd(uObject* addedValue)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnClear() [instance] :21
void AnyChangeObserver::OnClear()
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnInsertAt(int index, object value) [instance] :62
void AnyChangeObserver::OnInsertAt(int index, uObject* value)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :27
void AnyChangeObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnNewAt(int index, object newValue) [instance] :33
void AnyChangeObserver::OnNewAt(int index, uObject* newValue)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnRemoveAt(int index) [instance] :56
void AnyChangeObserver::OnRemoveAt(int index)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public void OnSet(object value) [instance] :44
void AnyChangeObserver::OnSet(uObject* value)
{
    if (_hasInitialValue)
        uPtr(_anyChange)->InvokeVoid();

    _hasInitialValue = true;
}

// public AnyChangeObserver New(Uno.Action anyChange) [static] :16
AnyChangeObserver* AnyChangeObserver::New1(uDelegate* anyChange)
{
    AnyChangeObserver* obj1 = (AnyChangeObserver*)uNew(AnyChangeObserver_typeof());
    obj1->ctor_(anyChange);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class BindAttempt :125
// {
static void BindAttempt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::SegmentObserver_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _cur), 0,
        ::TYPES[0/*Uno.Collections.List<object>*/], offsetof(::g::Fuse::Reactive::BindAttempt, _currentData), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _currentDataPosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _isDisposed), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Node>*/], offsetof(::g::Fuse::Reactive::BindAttempt, _observedNodes), 0,
        ::g::Fuse::Reactive::PathObserver_typeof(), offsetof(::g::Fuse::Reactive::BindAttempt, _po), 0,
        ::TYPES[2/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/], offsetof(::g::Fuse::Reactive::BindAttempt, _segmentObservers), 0);
}

uType* BindAttempt_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(BindAttempt);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.BindAttempt", options);
    type->fp_build_ = BindAttempt_build;
    return type;
}

// public BindAttempt(Fuse.Reactive.PathObserver po) :134
void BindAttempt__ctor__fn(BindAttempt* __this, ::g::Fuse::Reactive::PathObserver* po)
{
    __this->ctor_(po);
}

// public void Dispose() :206
void BindAttempt__Dispose_fn(BindAttempt* __this)
{
    __this->Dispose();
}

// internal void Fail() :187
void BindAttempt__Fail_fn(BindAttempt* __this)
{
    __this->Fail();
}

// private bool FindData() :162
void BindAttempt__FindData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->FindData();
}

// private bool get_HasData() :159
void BindAttempt__get_HasData_fn(BindAttempt* __this, bool* __retval)
{
    *__retval = __this->HasData();
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) :134
void BindAttempt__New1_fn(::g::Fuse::Reactive::PathObserver* po, BindAttempt** __retval)
{
    *__retval = BindAttempt::New1(po);
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) :199
void BindAttempt__OnDataContextChanged_fn(BindAttempt* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataContextChanged(sender, args);
}

// internal void Restart() :193
void BindAttempt__Restart_fn(BindAttempt* __this)
{
    __this->Restart();
}

// private object TakeData() :152
void BindAttempt__TakeData_fn(BindAttempt* __this, uObject** __retval)
{
    *__retval = __this->TakeData();
}

// private void TryBind() :141
void BindAttempt__TryBind_fn(BindAttempt* __this)
{
    __this->TryBind();
}

// public BindAttempt(Fuse.Reactive.PathObserver po) [instance] :134
void BindAttempt::ctor_(::g::Fuse::Reactive::PathObserver* po)
{
    _currentData = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<object>*/]));
    _observedNodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]));
    _segmentObservers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Reactive.SegmentObserver>*/]));
    _po = po;
    _cur = uPtr(po)->Node;
    TryBind();
}

// public void Dispose() [instance] :206
void BindAttempt::Dispose()
{
    ::g::Fuse::Reactive::SegmentObserver* ret2;
    ::g::Fuse::Node* ret3;

    if (_isDisposed)
        return;

    _isDisposed = true;

    for (int i = 0; i < uPtr(_segmentObservers)->Count(); i++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_segmentObservers), uCRef<int>(i), &ret2), ret2))->Dispose();

    uPtr(_segmentObservers)->Clear();
    _segmentObservers = NULL;

    for (int i1 = 0; i1 < uPtr(_observedNodes)->Count(); i1++)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observedNodes), uCRef<int>(i1), &ret3), ret3))->remove_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));

    uPtr(_observedNodes)->Clear();
    _observedNodes = NULL;
    uPtr(_currentData)->Clear();
    _currentData = NULL;
}

// internal void Fail() [instance] :187
void BindAttempt::Fail()
{
    if (_isDisposed)
        return;

    TryBind();
}

// private bool FindData() [instance] :162
bool BindAttempt::FindData()
{
    if (HasData())
        return true;

    while (_cur != NULL)
    {
        uPtr(_currentData)->Clear();
        _currentDataPosition = 0;

        if (_cur != uPtr(_po)->Node)
            uPtr(_cur)->AppendSubtreeData(_currentData);

        if (uPtr(_cur)->ContextParent() != NULL)
            uPtr(uPtr(_cur)->ContextParent())->GetImplicitDataForChild(_cur, _currentData);

        ::g::Uno::Collections::List__Add_fn(uPtr(_observedNodes), _cur);
        uPtr(_cur)->add_DataContextChanged(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)BindAttempt__OnDataContextChanged_fn, this));
        _cur = uPtr(_cur)->ContextParent();

        if (HasData())
            return true;
    }

    return false;
}

// private bool get_HasData() [instance] :159
bool BindAttempt::HasData()
{
    return _currentDataPosition < uPtr(_currentData)->Count();
}

// private void OnDataContextChanged(object sender, Uno.EventArgs args) [instance] :199
void BindAttempt::OnDataContextChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Restart();
}

// internal void Restart() [instance] :193
void BindAttempt::Restart()
{
    if (_isDisposed)
        return;

    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::PathObserver__RestartBinding_fn, uPtr(_po)));
}

// private object TakeData() [instance] :152
uObject* BindAttempt::TakeData()
{
    uObject* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_currentData), uCRef<int>(_currentDataPosition++), &ret4), ret4);
}

// private void TryBind() [instance] :141
void BindAttempt::TryBind()
{
    if (FindData())
    {
        uObject* data = TakeData();
        ::g::Fuse::Reactive::SegmentObserver* so = ::g::Fuse::Reactive::SegmentObserver::New1(uPtr(_po)->Binding, this);
        so->Init(data, uPtr(_po)->Path);
        ::g::Uno::Collections::List__Add_fn(uPtr(_segmentObservers), so);
    }
}

// public BindAttempt New(Fuse.Reactive.PathObserver po) [static] :134
BindAttempt* BindAttempt::New1(::g::Fuse::Reactive::PathObserver* po)
{
    BindAttempt* obj1 = (BindAttempt*)uNew(BindAttempt_typeof());
    obj1->ctor_(po);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\reactive\$.uno
// ------------------------------------------------------------------------------------

// internal static class BindingTypes :177
// {
static void BindingTypes_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Property binding between incompatible types: Cannot convert ");
    ::STRINGS[1] = uString::Const(" (");
    ::STRINGS[2] = uString::Const(") to ");
    ::STRINGS[3] = uString::Const(")");
    ::STRINGS[4] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\FuseCore\\0.43.11\\reactive\\$.uno");
    ::STRINGS[5] = uString::Const("CheckCompatibility");
    ::TYPES[5] = ::g::Uno::Type_typeof();
}

uClassType* BindingTypes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.BindingTypes", options);
    type->fp_build_ = BindingTypes_build;
    return type;
}

// public static bool CheckCompatibility(Uno.UX.Property source, Uno.UX.Property destination, object src) :179
void BindingTypes__CheckCompatibility_fn(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src, bool* __retval)
{
    *__retval = BindingTypes::CheckCompatibility(source, destination, src);
}

// private static bool Implements(Uno.Type t, Uno.Type interf) :219
void BindingTypes__Implements_fn(uType* t, uType* interf, bool* __retval)
{
    *__retval = BindingTypes::Implements(t, interf);
}

// private static bool Inherits(Uno.Type t, Uno.Type baseClass) :229
void BindingTypes__Inherits_fn(uType* t, uType* baseClass, bool* __retval)
{
    *__retval = BindingTypes::Inherits(t, baseClass);
}

// public static bool IsCompatible(Uno.Type sourceType, Uno.Type destinationType) :190
void BindingTypes__IsCompatible_fn(uType* sourceType, uType* destinationType, bool* __retval)
{
    *__retval = BindingTypes::IsCompatible(sourceType, destinationType);
}

// private static bool IsUXValueCompatible(Uno.Type t) :198
void BindingTypes__IsUXValueCompatible_fn(uType* t, bool* __retval)
{
    *__retval = BindingTypes::IsUXValueCompatible(t);
}

// private static bool IsUXValueConvertible(Uno.Type t) :214
void BindingTypes__IsUXValueConvertible_fn(uType* t, bool* __retval)
{
    *__retval = BindingTypes::IsUXValueConvertible(t);
}

// public static bool CheckCompatibility(Uno.UX.Property source, Uno.UX.Property destination, object src) [static] :179
bool BindingTypes::CheckCompatibility(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src)
{
    if (!BindingTypes::IsCompatible(uPtr(source)->PropertyType(), uPtr(destination)->PropertyType()))
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Property bi...*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(source)->Name())), ::STRINGS[1/*" ("*/]), uPtr(source)->PropertyType()), ::STRINGS[2/*") to "*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(destination)->Name())), ::STRINGS[1/*" ("*/]), uPtr(destination)->PropertyType()), ::STRINGS[3/*")"*/]), src, ::STRINGS[4/*"C:\\Users\\...*/], 183, ::STRINGS[5/*"CheckCompat...*/]);
        return false;
    }

    return true;
}

// private static bool Implements(Uno.Type t, Uno.Type interf) [static] :219
bool BindingTypes::Implements(uType* t, uType* interf)
{
    uArray* ifs = ::g::Uno::Type::GetInterfaces(uPtr(t));

    for (int i = 0; i < uPtr(ifs)->Length(); i++)
        if (::g::Uno::Type::op_Equality(uPtr(ifs)->Strong<uType*>(i), interf))
            return true;

    return false;
}

// private static bool Inherits(Uno.Type t, Uno.Type baseClass) [static] :229
bool BindingTypes::Inherits(uType* t, uType* baseClass)
{
    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        if (::g::Uno::Type::op_Equality(t, baseClass))
            return true;

        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    return false;
}

// public static bool IsCompatible(Uno.Type sourceType, Uno.Type destinationType) [static] :190
bool BindingTypes::IsCompatible(uType* sourceType, uType* destinationType)
{
    if ((BindingTypes::IsUXValueCompatible(sourceType) || BindingTypes::IsUXValueConvertible(sourceType)) && BindingTypes::IsUXValueCompatible(destinationType))
        return true;

    return BindingTypes::Inherits(sourceType, destinationType);
}

// private static bool IsUXValueCompatible(Uno.Type t) [static] :198
bool BindingTypes::IsUXValueCompatible(uType* t)
{
    if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*string*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Value_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[14/*float*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[15/*double*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::TYPES[13/*int*/]))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::UX::Size2_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float2_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float3_typeof()))
        return true;

    if (::g::Uno::Type::op_Equality(t, ::g::Uno::Float4_typeof()))
        return true;

    return false;
}

// private static bool IsUXValueConvertible(Uno.Type t) [static] :214
bool BindingTypes::IsUXValueConvertible(uType* t)
{
    return BindingTypes::Implements(t, ::g::Uno::UX::IValueConvertible_typeof());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// private sealed class EventBinding.CallClosure :746
// {
static void EventBinding__CallClosure_build(uType* type)
{
    ::STRINGS[6] = uString::Const("node");
    ::STRINGS[7] = uString::Const("data");
    ::STRINGS[8] = uString::Const("sender");
    ::STRINGS[9] = uString::Const("JavaScript call error");
    ::STRINGS[10] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive\\0.43.11\\$.uno");
    ::STRINGS[11] = uString::Const("Call");
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventBinding__CallClosure_type, interface0));
    type->SetFields(0,
        ::TYPES[8/*Uno.Collections.Dictionary<string, object>*/], offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _args), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _data), 0,
        ::TYPES[6/*Fuse.Node*/], offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, _sender), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(::g::Fuse::Reactive::EventBinding__CallClosure, Function), 0);
}

EventBinding__CallClosure_type* EventBinding__CallClosure_typeof()
{
    static uSStrong<EventBinding__CallClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EventBinding__CallClosure);
    options.TypeSize = sizeof(EventBinding__CallClosure_type);
    type = (EventBinding__CallClosure_type*)uClassType::New("Fuse.Reactive.EventBinding.CallClosure", options);
    type->fp_build_ = EventBinding__CallClosure_build;
    type->interface0.fp_AddString = (void(*)(uObject*, uString*, uString*))EventBinding__CallClosure__AddString_fn;
    type->interface0.fp_AddInt = (void(*)(uObject*, uString*, int*))EventBinding__CallClosure__AddInt_fn;
    type->interface0.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventBinding__CallClosure__AddDouble_fn;
    type->interface0.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventBinding__CallClosure__AddBool_fn;
    type->interface0.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventBinding__CallClosure__AddObject_fn;
    return type;
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) :755
void EventBinding__CallClosure__ctor__fn(EventBinding__CallClosure* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// public void AddBool(string key, bool value) :811
void EventBinding__CallClosure__AddBool_fn(EventBinding__CallClosure* __this, uString* key, bool* value)
{
    __this->AddBool(key, *value);
}

// public void AddDouble(string key, double value) :806
void EventBinding__CallClosure__AddDouble_fn(EventBinding__CallClosure* __this, uString* key, double* value)
{
    __this->AddDouble(key, *value);
}

// public void AddInt(string key, int value) :801
void EventBinding__CallClosure__AddInt_fn(EventBinding__CallClosure* __this, uString* key, int* value)
{
    __this->AddInt(key, *value);
}

// public void AddObject(string key, object value) :790
void EventBinding__CallClosure__AddObject_fn(EventBinding__CallClosure* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public void AddString(string key, string value) :796
void EventBinding__CallClosure__AddString_fn(EventBinding__CallClosure* __this, uString* key, uString* value)
{
    __this->AddString(key, value);
}

// public void Call() :770
void EventBinding__CallClosure__Call_fn(EventBinding__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) :755
void EventBinding__CallClosure__New1_fn(uObject* args, uObject* sender, EventBinding__CallClosure** __retval)
{
    *__retval = EventBinding__CallClosure::New1(args, sender);
}

// public CallClosure(Fuse.Scripting.IScriptEvent args, object sender) [instance] :755
void EventBinding__CallClosure::ctor_(uObject* args, uObject* sender)
{
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[6/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = ::g::Fuse::Scripting::ValueMirror::Unbox(uPtr(_node)->GetFirstData());

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[7/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// public void AddBool(string key, bool value) [instance] :811
void EventBinding__CallClosure::AddBool(uString* key, bool value)
{
    AddObject(key, uBox(::TYPES[16/*bool*/], value));
}

// public void AddDouble(string key, double value) [instance] :806
void EventBinding__CallClosure::AddDouble(uString* key, double value)
{
    AddObject(key, uBox(::TYPES[15/*double*/], value));
}

// public void AddInt(string key, int value) [instance] :801
void EventBinding__CallClosure::AddInt(uString* key, int value)
{
    AddObject(key, uBox(::TYPES[15/*double*/], (double)value));
}

// public void AddObject(string key, object value) [instance] :790
void EventBinding__CallClosure::AddObject(uString* key, uObject* value)
{
    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(value));
}

// public void AddString(string key, string value) [instance] :796
void EventBinding__CallClosure::AddString(uString* key, uString* value)
{
    AddObject(key, value);
}

// public void Call() [instance] :770
void EventBinding__CallClosure::Call()
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret3;
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (_node != NULL)
        uPtr(obj)->Item(::STRINGS[6/*"node"*/], uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->Unwrap(_node));

    if (_data != NULL)
        uPtr(obj)->Item(::STRINGS[7/*"data"*/], _data);

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(_sender), NULL))
        uPtr(obj)->Item(::STRINGS[8/*"sender"*/], uBox(::TYPES[24/*Uno.UX.Selector*/], _sender));

    if (_args != NULL)

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_args), &ret3), ret3); enum1.MoveNext(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = enum1.Current(::TYPES[9/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            uPtr(obj)->Item(arg.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), arg.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]));
        }

    try
    {
        uPtr(Function)->Call(uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[9/*"JavaScript ...*/], ex, this, ::STRINGS[10/*"C:\\Users\\...*/], 786, ::STRINGS[11/*"Call"*/]);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Scripting.IScriptEvent args, object sender) [static] :755
EventBinding__CallClosure* EventBinding__CallClosure::New1(uObject* args, uObject* sender)
{
    EventBinding__CallClosure* obj2 = (EventBinding__CallClosure*)uNew(EventBinding__CallClosure_typeof());
    obj2->ctor_(args, sender);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class ClearDataBinding<T> :396
// {
static void ClearDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6);
}

::g::Fuse::Reactive::DataBinding_type* ClearDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ClearDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ClearDataBinding`1", options);
    type->fp_build_ = ClearDataBinding_build;
    type->fp_get_Clear = (void(*)(::g::Fuse::Reactive::DataBinding*, bool*))ClearDataBinding__get_Clear_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// protected internal override sealed bool get_Clear() :400
void ClearDataBinding__get_Clear_fn(ClearDataBinding* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// internal static class Console :102
// {
static void Console_build(uType* type)
{
    ::STRINGS[12] = uString::Const("null");
    ::STRINGS[13] = uString::Const("\"");
    ::STRINGS[14] = uString::Const("function");
    ::STRINGS[15] = uString::Const("Object");
    ::STRINGS[16] = uString::Const("");
    ::STRINGS[17] = uString::Const(": ");
    ::STRINGS[18] = uString::Const("Array[");
    ::STRINGS[19] = uString::Const("]");
    ::STRINGS[20] = uString::Const("  ");
    ::STRINGS[21] = uString::Const("log");
    ::STRINGS[22] = uString::Const("dir");
    ::STRINGS[23] = uString::Const("console");
    ::TYPES[13] = ::g::Uno::Int_typeof();
    ::TYPES[14] = ::g::Uno::Float_typeof();
    ::TYPES[15] = ::g::Uno::Double_typeof();
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :123
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :135
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :204
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :104
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :113
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :123
uObject* Console::Dir(uArray* args)
{
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :135
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[12/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[13/*int*/]) || uIs(obj, ::TYPES[14/*float*/])) || uIs(obj, ::TYPES[15/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[16/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[17/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[13/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[13/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[18/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[14/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[19/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[15/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*""*/], k), ::STRINGS[17/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[20/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[20/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[18/*"Array["*/], uBox<int>(::TYPES[13/*int*/], uPtr(a)->Length())), ::STRINGS[19/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[16/*""*/], uBox<int>(::TYPES[13/*int*/], i)), ::STRINGS[17/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :204
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[20/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :104
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[21/*"log"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[22/*"dir"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[23/*"console"*/], console);
}

// private static object Log(object[] args) [static] :113
uObject* Console::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ;

    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public abstract class ContextBinding :8
// {
static void ContextBinding_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    type->SetFields(1,
        ::TYPES[22/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::ContextBinding, _pathSubscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::ContextBinding, _Key), 0);
}

ContextBinding_type* ContextBinding_typeof()
{
    static uSStrong<ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ContextBinding);
    options.TypeSize = sizeof(ContextBinding_type);
    type = (ContextBinding_type*)uClassType::New("Fuse.Reactive.ContextBinding", options);
    type->fp_build_ = ContextBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ContextBinding__OnUnrooted_fn;
    return type;
}

// protected ContextBinding(string key) :13
void ContextBinding__ctor_1_fn(ContextBinding* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :11
void ContextBinding__get_Key_fn(ContextBinding* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :11
void ContextBinding__set_Key_fn(ContextBinding* __this, uString* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ContextBinding__OnRooted_fn(ContextBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_pathSubscription = (uObject*)::g::Fuse::Reactive::PathObserver::New1(__this, __this->Parent(), __this->Key());
}

// protected override void OnUnrooted() :26
void ContextBinding__OnUnrooted_fn(ContextBinding* __this)
{
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_pathSubscription), ::TYPES[22/*Uno.IDisposable*/]));
    __this->_pathSubscription = NULL;
    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// protected ContextBinding(string key) [instance] :13
void ContextBinding::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :11
uString* ContextBinding::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :11
void ContextBinding::Key(uString* value)
{
    _Key = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// private sealed class Instantiator.CountItem :1065
// {
static void Instantiator__CountItem_build(uType* type)
{
}

uType* Instantiator__CountItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__CountItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.CountItem", options);
    type->fp_build_ = Instantiator__CountItem_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public class DataBinding<T> :178
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Cannot bind '");
    ::STRINGS[25] = uString::Const("' to property '");
    ::STRINGS[26] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[27] = uString::Const(".");
    ::STRINGS[10] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive\\0.43.11\\$.uno");
    ::STRINGS[28] = uString::Const("InvalidListOperation");
    ::STRINGS[29] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[30] = uString::Const("number");
    ::STRINGS[31] = uString::Const("string");
    ::STRINGS[32] = uString::Const("value that can be converted to type ");
    ::TYPES[23] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[24] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Marshal_typeof();
    ::TYPES[26] = ::g::Uno::Exception_typeof();
    ::TYPES[27] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(1/*TryConvertTo<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface2));
    type->SetFields(3,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _currentValue), 0,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Reactive::DataBinding, _subscription), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Fuse::Reactive::DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding`1", options);
    type->fp_build_ = DataBinding_build;
    type->fp_get_Clear = DataBinding__get_Clear_fn;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_PushValue = DataBinding__PushValue_fn;
    type->fp_get_Read = DataBinding__get_Read_fn;
    type->fp_get_Write = DataBinding__get_Write_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public DataBinding(Uno.UX.Property<T> target, string key) :184
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key)
{
    __this->ctor_2(target, key);
}

// private static bool Acceptor(object obj) :372
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval)
{
    *__retval = DataBinding::Acceptor(__type, obj);
}

// protected internal virtual bool get_Clear() :191
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :270
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :215
void DataBinding__FuseScriptingIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnClear() :193
void DataBinding__FuseScriptingIObserverOnClear_fn(DataBinding* __this)
{
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :241
void DataBinding__FuseScriptingIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :230
void DataBinding__FuseScriptingIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    if (uPtr(values)->Length() > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :220
void DataBinding__FuseScriptingIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :236
void DataBinding__FuseScriptingIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    __this->InvalidListOperation();
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :198
void DataBinding__FuseScriptingIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :210
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// public DataBinding New(Uno.UX.Property<T> target, string key) :184
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval)
{
    *__retval = DataBinding::New1(__type, target, key);
}

// internal override sealed void NewValue(object value) :285
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*T*/),
    };

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    if (uIs(value, __types[0]))
        __this->PushValue(value);
    else if (uIs(value, ::TYPES[23/*Fuse.Scripting.Observable*/]))
    {
        ::g::Fuse::Scripting::Observable* obs = uCast< ::g::Fuse::Scripting::Observable*>(value, ::TYPES[23/*Fuse.Scripting.Observable*/]);
        __this->_subscription = uPtr(obs)->Subscribe((uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :246
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    ::g::Fuse::Reactive::ContextBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :253
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    ::g::Fuse::NameRegistry::RemoveListener((uObject*)__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        uPtr(__this->_subscription)->Dispose();
        __this->_subscription = NULL;
    }

    if (__this->Clear())
        uPtr(__this->Target())->Set_ex(uT(__this->__type->GetBase(DataBinding_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(DataBinding_typeof())->T(0)->ValueSize)), (uObject*)__this);

    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
}

// protected virtual void PushValue(object newValue) :314
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    if (!__this->Read())
        return;

    if (__this->Parent() == NULL)
        return;

    __this->_currentValue = newValue;

    if (__this->TryPushAsValue(newValue))
        return;
    else if (__this->TryPushAsName(newValue))
        return;
    else
        __this->TryPushAsMarshalledValue(newValue);
}

// protected internal virtual bool get_Read() :189
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Uno.UX.Property<T> get_Target() :181
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :181
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :365
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(__type, newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :377
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :338
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :326
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :203
void DataBinding__TypeToJSName_fn(uType* __type, uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(__type, t);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :275
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->GetBase(DataBinding_typeof())->Precalced(0/*T*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((__this->_subscription != NULL) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->Write())
            uPtr(__this->_subscription)->SetExclusive(uBoxPtr(__types[0], (uPtr(__this->Target())->Get_ex(&ret3), ret3)));
    }
}

// protected internal virtual bool get_Write() :190
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public DataBinding(Uno.UX.Property<T> target, string key) [instance] :184
void DataBinding::ctor_2(::g::Uno::UX::Property1* target, uString* key)
{
    ctor_1(key);
    Target(target);
}

// private void InvalidListOperation() [instance] :210
void DataBinding::InvalidListOperation()
{
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[24/*"Cannot bind '"*/], Key()), ::STRINGS[25/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[26/*"'. The obse...*/]), DataBinding::TypeToJSName(__type->GetBase(DataBinding_typeof()), uPtr(Target())->PropertyType())), ::STRINGS[27/*"."*/]), this, ::STRINGS[10/*"C:\\Users\\...*/], 212, ::STRINGS[28/*"InvalidList...*/]);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :181
::g::Uno::UX::Property1* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :181
void DataBinding::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :377
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->Precalced(0/*T*/),
        __type->GetBase(DataBinding_typeof())->Precalced(1/*Fuse.Scripting.Marshal.TryConvertTo<T>*/),
    };
    uT value(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;

    if ((::g::Fuse::Scripting::Marshal__TryConvertTo1_fn(__types[1], newValue, &value, &ret2), ret2))
    {
        try
        {
            uPtr(Target())->Set_ex(value, (uObject*)this);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Fuse::Diagnostics::UserError(uPtr(e)->ToString(), Target(), ::STRINGS[10/*"C:\\Users\\...*/], 388, ::STRINGS[29/*"TryPushAsMa...*/]);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :338
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(__type->GetBase(DataBinding_typeof()), newValue);

    if (!name.IsNull())
    {
        ::g::Fuse::NameRegistry::AddListener(name, (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[27/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, NULL, __type->GetBase(DataBinding_typeof())));

        if (k != NULL)
        {
            uPtr(Target())->Set_ex(uUnboxAny(__type->GetBase(DataBinding_typeof())->T(0), k), (uObject*)this);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(__type->GetBase(DataBinding_typeof())->T(0))) && !::g::Fuse::Scripting::Marshal::CanConvertClass(__type->GetBase(DataBinding_typeof())->T(0)))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :326
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uType* __types[] = {
        __type->GetBase(DataBinding_typeof())->Precalced(0/*T*/),
    };

    if (uIs(newValue, __types[0]))
    {
        ::g::Fuse::NameRegistry::RemoveListener((uObject*)this);
        uPtr(Target())->Set_ex(uUnboxAny(__types[0], newValue), (uObject*)this);
        return true;
    }

    return false;
}

// private static bool Acceptor(object obj) [static] :372
bool DataBinding::Acceptor(uType* __type, uObject* obj)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(obj, __types[0]);
}

// public DataBinding New(Uno.UX.Property<T> target, string key) [static] :184
DataBinding* DataBinding::New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key)
{
    DataBinding* obj1 = (DataBinding*)uNew(__type);
    obj1->ctor_2(target, key);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :365
::g::Uno::UX::Selector DataBinding::ToSelector(uType* __type, uObject* newValue)
{
    return uIs(newValue, ::TYPES[24/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[24/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[17/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[17/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :203
uString* DataBinding::TypeToJSName(uType* __type, uType* t)
{
    if ((::g::Uno::Type::op_Equality(t, ::TYPES[13/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[14/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[15/*double*/]))
        return ::STRINGS[30/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*string*/]))
        return ::STRINGS[31/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[32/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class DataToResourceBinding<T> :467
// {
static void DataToResourceBinding_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6,
        ::TYPES[17/*string*/], offsetof(::g::Fuse::Reactive::DataToResourceBinding, _key), 0);
}

::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 7;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(DataToResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.DataToResourceBinding`1", options);
    type->fp_build_ = DataToResourceBinding_build;
    type->fp_PushValue = (void(*)(::g::Fuse::Reactive::DataBinding*, uObject*))DataToResourceBinding__PushValue_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// private bool AcceptFunction(object obj) :502
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->AcceptFunction(obj);
}

// private void OnChanged() :491
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this)
{
    __this->OnChanged();
}

// protected override sealed void PushValue(object value) :477
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value)
{
    uString* key = uAs<uString*>(value, ::TYPES[17/*string*/]);

    if (::g::Uno::String::op_Equality(key, NULL))
        return;

    if (::g::Uno::String::op_Inequality(__this->_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));

    __this->_key = key;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(__this->_key, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DataToResourceBinding__OnChanged_fn, __this));
    __this->OnChanged();
}

// private bool AcceptFunction(object obj) [instance] :502
bool DataToResourceBinding::AcceptFunction(uObject* obj)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    return uIs(obj, __types[0]);
}

// private void OnChanged() [instance] :491
void DataToResourceBinding::OnChanged()
{
    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (Parent() == NULL)
        return;

    uObject* v;

    if (uPtr(Parent())->TryGetResource(_key, uDelegate::New(::TYPES[28/*Uno.Predicate<object>*/], (void*)DataToResourceBinding__AcceptFunction_fn, this), &v))
        uPtr((::g::Uno::UX::Property1*)Target())->Set_ex(uUnboxAny(__type->T(0), v), (uObject*)this);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno
// ---------------------------------------------------------------------------------------

// internal static class DebugLog :84
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[33] = uString::Const("debug_log");
    ::TYPES[21] = ::g::Fuse::Scripting::Callback_typeof();
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :86
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :91
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :86
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[33/*"debug_log"*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :91
uObject* DebugLog::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ;

    return NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class Each :573
// {
// static Each() :573
static void Each__cctor_1_fn(uType* __type)
{
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5));
    type->SetFields(25,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Reactive::Each::_eachHandle_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseScriptingIObserverOnClear_fn;
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

// public Each() :624
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// public object get_Items() :632
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :633
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public Each New() :624
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :624
void Each::ctor_5()
{
    ctor_3();
}

// public object get_Items() [instance] :632
uObject* Each::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :633
void Each::Items(uObject* value)
{
    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public Each New() [static] :624
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// private sealed class JavaScript.EvaluateDataContext :1547
// {
static void JavaScript__EvaluateDataContext_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _dc), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _js), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::JavaScript__EvaluateDataContext, _worker), 0);
}

uType* JavaScript__EvaluateDataContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(JavaScript__EvaluateDataContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.JavaScript.EvaluateDataContext", options);
    type->fp_build_ = JavaScript__EvaluateDataContext_build;
    return type;
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1553
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_(worker, js);
}

// private void Evaluate() :1561
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->Evaluate();
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :1553
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval)
{
    *__retval = JavaScript__EvaluateDataContext::New1(worker, js);
}

// private void SetDataContext() :1570
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this)
{
    __this->SetDataContext();
}

// public EvaluateDataContext(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :1553
void JavaScript__EvaluateDataContext::ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__Evaluate_fn, this));
}

// private void Evaluate() [instance] :1561
void JavaScript__EvaluateDataContext::Evaluate()
{
    _dc = uPtr(uPtr(_worker)->Context())->Reflect(uPtr(_js)->EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__EvaluateDataContext__SetDataContext_fn, this));
}

// private void SetDataContext() [instance] :1570
void JavaScript__EvaluateDataContext::SetDataContext()
{
    uPtr(_js)->SetDataContext(_dc);
}

// public EvaluateDataContext New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :1553
JavaScript__EvaluateDataContext* JavaScript__EvaluateDataContext::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    JavaScript__EvaluateDataContext* obj1 = (JavaScript__EvaluateDataContext*)uNew(JavaScript__EvaluateDataContext_typeof());
    obj1->ctor_(worker, js);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class EventBinding :707
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[18] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[29] = ::g::Uno::Collections::List_typeof()->MakeType(EventBinding__CallClosure_typeof(), NULL);
    type->SetFields(3,
        ::TYPES[18/*Fuse.Scripting.Function*/], offsetof(::g::Fuse::Reactive::EventBinding, _function), 0,
        ::TYPES[29/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/], offsetof(::g::Fuse::Reactive::EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ContextBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ContextBinding_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ContextBinding_type);
    type = (::g::Fuse::Reactive::ContextBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ContextBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    return type;
}

// public EventBinding(string key) :710
void EventBinding__ctor_2_fn(EventBinding* __this, uString* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(string key) :710
void EventBinding__New1_fn(uString* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :733
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_function = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[18/*Fuse.Scripting.Function*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :817
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :739
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ContextBinding__OnUnrooted_fn(__this);
    __this->_function = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :718
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(string key) [instance] :710
void EventBinding::ctor_2(uString* key)
{
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :817
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Parent() == NULL)
        return;

    EventBinding__CallClosure* callClosure = EventBinding__CallClosure::New1(uAs<uObject*>(args, ::TYPES[7/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[6/*Fuse.Node*/]));

    if (_function != NULL)
    {
        uPtr(callClosure)->Function = _function;
        uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, callClosure));
    }
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[29/*Uno.Collections.List<Fuse.Reactive.EventBinding.CallClosure>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), callClosure);
    }
}

// private void ProcessQueuedEvents() [instance] :718
void EventBinding::ProcessQueuedEvents()
{
    EventBinding__CallClosure* ret2;
    EventBinding__CallClosure* ret3;

    if ((_function != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
        {
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2))->Function = _function;
            uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EventBinding__CallClosure__Call_fn, uPtr((::g::Uno::Collections::List__get_Item_fn(events, uCRef<int>(i), &ret3), ret3))));
        }
    }
}

// public EventBinding New(string key) [static] :710
EventBinding* EventBinding::New1(uString* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public class Instantiator :856
// {
static void Instantiator_build(uType* type)
{
    ::STRINGS[34] = uString::Const("Template contains a non-Node");
    ::STRINGS[10] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive\\0.43.11\\$.uno");
    ::STRINGS[35] = uString::Const("AddTemplate");
    ::STRINGS[36] = uString::Const("Limit cannot be less than 0");
    ::STRINGS[37] = uString::Const("set_Limit");
    ::STRINGS[38] = uString::Const("Offset cannot be less than 0");
    ::STRINGS[39] = uString::Const("set_Offset");
    ::TYPES[30] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), NULL);
    ::TYPES[31] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[32] = ::g::Fuse::Scripting::ListMirror_typeof();
    ::TYPES[33] = Instantiator__CountItem_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::ObjectMirror_typeof();
    ::TYPES[17] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::TYPES[6/*Fuse.Node*/], NULL);
    ::TYPES[35] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[37] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(2/*IndexOf<Fuse.Node>*/, ::TYPES[6/*Fuse.Node*/], NULL);
    ::TYPES[23] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[39] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[6/*Fuse.Node*/], NULL);
    ::TYPES[40] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(Instantiator_type, interface4),
        ::g::Fuse::ITemplateObserver_typeof(), offsetof(Instantiator_type, interface5));
    type->SetFields(13,
        ::TYPES[31/*Uno.Collections.Dictionary<Fuse.Node, object>*/], offsetof(::g::Fuse::Reactive::Instantiator, _dataMap), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _hasLimit), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _items), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _listening), 0,
        ::TYPES[17/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _matchKey), 0,
        ::TYPES[30/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/], offsetof(::g::Fuse::Reactive::Instantiator, _nodes), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _offset), 0,
        ::TYPES[22/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::Instantiator, _subscription), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator, _templates), 0,
        ::TYPES[17/*string*/], offsetof(::g::Fuse::Reactive::Instantiator, _TemplateKey), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Reactive::Instantiator, _TemplateSource), 0);
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_GetImplicitDataForChild = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node*, ::g::Uno::Collections::List*))Instantiator__GetImplicitDataForChild_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface5.fp_OnTemplatesChangedWileRooted = (void(*)(uObject*))Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))Instantiator__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))Instantiator__FuseScriptingIObserverOnClear_fn;
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

// protected internal Instantiator() :865
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// private void AddTemplate(object data, Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) :1406
void Instantiator__AddTemplate_fn(Instantiator* __this, uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    __this->AddTemplate(data, f, newElements);
}

// private void Fuse.ITemplateObserver.OnTemplatesChangedWileRooted() :937
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :1206
void Instantiator__FuseScriptingIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    if (!__this->_listening)
        return;

    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnClear() :1263
void Instantiator__FuseScriptingIObserverOnClear_fn(Instantiator* __this)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :1236
void Instantiator__FuseScriptingIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->InsertNew(index_);
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :1254
void Instantiator__FuseScriptingIObserverOnNewAll_fn(Instantiator* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object value) :1245
void Instantiator__FuseScriptingIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->RemoveAt(index_);
    __this->InsertNew(index_);
    __this->TrimAndPad();
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :1214
void Instantiator__FuseScriptingIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    int index_ = *index;

    if (!__this->_listening)
        return;

    __this->RemoveAt(index_);
    __this->TrimAndPad();
    __this->SetValid();
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :1189
void Instantiator__FuseScriptingIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    if (!__this->_listening)
        return;

    __this->RemoveAll();
    __this->TrimAndPad();
    __this->SetValid();
}

// private object GetData(int dataIndex) :1122
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// private int GetDataCount() :1133
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->GetDataCount();
}

// protected internal override sealed void GetImplicitDataForChild(Fuse.Node n, Uno.Collections.List<object> result) :1146
void Instantiator__GetImplicitDataForChild_fn(Instantiator* __this, ::g::Fuse::Node* n, ::g::Uno::Collections::List* result)
{
    bool ret8;
    uObject* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret8), ret8))
    {
        if ((v != NULL) && !uIs(v, ::TYPES[33/*Fuse.Reactive.Instantiator.CountItem*/]))
            ::g::Uno::Collections::List__Add_fn(uPtr(result), v);
    }
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :1425
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :1420
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_nodes)->Count() - 1), void();
}

// private string GetMatchKey(object data) :1332
void Instantiator__GetMatchKey_fn(Instantiator* __this, uObject* data, uString** __retval)
{
    *__retval = __this->GetMatchKey(data);
}

// internal bool get_HasLimit() :1061
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// private void InsertNew(int dataIndex) :1345
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex)
{
    __this->InsertNew(*dataIndex);
}

// internal int get_Limit() :1019
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :1020
void Instantiator__set_Limit_fn(Instantiator* __this, int* value)
{
    __this->Limit(*value);
}

// internal int get_Offset() :971
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :972
void Instantiator__set_Offset_fn(Instantiator* __this, int* value)
{
    __this->Offset(*value);
}

// protected internal void OnItemsChanged() :1087
void Instantiator__OnItemsChanged_fn(Instantiator* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :948
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :942
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :954
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[22/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
        __this->_listening = false;
    }

    __this->RemoveAll();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveAll() :1279
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int dataIndex) :1223
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex)
{
    __this->RemoveAt(*dataIndex);
}

// private void ReplaceAll(object[] dcs) :1272
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs)
{
    __this->ReplaceAll(dcs);
}

// private void Repopulate() :1158
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// private void SetValid() :1175
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// public generated string get_TemplateKey() :934
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :934
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :877
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public generated Fuse.Visual get_TemplateSource() :923
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->TemplateSource();
}

// public generated void set_TemplateSource(Fuse.Visual value) :923
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value)
{
    __this->TemplateSource(value);
}

// private void TrimAndPad() :1038
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// protected internal Instantiator() [instance] :865
void Instantiator::ctor_3()
{
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[31/*Uno.Collections.Dictionary<Fuse.Node, object>*/]));
    ctor_2();
}

// private void AddTemplate(object data, Uno.UX.Template f, Uno.Collections.List<Fuse.Node> newElements) [instance] :1406
void Instantiator::AddTemplate(uObject* data, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements)
{
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[6/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[34/*"Template co...*/], this, ::STRINGS[10/*"C:\\Users\\...*/], 1411, ::STRINGS[35/*"AddTemplate"*/]);
        return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), elm, data);
    uPtr(elm)->OverrideContextParent = this;
    ::g::Uno::Collections::List__Add_fn(uPtr(newElements), elm);
}

// private object GetData(int dataIndex) [instance] :1122
uObject* Instantiator::GetData(int dataIndex)
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    ::g::Fuse::Scripting::ListMirror* a = uAs< ::g::Fuse::Scripting::ListMirror*>(_items, ::TYPES[32/*Fuse.Scripting.ListMirror*/]);

    if (a != NULL)
        return ::g::Fuse::Scripting::Context::Wrap(uPtr(a)->Item(dataIndex));

    return NULL;
}

// private int GetDataCount() [instance] :1133
int Instantiator::GetDataCount()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    ::g::Fuse::Scripting::ListMirror* a = uAs< ::g::Fuse::Scripting::ListMirror*>(_items, ::TYPES[32/*Fuse.Scripting.ListMirror*/]);

    if (a != NULL)
        return uPtr(a)->Length();

    return 0;
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :1425
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int windowIndex)
{
    ::g::Uno::Collections::List* ret9;
    ::g::Fuse::Node* ret10;

    if (windowIndex >= uPtr(_nodes)->Count())
        windowIndex = uPtr(_nodes)->Count() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = (::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(windowIndex), &ret9), ret9);

        if (uPtr(lastList)->Count() != 0)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret10), ret10))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// private string GetMatchKey(object data) [instance] :1332
uString* Instantiator::GetMatchKey(uObject* data)
{
    ::g::Fuse::Scripting::ObjectMirror* so = uAs< ::g::Fuse::Scripting::ObjectMirror*>(data, ::TYPES[34/*Fuse.Scripting.ObjectMirror*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(_matchKey, NULL))
    {
        if (uPtr(so)->ContainsKey(_matchKey))
            return uAs<uString*>(uPtr(so)->Item(_matchKey), ::TYPES[17/*string*/]);
    }

    return NULL;
}

// internal bool get_HasLimit() [instance] :1061
bool Instantiator::HasLimit()
{
    return _hasLimit;
}

// private void InsertNew(int dataIndex) [instance] :1345
void Instantiator::InsertNew(int dataIndex)
{
    ::g::Uno::UX::Template* ret11;
    int ret12;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret13;
    int windowIndex = dataIndex - Offset();

    if ((HasLimit() && (windowIndex >= Limit())) || (windowIndex < 0))
        return;

    uObject* data = GetData(dataIndex);
    ::g::Uno::Collections::List* newElements = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Node>*/]);
    bool anyMatched = false;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((TemplateSource() != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = uPtr(TemplateSource())->FindTemplate(TemplateKey());

        if (t != NULL)
        {
            anyMatched = true;
            AddTemplate(data, t, newElements);
        }
    }

    if (!anyMatched)
    {
        uString* key = GetMatchKey(data);

        for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Templates()), ::TYPES[35/*Uno.Collections.IEnumerable<Uno.UX.Template>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[36/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[37/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret11), ret11);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Inequality(uPtr(f)->Key(), key))
                continue;

            anyMatched = true;
            AddTemplate(data, f, newElements);
        }
    }

    if (!anyMatched && (defaultTemplate != NULL))
        AddTemplate(data, defaultTemplate, newElements);

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);
    ::g::Uno::Collections::List__Insert_fn(uPtr(_nodes), uCRef<int>(windowIndex), newElements);
    uPtr(Parent())->InsertNodes((::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::TYPES[38/*Uno.Collections.EnumerableExtensions.IndexOf<Fuse.Node>*/], uPtr(Parent())->Children(), lastNode, &ret12), ret12) + 1, uBox(::TYPES[39/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(newElements, &ret13), ret13)));
}

// internal int get_Limit() [instance] :1019
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :1020
void Instantiator::Limit(int value)
{
    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[36/*"Limit canno...*/], this, ::STRINGS[10/*"C:\\Users\\...*/], 1027, ::STRINGS[37/*"set_Limit"*/]);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;

    if (IsRootingCompleted())
        TrimAndPad();
}

// internal int get_Offset() [instance] :971
int Instantiator::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :972
void Instantiator::Offset(int value)
{
    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[38/*"Offset cann...*/], this, ::STRINGS[10/*"C:\\Users\\...*/], 979, ::STRINGS[39/*"set_Offset"*/]);
        value = 0;
    }

    if (!IsRootingCompleted())
    {
        _offset = value;
        return;
    }

    int dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemoveAt(_offset);

        _offset++;
        int end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertNew(end);
    }

    while (_offset > value)
    {
        int end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemoveAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertNew(_offset);
    }
}

// protected internal void OnItemsChanged() [instance] :1087
void Instantiator::OnItemsChanged()
{
    if (!IsRootingStarted())
        return;

    RemoveAll();
    ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(_items, ::TYPES[23/*Fuse.Scripting.Observable*/]);

    if (obs != NULL)
    {
        if (_subscription != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[22/*Uno.IDisposable*/]));

        _listening = true;
        _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :942
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void RemoveAll() [instance] :1279
void Instantiator::RemoveAll()
{
    ::g::Uno::Collections::List* ret14;
    ::g::Fuse::Node* ret15;

    if (uPtr(_nodes)->Count() == 0)
        return;

    ::g::Uno::Collections::List* nodes = _nodes;
    _nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[30/*Uno.Collections.List<Uno.Collections.List<Fuse.Node>>*/]));

    for (int i = 0; i < uPtr(nodes)->Count(); i++)
    {
        ::g::Uno::Collections::List* l = (::g::Uno::Collections::List__get_Item_fn(uPtr(nodes), uCRef<int>(i), &ret14), ret14);

        for (int n = 0; n < uPtr(l)->Count(); n++)
            uPtr(Parent())->BeginRemoveChild((::g::Uno::Collections::List__get_Item_fn(uPtr(l), uCRef<int>(n), &ret15), ret15), NULL);
    }
}

// private void RemoveAt(int dataIndex) [instance] :1223
void Instantiator::RemoveAt(int dataIndex)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret16;
    ::g::Uno::Collections::List* ret17;
    int windowIndex = dataIndex - Offset();

    if ((windowIndex < 0) || (windowIndex >= uPtr(_nodes)->Count()))
        return;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_nodes), uCRef<int>(windowIndex), &ret17), ret17)), &ret16), ret16); enum1.MoveNext(::TYPES[39/*Uno.Collections.List<Fuse.Node>.Enumerator*/]); )
    {
        ::g::Fuse::Node* c = enum1.Current(::TYPES[39/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        uPtr(Parent())->BeginRemoveChild(c, NULL);
    }

    uPtr(_nodes)->RemoveAt(windowIndex);
    SetValid();
}

// private void ReplaceAll(object[] dcs) [instance] :1272
void Instantiator::ReplaceAll(uArray* dcs)
{
    RemoveAll();

    for (int i = 0; i < uPtr(dcs)->Length(); i++)
        InsertNew(i);
}

// private void Repopulate() [instance] :1158
void Instantiator::Repopulate()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[12/*object[]*/]);
    ::g::Fuse::Scripting::ListMirror* a = uAs< ::g::Fuse::Scripting::ListMirror*>(_items, ::TYPES[32/*Fuse.Scripting.ListMirror*/]);

    if (e != NULL)
    {
        ReplaceAll(e);
        return;
    }
    else if (a != NULL)
    {
        RemoveAll();

        for (int i = 0; i < uPtr(a)->Length(); i++)
            InsertNew(i);
    }
}

// private void SetValid() [instance] :1175
void Instantiator::SetValid()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::WhileFailed::SetState(Parent(), false, NULL);
}

// public generated string get_TemplateKey() [instance] :934
uString* Instantiator::TemplateKey()
{
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :934
void Instantiator::TemplateKey(uString* value)
{
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :877
uObject* Instantiator::Templates()
{
    uObject* ind3 = _templates;
    return (ind3 != NULL) ? ind3 : (uObject*)(_templates = (uObject*)((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[40/*Uno.Collections.ObservableList<Uno.UX.Template>*/], uDelegate::New(::TYPES[41/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[41/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this))));
}

// public generated Fuse.Visual get_TemplateSource() [instance] :923
::g::Fuse::Visual* Instantiator::TemplateSource()
{
    return _TemplateSource;
}

// public generated void set_TemplateSource(Fuse.Visual value) [instance] :923
void Instantiator::TemplateSource(::g::Fuse::Visual* value)
{
    _TemplateSource = value;
}

// private void TrimAndPad() [instance] :1038
void Instantiator::TrimAndPad()
{
    if (HasLimit())

        while (uPtr(_nodes)->Count() > _limit)
            RemoveAt((Offset() + uPtr(_nodes)->Count()) - 1);

    int dataCount = GetDataCount();

    if (HasLimit())

        while ((uPtr(_nodes)->Count() < _limit) && ((Offset() + uPtr(_nodes)->Count()) < dataCount))
            InsertNew(Offset() + uPtr(_nodes)->Count());
    else

        while (uPtr(_nodes)->Count() < dataCount)
            InsertNew(Offset() + uPtr(_nodes)->Count());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class JavaScript :1472
// {
// static JavaScript() :1472
static void JavaScript__cctor_1_fn(uType* __type)
{
    JavaScript::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void JavaScript_build(uType* type)
{
    ::STRINGS[40] = uString::Const("exports");
    ::STRINGS[41] = uString::Const("JavaScript error in ");
    ::STRINGS[42] = uString::Const(" fixed!");
    ::STRINGS[10] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive\\0.43.11\\$.uno");
    ::STRINGS[43] = uString::Const("EvaluateModule");
    ::STRINGS[44] = uString::Const("JavaScript error");
    ::STRINGS[45] = uString::Const("Cannot require() a rooted module");
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[42] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[44] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface3),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface4),
        ::g::Fuse::IDataProvider_typeof(), offsetof(JavaScript_type, interface5));
    type->SetFields(13,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _currentDc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _moduleResult), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(::g::Fuse::Reactive::JavaScript, _scriptModule), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::_worker_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Reactive::JavaScript::previousErrorFile_, uFieldFlagsStatic);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_cctor_ = JavaScript__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface4.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface5.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseIDataProviderget_Data_fn;
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

// public JavaScript(Uno.UX.NameTable nameTable) :1481
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :1627
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :1628
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// private void DispatchEvaluate() :1530
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private object EvaluateExports() :1578
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :1590
void JavaScript__EvaluateModule_fn(JavaScript* __this)
{
    __this->EvaluateModule();
}

// public Uno.UX.FileSource get_File() :1648
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :1649
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :1656
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :1657
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.IDataProvider.get_Data() :1537
void JavaScript__FuseIDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_currentDc, void();
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :1519
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"Cannot requ...*/]));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :1641
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :1642
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :1481
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :1491
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter()++;
    __this->DispatchEvaluate();
}

// protected override sealed void OnUnrooted() :1498
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    ::g::Fuse::Scripting::NativeModule* ret3;
    __this->SetDataContext(NULL);

    if (__this->_moduleResult != NULL)
    {
        uPtr(__this->_moduleResult)->Dispose();
        __this->_moduleResult = NULL;
    }

    if ((--JavaScript::_javaScriptCounter()) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::TYPES[43/*Uno.UX.Resource.GetGlobalsOfType<Fuse.Scripting.NativeModule>*/])), ::TYPES[42/*Uno.Collections.IEnumerable<Fuse.Scripting.NativeModule>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[36/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[44/*Uno.Collections.IEnumerator<Fuse.Scripting.NativeModule>*/]), &ret3), ret3);
            uPtr(nm)->InternalReset();
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void SetDataContext(object newDc) :1539
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :1476
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong<uObject*> JavaScript::_resetHookMutex_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;
uSStrong<uString*> JavaScript::previousErrorFile_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :1481
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();

    if (JavaScript::_worker() == NULL)
        JavaScript::_worker() = ::g::Fuse::Reactive::ThreadWorker::New1();

    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker(), nameTable);
}

// public string get_Code() [instance] :1627
uString* JavaScript::Code()
{
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :1628
void JavaScript::Code(uString* value)
{
    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// private void DispatchEvaluate() [instance] :1530
void JavaScript::DispatchEvaluate()
{
    if (!IsRootingStarted())
        return;

    JavaScript__EvaluateDataContext::New1(JavaScript::Worker(), this);
}

// private object EvaluateExports() [instance] :1578
uObject* JavaScript::EvaluateExports()
{
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[40/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :1590
void JavaScript::EvaluateModule()
{
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(JavaScript::_resetHookMutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(JavaScript::_resetHookMutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(_scriptModule)->Evaluate1(uPtr(JavaScript::_worker())->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)JavaScript__DispatchEvaluate_fn, this));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(JavaScript::previousErrorFile(), ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[13/*int*/], LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[41/*"JavaScript ...*/], FileName()), ::STRINGS[42/*" fixed!"*/]), this, ::STRINGS[10/*"C:\\Users\\...*/], 1605, ::STRINGS[43/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage()))
            {
                ::g::Fuse::Diagnostics::UserScriptError(::STRINGS[44/*"JavaScript ...*/], se, this, ::STRINGS[10/*"C:\\Users\\...*/], 1616, ::STRINGS[43/*"EvaluateMod...*/]);
                JavaScript::previousErrorFile() = ::g::Uno::String::op_Addition1(FileName(), uBox<int>(::TYPES[13/*int*/], LineNumber()));
            }
        }
    }
}

// public Uno.UX.FileSource get_File() [instance] :1648
::g::Uno::UX::FileSource* JavaScript::File()
{
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :1649
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :1656
uString* JavaScript::FileName()
{
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :1657
void JavaScript::FileName(uString* value)
{
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :1641
int JavaScript::LineNumber()
{
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :1642
void JavaScript::LineNumber(int value)
{
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// private void SetDataContext(object newDc) [instance] :1539
void JavaScript::SetDataContext(uObject* newDc)
{
    uObject* oldDc = _currentDc;
    _currentDc = newDc;

    if (Parent() != NULL)
        uPtr(Parent())->OnSubtreeDataContextChanged();

    if (oldDc != NULL)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(oldDc);
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :1481
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :1476
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    JavaScript_typeof()->Init();
    return JavaScript::_worker();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class PathObserver :78
// {
static void PathObserver_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(PathObserver_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, _bindAttempt), 0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Binding), 0,
        ::g::Fuse::Node_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Node), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::PathObserver, Path), 0);
}

PathObserver_type* PathObserver_typeof()
{
    static uSStrong<PathObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PathObserver);
    options.TypeSize = sizeof(PathObserver_type);
    type = (PathObserver_type*)uClassType::New("Fuse.Reactive.PathObserver", options);
    type->fp_build_ = PathObserver_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))PathObserver__Dispose_fn;
    return type;
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__ctor__fn(PathObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    __this->ctor_(b, n, path);
}

// public void Dispose() :106
void PathObserver__Dispose_fn(PathObserver* __this)
{
    __this->Dispose();
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) :86
void PathObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path, PathObserver** __retval)
{
    *__retval = PathObserver::New1(b, n, path);
}

// internal void RestartBinding() :94
void PathObserver__RestartBinding_fn(PathObserver* __this)
{
    __this->RestartBinding();
}

// public PathObserver(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [instance] :86
void PathObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    Node = n;
    Binding = b;
    Path = path;
    RestartBinding();
}

// public void Dispose() [instance] :106
void PathObserver::Dispose()
{
    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }
}

// internal void RestartBinding() [instance] :94
void PathObserver::RestartBinding()
{
    if (_bindAttempt != NULL)
    {
        uPtr(_bindAttempt)->Dispose();
        _bindAttempt = NULL;
    }

    if (uPtr(Node)->IsRootingStarted())
        _bindAttempt = ::g::Fuse::Reactive::BindAttempt::New1(this);
}

// public PathObserver New(Fuse.Reactive.ContextBinding b, Fuse.Node n, string path) [static] :86
PathObserver* PathObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Node* n, uString* path)
{
    PathObserver* obj1 = (PathObserver*)uNew(PathObserver_typeof());
    obj1->ctor_(b, n, path);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\reactive\$.uno
// ------------------------------------------------------------------------------------

// public sealed class PropertyBinding :50
// {
static void PropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(PropertyBinding_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _read), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _write), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _Source), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(::g::Fuse::Reactive::PropertyBinding, _Target), 0);
}

PropertyBinding_type* PropertyBinding_typeof()
{
    static uSStrong<PropertyBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(PropertyBinding_type);
    type = (PropertyBinding_type*)uClassType::New("Fuse.Reactive.PropertyBinding", options);
    type->fp_build_ = PropertyBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))PropertyBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))PropertyBinding__OnUnrooted_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :59
void PropertyBinding__ctor_1_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_1(target, source);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :59
void PropertyBinding__New1_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New1(target, source);
}

// protected override sealed void OnRooted() :90
void PropertyBinding__OnRooted_fn(PropertyBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);

    if (__this->_read)
        uPtr(__this->Source())->AddListener((uObject*)__this);

    if (__this->_write)
        uPtr(__this->Target())->AddListener((uObject*)__this);

    if (__this->_read)
        uPtr(__this->Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Target())->PropertyType(), uPtr(__this->Source())->GetAsObject()), (uObject*)__this);
}

// protected override sealed void OnUnrooted() :100
void PropertyBinding__OnUnrooted_fn(PropertyBinding* __this)
{
    if (__this->_read)
        uPtr(__this->Source())->RemoveListener((uObject*)__this);

    if (__this->_write)
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property get_Source() :56
void PropertyBinding__get_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property value) :56
void PropertyBinding__set_Source_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Source(value);
}

// public generated Uno.UX.Property get_Target() :53
void PropertyBinding__get_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :53
void PropertyBinding__set_Target_fn(PropertyBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject src, Uno.UX.Selector prop) :108
void PropertyBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(PropertyBinding* __this, ::g::Uno::UX::PropertyObject* src, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((src == uPtr(__this->Source())->Object()) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Source())->Name()))
    {
        if (__this->_read)
            uPtr(__this->Target())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Target())->PropertyType(), uPtr(__this->Source())->GetAsObject()), (uObject*)__this);
    }
    else if ((src == uPtr(__this->Target())->Object()) && ::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_write)
            uPtr(__this->Source())->SetAsObject(::g::Uno::UX::Value::Cast(uPtr(__this->Source())->PropertyType(), uPtr(__this->Target())->GetAsObject()), (uObject*)__this);
    }
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :59
void PropertyBinding::ctor_1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    ctor_();
    Target(target);
    Source(source);
    _read = true;
    _write = true;

    if (!::g::Fuse::Reactive::BindingTypes::CheckCompatibility(source, target, this))
    {
        _read = false;
        _write = false;
    }
}

// public generated Uno.UX.Property get_Source() [instance] :56
::g::Uno::UX::Property* PropertyBinding::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property value) [instance] :56
void PropertyBinding::Source(::g::Uno::UX::Property* value)
{
    _Source = value;
}

// public generated Uno.UX.Property get_Target() [instance] :53
::g::Uno::UX::Property* PropertyBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :53
void PropertyBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :59
PropertyBinding* PropertyBinding::New1(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(PropertyBinding_typeof());
    obj1->ctor_1(target, source);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class ReadClearDataBinding<T> :414
// {
static void ReadClearDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::ReadDataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6);
}

::g::Fuse::Reactive::DataBinding_type* ReadClearDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ReadDataBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ReadClearDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ReadClearDataBinding`1", options);
    type->fp_build_ = ReadClearDataBinding_build;
    type->fp_get_Clear = (void(*)(::g::Fuse::Reactive::DataBinding*, bool*))ReadClearDataBinding__get_Clear_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// protected internal override sealed bool get_Clear() :418
void ReadClearDataBinding__get_Clear_fn(ReadClearDataBinding* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public class ReadDataBinding<T> :405
// {
static void ReadDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6);
}

::g::Fuse::Reactive::DataBinding_type* ReadDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ReadDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ReadDataBinding`1", options);
    type->fp_build_ = ReadDataBinding_build;
    type->fp_get_Write = (void(*)(::g::Fuse::Reactive::DataBinding*, bool*))ReadDataBinding__get_Write_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// protected internal override sealed bool get_Write() :409
void ReadDataBinding__get_Write_fn(ReadDataBinding* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :2023
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[46] = uString::Const(", ");
    ::TYPES[45] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(7,
        ::g::Fuse::Scripting::ClassInstance_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(::g::Fuse::Reactive::RootableScriptModule, _worker), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :2029
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :2066
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :2041
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :2035
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :2047
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret2;
    uObject* ret3;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret2), ret2);
    ::g::Uno::UX::NameTable* nt = __this->_names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[45/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[46/*", "*/], uPtr(uPtr(nt)->Entries)->Strong<uString*>(e)));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), uPtr(uPtr(__this->_worker)->Context())->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_names)->Objects()), ::TYPES[46/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret3), ret3)));
        }

        nt = uPtr(nt)->ParentTable;
    }

    return *__retval = argsString, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :2029
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :2029
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :2041
void RootableScriptModule::EnsureClassInstanceRooted()
{
    if (_classInstance == NULL)
        _classInstance = uPtr(uPtr(_worker)->Context())->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :2029
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj1 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj1->ctor_2(worker, names);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\subscription\$.uno
// ---------------------------------------------------------------------------------------------

// internal sealed class SegmentObserver :238
// {
static void SegmentObserver_build(uType* type)
{
    ::STRINGS[27] = uString::Const(".");
    ::STRINGS[47] = uString::Const("Cannot access disposed PathSubscription");
    ::STRINGS[48] = uString::Const("Data binding to '");
    ::STRINGS[49] = uString::Const("': expected single value, got array");
    ::STRINGS[50] = uString::Const("': expected single value, got array of length ");
    ::TYPES[22] = ::g::Uno::IDisposable_typeof();
    ::TYPES[23] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[34] = ::g::Fuse::Scripting::ObjectMirror_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(SegmentObserver_type, interface0),
        ::TYPES[22/*Uno.IDisposable*/], offsetof(SegmentObserver_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::ContextBinding_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _b), 0,
        ::g::Fuse::Reactive::BindAttempt_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _bindAttempt), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isDisposed), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _isInnerLink), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _key), 0,
        type, offsetof(::g::Fuse::Reactive::SegmentObserver, _next), 0,
        ::TYPES[22/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::SegmentObserver, _subscription), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Reactive::SegmentObserver, _unhandledPath), 0);
}

SegmentObserver_type* SegmentObserver_typeof()
{
    static uSStrong<SegmentObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SegmentObserver);
    options.TypeSize = sizeof(SegmentObserver_type);
    type = (SegmentObserver_type*)uClassType::New("Fuse.Reactive.SegmentObserver", options);
    type->fp_build_ = SegmentObserver_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))SegmentObserver__OnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))SegmentObserver__OnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))SegmentObserver__OnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))SegmentObserver__OnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))SegmentObserver__OnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))SegmentObserver__OnInsertAt_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SegmentObserver__Dispose_fn;
    return type;
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__ctor__fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    __this->ctor_(b, bindAttempt);
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__ctor_1_fn(SegmentObserver* __this, ::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    __this->ctor_1(b, path);
}

// private bool get_CanFail() :293
void SegmentObserver__get_CanFail_fn(SegmentObserver* __this, bool* __retval)
{
    *__retval = __this->CanFail();
}

// private static string CombineKeyAndPath(string key, string path) :352
void SegmentObserver__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval)
{
    *__retval = SegmentObserver::CombineKeyAndPath(key, path);
}

// public void Dispose() :435
void SegmentObserver__Dispose_fn(SegmentObserver* __this)
{
    __this->Dispose();
}

// private void Fail() :295
void SegmentObserver__Fail_fn(SegmentObserver* __this)
{
    __this->Fail();
}

// private void HandleNewDataContext(object val) :268
void SegmentObserver__HandleNewDataContext_fn(SegmentObserver* __this, uObject* val)
{
    __this->HandleNewDataContext(val);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) :274
void SegmentObserver__HandleObject_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ObjectMirror* obj)
{
    __this->HandleObject(obj);
}

// private void HandlePath(object dc, string path) :307
void SegmentObserver__HandlePath_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->HandlePath(dc, path);
}

// public void Init(object dc, string path) :252
void SegmentObserver__Init_fn(SegmentObserver* __this, uObject* dc, uString* path)
{
    __this->Init(dc, path);
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) :246
void SegmentObserver__New1_fn(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New1(b, bindAttempt);
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) :260
void SegmentObserver__New2_fn(::g::Fuse::Reactive::ContextBinding* b, uString* path, SegmentObserver** __retval)
{
    *__retval = SegmentObserver::New2(b, path);
}

// public void OnAdd(object addedValue) :390
void SegmentObserver__OnAdd_fn(SegmentObserver* __this, uObject* addedValue)
{
    __this->OnAdd(addedValue);
}

// public void OnClear() :358
void SegmentObserver__OnClear_fn(SegmentObserver* __this)
{
    __this->OnClear();
}

// public void OnInsertAt(int index, object value) :404
void SegmentObserver__OnInsertAt_fn(SegmentObserver* __this, int* index, uObject* value)
{
    __this->OnInsertAt(*index, value);
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) :363
void SegmentObserver__OnNewAll_fn(SegmentObserver* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    __this->OnNewAll(values);
}

// public void OnNewAt(int index, object newValue) :371
void SegmentObserver__OnNewAt_fn(SegmentObserver* __this, int* index, uObject* newValue)
{
    __this->OnNewAt(*index, newValue);
}

// public void OnRemoveAt(int index) :397
void SegmentObserver__OnRemoveAt_fn(SegmentObserver* __this, int* index)
{
    __this->OnRemoveAt(*index);
}

// public void OnSet(object value) :383
void SegmentObserver__OnSet_fn(SegmentObserver* __this, uObject* value)
{
    __this->OnSet(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) :301
void SegmentObserver__SubscribeAndFail_fn(SegmentObserver* __this, ::g::Fuse::Scripting::Observable* obs)
{
    __this->SubscribeAndFail(obs);
}

// private static string TakeKeyFromPath(string& path) :412
void SegmentObserver__TakeKeyFromPath_fn(uString** path, uString** __retval)
{
    *__retval = SegmentObserver::TakeKeyFromPath(path);
}

// public SegmentObserver(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [instance] :246
void SegmentObserver::ctor_(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    _b = b;
    _bindAttempt = bindAttempt;
}

// private SegmentObserver(Fuse.Reactive.ContextBinding b, string path) [instance] :260
void SegmentObserver::ctor_1(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    _b = b;
    _key = SegmentObserver::TakeKeyFromPath(&path);
    _unhandledPath = path;
    _isInnerLink = true;
}

// private bool get_CanFail() [instance] :293
bool SegmentObserver::CanFail()
{
    return _bindAttempt != NULL;
}

// public void Dispose() [instance] :435
void SegmentObserver::Dispose()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"Cannot acce...*/]));

    _isDisposed = true;

    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[22/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    if (_next != NULL)
    {
        uPtr(_next)->Dispose();
        _next = NULL;
    }

    _b = NULL;
}

// private void Fail() [instance] :295
void SegmentObserver::Fail()
{
    _failed = true;
    uPtr(_bindAttempt)->Fail();
}

// private void HandleNewDataContext(object val) [instance] :268
void SegmentObserver::HandleNewDataContext(uObject* val)
{
    if (!_isInnerLink)
        U_THROW(::g::Uno::Exception::New1());

    HandlePath(val, _unhandledPath);
}

// private void HandleObject(Fuse.Scripting.ObjectMirror obj) [instance] :274
void SegmentObserver::HandleObject(::g::Fuse::Scripting::ObjectMirror* obj)
{
    if (_next == NULL)
        return;

    if (uPtr(obj)->ContainsKey(_key))
    {
        uObject* val = ::g::Fuse::Scripting::Context::Wrap(uPtr(obj)->Item(_key));
        uPtr(_next)->HandleNewDataContext(val);
        uObject* disp = uAs<uObject*>(val, ::TYPES[22/*Uno.IDisposable*/]);

        if (disp != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disp), ::TYPES[22/*Uno.IDisposable*/]));
    }
    else
    {
        if (CanFail())
            Fail();
    }
}

// private void HandlePath(object dc, string path) [instance] :307
void SegmentObserver::HandlePath(uObject* dc, uString* path)
{
    if (::g::Uno::String::op_Equality(_key, NULL))
        uPtr(_b)->NewValue(dc);
    else
    {
        if (_next != NULL)
            uPtr(_next)->Dispose();

        _next = NULL;
        ::g::Fuse::Scripting::Observable* obs = uAs< ::g::Fuse::Scripting::Observable*>(dc, ::TYPES[23/*Fuse.Scripting.Observable*/]);

        if (obs != NULL)
        {
            if (CanFail())
            {
                if (uPtr(obs)->Length() != 1)
                    SubscribeAndFail(obs);
                else
                {
                    ::g::Fuse::Scripting::ObjectMirror* so = uAs< ::g::Fuse::Scripting::ObjectMirror*>(uPtr(obs)->Item(0), ::TYPES[34/*Fuse.Scripting.ObjectMirror*/]);

                    if (so == NULL)
                        SubscribeAndFail(obs);
                    else if (!uPtr(so)->ContainsKey(_key))
                        SubscribeAndFail(obs);
                }
            }

            if (!_failed)
            {
                _next = SegmentObserver::New2(_b, SegmentObserver::CombineKeyAndPath(_key, path));

                if (_subscription != NULL)
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[22/*Uno.IDisposable*/]));

                _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)this);
            }
        }
        else if (uIs(dc, ::TYPES[34/*Fuse.Scripting.ObjectMirror*/]))
        {
            _next = SegmentObserver::New2(_b, path);
            HandleObject(uCast< ::g::Fuse::Scripting::ObjectMirror*>(dc, ::TYPES[34/*Fuse.Scripting.ObjectMirror*/]));
        }
        else
        {
            if (_bindAttempt != NULL)
                uPtr(_bindAttempt)->Fail();

            _next = NULL;
        }
    }
}

// public void Init(object dc, string path) [instance] :252
void SegmentObserver::Init(uObject* dc, uString* path)
{
    _key = SegmentObserver::TakeKeyFromPath(&path);
    HandlePath(dc, path);
}

// public void OnAdd(object addedValue) [instance] :390
void SegmentObserver::OnAdd(uObject* addedValue)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Data bindin...*/], _key), ::STRINGS[49/*"': expected...*/])));
}

// public void OnClear() [instance] :358
void SegmentObserver::OnClear()
{
}

// public void OnInsertAt(int index, object value) [instance] :404
void SegmentObserver::OnInsertAt(int index, uObject* value)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Data bindin...*/], _key), ::STRINGS[49/*"': expected...*/])));
}

// public void OnNewAll(Fuse.Scripting.ListMirror values) [instance] :363
void SegmentObserver::OnNewAll(::g::Fuse::Scripting::ListMirror* values)
{
    if (_isDisposed)
        return;

    if (uPtr(values)->Length() > 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Data bindin...*/], _key), ::STRINGS[50/*"': expected...*/]), uBox<int>(::TYPES[13/*int*/], uPtr(values)->Length()))));
}

// public void OnNewAt(int index, object newValue) [instance] :371
void SegmentObserver::OnNewAt(int index, uObject* newValue)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Data bindin...*/], _key), ::STRINGS[49/*"': expected...*/])));
}

// public void OnRemoveAt(int index) [instance] :397
void SegmentObserver::OnRemoveAt(int index)
{
    if (_isDisposed)
        return;

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Data bindin...*/], _key), ::STRINGS[49/*"': expected...*/])));
}

// public void OnSet(object value) [instance] :383
void SegmentObserver::OnSet(uObject* value)
{
    if (_isDisposed)
        return;

    uPtr(_next)->HandleNewDataContext(value);
}

// private void SubscribeAndFail(Fuse.Scripting.Observable obs) [instance] :301
void SegmentObserver::SubscribeAndFail(::g::Fuse::Scripting::Observable* obs)
{
    _subscription = (uObject*)uPtr(obs)->Subscribe((uObject*)::g::Fuse::Reactive::AnyChangeObserver::New1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Reactive::BindAttempt__Restart_fn, uPtr(_bindAttempt))));
    Fail();
}

// private static string CombineKeyAndPath(string key, string path) [static] :352
uString* SegmentObserver::CombineKeyAndPath(uString* key, uString* path)
{
    if (::g::Uno::String::op_Inequality(path, NULL) && (uPtr(path)->Length() > 0))
        return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(key, ::STRINGS[27/*"."*/]), path);
    else
        return key;
}

// public SegmentObserver New(Fuse.Reactive.ContextBinding b, Fuse.Reactive.BindAttempt bindAttempt) [static] :246
SegmentObserver* SegmentObserver::New1(::g::Fuse::Reactive::ContextBinding* b, ::g::Fuse::Reactive::BindAttempt* bindAttempt)
{
    SegmentObserver* obj1 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj1->ctor_(b, bindAttempt);
    return obj1;
}

// private SegmentObserver New(Fuse.Reactive.ContextBinding b, string path) [static] :260
SegmentObserver* SegmentObserver::New2(::g::Fuse::Reactive::ContextBinding* b, uString* path)
{
    SegmentObserver* obj2 = (SegmentObserver*)uNew(SegmentObserver_typeof());
    obj2->ctor_1(b, path);
    return obj2;
}

// private static string TakeKeyFromPath(string& path) [static] :412
uString* SegmentObserver::TakeKeyFromPath(uString** path)
{
    if (::g::Uno::String::op_Equality(*path, NULL))
        return NULL;

    uString* key = *path;
    int p = ::g::Uno::String::IndexOf(uPtr(key), '.', 0);

    if (p != -1)
    {
        key = ::g::Uno::String::Substring1(uPtr(key), 0, p);
        *path = ::g::Uno::String::Substring1(uPtr(*path), p + 1, (uPtr(*path)->Length() - p) - 1);
    }
    else
        *path = NULL;

    if (::g::Uno::String::op_Equality(key, NULL) || (uPtr(key)->Length() == 0))
        return NULL;
    else
        return key;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// internal partial sealed class ThreadWorker :2084
// {
static void ThreadWorker_build(uType* type)
{
    ::STRINGS[51] = uString::Const("Skipped Exception");
    ::STRINGS[10] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Reactive\\0.43.11\\$.uno");
    ::STRINGS[52] = uString::Const("CheckAndThrow");
    ::STRINGS[53] = uString::Const("ThreadWorked failed");
    ::STRINGS[54] = uString::Const("Run");
    ::STRINGS[55] = uString::Const("Could not create script context");
    ::TYPES[47] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler_typeof();
    ::TYPES[26] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::TYPES[48/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _exceptionQueue), 0,
        ::TYPES[47/*Uno.Threading.ConcurrentQueue<Uno.Action>*/], offsetof(::g::Fuse::Reactive::ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _ready), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, _terminate), 0,
        uObject_typeof(), offsetof(::g::Fuse::Reactive::ThreadWorker, CanExecuteJavaScript), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&::g::Fuse::Reactive::ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    return type;
}

// public ThreadWorker() :2111
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :2257
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :2098
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :2089
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// public void Dispose() :2132
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :2086
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :2087
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = uPtr(__this->FuseJS())->Observable, void();
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() :2101
void ThreadWorker__get_FuseJS_fn(ThreadWorker* __this, ::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = __this->FuseJS();
}

// public void Invoke(Uno.Action action) :2271
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public ThreadWorker New() :2111
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnClosing(object sender, Uno.EventArgs args) :2127
void ThreadWorker__OnClosing_fn(ThreadWorker* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnClosing(sender, args);
}

// private void Run() :2140
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :2153
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :2111
void ThreadWorker::ctor_()
{
    CanExecuteJavaScript = ::g::Uno::Object::New();
    _ready = ::g::Uno::Threading::ManualResetEvent::New1(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[47/*Uno.Threading.ConcurrentQueue<Uno.Action>*/]));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::TYPES[48/*Uno.Threading.ConcurrentQueue<Uno.Exception>*/]));
    ::g::Uno::Threading::Thread* thread = ::g::Uno::Threading::Thread::New1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__Run_fn, this));
    thread->Start();
    uPtr(_ready)->WaitOne();
}

// public void CheckAndThrow() [instance] :2257
void ThreadWorker::CheckAndThrow()
{
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(::STRINGS[51/*"Skipped Exc...*/], next, this, ::STRINGS[10/*"C:\\Users\\...*/], 2263, ::STRINGS[52/*"CheckAndThrow"*/]);

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :2098
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context_;
}

// public void Dispose() [instance] :2132
void ThreadWorker::Dispose()
{
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
    _terminate = true;
}

// public Fuse.Reactive.FuseJS.Builtins get_FuseJS() [instance] :2101
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    return ThreadWorker::_fuseJS_;
}

// public void Invoke(Uno.Action action) [instance] :2271
void ThreadWorker::Invoke(uDelegate* action)
{
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnClosing(object sender, Uno.EventArgs args) [instance] :2127
void ThreadWorker::OnClosing(uObject* sender, ::g::Uno::EventArgs* args)
{
    Dispose();
}

// private void Run() [instance] :2140
void ThreadWorker::Run()
{
    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[53/*"ThreadWorke...*/], e, this, ::STRINGS[10/*"C:\\Users\\...*/], 2148, ::STRINGS[54/*"Run"*/]);
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }
}

// private void RunInner() [instance] :2153
void ThreadWorker::RunInner()
{
    bool ret3;

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_ready)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Threading::Monitor::Enter(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Threading::Monitor::Exit(CanExecuteJavaScript);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            if (ThreadWorker::_context_ == NULL)
            {
                ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

                if (ThreadWorker::_context_ == NULL)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[55/*"Could not c...*/]));

                ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
                ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
            }
        }
    }

    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Scripting::Context__ProcessUIMessages_fn, uPtr(Context())), 0);
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (!_terminate)
    {
        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current() != NULL)
            {
                uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[3/*Uno.EventHandler*/], (void*)ThreadWorker__OnClosing_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        ::g::Uno::Threading::Monitor::Enter(CanExecuteJavaScript);

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::Threading::Monitor::Exit(CanExecuteJavaScript);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);
            uDelegate* action;

            if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret3), ret3))
            {
                try
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid();
                }
                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
                }
            }

            try
            {
                uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e1 = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
            }
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :2089
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    return ::g::Fuse::Scripting::V8::Context::New1(worker);
}

// public ThreadWorker New() [static] :2111
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public sealed class WriteClearDataBinding<T> :432
// {
static void WriteClearDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::WriteDataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6);
}

::g::Fuse::Reactive::DataBinding_type* WriteClearDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WriteDataBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(WriteClearDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.WriteClearDataBinding`1", options);
    type->fp_build_ = WriteClearDataBinding_build;
    type->fp_get_Clear = (void(*)(::g::Fuse::Reactive::DataBinding*, bool*))WriteClearDataBinding__get_Clear_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// protected internal override sealed bool get_Clear() :436
void WriteClearDataBinding__get_Clear_fn(WriteClearDataBinding* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno
// --------------------------------------------------------------------------------

// public class WriteDataBinding<T> :423
// {
static void WriteDataBinding_build(uType* type)
{
    type->SetBase(::g::Fuse::Reactive::DataBinding_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2));
    type->SetFields(6);
}

::g::Fuse::Reactive::DataBinding_type* WriteDataBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(WriteDataBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.WriteDataBinding`1", options);
    type->fp_build_ = WriteDataBinding_build;
    type->fp_get_Read = (void(*)(::g::Fuse::Reactive::DataBinding*, bool*))WriteDataBinding__get_Read_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnClear_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnAdd_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAt_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnNewAll_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseScriptingIObserverOnInsertAt_fn;
    type->interface1.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// protected internal override sealed bool get_Read() :427
void WriteDataBinding__get_Read_fn(WriteDataBinding* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

}}} // ::g::Fuse::Reactive
