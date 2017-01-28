// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.BoolValue.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.ConditionalOperator-1.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.IValueConvertible.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.NumberValue.h>
#include <Uno.UX.NumericOperator.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.SelectorRegistry.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Size2Value.h>
#include <Uno.UX.SizeValue.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.StringValue.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.Value.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.UX.Vector2Value.h>
#include <Uno.UX.Vector3Value.h>
#include <Uno.UX.Vector4Value.h>
#include <Uno.UX.VectorValue.h>
static uString* STRINGS[11];
static uType* TYPES[29];

namespace g{
namespace Uno{
namespace UX{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class BoolValue :1679
// {
static void BoolValue_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::TYPES[0/*bool*/], offsetof(::g::Uno::UX::BoolValue, _value), 0);
}

::g::Uno::UX::Value_type* BoolValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(BoolValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.BoolValue", options);
    type->fp_build_ = BoolValue_build;
    type->fp_ToBool = (void(*)(::g::Uno::UX::Value*, bool*))BoolValue__ToBool_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))BoolValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))BoolValue__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BoolValue__ToString_fn;
    return type;
}

// public BoolValue(bool value) :1682
void BoolValue__ctor_1_fn(BoolValue* __this, bool* value)
{
    __this->ctor_1(*value);
}

// public BoolValue New(bool value) :1682
void BoolValue__New1_fn(bool* value, BoolValue** __retval)
{
    *__retval = BoolValue::New1(*value);
}

// public override sealed bool ToBool() :1684
void BoolValue__ToBool_fn(BoolValue* __this, bool* __retval)
{
    return *__retval = __this->_value, void();
}

// public override sealed double ToDouble() :1683
void BoolValue__ToDouble_fn(BoolValue* __this, double* __retval)
{
    return *__retval = __this->_value ? 1.0 : 0.0, void();
}

// public override sealed object ToObject() :1685
void BoolValue__ToObject_fn(BoolValue* __this, uObject** __retval)
{
    return *__retval = uBox(::TYPES[0/*bool*/], __this->_value), void();
}

// public override sealed string ToString() :1686
void BoolValue__ToString_fn(BoolValue* __this, uString** __retval)
{
    bool ind1;
    return *__retval = ::g::Uno::Bool::ToString((ind1 = __this->_value, ind1), ::TYPES[0/*bool*/]), void();
}

// public BoolValue(bool value) [instance] :1682
void BoolValue::ctor_1(bool value)
{
    ctor_();
    _value = value;
}

// public BoolValue New(bool value) [static] :1682
BoolValue* BoolValue::New1(bool value)
{
    BoolValue* obj2 = (BoolValue*)uNew(BoolValue_typeof());
    obj2->ctor_1(value);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class BundleFileSource :8
// {
static void BundleFileSource_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::IO::BundleFile_typeof(), offsetof(::g::Uno::UX::BundleFileSource, BundleFile), 0);
}

::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->fp_build_ = BundleFileSource_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    return type;
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :37
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, __this->__type);

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :46
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) :11
void BundleFileSource__New1_fn(::g::Uno::IO::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// private void OnChanged(Uno.IO.BundleFile bf) :17
void BundleFileSource__OnChanged_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bf)
{
    __this->OnChanged(bf);
}

// public override sealed Uno.IO.Stream OpenRead() :22
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :27
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :32
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) [instance] :11
void BundleFileSource::ctor_1(::g::Uno::IO::BundleFile* bundleFile)
{
    ctor_(uPtr(bundleFile)->SourcePath());
    BundleFile = bundleFile;
    uPtr(BundleFile)->add_Changed(uDelegate::New(::TYPES[1/*Uno.Action<Uno.IO.BundleFile>*/], (void*)BundleFileSource__OnChanged_fn, this));
}

// private void OnChanged(Uno.IO.BundleFile bf) [instance] :17
void BundleFileSource::OnChanged(::g::Uno::IO::BundleFile* bf)
{
    OnDataChanged();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) [static] :11
