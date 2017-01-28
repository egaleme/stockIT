// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.Storage.ApplicationDir.ReadClosure.h>
#include <Fuse.Storage.ApplicationDir.WriteClosure.h>
#include <Fuse.Storage.StorageModule.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[10];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Storage{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Storage\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal static class ApplicationDir :9
// {
static void ApplicationDir_build(uType* type)
{
    ::STRINGS[0] = uString::Const("filename");
    ::STRINGS[1] = uString::Const("File does not exist.");
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[0] = ::g::Uno::IDisposable_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
}

uClassType* ApplicationDir_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Storage.ApplicationDir", options);
    type->fp_build_ = ApplicationDir_build;
    return type;
}

// private static void CreateFile(string filepath) :26
void ApplicationDir__CreateFile_fn(uString* filepath)
{
    ApplicationDir::CreateFile(filepath);
}

// public static bool Delete(string filename) :44
void ApplicationDir__Delete_fn(uString* filename, bool* __retval)
{
    *__retval = ApplicationDir::Delete(filename);
}

// public static string Read(string filename) :32
void ApplicationDir__Read_fn(uString* filename, uString** __retval)
{
    *__retval = ApplicationDir::Read(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) :70
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync(filename);
}

// public static bool Write(string filename, string value) :11
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval)
{
    *__retval = ApplicationDir::Write(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) :60
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync(filename, value);
}

// private static void CreateFile(string filepath) [static] :26
void ApplicationDir::CreateFile(uString* filepath)
{
    ::g::Uno::IO::Stream* stream = ::g::Uno::IO::File::Open(filepath, 2);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::TYPES[0/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
    }
}

// public static bool Delete(string filename) [static] :44
bool ApplicationDir::Delete(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
        return false;

    try
    {
        ::g::Uno::IO::File::Delete(filepath);
        return true;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return false;
}

// public static string Read(string filename) [static] :32
uString* ApplicationDir::Read(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);

    if (::g::Uno::IO::File::Exists(filepath))
        return ::g::Uno::IO::File::ReadAllText(filepath);
    else
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"File does n...*/]));
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) [static] :70
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[2/*Uno.Threading.Promise<string>*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static bool Write(string filename, string value) [static] :11
bool ApplicationDir::Write(uString* filename, uString* value)
{
    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"filename"*/]));

    if (::g::Uno::String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"value"*/]));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(1), filename);
    ApplicationDir::CreateFile(filepath);
    ::g::Uno::IO::File::WriteAllText(filepath, value);
    return true;
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) [static] :60
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync(uString* filename, uString* value)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::TYPES[4/*Uno.Threading.Promise<bool>*/], uDelegate::New(::TYPES[5/*Uno.Func<bool>*/], (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Storage\0.43.11\$.uno
// -------------------------------------------------------------------------------

// private sealed class ApplicationDir.ReadClosure :97
// {
static void ApplicationDir__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__ReadClosure, _filename), 0);
}

uType* ApplicationDir__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ApplicationDir__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.ReadClosure", options);
    type->fp_build_ = ApplicationDir__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename) :101
