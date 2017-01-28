// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptClass;}}}
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct Int3;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Fuse{
namespace Scripting{

// public interfacemodifiers class Context :162
// {
struct Context_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Scripting::Context*);
    void(*fp_Evaluate)(::g::Fuse::Scripting::Context*, uString*, uString*, uObject**);
    void(*fp_get_GlobalObject)(::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::Object**);
};

Context_type* Context_typeof();
void Context__ctor__fn(Context* __this, uObject* worker);
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval);
void Context__CreateMirror_fn(Context* __this, uObject* obj, ::g::Fuse::Scripting::ValueMirror** __retval);
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr);
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval);
void Context__Enqueue_fn(Context* __this, ::g::Fuse::Scripting::Observable__Operation* op);
void Context__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval);
void Context__GetClass_fn(Context* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void Context__GetClassInstance_fn(Context* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Scripting::ClassInstance** __retval);
void Context__GetClassInstance1_fn(Context* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Scripting::ClassInstance** __retval);
void Context__Invoke_fn(Context* __this, uDelegate* action);
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval);
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable);
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable);
void Context__get_Observable_fn(Context* __this, ::g::Fuse::Scripting::Function** __retval);
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval);
void Context__ProcessUIMessages_fn(Context* __this);
void Context__Reflect_fn(Context* __this, uObject* obj, uObject** __retval);
void Context__RegisterClass_fn(Context* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval);
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result);
void Context__TakeMessages_fn(Context* __this, ::g::Uno::Collections::List** __retval);
void Context__ToArray_fn(Context* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval);
void Context__ToArray1_fn(Context* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval);
void Context__ToArray2_fn(Context* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval);
void Context__ToArray3_fn(Context* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval);
void Context__ToArray4_fn(Context* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval);
void Context__ToArray5_fn(Context* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval);
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval);
void Context__Unwrap_fn(Context* __this, uObject* dc, uObject** __retval);
void Context__Wrap_fn(uObject* obj, uObject** __retval);
void Context__WrapScriptClass_fn(Context* __this, uObject* obj, uObject** __retval);

struct Context : uObject
{
    uStrong< ::g::Fuse::Scripting::ClassInstance*> _app;
    uStrong< ::g::Fuse::PropertyHandle*> _classInstanceProperty;
    uStrong< ::g::Fuse::Scripting::Function*> _identity;
    uStrong< ::g::Uno::Collections::List*> _messages;
    uStrong<uObject*> _messagesMutex;
    uStrong< ::g::Uno::Threading::ConcurrentDictionary*> _moduleResults;
    uStrong< ::g::Fuse::Scripting::Function*> _newArray;
    uStrong< ::g::Fuse::Scripting::Function*> _newObject;
    uStrong< ::g::Fuse::Scripting::Function*> _parseJson;
    int _reflectionDepth;
    uStrong< ::g::Uno::Collections::Dictionary*> _registeredClasses;
    uStrong< ::g::Fuse::Scripting::Function*> _setSuperclass;
    uStrong<uObject*> _worker;

    void ctor_(uObject* worker);
    ::g::Fuse::Scripting::Function* CallbackToFunction(uDelegate* c);
    ::g::Fuse::Scripting::ValueMirror* CreateMirror(uObject* obj);
    void DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr);
    uObject* Dispatcher();
    void Dispose() { (((Context_type*)__type)->fp_Dispose)(this); }
    void Enqueue(::g::Fuse::Scripting::Observable__Operation* op);
    uObject* Evaluate(uString* fileName, uString* code) { uObject* __retval; return (((Context_type*)__type)->fp_Evaluate)(this, fileName, code, &__retval), __retval; }
    ::g::Fuse::Scripting::Function* GetClass(::g::Fuse::Scripting::ScriptClass* sc);
    ::g::Fuse::Scripting::ClassInstance* GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    ::g::Fuse::Scripting::ClassInstance* GetClassInstance1(::g::Uno::UX::NameTable* scope);
    ::g::Fuse::Scripting::Object* GlobalObject() { ::g::Fuse::Scripting::Object* __retval; return (((Context_type*)__type)->fp_get_GlobalObject)(this, &__retval), __retval; }
    void Invoke(uDelegate* action);
    ::g::Fuse::Scripting::Array* NewArray(uArray* values);
    ::g::Fuse::Scripting::Object* NewObject();
    void ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable);
    void ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable);
    ::g::Fuse::Scripting::Function* Observable();
    uObject* ParseJson(uString* json);
    void ProcessUIMessages();
    uObject* Reflect(uObject* obj);
    ::g::Fuse::Scripting::Function* RegisterClass(::g::Fuse::Scripting::ScriptClass* sc);
    void RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result);
    ::g::Uno::Collections::List* TakeMessages();
    ::g::Fuse::Scripting::Array* ToArray(::g::Uno::Float2 v);
    ::g::Fuse::Scripting::Array* ToArray1(::g::Uno::Float3 v);
    ::g::Fuse::Scripting::Array* ToArray2(::g::Uno::Float4 v);
    ::g::Fuse::Scripting::Array* ToArray3(::g::Uno::Int2 v);
    ::g::Fuse::Scripting::Array* ToArray4(::g::Uno::Int3 v);
    ::g::Fuse::Scripting::Array* ToArray5(::g::Uno::Int4 v);
    ::g::Fuse::Scripting::ModuleResult* TryGetGlobalModuleResult(uString* id);
    uObject* Unwrap(uObject* dc);
    uObject* WrapScriptClass(uObject* obj);
    static ::g::Uno::UX::NameTable* FindRootTable(::g::Uno::UX::NameTable* names);
    static uObject* Wrap(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