BundleFileSource* BundleFileSource::New1(::g::Uno::IO::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class ConditionalOperator<T> :327
// {
static void ConditionalOperator_build(uType* type)
{
    type->SetFields(1);
}

uType* ConditionalOperator_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ConditionalOperator);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ConditionalOperator`1", options);
    type->fp_build_ = ConditionalOperator_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\actions\$.uno
// ----------------------------------------------------------------------------------------

// public delegate T Expression<T>() :611
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract class FileSource :61
// {
static void FileSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File name can't be null");
    ::STRINGS[1] = uString::Const("name");
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::FileSource, Name), 0,
        ::TYPES[2/*Uno.EventHandler<Uno.EventArgs>*/], offsetof(::g::Uno::UX::FileSource, DataChanged1), 0);
}

FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_build_ = FileSource_build;
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    return type;
}

// protected FileSource(string name) :74
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :65
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :65
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :67
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) :82
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :89
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :94
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :74
void FileSource::ctor_(uString* name)
{
    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"File name c...*/], ::STRINGS[1/*"name"*/]));

    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :65
void FileSource::add_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[2/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :65
void FileSource::remove_DataChanged(uDelegate* value)
{
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[2/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :67
void FileSource::OnDataChanged()
{
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) [static] :82
FileSource* FileSource::op_Implicit(::g::Uno::IO::BundleFile* bundleFile)
{
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IPropertyListener :719
// {
uInterfaceType* IPropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IPropertyListener", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IValueConvertible :1373
// {
uInterfaceType* IValueConvertible_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IValueConvertible", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class NameTable :605
// {
// static NameTable() :605
static void NameTable__cctor__fn(uType* __type)
{
    NameTable::Empty_ = NameTable::New1(NULL, uArray::New(::TYPES[3/*string[]*/], 0));
}

static void NameTable_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::String_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List<object>*/], offsetof(::g::Uno::UX::NameTable, _objects), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL), offsetof(::g::Uno::UX::NameTable, _properties), 0,
        ::TYPES[3/*string[]*/], offsetof(::g::Uno::UX::NameTable, Entries), 0,
        type, offsetof(::g::Uno::UX::NameTable, ParentTable), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::NameTable, _This), 0,
        type, (uintptr_t)&::g::Uno::UX::NameTable::Empty_, uFieldFlagsStatic);
}

uType* NameTable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NameTable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTable", options);
    type->fp_build_ = NameTable_build;
    type->fp_cctor_ = NameTable__cctor__fn;
    return type;
}

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) :625
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries)
{
    __this->ctor_(parentTable, entries);
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) :625
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval)
{
    *__retval = NameTable::New1(parentTable, entries);
}

// public Uno.Collections.IList<object> get_Objects() :612
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Objects();
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() :617
void NameTable__get_Properties_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) :618
void NameTable__set_Properties_fn(NameTable* __this, uObject* value)
{
    __this->Properties(value);
}

// public generated object get_This() :621
void NameTable__get_This_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->This();
}

// public generated void set_This(object value) :621
void NameTable__set_This_fn(NameTable* __this, uObject* value)
{
    __this->This(value);
}

uSStrong<NameTable*> NameTable::Empty_;

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) [instance] :625
void NameTable::ctor_(NameTable* parentTable, uArray* entries)
{
    _objects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<object>*/]));
    _properties = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<Uno.UX.Property>*/]));
    ParentTable = parentTable;
    Entries = entries;
}

// public Uno.Collections.IList<object> get_Objects() [instance] :612
uObject* NameTable::Objects()
{
    return (uObject*)_objects;
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() [instance] :617
uObject* NameTable::Properties()
{
    uObject* ind1 = _properties;
    return (ind1 != NULL) ? ind1 : (uObject*)uPtr(ParentTable)->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) [instance] :618
void NameTable::Properties(uObject* value)
{
    _properties = value;
}

// public generated object get_This() [instance] :621
uObject* NameTable::This()
{
    return _This;
}

// public generated void set_This(object value) [instance] :621
void NameTable::This(uObject* value)
{
    _This = value;
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) [static] :625
NameTable* NameTable::New1(NameTable* parentTable, uArray* entries)
{
    NameTable* obj2 = (NameTable*)uNew(NameTable_typeof());
    obj2->ctor_(parentTable, entries);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal class NumberValue :1784
// {
static void NumberValue_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::NumberValue, _x), 0);
}

::g::Uno::UX::Value_type* NumberValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::VectorValue_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NumberValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.NumberValue", options);
    type->fp_build_ = NumberValue_build;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__ToDouble_fn;
    type->fp_get_W = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__get_W_fn;
    type->fp_get_X = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__get_X_fn;
    type->fp_get_Y = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__get_Y_fn;
    type->fp_get_Z = (void(*)(::g::Uno::UX::Value*, double*))NumberValue__get_Z_fn;
    return type;
}

// public NumberValue(double v) :1787
void NumberValue__ctor_2_fn(NumberValue* __this, double* v)
{
    __this->ctor_2(*v);
}

// public NumberValue New(double v) :1787
void NumberValue__New2_fn(double* v, NumberValue** __retval)
{
    *__retval = NumberValue::New2(*v);
}

// public override sealed double ToDouble() :1792
void NumberValue__ToDouble_fn(NumberValue* __this, double* __retval)
{
    return *__retval = __this->_x, void();
}

// public override double get_W() :1791
void NumberValue__get_W_fn(NumberValue* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public override sealed double get_X() :1788
void NumberValue__get_X_fn(NumberValue* __this, double* __retval)
{
    return *__retval = __this->_x, void();
}

// public override double get_Y() :1789
void NumberValue__get_Y_fn(NumberValue* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public override double get_Z() :1790
void NumberValue__get_Z_fn(NumberValue* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public NumberValue(double v) [instance] :1787
void NumberValue::ctor_2(double v)
{
    ctor_1();
    _x = v;
}

// public NumberValue New(double v) [static] :1787
NumberValue* NumberValue::New2(double v)
{
    NumberValue* obj1 = (NumberValue*)uNew(NumberValue_typeof());
    obj1->ctor_2(v);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal delegate double NumericOperator(double a, double b) :1704
uDelegateType* NumericOperator_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.NumericOperator", 2, 0);
    type->SetSignature(::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract class Property :651
// {
static void Property_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(::g::Uno::UX::Property, _name), 0);
}

Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Property__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Property__GetHashCode_fn;
    type->fp_SetAsObject = Property__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = Property__get_SupportsOriginSetter_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :660
void Property__ctor__fn(Property* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_(*name);
}

// public void AddListener(Uno.UX.IPropertyListener listener) :665
void Property__AddListener_fn(Property* __this, uObject* listener)
{
    __this->AddListener(listener);
}

// public override sealed bool Equals(object obj) :675
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval)
{
    Property* p = uAs<Property*>(obj, Property_typeof());

    if (p == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(p)->Object() == __this->Object()) && ::g::Uno::UX::Selector__op_Equality(uPtr(p)->Name(), __this->_name), void();
}

// public override sealed int GetHashCode() :682
void Property__GetHashCode_fn(Property* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object())) ^ __this->Name().Handle(), void();
}

// public Uno.UX.Selector get_Name() :658
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Name();
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) :670
void Property__RemoveListener_fn(Property* __this, uObject* listener)
{
    __this->RemoveListener(listener);
}

// public virtual void SetAsObject(object value, Uno.UX.IPropertyListener origin) :688
void Property__SetAsObject_fn(Property* __this, uObject* value, uObject* origin)
{
}

// public virtual bool get_SupportsOriginSetter() :654
void Property__get_SupportsOriginSetter_fn(Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected Property(Uno.UX.Selector name) [instance] :660
void Property::ctor_(::g::Uno::UX::Selector name)
{
    _name = name;
}

// public void AddListener(Uno.UX.IPropertyListener listener) [instance] :665
void Property::AddListener(uObject* listener)
{
    uPtr(Object())->AddPropertyListener(listener);
}

// public Uno.UX.Selector get_Name() [instance] :658
::g::Uno::UX::Selector Property::Name()
{
    return _name;
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) [instance] :670
void Property::RemoveListener(uObject* listener)
{
    uPtr(Object())->RemovePropertyListener(listener);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract class Property<T> :691
// {
static void Property1_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        type->T(0));
    type->SetFields(1);
}

Property1_type* Property1_typeof()
{
    static uSStrong<Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Property1);
    options.TypeSize = sizeof(Property1_type);
    type = (Property1_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_build_ = Property1_build;
    type->fp_Get = Property1__Get_fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::Property*, uObject**))Property1__GetAsObject_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::Property*, uType**))Property1__get_PropertyType_fn;
    type->fp_Set = Property1__Set_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::Property*, uObject*, uObject*))Property1__SetAsObject_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :693
void Property1__ctor_1_fn(Property1* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_1(*name);
}

// public virtual T Get() :697
void Property1__Get_fn(Property1* __this, uTRef __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public override sealed object GetAsObject() :700
void Property1__GetAsObject_fn(Property1* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Property1_typeof())->Precalced(0/*T*/),
    };
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = uBoxPtr(__types[0], (__this->Get_ex(&ret1), ret1)), void();
}

// public override sealed Uno.Type get_PropertyType() :695
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval)
{
    return *__retval = __this->__type->GetBase(Property1_typeof())->T(0), void();
}

// public virtual void Set(T value, Uno.UX.IPropertyListener origin) :698
void Property1__Set_fn(Property1* __this, void* value, uObject* origin)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public override sealed void SetAsObject(object value, Uno.UX.IPropertyListener origin) :704
void Property1__SetAsObject_fn(Property1* __this, uObject* value, uObject* origin)
{
    __this->Set_ex(uUnboxAny(__this->__type->GetBase(Property1_typeof())->T(0), value), origin);
}

// protected Property(Uno.UX.Selector name) [instance] :693
void Property1::ctor_1(::g::Uno::UX::Selector name)
{
    ctor_(name);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public class PropertyObject :724
// {
static void PropertyObject_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::IPropertyListener_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::UX::IPropertyListener_typeof();
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.List<Uno.UX.IPropertyListener>*/], offsetof(::g::Uno::UX::PropertyObject, _propListeners), 0);
}

uType* PropertyObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(PropertyObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.PropertyObject", options);
    type->fp_build_ = PropertyObject_build;
    return type;
}

// public generated PropertyObject() :724
void PropertyObject__ctor__fn(PropertyObject* __this)
{
    __this->ctor_();
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) :729
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->AddPropertyListener(listener);
}

// protected void OnPropertyChanged(Uno.UX.Selector property) :757
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property)
{
    __this->OnPropertyChanged(*property);
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) :744
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin)
{
    __this->OnPropertyChanged1(*property, origin);
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) :738
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->RemovePropertyListener(listener);
}

// public generated PropertyObject() [instance] :724
void PropertyObject::ctor_()
{
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) [instance] :729
void PropertyObject::AddPropertyListener(uObject* listener)
{
    if (_propListeners == NULL)
        _propListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.UX.IPropertyListener>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_propListeners), listener);
}

// protected void OnPropertyChanged(Uno.UX.Selector property) [instance] :757
void PropertyObject::OnPropertyChanged(::g::Uno::UX::Selector property)
{
    OnPropertyChanged1(property, uAs<uObject*>(this, ::TYPES[8/*Uno.UX.IPropertyListener*/]));
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) [instance] :744
void PropertyObject::OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin)
{
    uObject* ret2;
    ::g::Uno::UX::Selector property_ = property;

    if (_propListeners != NULL)

        for (int i = 0; i < uPtr(_propListeners)->Count(); i++)
        {
            uObject* listener = (::g::Uno::Collections::List__get_Item_fn(uPtr(_propListeners), uCRef<int>(i), &ret2), ret2);

            if (listener != origin)
                ::g::Uno::UX::IPropertyListener::OnPropertyChanged(uInterface(uPtr(listener), ::TYPES[8/*Uno.UX.IPropertyListener*/]), this, property_);
        }
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) [instance] :738
void PropertyObject::RemovePropertyListener(uObject* listener)
{
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_propListeners), listener, &ret3);

    if (uPtr(_propListeners)->Count() == 0)
        _propListeners = NULL;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class Resource :838
// {
// static Resource() :838
static void Resource__cctor__fn(uType* __type)
{
    Resource::_globals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));
    Resource::_listeners_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/]));
}

static void Resource_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::Collections::List_typeof();
    ::TYPES[4] = ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Resource, _Key), 0,
        uObject_typeof(), offsetof(::g::Uno::UX::Resource, _Value), 0,
        ::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/], (uintptr_t)&::g::Uno::UX::Resource::_globals_, uFieldFlagsStatic,
        ::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/], (uintptr_t)&::g::Uno::UX::Resource::_listeners_, uFieldFlagsStatic);
}

uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->fp_build_ = Resource_build;
    type->fp_cctor_ = Resource__cctor__fn;
    return type;
}

// public Resource(string key, object value) :844
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :858
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :908
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() :920
void Resource__GetGlobalsOfType_fn(uType* __type, uObject** __retval)
{
    *__retval = Resource::GetGlobalsOfType(__type);
}

// public generated string get_Key() :840
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :840
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :844
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) :868
void Resource__RemoveGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::RemoveGlobalKeyListener(listener);
}

// public static void SetGlobalKey(object obj, string key) :885
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :941
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :841
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :841
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :844
void Resource::ctor_(uString* key, uObject* value)
{
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :840
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :840
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :841
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :841
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :858
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    Resource_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners()), listener);
    }
}

// public static string GetGlobalKey(object obj) [static] :908
uString* Resource::GetGlobalKey(uObject* obj)
{
    Resource_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret6), ret6); enum4.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum4.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

            if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret7), ret7))
                return list.Key(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
        }
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() [static] :920
uObject* Resource::GetGlobalsOfType(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
        __type->U(0),
    };
    __type->Base->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret8;
    uObject* ret9;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals()), &ret8), ret8); enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]); )
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > entry = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
            ::g::Uno::Collections::List* list = entry.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret9), ret9);

                if (uIs(v, __types[1]))
                    ::g::Uno::Collections::List__Add_fn(uPtr(result), uUnboxAny(__types[1], v));
            }
        }
    }

    return (uObject*)result;
}

// public Resource New(string key, object value) [static] :844
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj5 = (Resource*)uNew(Resource_typeof());
    obj5->ctor_(key, value);
    return obj5;
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) [static] :868
void Resource::RemoveGlobalKeyListener(uDelegate* listener)
{
    Resource_typeof()->Init();
    bool ret10;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List__Remove_fn(uPtr(Resource::_listeners()), listener, &ret10);
    }
}

// public static void SetGlobalKey(object obj, string key) [static] :885
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    Resource_typeof()->Init();
    bool ret11;
    bool ret12;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Uno::Collections::List* objs;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&objs), &ret11), ret11))
        {
            objs = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<object>*/]);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals()), key, objs);
        }

        if (!(::g::Uno::Collections::List__Contains_fn(uPtr(objs), obj, &ret12), ret12))
            ::g::Uno::Collections::List__Add_fn(uPtr(objs), obj);
    }

    uArray* listeners = NULL;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        listeners = (uArray*)uPtr(Resource::_listeners())->ToArray();
    }

    for (int index2 = 0, length3 = uPtr(listeners)->Length(); index2 < length3; ++index2)
    {
        uDelegate* listener = uPtr(listeners)->Strong<uDelegate*>(index2);
        uPtr(listener)->InvokeVoid(key);
    }
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :941
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    Resource_typeof()->Init();
    bool ret13;
    uObject* ret14;
    bool ret15;
    ::g::Uno::Collections::List* list;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals()), key, (void**)(&list), &ret13), ret13))

            for (int i = uPtr(list)->Count(); (i--) > 0; )
            {
                uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(i), &ret14), ret14);

                if ((uPtr(acceptor)->Invoke(&ret15, 1, v), ret15))
                {
                    *res = v;
                    return true;
                }
            }
    }

    *res = NULL;
    return false;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public struct Selector :1006
// {
static void Selector_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::UX::Selector, _handle), 0);
}

uStructType* Selector_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ValueSize = sizeof(Selector);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Selector", options);
    type->fp_build_ = Selector_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Selector__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Selector__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Selector__ToString_fn;
    return type;
}

// public Selector(string value) :1014
void Selector__ctor__fn(Selector* __this, uString* value)
{
    __this->ctor_(value);
}

// public override sealed bool Equals(object obj) :1029
void Selector__Equals_fn(Selector* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Selector sel = uUnbox<Selector>(__type, obj);
        return *__retval = sel._handle == __this->_handle, void();
    }

    uString* s = uAs<uString*>(obj, ::TYPES[14/*string*/]);

    if (::g::Uno::String::op_Inequality(s, NULL))
        return *__retval = __this->Equals(__type, uBox(__type, Selector__New1(s))), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :1024
void Selector__GetHashCode_fn(Selector* __this, uType* __type, int* __retval)
{
    return *__retval = __this->_handle, void();
}

// internal int get_Handle() :1011
void Selector__get_Handle_fn(Selector* __this, int* __retval)
{
    *__retval = __this->Handle();
}

// public bool get_IsNull() :1021
void Selector__get_IsNull_fn(Selector* __this, bool* __retval)
{
    *__retval = __this->IsNull();
}

// public Selector New(string value) :1014
void Selector__New1_fn(uString* value, Selector* __retval)
{
    *__retval = Selector__New1(value);
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) :1056
void Selector__op_Equality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Equality(*a, *b);
}

// public static implicit operator Uno.UX.Selector(string s) :1046
void Selector__op_Implicit_fn(uString* s, Selector* __retval)
{
    *__retval = Selector__op_Implicit(s);
}

// public static implicit operator string(Uno.UX.Selector s) :1051
void Selector__op_Implicit1_fn(Selector* s, uString** __retval)
{
    *__retval = Selector__op_Implicit1(*s);
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) :1061
void Selector__op_Inequality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Inequality(*a, *b);
}

// public override sealed string ToString() :1066
void Selector__ToString_fn(Selector* __this, uType* __type, uString** __retval)
{
    if (__this->_handle == 0)
        return *__retval = NULL, void();

    return *__retval = ::g::Uno::UX::SelectorRegistry::GetValue(__this->_handle), void();
}

// public Selector(string value) [instance] :1014
void Selector::ctor_(uString* value)
{
    _handle = ::g::Uno::UX::SelectorRegistry::GetHandle(value);
}

// internal int get_Handle() [instance] :1011
int Selector::Handle()
{
    return _handle;
}

// public bool get_IsNull() [instance] :1021
bool Selector::IsNull()
{
    return _handle == 0;
}

// public Selector New(string value) [static] :1014
Selector Selector__New1(uString* value)
{
    Selector obj1;
    obj1.ctor_(value);
    return obj1;
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) [static] :1056
bool Selector__op_Equality(Selector a, Selector b)
{
    return a._handle == b._handle;
}

// public static implicit operator Uno.UX.Selector(string s) [static] :1046
Selector Selector__op_Implicit(uString* s)
{
    return Selector__New1(s);
}

// public static implicit operator string(Uno.UX.Selector s) [static] :1051
uString* Selector__op_Implicit1(Selector s)
{
    return s.ToString(Selector_typeof());
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) [static] :1061
bool Selector__op_Inequality(Selector a, Selector b)
{
    return a._handle != b._handle;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal static class SelectorRegistry :975
// {
// static SelectorRegistry() :975
static void SelectorRegistry__cctor__fn(uType* __type)
{
    SelectorRegistry::_mutex_ = ::g::Uno::Object::New();
    SelectorRegistry::_stringToHandle_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<string, int>*/]));
    SelectorRegistry::_handleToString_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<int, string>*/]));
    SelectorRegistry::_counter_ = 1;
}

static void SelectorRegistry_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_counter_, uFieldFlagsStatic,
        ::TYPES[16/*Uno.Collections.Dictionary<int, string>*/], (uintptr_t)&::g::Uno::UX::SelectorRegistry::_handleToString_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Uno::UX::SelectorRegistry::_mutex_, uFieldFlagsStatic,
        ::TYPES[15/*Uno.Collections.Dictionary<string, int>*/], (uintptr_t)&::g::Uno::UX::SelectorRegistry::_stringToHandle_, uFieldFlagsStatic);
}

uClassType* SelectorRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.SelectorRegistry", options);
    type->fp_build_ = SelectorRegistry_build;
    type->fp_cctor_ = SelectorRegistry__cctor__fn;
    return type;
}

// internal static int GetHandle(string value) :982
void SelectorRegistry__GetHandle_fn(uString* value, int* __retval)
{
    *__retval = SelectorRegistry::GetHandle(value);
}

// public static string GetValue(int handle) :997
void SelectorRegistry__GetValue_fn(int* handle, uString** __retval)
{
    *__retval = SelectorRegistry::GetValue(*handle);
}

int SelectorRegistry::_counter_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_handleToString_;
uSStrong<uObject*> SelectorRegistry::_mutex_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_stringToHandle_;

// internal static int GetHandle(string value) [static] :982
int SelectorRegistry::GetHandle(uString* value)
{
    SelectorRegistry_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        int handle;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SelectorRegistry::_stringToHandle()), value, &handle, &ret1), ret1))
        {
            handle = SelectorRegistry::_counter()++;
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_stringToHandle()), value, uCRef<int>(handle));
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), value);
        }

        return handle;
    }
}

// public static string GetValue(int handle) [static] :997
uString* SelectorRegistry::GetValue(int handle)
{
    SelectorRegistry_typeof()->Init();
    uString* ret2;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex());

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex());
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(SelectorRegistry::_handleToString()), uCRef<int>(handle), &ret2), ret2);
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public struct Size :1105
// {
static void Size_build(uType* type)
{
    ::STRINGS[2] = uString::Const(" (unspecified unit)");
    ::STRINGS[3] = uString::Const("pt");
    ::STRINGS[4] = uString::Const("px");
    ::STRINGS[5] = uString::Const("%");
    ::STRINGS[6] = uString::Const("(auto)");
    ::STRINGS[7] = uString::Const(" (");
    ::STRINGS[8] = uString::Const(")");
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[17/*float*/], offsetof(::g::Uno::UX::Size, Value), 0,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::Size, Unit), 0);
}

uStructType* Size_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size", options);
    type->fp_build_ = Size_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size__ToString_fn;
    return type;
}

// public Size(float value, Uno.UX.Unit unit) :1110
void Size__ctor__fn(Size* __this, float* value, int* unit)
{
    __this->ctor_(*value, *unit);
}

// public static Uno.UX.Size get_Auto() :1185
void Size__get_Auto_fn(Size* __retval)
{
    *__retval = Size__Auto();
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) :1131
void Size__Combine_fn(int* a, int* b, int* __retval)
{
    *__retval = Size::Combine(*a, *b);
}

// public Uno.UX.Unit DetermineUnit() :1139
void Size__DetermineUnit_fn(Size* __this, int* __retval)
{
    *__retval = __this->DetermineUnit();
}

// public override sealed bool Equals(object obj) :1217
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Size s = uUnbox<Size>(__type, obj);

        if (s.Unit != __this->Unit)
            return *__retval = false, void();

        if (s.Value != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else if (uIs(obj, ::TYPES[17/*float*/]))
    {
        if ((__this->Unit != 2) && (__this->Unit != 1))
            return *__retval = false, void();

        float f = uUnbox<float>(::TYPES[17/*float*/], obj);

        if (f != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :1236
void Size__GetHashCode_fn(Size* __this, uType* __type, int* __retval)
{
    float ind7;
    return *__retval = ::g::Uno::Float::GetHashCode((ind7 = __this->Value, ind7), ::TYPES[17/*float*/]), void();
}

// public bool get_IsAuto() :1187
void Size__get_IsAuto_fn(Size* __this, bool* __retval)
{
    *__retval = __this->IsAuto();
}

// public Size New(float value, Uno.UX.Unit unit) :1110
void Size__New1_fn(float* value, int* unit, Size* __retval)
{
    *__retval = Size__New1(*value, *unit);
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) :1145
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Addition(*a, *b);
}

// public static explicit operator float(Uno.UX.Size s) :1126
void Size__op_Explicit_fn(Size* s, float* __retval)
{
    *__retval = Size__op_Explicit(*s);
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) :1116
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit(*unspecifiedUnits);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) :1121
void Size__op_Implicit1_fn(int* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit1(*unspecifiedUnits);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) :1180
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size a, float b) :1155
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) :1150
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Subtraction(*a, *b);
}

// public static Uno.UX.Size Percent(float value) :1199
void Size__Percent_fn(float* value, Size* __retval)
{
    *__retval = Size__Percent(*value);
}

// public static Uno.UX.Size Pixels(float value) :1194
void Size__Pixels_fn(float* value, Size* __retval)
{
    *__retval = Size__Pixels(*value);
}

// public static Uno.UX.Size Points(float value) :1189
void Size__Points_fn(float* value, Size* __retval)
{
    *__retval = Size__Points(*value);
}

// public override sealed string ToString() :1204
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval)
{
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    int ind6;

    switch (__this->Unit)
    {
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind1 = __this->Value, ind1), ::TYPES[17/*float*/]), ::STRINGS[2/*" (unspecifi...*/]), void();
        case 2:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind2 = __this->Value, ind2), ::TYPES[17/*float*/]), ::STRINGS[3/*"pt"*/]), void();
        case 3:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind3 = __this->Value, ind3), ::TYPES[17/*float*/]), ::STRINGS[4/*"px"*/]), void();
        case 4:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind4 = __this->Value, ind4), ::TYPES[17/*float*/]), ::STRINGS[5/*"%"*/]), void();
        case 0:
            return *__retval = ::STRINGS[6/*"(auto)"*/], void();
        default:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind5 = __this->Value, ind5), ::TYPES[17/*float*/]), ::STRINGS[7/*" ("*/]), ::g::Uno::Int::ToString((ind6 = __this->Unit, ind6), ::TYPES[18/*int*/])), ::STRINGS[8/*")"*/]), void();
    }
}

// public Size(float value, Uno.UX.Unit unit) [instance] :1110
void Size::ctor_(float value, int unit)
{
    Value = value;
    Unit = unit;
}

// public Uno.UX.Unit DetermineUnit() [instance] :1139
int Size::DetermineUnit()
{
    if (Unit == 1)
        return 2;
    else
        return Unit;
}

// public bool get_IsAuto() [instance] :1187
bool Size::IsAuto()
{
    return Unit == 0;
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) [static] :1131
int Size::Combine(int a, int b)
{
    if (a == b)
        return a;

    if (a == 1)
        return b;

    if (b == 1)
        return a;

    return 1;
}

// public Size New(float value, Uno.UX.Unit unit) [static] :1110
Size Size__New1(float value, int unit)
{
    Size obj8;
    obj8.ctor_(value, unit);
    return obj8;
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) [static] :1145
Size Size__op_Addition(Size a, Size b)
{
    return Size__New1(a.Value + b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static explicit operator float(Uno.UX.Size s) [static] :1126
float Size__op_Explicit(Size s)
{
    return s.Value;
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) [static] :1116
Size Size__op_Implicit(float unspecifiedUnits)
{
    return Size__New1(unspecifiedUnits, 1);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) [static] :1121
Size Size__op_Implicit1(int unspecifiedUnits)
{
    return Size__New1((float)unspecifiedUnits, 1);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) [static] :1180
bool Size__op_Inequality(Size a, Size b)
{
    return (a.Value != b.Value) || (a.Unit != b.Unit);
}

// public static operator *(Uno.UX.Size a, float b) [static] :1155
Size Size__op_Multiply(Size a, float b)
{
    return Size__New1(a.Value * b, a.Unit);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) [static] :1150
Size Size__op_Subtraction(Size a, Size b)
{
    return Size__New1(a.Value - b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static Uno.UX.Size Percent(float value) [static] :1199
Size Size__Percent(float value)
{
    return Size__New1(value, 4);
}

// public static Uno.UX.Size Pixels(float value) [static] :1194
Size Size__Pixels(float value)
{
    return Size__New1(value, 3);
}

// public static Uno.UX.Size Points(float value) [static] :1189
Size Size__Points(float value)
{
    return Size__New1(value, 2);
}

// public static Uno.UX.Size get_Auto() [static] :1185
Size Size__Auto()
{
    return Size__New1(0.0f, 0);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public struct Size2 :1254
// {
static void Size2_build(uType* type)
{
    ::STRINGS[9] = uString::Const(", ");
    ::TYPES[19] = ::g::Uno::UX::Size_typeof();
    type->SetFields(0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(::g::Uno::UX::Size2, X), 0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(::g::Uno::UX::Size2, Y), 0);
}

uStructType* Size2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Size2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size2", options);
    type->fp_build_ = Size2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Size2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size2__ToString_fn;
    return type;
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) :1259
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y)
{
    __this->ctor_(*x, *y);
}

// public static Uno.UX.Size2 get_Auto() :1324
void Size2__get_Auto_fn(Size2* __retval)
{
    *__retval = Size2__Auto();
}

// public override sealed bool Equals(object obj) :1347
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval)
{
    if (uIs(obj, __type))
    {
        Size2 s = uUnbox<Size2>(__type, obj);

        if (::g::Uno::UX::Size__op_Inequality(s.X, __this->X))
            return *__retval = false, void();

        if (::g::Uno::UX::Size__op_Inequality(s.Y, __this->Y))
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :1359
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int* __retval)
{
    ::g::Uno::UX::Size ind3;
    ::g::Uno::UX::Size ind4;
    return *__retval = (ind3 = __this->X, (&ind3))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]) ^ (ind4 = __this->Y, (&ind4))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]), void();
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) :1259
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval)
{
    *__retval = Size2__New1(*x, *y);
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) :1282
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Addition(*a, *b);
}

// public static explicit operator float2(Uno.UX.Size2 v) :1275
void Size2__op_Explicit_fn(Size2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Size2__op_Explicit(*v);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) :1265
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval)
{
    *__retval = Size2__op_Implicit1(*unspecifiedUnitsVector);
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) :1317
void Size2__op_Inequality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size2 a, float b) :1292
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply(*a, *b);
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) :1287
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :1342
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval)
{
    ::g::Uno::UX::Size ind1;
    ::g::Uno::UX::Size ind2;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind1 = __this->X, (&ind1))->ToString(::TYPES[19/*Uno.UX.Size*/]), ::STRINGS[9/*", "*/]), (ind2 = __this->Y, (&ind2))->ToString(::TYPES[19/*Uno.UX.Size*/])), void();
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) [instance] :1259
void Size2::ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    X = x;
    Y = y;
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) [static] :1259
Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    Size2 obj5;
    obj5.ctor_(x, y);
    return obj5;
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :1282
Size2 Size2__op_Addition(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Addition(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static explicit operator float2(Uno.UX.Size2 v) [static] :1275
::g::Uno::Float2 Size2__op_Explicit(Size2 v)
{
    ::g::Uno::UX::Size x = v.X;
    ::g::Uno::UX::Size y = v.Y;
    return ::g::Uno::Float2__New2(x.Value, y.Value);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) [static] :1265
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector)
{
    return Size2__New1(::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.X), ::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.Y));
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :1317
bool Size2__op_Inequality(Size2 a, Size2 b)
{
    return ::g::Uno::UX::Size__op_Inequality(a.X, b.X) || ::g::Uno::UX::Size__op_Inequality(a.Y, b.Y);
}

// public static operator *(Uno.UX.Size2 a, float b) [static] :1292
Size2 Size2__op_Multiply(Size2 a, float b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Multiply(a.X, b), ::g::Uno::UX::Size__op_Multiply(a.Y, b));
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :1287
Size2 Size2__op_Subtraction(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Subtraction(a.X, b.X), ::g::Uno::UX::Size__op_Subtraction(a.Y, b.Y));
}

// public static Uno.UX.Size2 get_Auto() [static] :1324
Size2 Size2__Auto()
{
    return Size2__New1(::g::Uno::UX::Size__Auto(), ::g::Uno::UX::Size__Auto());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class Size2Value :1833
// {
static void Size2Value_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::Size2Value, _uy), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::Size2Value, _y), 0);
}

::g::Uno::UX::Value_type* Size2Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::SizeValue_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Size2Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Size2Value", options);
    type->fp_build_ = Size2Value_build;
    type->fp_get_Length = (void(*)(::g::Uno::UX::Value*, int*))Size2Value__get_Length_fn;
    type->fp_get_W = (void(*)(::g::Uno::UX::Value*, double*))Size2Value__get_W_fn;
    type->fp_get_WUnit = (void(*)(::g::Uno::UX::Value*, int*))Size2Value__get_WUnit_fn;
    type->fp_get_Y = (void(*)(::g::Uno::UX::Value*, double*))Size2Value__get_Y_fn;
    type->fp_get_YUnit = (void(*)(::g::Uno::UX::Value*, int*))Size2Value__get_YUnit_fn;
    type->fp_get_Z = (void(*)(::g::Uno::UX::Value*, double*))Size2Value__get_Z_fn;
    type->fp_get_ZUnit = (void(*)(::g::Uno::UX::Value*, int*))Size2Value__get_ZUnit_fn;
    return type;
}

// public Size2Value(double x, double y, Uno.UX.Unit ux, Uno.UX.Unit uy) :1837
void Size2Value__ctor_4_fn(Size2Value* __this, double* x, double* y, int* ux, int* uy)
{
    __this->ctor_4(*x, *y, *ux, *uy);
}

// public override sealed int get_Length() :1838
void Size2Value__get_Length_fn(Size2Value* __this, int* __retval)
{
    return *__retval = 2, void();
}

// public Size2Value New(double x, double y, Uno.UX.Unit ux, Uno.UX.Unit uy) :1837
void Size2Value__New4_fn(double* x, double* y, int* ux, int* uy, Size2Value** __retval)
{
    *__retval = Size2Value::New4(*x, *y, *ux, *uy);
}

// public override sealed double get_W() :1841
void Size2Value__get_W_fn(Size2Value* __this, double* __retval)
{
    return *__retval = __this->Y(), void();
}

// public override sealed Uno.UX.Unit get_WUnit() :1844
void Size2Value__get_WUnit_fn(Size2Value* __this, int* __retval)
{
    return *__retval = __this->YUnit(), void();
}

// public override sealed double get_Y() :1839
void Size2Value__get_Y_fn(Size2Value* __this, double* __retval)
{
    return *__retval = __this->_y, void();
}

// public override sealed Uno.UX.Unit get_YUnit() :1842
void Size2Value__get_YUnit_fn(Size2Value* __this, int* __retval)
{
    return *__retval = __this->_uy, void();
}

// public override sealed double get_Z() :1840
void Size2Value__get_Z_fn(Size2Value* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public override sealed Uno.UX.Unit get_ZUnit() :1843
void Size2Value__get_ZUnit_fn(Size2Value* __this, int* __retval)
{
    return *__retval = __this->XUnit(), void();
}

// public Size2Value(double x, double y, Uno.UX.Unit ux, Uno.UX.Unit uy) [instance] :1837
void Size2Value::ctor_4(double x, double y, int ux, int uy)
{
    ctor_3(x, ux);
    _y = y;
    _uy = uy;
}

// public Size2Value New(double x, double y, Uno.UX.Unit ux, Uno.UX.Unit uy) [static] :1837
Size2Value* Size2Value::New4(double x, double y, int ux, int uy)
{
    Size2Value* obj1 = (Size2Value*)uNew(Size2Value_typeof());
    obj1->ctor_4(x, y, ux, uy);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal class SizeValue :1822
// {
static void SizeValue_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::UX::Unit_typeof(), offsetof(::g::Uno::UX::SizeValue, _ux), 0);
}

::g::Uno::UX::Value_type* SizeValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::NumberValue_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SizeValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.SizeValue", options);
    type->fp_build_ = SizeValue_build;
    type->fp_get_HasUnits = (void(*)(::g::Uno::UX::Value*, bool*))SizeValue__get_HasUnits_fn;
    type->fp_get_WUnit = (void(*)(::g::Uno::UX::Value*, int*))SizeValue__get_WUnit_fn;
    type->fp_get_XUnit = (void(*)(::g::Uno::UX::Value*, int*))SizeValue__get_XUnit_fn;
    type->fp_get_YUnit = (void(*)(::g::Uno::UX::Value*, int*))SizeValue__get_YUnit_fn;
    type->fp_get_ZUnit = (void(*)(::g::Uno::UX::Value*, int*))SizeValue__get_ZUnit_fn;
    return type;
}

// public SizeValue(double x, Uno.UX.Unit ux) :1825
void SizeValue__ctor_3_fn(SizeValue* __this, double* x, int* ux)
{
    __this->ctor_3(*x, *ux);
}

// public override sealed bool get_HasUnits() :1826
void SizeValue__get_HasUnits_fn(SizeValue* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public SizeValue New(double x, Uno.UX.Unit ux) :1825
void SizeValue__New3_fn(double* x, int* ux, SizeValue** __retval)
{
    *__retval = SizeValue::New3(*x, *ux);
}

// public override Uno.UX.Unit get_WUnit() :1830
void SizeValue__get_WUnit_fn(SizeValue* __this, int* __retval)
{
    return *__retval = __this->XUnit(), void();
}

// public override sealed Uno.UX.Unit get_XUnit() :1827
void SizeValue__get_XUnit_fn(SizeValue* __this, int* __retval)
{
    return *__retval = __this->_ux, void();
}

// public override Uno.UX.Unit get_YUnit() :1828
void SizeValue__get_YUnit_fn(SizeValue* __this, int* __retval)
{
    return *__retval = __this->XUnit(), void();
}

// public override Uno.UX.Unit get_ZUnit() :1829
void SizeValue__get_ZUnit_fn(SizeValue* __this, int* __retval)
{
    return *__retval = __this->XUnit(), void();
}

// public SizeValue(double x, Uno.UX.Unit ux) [instance] :1825
void SizeValue::ctor_3(double x, int ux)
{
    ctor_2(x);
    _ux = ux;
}

// public SizeValue New(double x, Uno.UX.Unit ux) [static] :1825
SizeValue* SizeValue::New3(double x, int ux)
{
    SizeValue* obj1 = (SizeValue*)uNew(SizeValue_typeof());
    obj1->ctor_3(x, ux);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal static class StreamExtensions :100
// {
static void StreamExtensions_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[20] = ::g::Uno::IDisposable_typeof();
    ::TYPES[21] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    type->fp_build_ = StreamExtensions_build;
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :102
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :120
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :102
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    int bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[20/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uArray* buffer;

        do
        {
            buffer = uPtr(reader)->ReadBytes(4096);
            uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
        }
        while (uPtr(buffer)->Length() == 4096);

        return StreamExtensions::ToArray(ms);
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[10/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :120
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[21/*byte[]*/], (int)memoryStream->Length());

    for (int i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class StringValue :1689
// {
static void StringValue_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::StringValue, _value), 0);
}

::g::Uno::UX::Value_type* StringValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StringValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.StringValue", options);
    type->fp_build_ = StringValue_build;
    type->fp_ToBool = (void(*)(::g::Uno::UX::Value*, bool*))StringValue__ToBool_fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))StringValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))StringValue__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringValue__ToString_fn;
    return type;
}

// public StringValue(string value) :1692
void StringValue__ctor_1_fn(StringValue* __this, uString* value)
{
    __this->ctor_1(value);
}

// public StringValue New(string value) :1692
void StringValue__New1_fn(uString* value, StringValue** __retval)
{
    *__retval = StringValue::New1(value);
}

// public override sealed bool ToBool() :1694
void StringValue__ToBool_fn(StringValue* __this, bool* __retval)
{
    return *__retval = ::g::Uno::Bool::Parse(__this->_value), void();
}

// public override sealed double ToDouble() :1693
void StringValue__ToDouble_fn(StringValue* __this, double* __retval)
{
    return *__retval = ::g::Uno::Double::Parse(__this->_value), void();
}

// public override sealed object ToObject() :1695
void StringValue__ToObject_fn(StringValue* __this, uObject** __retval)
{
    return *__retval = __this->_value, void();
}

// public override sealed string ToString() :1697
void StringValue__ToString_fn(StringValue* __this, uString** __retval)
{
    return *__retval = __this->_value, void();
}

// public StringValue(string value) [instance] :1692
void StringValue::ctor_1(uString* value)
{
    ctor_();
    _value = value;
}

// public StringValue New(string value) [static] :1692
StringValue* StringValue::New1(uString* value)
{
    StringValue* obj1 = (StringValue*)uNew(StringValue_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract class Template :1888
// {
static void Template_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::UX::Template, _isDefault), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::UX::Template, _key), 0);
}

Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template", options);
    type->fp_build_ = Template_build;
    return type;
}

// protected Template(string key, bool isDefault) :1898
void Template__ctor__fn(Template* __this, uString* key, bool* isDefault)
{
    __this->ctor_(key, *isDefault);
}

// public bool get_IsDefault() :1896
void Template__get_IsDefault_fn(Template* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public string get_Key() :1892
void Template__get_Key_fn(Template* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// protected Template(string key, bool isDefault) [instance] :1898
void Template::ctor_(uString* key, bool isDefault)
{
    _key = key;
    _isDefault = isDefault;
}

// public bool get_IsDefault() [instance] :1896
bool Template::IsDefault()
{
    return _isDefault;
}

// public string get_Key() [instance] :1892
uString* Template::Key()
{
    return _key;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public enum Unit :1082
uEnumType* Unit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.UX.Unit", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Auto", 0LL,
        "Unspecified", 1LL,
        "Points", 2LL,
        "Pixels", 3LL,
        "Percent", 4LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public abstract class Value :1394
// {
static void Value_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::UX::IValueConvertible_typeof();
    ::TYPES[14] = ::g::Uno::String_typeof();
    ::TYPES[0] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    ::TYPES[19] = ::g::Uno::UX::Size_typeof();
    ::TYPES[24] = ::g::Uno::UX::Size2_typeof();
    ::TYPES[25] = ::g::Uno::Float2_typeof();
    ::TYPES[26] = ::g::Uno::Float3_typeof();
    ::TYPES[27] = ::g::Uno::Float4_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
}

Value_type* Value_typeof()
{
    static uSStrong<Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Value);
    options.TypeSize = sizeof(Value_type);
    type = (Value_type*)uClassType::New("Uno.UX.Value", options);
    type->fp_build_ = Value_build;
    type->fp_get_HasUnits = Value__get_HasUnits_fn;
    type->fp_get_Length = Value__get_Length_fn;
    type->fp_ToBool = Value__ToBool_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Value__ToString_fn;
    type->fp_get_W = Value__get_W_fn;
    type->fp_get_WUnit = Value__get_WUnit_fn;
    type->fp_get_X = Value__get_X_fn;
    type->fp_get_XUnit = Value__get_XUnit_fn;
    type->fp_get_Y = Value__get_Y_fn;
    type->fp_get_YUnit = Value__get_YUnit_fn;
    type->fp_get_Z = Value__get_Z_fn;
    type->fp_get_ZUnit = Value__get_ZUnit_fn;
    return type;
}

// protected generated Value() :1394
void Value__ctor__fn(Value* __this)
{
    __this->ctor_();
}

// public static object Cast(Uno.Type targetType, object value) :1412
void Value__Cast_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = Value::Cast(targetType, value);
}

// public virtual bool get_HasUnits() :1524
void Value__get_HasUnits_fn(Value* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public virtual int get_Length() :1519
void Value__get_Length_fn(Value* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public static implicit operator Uno.UX.Value(bool f) :1611
void Value__op_Implicit_fn(bool* f, Value** __retval)
{
    *__retval = Value::op_Implicit(*f);
}

// public static implicit operator Uno.UX.Value(double f) :1610
void Value__op_Implicit1_fn(double* f, Value** __retval)
{
    *__retval = Value::op_Implicit1(*f);
}

// public static implicit operator Uno.UX.Value(float f) :1613
void Value__op_Implicit2_fn(float* f, Value** __retval)
{
    *__retval = Value::op_Implicit2(*f);
}

// public static implicit operator Uno.UX.Value(float2 f) :1622
void Value__op_Implicit3_fn(::g::Uno::Float2* f, Value** __retval)
{
    *__retval = Value::op_Implicit3(*f);
}

// public static implicit operator Uno.UX.Value(float3 f) :1623
void Value__op_Implicit4_fn(::g::Uno::Float3* f, Value** __retval)
{
    *__retval = Value::op_Implicit4(*f);
}

// public static implicit operator Uno.UX.Value(float4 f) :1624
void Value__op_Implicit5_fn(::g::Uno::Float4* f, Value** __retval)
{
    *__retval = Value::op_Implicit5(*f);
}

// public static implicit operator Uno.UX.Value(int f) :1612
void Value__op_Implicit6_fn(int* f, Value** __retval)
{
    *__retval = Value::op_Implicit6(*f);
}

// public static implicit operator Uno.UX.Value(string f) :1614
void Value__op_Implicit7_fn(uString* f, Value** __retval)
{
    *__retval = Value::op_Implicit7(f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.IValueConvertible v) :1609
void Value__op_Implicit8_fn(uObject* v, Value** __retval)
{
    *__retval = Value::op_Implicit8(v);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size f) :1615
void Value__op_Implicit9_fn(::g::Uno::UX::Size* f, Value** __retval)
{
    *__retval = Value::op_Implicit9(*f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size2 f) :1616
void Value__op_Implicit10_fn(::g::Uno::UX::Size2* f, Value** __retval)
{
    *__retval = Value::op_Implicit10(*f);
}

// public static object ToAbstract(object value) :1626
void Value__ToAbstract_fn(uObject* value, uObject** __retval)
{
    *__retval = Value::ToAbstract(value);
}

// public virtual bool ToBool() :1426
void Value__ToBool_fn(Value* __this, bool* __retval)
{
    return *__retval = __this->ToDouble() != 0.0, void();
}

// public float ToFloat() :1436
void Value__ToFloat_fn(Value* __this, float* __retval)
{
    *__retval = __this->ToFloat();
}

// public float2 ToFloat2() :1451
void Value__ToFloat2_fn(Value* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ToFloat2();
}

// public float3 ToFloat3() :1461
void Value__ToFloat3_fn(Value* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->ToFloat3();
}

// public float4 ToFloat4() :1466
void Value__ToFloat4_fn(Value* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ToFloat4();
}

// public int ToInt() :1441
void Value__ToInt_fn(Value* __this, int* __retval)
{
    *__retval = __this->ToInt();
}

// public Uno.UX.Size ToSize() :1446
void Value__ToSize_fn(Value* __this, ::g::Uno::UX::Size* __retval)
{
    *__retval = __this->ToSize();
}

// public Uno.UX.Size2 ToSize2() :1456
void Value__ToSize2_fn(Value* __this, ::g::Uno::UX::Size2* __retval)
{
    *__retval = __this->ToSize2();
}

// private static object ToSpecific(Uno.Type t, object obj) :1656
void Value__ToSpecific_fn(uType* t, uObject* obj, uObject** __retval)
{
    *__retval = Value::ToSpecific(t, obj);
}

// public override string ToString() :1431
void Value__ToString_fn(Value* __this, uString** __retval)
{
    return *__retval = ::g::Uno::Double::ToString(__this->ToDouble(), ::TYPES[23/*double*/]), void();
}

// public virtual double get_W() :1488
void Value__get_W_fn(Value* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public virtual Uno.UX.Unit get_WUnit() :1514
void Value__get_WUnit_fn(Value* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public virtual double get_X() :1473
void Value__get_X_fn(Value* __this, double* __retval)
{
    return *__retval = __this->ToDouble(), void();
}

// public virtual Uno.UX.Unit get_XUnit() :1499
void Value__get_XUnit_fn(Value* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public virtual double get_Y() :1478
void Value__get_Y_fn(Value* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public virtual Uno.UX.Unit get_YUnit() :1504
void Value__get_YUnit_fn(Value* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public virtual double get_Z() :1483
void Value__get_Z_fn(Value* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public virtual Uno.UX.Unit get_ZUnit() :1509
void Value__get_ZUnit_fn(Value* __this, int* __retval)
{
    return *__retval = 1, void();
}

// protected generated Value() [instance] :1394
void Value::ctor_()
{
}

// public float ToFloat() [instance] :1436
float Value::ToFloat()
{
    return (float)ToDouble();
}

// public float2 ToFloat2() [instance] :1451
::g::Uno::Float2 Value::ToFloat2()
{
    return ::g::Uno::Float2__New2((float)X(), (float)Y());
}

// public float3 ToFloat3() [instance] :1461
::g::Uno::Float3 Value::ToFloat3()
{
    return ::g::Uno::Float3__New2((float)X(), (float)Y(), (float)Z());
}

// public float4 ToFloat4() [instance] :1466
::g::Uno::Float4 Value::ToFloat4()
{
    return ::g::Uno::Float4__New2((float)X(), (float)Y(), (float)Z(), (float)W());
}

// public int ToInt() [instance] :1441
int Value::ToInt()
{
    return (int)ToDouble();
}

// public Uno.UX.Size ToSize() [instance] :1446
::g::Uno::UX::Size Value::ToSize()
{
    return ::g::Uno::UX::Size__New1((float)X(), XUnit());
}

// public Uno.UX.Size2 ToSize2() [instance] :1456
::g::Uno::UX::Size2 Value::ToSize2()
{
    return ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1((float)X(), XUnit()), ::g::Uno::UX::Size__New1((float)Y(), YUnit()));
}

// public static object Cast(Uno.Type targetType, object value) [static] :1412
uObject* Value::Cast(uType* targetType, uObject* value)
{
    uObject* abs = Value::ToAbstract(value);
    return Value::ToSpecific(targetType, abs);
}

// public static implicit operator Uno.UX.Value(bool f) [static] :1611
Value* Value::op_Implicit(bool f)
{
    return ::g::Uno::UX::BoolValue::New1(f);
}

// public static implicit operator Uno.UX.Value(double f) [static] :1610
Value* Value::op_Implicit1(double f)
{
    return ::g::Uno::UX::NumberValue::New2(f);
}

// public static implicit operator Uno.UX.Value(float f) [static] :1613
Value* Value::op_Implicit2(float f)
{
    return ::g::Uno::UX::NumberValue::New2((double)f);
}

// public static implicit operator Uno.UX.Value(float2 f) [static] :1622
Value* Value::op_Implicit3(::g::Uno::Float2 f)
{
    return ::g::Uno::UX::Vector2Value::New3((double)f.X, (double)f.Y);
}

// public static implicit operator Uno.UX.Value(float3 f) [static] :1623
Value* Value::op_Implicit4(::g::Uno::Float3 f)
{
    return ::g::Uno::UX::Vector3Value::New4((double)f.X, (double)f.Y, (double)f.Z);
}

// public static implicit operator Uno.UX.Value(float4 f) [static] :1624
Value* Value::op_Implicit5(::g::Uno::Float4 f)
{
    return ::g::Uno::UX::Vector4Value::New5((double)f.X, (double)f.Y, (double)f.Z, (double)f.W);
}

// public static implicit operator Uno.UX.Value(int f) [static] :1612
Value* Value::op_Implicit6(int f)
{
    return ::g::Uno::UX::NumberValue::New2((double)f);
}

// public static implicit operator Uno.UX.Value(string f) [static] :1614
Value* Value::op_Implicit7(uString* f)
{
    return ::g::Uno::UX::StringValue::New1(f);
}

// public static implicit operator Uno.UX.Value(Uno.UX.IValueConvertible v) [static] :1609
Value* Value::op_Implicit8(uObject* v)
{
    return ::g::Uno::UX::IValueConvertible::ToValue(uInterface(uPtr(v), ::TYPES[22/*Uno.UX.IValueConvertible*/]));
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size f) [static] :1615
Value* Value::op_Implicit9(::g::Uno::UX::Size f)
{
    return ::g::Uno::UX::SizeValue::New3((double)f.Value, f.Unit);
}

// public static implicit operator Uno.UX.Value(Uno.UX.Size2 f) [static] :1616
Value* Value::op_Implicit10(::g::Uno::UX::Size2 f)
{
    ::g::Uno::UX::Size x = f.X;
    ::g::Uno::UX::Size y = f.Y;
    return ::g::Uno::UX::Size2Value::New4((double)x.Value, (double)y.Value, x.Unit, y.Unit);
}

// public static object ToAbstract(object value) [static] :1626
uObject* Value::ToAbstract(uObject* value)
{
    if (value == NULL)
        return NULL;

    uType* t = ::g::Uno::Object::GetType(uPtr(value));

    if (::g::Uno::Type::IsEnum(uPtr(t)))
        return value;

    if (uIs(value, ::TYPES[14/*string*/]))
        return Value::op_Implicit7(uCast<uString*>(value, ::TYPES[14/*string*/]));

    if (uIs(value, ::TYPES[22/*Uno.UX.IValueConvertible*/]))
        return Value::op_Implicit8((uObject*)value);

    if (uIs(value, Value_typeof()))
        return value;

    if (uIs(value, ::TYPES[0/*bool*/]))
        return Value::op_Implicit(uUnbox<bool>(::TYPES[0/*bool*/], value));

    if (uIs(value, ::TYPES[17/*float*/]))
        return Value::op_Implicit2(uUnbox<float>(::TYPES[17/*float*/], value));

    if (uIs(value, ::TYPES[23/*double*/]))
        return Value::op_Implicit1(uUnbox<double>(::TYPES[23/*double*/], value));

    if (uIs(value, ::TYPES[18/*int*/]))
        return Value::op_Implicit6(uUnbox<int>(::TYPES[18/*int*/], value));

    if (uIs(value, ::TYPES[19/*Uno.UX.Size*/]))
        return Value::op_Implicit9(uUnbox< ::g::Uno::UX::Size>(::TYPES[19/*Uno.UX.Size*/], value));

    if (uIs(value, ::TYPES[24/*Uno.UX.Size2*/]))
        return Value::op_Implicit10(uUnbox< ::g::Uno::UX::Size2>(::TYPES[24/*Uno.UX.Size2*/], value));

    if (uIs(value, ::TYPES[25/*float2*/]))
        return Value::op_Implicit3(uUnbox< ::g::Uno::Float2>(::TYPES[25/*float2*/], value));

    if (uIs(value, ::TYPES[26/*float3*/]))
        return Value::op_Implicit4(uUnbox< ::g::Uno::Float3>(::TYPES[26/*float3*/], value));

    if (uIs(value, ::TYPES[27/*float4*/]))
        return Value::op_Implicit5(uUnbox< ::g::Uno::Float4>(::TYPES[27/*float4*/], value));

    return value;
}

// private static object ToSpecific(Uno.Type t, object obj) [static] :1656
uObject* Value::ToSpecific(uType* t, uObject* obj)
{
    Value* v = uAs<Value*>(obj, Value_typeof());

    if (v != NULL)
    {
        if (::g::Uno::Type::op_Equality(t, ::TYPES[14/*string*/]))
            return uPtr(v)->ToString();

        if (::g::Uno::Type::op_Equality(t, uObject_typeof()))
            return uPtr(v)->ToObject();

        if (::g::Uno::Type::op_Equality(t, Value_typeof()))
            return v;

        if (::g::Uno::Type::op_Equality(t, ::TYPES[0/*bool*/]))
            return uBox(::TYPES[0/*bool*/], uPtr(v)->ToBool());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[17/*float*/]))
            return uBox(::TYPES[17/*float*/], uPtr(v)->ToFloat());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[23/*double*/]))
            return uBox(::TYPES[23/*double*/], uPtr(v)->ToDouble());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[18/*int*/]))
            return uBox<int>(::TYPES[18/*int*/], uPtr(v)->ToInt());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[19/*Uno.UX.Size*/]))
            return uBox(::TYPES[19/*Uno.UX.Size*/], uPtr(v)->ToSize());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[24/*Uno.UX.Size2*/]))
            return uBox(::TYPES[24/*Uno.UX.Size2*/], uPtr(v)->ToSize2());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[25/*float2*/]))
            return uBox(::TYPES[25/*float2*/], uPtr(v)->ToFloat2());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[26/*float3*/]))
            return uBox(::TYPES[26/*float3*/], uPtr(v)->ToFloat3());

        if (::g::Uno::Type::op_Equality(t, ::TYPES[27/*float4*/]))
            return uBox(::TYPES[27/*float4*/], uPtr(v)->ToFloat4());
    }

    return obj;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public class ValueChangedArgs<T> :639
// {
static void ValueChangedArgs_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->fp_build_ = ValueChangedArgs_build;
    return type;
}

// public ValueChangedArgs(T value) :643
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value)
{
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
}

// public ValueChangedArgs New(T value) :643
void ValueChangedArgs__New2_fn(uType* __type, void* value, ValueChangedArgs** __retval)
{
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated T get_Value() :641
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :641
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    __this->_Value() = value;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :649
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0), NULL));
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal class Vector2Value :1795
// {
static void Vector2Value_build(uType* type)
{
    type->SetFields(1,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::Vector2Value, _y), 0);
}

::g::Uno::UX::Value_type* Vector2Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::NumberValue_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Vector2Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Vector2Value", options);
    type->fp_build_ = Vector2Value_build;
    type->fp_get_Length = (void(*)(::g::Uno::UX::Value*, int*))Vector2Value__get_Length_fn;
    type->fp_get_W = (void(*)(::g::Uno::UX::Value*, double*))Vector2Value__get_W_fn;
    type->fp_get_Y = (void(*)(::g::Uno::UX::Value*, double*))Vector2Value__get_Y_fn;
    type->fp_get_Z = (void(*)(::g::Uno::UX::Value*, double*))Vector2Value__get_Z_fn;
    return type;
}

// public Vector2Value(double x, double y) :1798
void Vector2Value__ctor_3_fn(Vector2Value* __this, double* x, double* y)
{
    __this->ctor_3(*x, *y);
}

// public override int get_Length() :1799
void Vector2Value__get_Length_fn(Vector2Value* __this, int* __retval)
{
    return *__retval = 2, void();
}

// public Vector2Value New(double x, double y) :1798
void Vector2Value__New3_fn(double* x, double* y, Vector2Value** __retval)
{
    *__retval = Vector2Value::New3(*x, *y);
}

// public override double get_W() :1802
void Vector2Value__get_W_fn(Vector2Value* __this, double* __retval)
{
    return *__retval = __this->Y(), void();
}

// public override sealed double get_Y() :1800
void Vector2Value__get_Y_fn(Vector2Value* __this, double* __retval)
{
    return *__retval = __this->_y, void();
}

// public override double get_Z() :1801
void Vector2Value__get_Z_fn(Vector2Value* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public Vector2Value(double x, double y) [instance] :1798
void Vector2Value::ctor_3(double x, double y)
{
    ctor_2(x);
    _y = y;
}

// public Vector2Value New(double x, double y) [static] :1798
Vector2Value* Vector2Value::New3(double x, double y)
{
    Vector2Value* obj1 = (Vector2Value*)uNew(Vector2Value_typeof());
    obj1->ctor_3(x, y);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal class Vector3Value :1805
// {
static void Vector3Value_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::Vector3Value, _z), 0);
}

::g::Uno::UX::Value_type* Vector3Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Vector2Value_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Vector3Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Vector3Value", options);
    type->fp_build_ = Vector3Value_build;
    type->fp_get_Length = (void(*)(::g::Uno::UX::Value*, int*))Vector3Value__get_Length_fn;
    type->fp_get_W = (void(*)(::g::Uno::UX::Value*, double*))Vector3Value__get_W_fn;
    type->fp_get_Z = (void(*)(::g::Uno::UX::Value*, double*))Vector3Value__get_Z_fn;
    return type;
}

// public Vector3Value(double x, double y, double z) :1808
void Vector3Value__ctor_4_fn(Vector3Value* __this, double* x, double* y, double* z)
{
    __this->ctor_4(*x, *y, *z);
}

// public override int get_Length() :1809
void Vector3Value__get_Length_fn(Vector3Value* __this, int* __retval)
{
    return *__retval = 3, void();
}

// public Vector3Value New(double x, double y, double z) :1808
void Vector3Value__New4_fn(double* x, double* y, double* z, Vector3Value** __retval)
{
    *__retval = Vector3Value::New4(*x, *y, *z);
}

// public override double get_W() :1811
void Vector3Value__get_W_fn(Vector3Value* __this, double* __retval)
{
    return *__retval = 1.0, void();
}

// public override sealed double get_Z() :1810
void Vector3Value__get_Z_fn(Vector3Value* __this, double* __retval)
{
    return *__retval = __this->_z, void();
}

// public Vector3Value(double x, double y, double z) [instance] :1808
void Vector3Value::ctor_4(double x, double y, double z)
{
    ctor_3(x, y);
    _z = z;
}

// public Vector3Value New(double x, double y, double z) [static] :1808
Vector3Value* Vector3Value::New4(double x, double y, double z)
{
    Vector3Value* obj1 = (Vector3Value*)uNew(Vector3Value_typeof());
    obj1->ctor_4(x, y, z);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class Vector4Value :1814
// {
static void Vector4Value_build(uType* type)
{
    type->SetFields(3,
        ::g::Uno::Double_typeof(), offsetof(::g::Uno::UX::Vector4Value, _w), 0);
}

::g::Uno::UX::Value_type* Vector4Value_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Vector3Value_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Vector4Value);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.Vector4Value", options);
    type->fp_build_ = Vector4Value_build;
    type->fp_get_Length = (void(*)(::g::Uno::UX::Value*, int*))Vector4Value__get_Length_fn;
    type->fp_get_W = (void(*)(::g::Uno::UX::Value*, double*))Vector4Value__get_W_fn;
    return type;
}

// public Vector4Value(double x, double y, double z, double w) :1817
void Vector4Value__ctor_5_fn(Vector4Value* __this, double* x, double* y, double* z, double* w)
{
    __this->ctor_5(*x, *y, *z, *w);
}

// public override sealed int get_Length() :1818
void Vector4Value__get_Length_fn(Vector4Value* __this, int* __retval)
{
    return *__retval = 4, void();
}

// public Vector4Value New(double x, double y, double z, double w) :1817
void Vector4Value__New5_fn(double* x, double* y, double* z, double* w, Vector4Value** __retval)
{
    *__retval = Vector4Value::New5(*x, *y, *z, *w);
}

// public override sealed double get_W() :1819
void Vector4Value__get_W_fn(Vector4Value* __this, double* __retval)
{
    return *__retval = __this->_w, void();
}

// public Vector4Value(double x, double y, double z, double w) [instance] :1817
void Vector4Value::ctor_5(double x, double y, double z, double w)
{
    ctor_4(x, y, z);
    _w = w;
}

// public Vector4Value New(double x, double y, double z, double w) [static] :1817
Vector4Value* Vector4Value::New5(double x, double y, double z, double w)
{
    Vector4Value* obj1 = (Vector4Value*)uNew(Vector4Value_typeof());
    obj1->ctor_5(x, y, z, w);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno
// ---------------------------------------------------------------------------------------

// internal class VectorValue :1706
// {
// static VectorValue() :1706
static void VectorValue__cctor__fn(uType* __type)
{
    VectorValue::_add_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__AddOp_fn);
    VectorValue::_sub_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__SubOp_fn);
    VectorValue::_mul_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__MulOp_fn);
    VectorValue::_div_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__DivOp_fn);
    VectorValue::_min_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__MinOp_fn);
    VectorValue::_max_ = uDelegate::New(::TYPES[28/*Uno.UX.NumericOperator*/], (void*)VectorValue__MaxOp_fn);
}

static void VectorValue_build(uType* type)
{
    ::STRINGS[7] = uString::Const(" (");
    ::STRINGS[8] = uString::Const(")");
    ::STRINGS[9] = uString::Const(", ");
    ::TYPES[28] = ::g::Uno::UX::NumericOperator_typeof();
    ::TYPES[23] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_add_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_div_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_max_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_min_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_mul_, uFieldFlagsStatic,
        ::TYPES[28/*Uno.UX.NumericOperator*/], (uintptr_t)&::g::Uno::UX::VectorValue::_sub_, uFieldFlagsStatic);
}

::g::Uno::UX::Value_type* VectorValue_typeof()
{
    static uSStrong< ::g::Uno::UX::Value_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Value_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(VectorValue);
    options.TypeSize = sizeof(::g::Uno::UX::Value_type);
    type = (::g::Uno::UX::Value_type*)uClassType::New("Uno.UX.VectorValue", options);
    type->fp_build_ = VectorValue_build;
    type->fp_cctor_ = VectorValue__cctor__fn;
    type->fp_ToDouble = (void(*)(::g::Uno::UX::Value*, double*))VectorValue__ToDouble_fn;
    type->fp_ToObject = (void(*)(::g::Uno::UX::Value*, uObject**))VectorValue__ToObject_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))VectorValue__ToString_fn;
    return type;
}

// public generated VectorValue() :1706
void VectorValue__ctor_1_fn(VectorValue* __this)
{
    __this->ctor_1();
}

// private static double AddOp(double a, double b) :1716
void VectorValue__AddOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::AddOp(*a, *b);
}

// private static double DivOp(double a, double b) :1719
void VectorValue__DivOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::DivOp(*a, *b);
}

// private static double MaxOp(double a, double b) :1721
void VectorValue__MaxOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::MaxOp(*a, *b);
}

// private static double MinOp(double a, double b) :1720
void VectorValue__MinOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::MinOp(*a, *b);
}

// private static double MulOp(double a, double b) :1718
void VectorValue__MulOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::MulOp(*a, *b);
}

// private static double SubOp(double a, double b) :1717
void VectorValue__SubOp_fn(double* a, double* b, double* __retval)
{
    *__retval = VectorValue::SubOp(*a, *b);
}

// public override double ToDouble() :1746
void VectorValue__ToDouble_fn(VectorValue* __this, double* __retval)
{
    return *__retval = __this->X(), void();
}

// public override sealed object ToObject() :1745
void VectorValue__ToObject_fn(VectorValue* __this, uObject** __retval)
{
    return *__retval = __this, void();
}

// public override sealed string ToString() :1760
void VectorValue__ToString_fn(VectorValue* __this, uString** __retval)
{
    uString* s = ::g::Uno::Double::ToString(__this->X(), ::TYPES[23/*double*/]);

    if (__this->HasUnits())
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*" ("*/], ::g::Uno::Int::ToString(__this->XUnit(), ::TYPES[18/*int*/])), ::STRINGS[8/*")"*/]));

    if (__this->Length() > 1)
    {
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::STRINGS[9/*", "*/], ::g::Uno::Double::ToString(__this->Y(), ::TYPES[23/*double*/])));

        if (__this->HasUnits())
            s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*" ("*/], ::g::Uno::Int::ToString(__this->YUnit(), ::TYPES[18/*int*/])), ::STRINGS[8/*")"*/]));
    }

    if (__this->Length() > 2)
    {
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::STRINGS[9/*", "*/], ::g::Uno::Double::ToString(__this->Z(), ::TYPES[23/*double*/])));

        if (__this->HasUnits())
            s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*" ("*/], ::g::Uno::Int::ToString(__this->ZUnit(), ::TYPES[18/*int*/])), ::STRINGS[8/*")"*/]));
    }

    if (__this->Length() > 3)
    {
        s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::STRINGS[9/*", "*/], ::g::Uno::Double::ToString(__this->W(), ::TYPES[23/*double*/])));

        if (__this->HasUnits())
            s = ::g::Uno::String::op_Addition2(s, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[7/*" ("*/], ::g::Uno::Int::ToString(__this->WUnit(), ::TYPES[18/*int*/])), ::STRINGS[8/*")"*/]));
    }

    return *__retval = s, void();
}

uSStrong<uDelegate*> VectorValue::_add_;
uSStrong<uDelegate*> VectorValue::_div_;
uSStrong<uDelegate*> VectorValue::_max_;
uSStrong<uDelegate*> VectorValue::_min_;
uSStrong<uDelegate*> VectorValue::_mul_;
uSStrong<uDelegate*> VectorValue::_sub_;

// public generated VectorValue() [instance] :1706
void VectorValue::ctor_1()
{
    ctor_();
}

// private static double AddOp(double a, double b) [static] :1716
double VectorValue::AddOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return a + b;
}

// private static double DivOp(double a, double b) [static] :1719
double VectorValue::DivOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return a / b;
}

// private static double MaxOp(double a, double b) [static] :1721
double VectorValue::MaxOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return ::g::Uno::Math::Max(a, b);
}

// private static double MinOp(double a, double b) [static] :1720
double VectorValue::MinOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return ::g::Uno::Math::Min(a, b);
}

// private static double MulOp(double a, double b) [static] :1718
double VectorValue::MulOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return a * b;
}

// private static double SubOp(double a, double b) [static] :1717
double VectorValue::SubOp(double a, double b)
{
    VectorValue_typeof()->Init();
    return a - b;
}
// }

}}} // ::g::Uno::UX