void ApplicationDir__ReadClosure__ctor__fn(ApplicationDir__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :106
void ApplicationDir__ReadClosure__Invoke_fn(ApplicationDir__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :101
void ApplicationDir__ReadClosure__New1_fn(uString* filename, ApplicationDir__ReadClosure** __retval)
{
    *__retval = ApplicationDir__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :101
void ApplicationDir__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance] :106
uString* ApplicationDir__ReadClosure::Invoke()
{
    return ::g::Fuse::Storage::ApplicationDir::Read(_filename);
}

// public ReadClosure New(string filename) [static] :101
ApplicationDir__ReadClosure* ApplicationDir__ReadClosure::New1(uString* filename)
{
    ApplicationDir__ReadClosure* obj1 = (ApplicationDir__ReadClosure*)uNew(ApplicationDir__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Storage\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public sealed class StorageModule :134
// {
static void StorageModule_build(uType* type)
{
    ::STRINGS[3] = uString::Const("FuseJS/Storage");
    ::STRINGS[4] = uString::Const("writeSync");
    ::STRINGS[5] = uString::Const("readSync");
    ::STRINGS[6] = uString::Const("deleteSync");
    ::STRINGS[7] = uString::Const("write");
    ::STRINGS[8] = uString::Const("read");
    ::STRINGS[9] = uString::Const("");
    ::TYPES[6] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Fuse::Storage::StorageModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(StorageModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Storage.StorageModule", options);
    type->fp_build_ = StorageModule_build;
    type->fp_ctor_ = (void*)StorageModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public StorageModule() :137
void StorageModule__ctor_2_fn(StorageModule* __this)
{
    __this->ctor_2();
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) :225
void StorageModule__Delete_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Delete(c, args);
}

// public StorageModule New() :137
void StorageModule__New2_fn(StorageModule** __retval)
{
    *__retval = StorageModule::New2();
}

// private static object Read(Fuse.Scripting.Context c, object[] args) :280
void StorageModule__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) :196
void StorageModule__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::ReadAsync(args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) :254
void StorageModule__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) :168
void StorageModule__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::WriteAsync(args);
}

uSStrong<StorageModule*> StorageModule::_instance_;

// public StorageModule() [instance] :137
void StorageModule::ctor_2()
{
    ctor_1();

    if (StorageModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(StorageModule::_instance_ = this, ::STRINGS[3/*"FuseJS/Stor...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"writeSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Write_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"readSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Read_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"deleteSync"*/], uDelegate::New(::TYPES[6/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Delete_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[7/*"write"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<bool>*/], (void*)StorageModule__WriteAsync_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[8/*"read"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.FutureFactory<string>*/], (void*)StorageModule__ReadAsync_fn), NULL));
}

// private static object Delete(Fuse.Scripting.Context c, object[] args) [static] :225
uObject* StorageModule::Delete(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*string*/]);
        return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::g::Uno::Bool_typeof(), false);
}

// public StorageModule New() [static] :137
StorageModule* StorageModule::New2()
{
    StorageModule* obj1 = (StorageModule*)uNew(StorageModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static] :280
uObject* StorageModule::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    try
    {
        if (uPtr(args)->Length() > 0)
        {
            uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*string*/]);
            return ::g::Fuse::Storage::ApplicationDir::Read((filename != NULL) ? filename : ::STRINGS[9/*""*/]);
        }

        return ::g::Fuse::Storage::ApplicationDir::Read(::STRINGS[9/*""*/]);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[9/*""*/];
    }
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :196
::g::Uno::Threading::Future1* StorageModule::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != NULL) ? filename : ::STRINGS[9/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[9/*""*/]);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static] :254
uObject* StorageModule::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[11/*string*/]);
        return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Write((filename != NULL) ? filename : ::STRINGS[9/*""*/], (value != NULL) ? value : ::STRINGS[9/*""*/]));
    }

    return uBox(::g::Uno::Bool_typeof(), ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[9/*""*/], ::STRINGS[9/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static] :168
::g::Uno::Threading::Future1* StorageModule::WriteAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[11/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[11/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != NULL) ? filename : ::STRINGS[9/*""*/], (value != NULL) ? value : ::STRINGS[9/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[9/*""*/], ::STRINGS[9/*""*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Storage\0.43.11\$.uno
// -------------------------------------------------------------------------------

// private sealed class ApplicationDir.WriteClosure :80
// {
static void ApplicationDir__WriteClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__WriteClosure, _filename), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Storage::ApplicationDir__WriteClosure, _value), 0);
}

uType* ApplicationDir__WriteClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ApplicationDir__WriteClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.WriteClosure", options);
    type->fp_build_ = ApplicationDir__WriteClosure_build;
    return type;
}

// public WriteClosure(string filename, string value) :85
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value)
{
    __this->ctor_(filename, value);
}

// public bool Invoke() :91
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval)
{
    *__retval = __this->Invoke();
}

// public WriteClosure New(string filename, string value) :85
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval)
{
    *__retval = ApplicationDir__WriteClosure::New1(filename, value);
}

// public WriteClosure(string filename, string value) [instance] :85
void ApplicationDir__WriteClosure::ctor_(uString* filename, uString* value)
{
    _filename = filename;
    _value = value;
}

// public bool Invoke() [instance] :91
bool ApplicationDir__WriteClosure::Invoke()
{
    return ::g::Fuse::Storage::ApplicationDir::Write(_filename, _value);
}

// public WriteClosure New(string filename, string value) [static] :85
ApplicationDir__WriteClosure* ApplicationDir__WriteClosure::New1(uString* filename, uString* value)
{
    ApplicationDir__WriteClosure* obj1 = (ApplicationDir__WriteClosure*)uNew(ApplicationDir__WriteClosure_typeof());
    obj1->ctor_(filename, value);
    return obj1;
}
// }

}}} // ::g::Fuse::Storage
