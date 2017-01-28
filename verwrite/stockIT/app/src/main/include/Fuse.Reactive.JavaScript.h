// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.IDataProvider.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class JavaScript :1472
// {
struct JavaScript_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Scripting::IModuleProvider interface4;
    ::g::Fuse::IDataProvider interface5;
};

JavaScript_type* JavaScript_typeof();
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable);
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_Code_fn(JavaScript* __this, uString* value);
void JavaScript__DispatchEvaluate_fn(JavaScript* __this);
void JavaScript__EvaluateExports_fn(JavaScript* __this, uObject** __retval);
void JavaScript__EvaluateModule_fn(JavaScript* __this);
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval);
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value);
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval);
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value);
void JavaScript__FuseIDataProviderget_Data_fn(JavaScript* __this, uObject** __retval);
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval);
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval);
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value);
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval);
void JavaScript__OnRooted_fn(JavaScript* __this);
void JavaScript__OnUnrooted_fn(JavaScript* __this);
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc);
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval);

struct JavaScript : ::g::Fuse::Behavior
{
    uStrong<uObject*> _currentDc;
    static int _javaScriptCounter_;
    static int& _javaScriptCounter() { return JavaScript_typeof()->Init(), _javaScriptCounter_; }
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _moduleResult;
    static uSStrong<uObject*> _resetHookMutex_;
    static uSStrong<uObject*>& _resetHookMutex() { return JavaScript_typeof()->Init(), _resetHookMutex_; }
    uStrong< ::g::Fuse::Scripting::ScriptModule*> _scriptModule;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker_;
    static uSStrong< ::g::Fuse::Reactive::ThreadWorker*>& _worker() { return JavaScript_typeof()->Init(), _worker_; }
    static uSStrong<uString*> previousErrorFile_;
    static uSStrong<uString*>& previousErrorFile() { return JavaScript_typeof()->Init(), previousErrorFile_; }

    void ctor_3(::g::Uno::UX::NameTable* nameTable);
    uString* Code();
    void Code(uString* value);
    void DispatchEvaluate();
    uObject* EvaluateExports();
    void EvaluateModule();
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    uString* FileName();
    void FileName(uString* value);
    int LineNumber();
    void LineNumber(int value);
    void SetDataContext(uObject* newDc);
    static JavaScript* New2(::g::Uno::UX::NameTable* nameTable);
    static ::g::Fuse::Reactive::ThreadWorker* Worker();
};
// }

}}} // ::g::Fuse::Reactive
