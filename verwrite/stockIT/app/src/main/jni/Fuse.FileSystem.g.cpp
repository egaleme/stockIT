// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.FileSystem.AndroidPaths.h>
#include <Fuse.FileSystem.DirectoryInfo.h>
#include <Fuse.FileSystem.FileAttributes.h>
#include <Fuse.FileSystem.FileInfo.h>
#include <Fuse.FileSystem.FileStatus.h>
#include <Fuse.FileSystem.FileStatusHelpers.h>
#include <Fuse.FileSystem.FileSystemInfo.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-2.h>
#include <Fuse.FileSystem.FileSystemOperations.Closure-3.h>
#include <Fuse.FileSystem.FileSystemOperations.h>
#include <Fuse.FileSystem.Nothing.h>
#include <Fuse.FileSystem.PathTools.h>
#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <jni.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
#include <Uno/Support.h>
static uString* STRINGS[49];
static uType* TYPES[59];

namespace g{
namespace Fuse{
namespace FileSystem{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class AndroidPaths :11
// {
static void AndroidPaths_build(uType* type)
{
    ::STRINGS[0] = uString::Const("externalCache");
    ::STRINGS[1] = uString::Const("externalFiles");
    ::STRINGS[2] = uString::Const("cache");
    ::STRINGS[3] = uString::Const("files");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
}

uType* AndroidPaths_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AndroidPaths);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.AndroidPaths", options);
    type->fp_build_ = AndroidPaths_build;
    return type;
}

// private static string GetCacheDirectory() :39
void AndroidPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetCacheDirectory();
}

// private static string GetExternalCacheDirectory() :25
void AndroidPaths__GetExternalCacheDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetExternalCacheDirectory();
}

// private static string GetExternalFilesDirectory() :32
void AndroidPaths__GetExternalFilesDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetExternalFilesDirectory();
}

// private static string GetFilesDirectory() :46
void AndroidPaths__GetFilesDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetFilesDirectory();
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() :13
void AndroidPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = AndroidPaths::GetPathDictionary();
}

// private static string GetCacheDirectory() [static] :39
uString* AndroidPaths::GetCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCacheDirectory279", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetExternalCacheDirectory() [static] :25
uString* AndroidPaths::GetExternalCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetExternalCacheDirectory280", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetExternalFilesDirectory() [static] :32
uString* AndroidPaths::GetExternalFilesDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetExternalFilesDirectory281", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetFilesDirectory() [static] :46
uString* AndroidPaths::GetFilesDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetFilesDirectory282", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() [static] :13
::g::Uno::Collections::Dictionary* AndroidPaths::GetPathDictionary()
{
    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"externalCache"*/], AndroidPaths::GetExternalCacheDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"externalFiles"*/], AndroidPaths::GetExternalFilesDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"cache"*/], AndroidPaths::GetCacheDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[3/*"files"*/], AndroidPaths::GetFilesDirectory());
    return dict;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, TResult> :1220
// {
static void FileSystemOperations__Closure_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure, _del), 0);
}

uType* FileSystemOperations__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FileSystemOperations__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`2", options);
    type->fp_build_ = FileSystemOperations__Closure_build;
    return type;
}

// public Closure(Uno.Func<T1, TResult> del, T1 arg1) :1225
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1)
{
    __this->_del = del;
    __this->_arg1() = arg1;
}

// public TResult Invoke() :1231
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*TResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 1, (void*)__this->_arg1()), ret2)), void();
}

// public Closure New(Uno.Func<T1, TResult> del, T1 arg1) :1225
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval)
{
    FileSystemOperations__Closure* obj1 = (FileSystemOperations__Closure*)uNew(__type);
    FileSystemOperations__Closure__ctor__fn(obj1, del, arg1);
    return *__retval = obj1, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :1238
// {
static void FileSystemOperations__Closure1_build(uType* type)
{
    type->SetPrecalc(
        type->T(2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL), offsetof(::g::Fuse::FileSystem::FileSystemOperations__Closure1, _del), 0);
}

uType* FileSystemOperations__Closure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(FileSystemOperations__Closure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`3", options);
    type->fp_build_ = FileSystemOperations__Closure1_build;
    return type;
}

// public Closure(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1244
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2)
{
    __this->_del = del;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public TResult Invoke() :1251
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*TResult*/),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 2, (void*)__this->_arg1(), (void*)__this->_arg2()), ret2)), void();
}

// public Closure New(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1244
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval)
{
    FileSystemOperations__Closure1* obj1 = (FileSystemOperations__Closure1*)uNew(__type);
    FileSystemOperations__Closure1__ctor__fn(obj1, del, arg1, arg2);
    return *__retval = obj1, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// public sealed class DirectoryInfo :7
// {
static void DirectoryInfo_build(uType* type)
{
    type->SetFields(3);
}

::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FileSystem::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DirectoryInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.DirectoryInfo", options);
    type->fp_build_ = DirectoryInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))DirectoryInfo__LoadStatus_fn;
    return type;
}

// public DirectoryInfo(string originalPath) :9
void DirectoryInfo__ctor_1_fn(DirectoryInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :20
void DirectoryInfo__LoadStatus_fn(DirectoryInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) == 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public DirectoryInfo New(string originalPath) :9
void DirectoryInfo__New1_fn(uString* originalPath, DirectoryInfo** __retval)
{
    *__retval = DirectoryInfo::New1(originalPath);
}

// public DirectoryInfo(string originalPath) [instance] :9
void DirectoryInfo::ctor_1(uString* originalPath)
{
    ctor_(originalPath);
}

// public DirectoryInfo New(string originalPath) [static] :9
DirectoryInfo* DirectoryInfo::New1(uString* originalPath)
{
    DirectoryInfo* obj1 = (DirectoryInfo*)uNew(DirectoryInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// public enum FileAttributes :37
uEnumType* FileAttributes_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.FileSystem.FileAttributes", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Directory", 16LL,
        "Device", 64LL,
        "ReparsePoint", 1024LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// public sealed class FileInfo :66
// {
static void FileInfo_build(uType* type)
{
    type->SetFields(3);
}

::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof()
{
    static uSStrong< ::g::Fuse::FileSystem::FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::FileSystem::FileSystemInfo_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileInfo);
    options.TypeSize = sizeof(::g::Fuse::FileSystem::FileSystemInfo_type);
    type = (::g::Fuse::FileSystem::FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileInfo", options);
    type->fp_build_ = FileInfo_build;
    type->fp_LoadStatus = (void(*)(::g::Fuse::FileSystem::FileSystemInfo*, ::g::Fuse::FileSystem::FileStatus**))FileInfo__LoadStatus_fn;
    return type;
}

// public FileInfo(string originalPath) :71
void FileInfo__ctor_1_fn(FileInfo* __this, uString* originalPath)
{
    __this->ctor_1(originalPath);
}

// public long get_Length() :95
void FileInfo__get_Length_fn(FileInfo* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// internal override sealed extern Fuse.FileSystem.FileStatus LoadStatus() :82
void FileInfo__LoadStatus_fn(FileInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    ::g::Fuse::FileSystem::FileStatus* ret2;
    ::g::Fuse::FileSystem::FileStatus* status = (::g::Fuse::FileSystem::FileSystemInfo__LoadStatus_fn(__this, &ret2), ret2);

    if ((uPtr(status)->Attributes() & 16) != 0)
        return *__retval = ::g::Fuse::FileSystem::FileStatus::New1(), void();

    return *__retval = status, void();
}

// public FileInfo New(string originalPath) :71
void FileInfo__New1_fn(uString* originalPath, FileInfo** __retval)
{
    *__retval = FileInfo::New1(originalPath);
}

// public FileInfo(string originalPath) [instance] :71
void FileInfo::ctor_1(uString* originalPath)
{
    ctor_(originalPath);
}

// public long get_Length() [instance] :95
int64_t FileInfo::Length()
{
    return uPtr(Status())->Length();
}

// public FileInfo New(string originalPath) [static] :71
FileInfo* FileInfo::New1(uString* originalPath)
{
    FileInfo* obj1 = (FileInfo*)uNew(FileInfo_typeof());
    obj1->ctor_1(originalPath);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class FileStatus :114
// {
// static FileStatus() :114
static void FileStatus__cctor__fn(uType* __type)
{
    FileStatus::FileTimeEpoch_ = ::g::Uno::Time::Instant__FromUtc(1601, 1, 1, 0, 0);
}

static void FileStatus_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::FileSystem::FileAttributes_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _attributes), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _creationTimeUtc), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _exists), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _lastAccessTimeUtc), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _lastWriteTimeUtc), 0,
        ::g::Uno::Long_typeof(), offsetof(::g::Fuse::FileSystem::FileStatus, _length), 0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&::g::Fuse::FileSystem::FileStatus::FileTimeEpoch_, uFieldFlagsStatic);
}

uType* FileStatus_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(FileStatus);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileStatus", options);
    type->fp_build_ = FileStatus_build;
    type->fp_ctor_ = (void*)FileStatus__New1_fn;
    type->fp_cctor_ = FileStatus__cctor__fn;
    return type;
}

// public FileStatus() :126
void FileStatus__ctor__fn(FileStatus* __this)
{
    __this->ctor_();
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :142
void FileStatus__ctor_1_fn(FileStatus* __this, int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    __this->ctor_1(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

// public Fuse.FileSystem.FileAttributes get_Attributes() :163
void FileStatus__get_Attributes_fn(FileStatus* __this, int* __retval)
{
    *__retval = __this->Attributes();
}

// public bool get_Exists() :161
void FileStatus__get_Exists_fn(FileStatus* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :165
void FileStatus__get_LastAccessTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :167
void FileStatus__get_LastWriteTimeUtc_fn(FileStatus* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// public long get_Length() :169
void FileStatus__get_Length_fn(FileStatus* __this, int64_t* __retval)
{
    *__retval = __this->Length();
}

// public FileStatus New() :126
void FileStatus__New1_fn(FileStatus** __retval)
{
    *__retval = FileStatus::New1();
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) :142
void FileStatus__New2_fn(int64_t* length, int* attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc, FileStatus** __retval)
{
    *__retval = FileStatus::New2(*length, *attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
}

::g::Uno::Time::Instant FileStatus::FileTimeEpoch_;

// public FileStatus() [instance] :126
void FileStatus::ctor_()
{
    ::g::Uno::Time::ZonedDateTime* defaultTime = ::g::Uno::Time::ZonedDateTime::New1(FileStatus::FileTimeEpoch(), ::g::Uno::Time::DateTimeZone::Utc());
    _creationTimeUtc = defaultTime;
    _lastWriteTimeUtc = defaultTime;
    _lastAccessTimeUtc = defaultTime;
    _exists = false;
    _attributes = -1;
}

// public FileStatus(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [instance] :142
void FileStatus::ctor_1(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    _length = length;
    _attributes = attributes;
    _creationTimeUtc = creationTimeUtc;
    _lastWriteTimeUtc = lastWriteTimeUtc;
    _lastAccessTimeUtc = lastAccessTimeUtc;
    _exists = true;
}

// public Fuse.FileSystem.FileAttributes get_Attributes() [instance] :163
int FileStatus::Attributes()
{
    return _attributes;
}

// public bool get_Exists() [instance] :161
bool FileStatus::Exists()
{
    return _exists;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :165
::g::Uno::Time::ZonedDateTime* FileStatus::LastAccessTimeUtc()
{
    return _lastAccessTimeUtc;
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :167
::g::Uno::Time::ZonedDateTime* FileStatus::LastWriteTimeUtc()
{
    return _lastWriteTimeUtc;
}

// public long get_Length() [instance] :169
int64_t FileStatus::Length()
{
    return _length;
}

// public FileStatus New() [static] :126
FileStatus* FileStatus::New1()
{
    FileStatus* obj1 = (FileStatus*)uNew(FileStatus_typeof());
    obj1->ctor_();
    return obj1;
}

// public FileStatus New(long length, Fuse.FileSystem.FileAttributes attributes, Uno.Time.ZonedDateTime creationTimeUtc, Uno.Time.ZonedDateTime lastAccessTimeUtc, Uno.Time.ZonedDateTime lastWriteTimeUtc) [static] :142
FileStatus* FileStatus::New2(int64_t length, int attributes, ::g::Uno::Time::ZonedDateTime* creationTimeUtc, ::g::Uno::Time::ZonedDateTime* lastAccessTimeUtc, ::g::Uno::Time::ZonedDateTime* lastWriteTimeUtc)
{
    FileStatus* obj2 = (FileStatus*)uNew(FileStatus_typeof());
    obj2->ctor_1(length, attributes, creationTimeUtc, lastAccessTimeUtc, lastWriteTimeUtc);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// internal static extern class FileStatusHelpers :186
// {
static void FileStatusHelpers_build(uType* type)
{
}

uClassType* FileStatusHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.FileStatusHelpers", options);
    type->fp_build_ = FileStatusHelpers_build;
    return type;
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) :194
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = FileStatusHelpers::GetFileStatus(path);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) :188
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileStatusHelpers::UnixTimeToZoned(*sec);
}

// public static extern Fuse.FileSystem.FileStatus GetFileStatus(string path) [static] :194
::g::Fuse::FileSystem::FileStatus* FileStatusHelpers::GetFileStatus(uString* path)
{
    struct stat s;
    
                if (stat(uStringToXliString(path).Ptr(), &s) == -1)
                    return ::g::Fuse::FileSystem::FileStatus::New1();
    
                int attributes = 0;
    
                // ReadOnly used to be mapped the following way in uno-base,
                // but until we're sure this is the correct way to do we just avoid
                // mapping the ReadOnly attribute at all.
                //
                // if (!(((s.st_mode & S_IWOTH) == S_IWOTH)
                //    || (s.st_gid == getgid() && ((s.st_mode & S_IWGRP) == S_IWGRP))
                //    || (s.st_uid == getuid() && ((s.st_mode & S_IWUSR) == S_IWUSR))))
                //    attributes |= AT{FileAttributes.ReadOnly};
    
                if (S_ISDIR(s.st_mode))
                    attributes |= 16;
    
                if (S_ISCHR(s.st_mode) || S_ISBLK(s.st_mode))
                    attributes |= 64;
    
                if (S_ISLNK(s.st_mode))
                    attributes |= 1024;
    
                // Apparently posix stat standard doesn't define a way to get creation time,
                // so we'll just use lastWriteTime.
                // TODO: It seems like this might be possible on OS X though, in some non-posix way..
                ::g::Uno::Time::ZonedDateTime* lastWriteTime =
                    FileStatusHelpers::UnixTimeToZoned(s.st_mtime);
                ::g::Uno::Time::ZonedDateTime* lastAccessTime =
                    FileStatusHelpers::UnixTimeToZoned(s.st_atime);
    
                return ::g::Fuse::FileSystem::FileStatus::New2(s.st_size, attributes, lastWriteTime, lastAccessTime, lastWriteTime);
}

// private static extern Uno.Time.ZonedDateTime UnixTimeToZoned(long sec) [static] :188
::g::Uno::Time::ZonedDateTime* FileStatusHelpers::UnixTimeToZoned(int64_t sec)
{
    int64_t ticks = sec * 10000000LL;
    return ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__New1(ticks), ::g::Uno::Time::DateTimeZone::Utc());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno
// -----------------------------------------------------------------------------------------

// public abstract class FileSystemInfo :336
// {
static void FileSystemInfo_build(uType* type)
{
    ::STRINGS[4] = uString::Const("originalPath");
    ::TYPES[1] = ::g::Uno::Time::ZonedDateTime_typeof();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _fullPath), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _originalPath), 0,
        ::g::Fuse::FileSystem::FileStatus_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemInfo, _status), 0);
}

FileSystemInfo_type* FileSystemInfo_typeof()
{
    static uSStrong<FileSystemInfo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileSystemInfo);
    options.TypeSize = sizeof(FileSystemInfo_type);
    type = (FileSystemInfo_type*)uClassType::New("Fuse.FileSystem.FileSystemInfo", options);
    type->fp_build_ = FileSystemInfo_build;
    type->fp_LoadStatus = FileSystemInfo__LoadStatus_fn;
    return type;
}

// protected FileSystemInfo(string originalPath) :342
void FileSystemInfo__ctor__fn(FileSystemInfo* __this, uString* originalPath)
{
    __this->ctor_(originalPath);
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) :362
void FileSystemInfo__ConvertTime_fn(uObject* time, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = FileSystemInfo::ConvertTime(time);
}

// public bool get_Exists() :377
void FileSystemInfo__get_Exists_fn(FileSystemInfo* __this, bool* __retval)
{
    *__retval = __this->Exists();
}

// public string get_FullName() :379
void FileSystemInfo__get_FullName_fn(FileSystemInfo* __this, uString** __retval)
{
    *__retval = __this->FullName();
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() :381
void FileSystemInfo__get_LastAccessTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastAccessTimeUtc();
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() :383
void FileSystemInfo__get_LastWriteTimeUtc_fn(FileSystemInfo* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->LastWriteTimeUtc();
}

// internal virtual extern Fuse.FileSystem.FileStatus LoadStatus() :399
void FileSystemInfo__LoadStatus_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    return *__retval = ::g::Fuse::FileSystem::FileStatusHelpers::GetFileStatus(__this->_fullPath), void();
}

// public void Refresh() :352
void FileSystemInfo__Refresh_fn(FileSystemInfo* __this)
{
    __this->Refresh();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() :390
void FileSystemInfo__get_Status_fn(FileSystemInfo* __this, ::g::Fuse::FileSystem::FileStatus** __retval)
{
    *__retval = __this->Status();
}

// protected FileSystemInfo(string originalPath) [instance] :342
void FileSystemInfo::ctor_(uString* originalPath)
{
    if (::g::Uno::String::op_Equality(originalPath, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[4/*"originalPath"*/]));

    _originalPath = originalPath;
    _fullPath = ::g::Uno::IO::Path::GetFullPath(_originalPath);
}

// public bool get_Exists() [instance] :377
bool FileSystemInfo::Exists()
{
    return uPtr(Status())->Exists();
}

// public string get_FullName() [instance] :379
uString* FileSystemInfo::FullName()
{
    return _fullPath;
}

// public Uno.Time.ZonedDateTime get_LastAccessTimeUtc() [instance] :381
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastAccessTimeUtc()
{
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastAccessTimeUtc());
}

// public Uno.Time.ZonedDateTime get_LastWriteTimeUtc() [instance] :383
::g::Uno::Time::ZonedDateTime* FileSystemInfo::LastWriteTimeUtc()
{
    return FileSystemInfo::ConvertTime(uPtr(Status())->LastWriteTimeUtc());
}

// public void Refresh() [instance] :352
void FileSystemInfo::Refresh()
{
    _status = LoadStatus();
}

// internal extern Fuse.FileSystem.FileStatus get_Status() [instance] :390
::g::Fuse::FileSystem::FileStatus* FileSystemInfo::Status()
{
    if (_status == NULL)
        Refresh();

    return _status;
}

// private static Uno.Time.ZonedDateTime ConvertTime(object time) [static] :362
::g::Uno::Time::ZonedDateTime* FileSystemInfo::ConvertTime(uObject* time)
{
    return uCast< ::g::Uno::Time::ZonedDateTime*>(time, ::TYPES[1/*Uno.Time.ZonedDateTime*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// public sealed class FileSystemModule :112
// {
static void FileSystemModule_build(uType* type)
{
    ::STRINGS[5] = uString::Const("FuseJS/FileSystem");
    ::STRINGS[6] = uString::Const("cacheDirectory");
    ::STRINGS[7] = uString::Const("dataDirectory");
    ::STRINGS[8] = uString::Const("androidPaths");
    ::STRINGS[9] = uString::Const("createDirectory");
    ::STRINGS[10] = uString::Const("createDirectorySync");
    ::STRINGS[11] = uString::Const("delete");
    ::STRINGS[12] = uString::Const("deleteSync");
    ::STRINGS[13] = uString::Const("exists");
    ::STRINGS[14] = uString::Const("existsSync");
    ::STRINGS[15] = uString::Const("getDirectoryInfo");
    ::STRINGS[16] = uString::Const("getDirectoryInfoSync");
    ::STRINGS[17] = uString::Const("getFileInfo");
    ::STRINGS[18] = uString::Const("getFileInfoSync");
    ::STRINGS[19] = uString::Const("listDirectories");
    ::STRINGS[20] = uString::Const("listDirectoriesSync");
    ::STRINGS[21] = uString::Const("listEntries");
    ::STRINGS[22] = uString::Const("listEntriesSync");
    ::STRINGS[23] = uString::Const("listFiles");
    ::STRINGS[24] = uString::Const("listFilesSync");
    ::STRINGS[25] = uString::Const("readBufferFromFile");
    ::STRINGS[26] = uString::Const("moveSync");
    ::STRINGS[27] = uString::Const("move");
    ::STRINGS[28] = uString::Const("readBufferFromFileSync");
    ::STRINGS[29] = uString::Const("readTextFromFile");
    ::STRINGS[30] = uString::Const("readTextFromFileSync");
    ::STRINGS[31] = uString::Const("writeBufferToFile");
    ::STRINGS[32] = uString::Const("writeBufferToFileSync");
    ::STRINGS[33] = uString::Const("writeTextToFile");
    ::STRINGS[34] = uString::Const("writeTextToFileSync");
    ::STRINGS[35] = uString::Const("appendTextToFile");
    ::STRINGS[36] = uString::Const("appendTextToFileSync");
    ::STRINGS[37] = uString::Const("Second argument \"text\" is required to be a string");
    ::STRINGS[38] = uString::Const("args");
    ::STRINGS[39] = uString::Const("first argument path is required to be a string");
    ::STRINGS[40] = uString::Const("First argument `source` has to be a valid path");
    ::STRINGS[41] = uString::Const("Second argument `destination` has to be a valid path");
    ::STRINGS[42] = uString::Const("(Date Converter)");
    ::STRINGS[43] = uString::Const("new Date({0})");
    ::STRINGS[44] = uString::Const("length");
    ::STRINGS[45] = uString::Const("fullName");
    ::STRINGS[46] = uString::Const("lastWriteTime");
    ::STRINGS[47] = uString::Const("lastAccessTime");
    ::STRINGS[48] = uString::Const("Second argument \"data\" is required to be an ArrayBuffer");
    ::TYPES[2] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[7] = type->MakeMethod(2/*ToScriptingObject<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Fuse::FileSystem::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[17] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof()->Array(), NULL);
    ::TYPES[18] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[19] = type->MakeMethod(1/*ToScriptingArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[24] = type->MakeMethod(0/*GetArg<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Bool_typeof();
    ::TYPES[26] = ::g::Uno::String_typeof();
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<object>*/, uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[29] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[30] = uObject_typeof()->Array();
    ::TYPES[31] = ::g::Fuse::FileSystem::FileInfo_typeof();
    ::TYPES[32] = ::g::Uno::Collections::Dictionary__Enumerator_typeof();
    ::TYPES[33] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[34] = type->MakeMethod(0/*GetArg<byte[]>*/, ::g::Uno::Byte_typeof()->Array(), NULL);
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[28/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(3/*OfType<T, object>*/, type->MethodTypes[1]->U(0), uObject_typeof(), NULL),
        ::TYPES[29/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[32/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(::TYPES[26/*string*/], type->MethodTypes[2]->U(0), NULL),
        ::TYPES[33/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[26/*string*/], type->MethodTypes[2]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::FileSystem::FileSystemOperations_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemModule, _operations), 0,
        type, (uintptr_t)&::g::Fuse::FileSystem::FileSystemModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(FileSystemModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.FileSystem.FileSystemModule", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->MethodTypes[1] = type->NewMethodType(1, 2);
    type->MethodTypes[2] = type->NewMethodType(1, 2);
    type->fp_build_ = FileSystemModule_build;
    type->fp_ctor_ = (void*)FileSystemModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileSystemModule() :117
void FileSystemModule__ctor_2_fn(FileSystemModule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) :186
void FileSystemModule__AppendTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(args);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) :207
void FileSystemModule__AppendTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->AppendTextToFileSync(context, args);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) :234
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(args);
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) :252
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateDirectorySync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) :278
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(args);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) :298
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DeleteSync(context, args);
}

// private Uno.Threading.Future<bool> Exists(object[] args) :324
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(args);
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) :343
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ExistsSync(context, args);
}

// private Uno.Collections.Dictionary<string, string> GetAndroidPaths() :359
void FileSystemModule__GetAndroidPaths_fn(FileSystemModule* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->GetAndroidPaths();
}

// private static T GetArg<T>(object[] args, int index, string error) :919
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int* index, uString* error, uObject** __retval)
{
    *__retval = FileSystemModule::GetArg(__type, args, *index, error);
}

// private string GetCacheDirectory() :379
void FileSystemModule__GetCacheDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetCacheDirectory();
}

// private string GetDataDirectory() :396
void FileSystemModule__GetDataDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetDataDirectory();
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) :428
void FileSystemModule__GetDirectoryInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(args);
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) :455
void FileSystemModule__GetDirectoryInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) :488
void FileSystemModule__GetFileInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(args);
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) :515
void FileSystemModule__GetFileInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetFileInfoSync(context, args);
}

// private static string GetPathFromArgs(object[] args) :934
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval)
{
    *__retval = FileSystemModule::GetPathFromArgs(args);
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) :562
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(args);
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) :582
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListDirectoriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) :606
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(args);
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) :626
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListEntriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) :650
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(args);
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) :670
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListFilesSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) :696
void FileSystemModule__Move_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(args);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) :717
void FileSystemModule__MoveSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->MoveSync(context, args);
}

// public FileSystemModule New() :117
void FileSystemModule__New2_fn(FileSystemModule** __retval)
{
    *__retval = FileSystemModule::New2();
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) :744
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(args);
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) :763
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(context, args);
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) :787
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(args);
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) :807
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadTextFromFileSync(context, args);
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) :948
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = FileSystemModule::ToScriptingArray(__type, context, sourceArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) :971
void FileSystemModule__ToScriptingDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time, uObject** __retval)
{
    *__retval = FileSystemModule::ToScriptingDate(context, time);
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) :955
void FileSystemModule__ToScriptingObject_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject(context, info);
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) :979
void FileSystemModule__ToScriptingObject1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject1(__type, context, dict);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) :836
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(args);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) :861
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteBufferToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) :889
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(args);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) :910
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteTextToFileSync(context, args);
}

uSStrong<FileSystemModule*> FileSystemModule::_instance_;

// public FileSystemModule() [instance] :117
void FileSystemModule::ctor_2()
{
    _operations = ::g::Fuse::FileSystem::FileSystemOperations::New1();
    ctor_1();

    if (FileSystemModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileSystemModule::_instance_ = this, ::STRINGS[5/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[6/*"cacheDirect...*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)FileSystemModule__GetCacheDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[2/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[7/*"dataDirectory"*/], uDelegate::New(::TYPES[3/*Uno.Func<string>*/], (void*)FileSystemModule__GetDataDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[4/*Fuse.Scripting.NativeProperty<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], ::STRINGS[8/*"androidPaths"*/], uDelegate::New(::TYPES[5/*Uno.Func<Uno.Collections.Dictionary<string, string>>*/], (void*)FileSystemModule__GetAndroidPaths_fn, this), NULL, uDelegate::New(::TYPES[6/*Fuse.Scripting.ValueConverter<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject1_fn, NULL, ::TYPES[7/*Fuse.FileSystem.FileSystemModule.ToScriptingObject<string>*/])));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[9/*"createDirec...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__CreateDirectory_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"createDirec...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CreateDirectorySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[11/*"delete"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Delete_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"deleteSync"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__DeleteSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[11/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[13/*"exists"*/], uDelegate::New(::TYPES[12/*Fuse.Scripting.FutureFactory<bool>*/], (void*)FileSystemModule__Exists_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[14/*"existsSync"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ExistsSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[13/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[15/*"getDirector...*/], uDelegate::New(::TYPES[14/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetDirectoryInfo_fn, this), uDelegate::New(::TYPES[15/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[16/*"getDirector...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetDirectoryInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[13/*Fuse.Scripting.NativePromise<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[17/*"getFileInfo"*/], uDelegate::New(::TYPES[14/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemModule__GetFileInfo_fn, this), uDelegate::New(::TYPES[15/*Fuse.Scripting.ResultConverter<Fuse.FileSystem.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[18/*"getFileInfo...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetFileInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[16/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[19/*"listDirecto...*/], uDelegate::New(::TYPES[17/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListDirectories_fn, this), uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[20/*"listDirecto...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListDirectoriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[16/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[21/*"listEntries"*/], uDelegate::New(::TYPES[17/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListEntries_fn, this), uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[22/*"listEntries...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListEntriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[16/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[23/*"listFiles"*/], uDelegate::New(::TYPES[17/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListFiles_fn, this), uDelegate::New(::TYPES[18/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[24/*"listFilesSync"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListFilesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[20/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[25/*"readBufferF...*/], uDelegate::New(::TYPES[21/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)FileSystemModule__ReadBufferFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[26/*"moveSync"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__MoveSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[27/*"move"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Move_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[28/*"readBufferF...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadBufferFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[22/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[29/*"readTextFro...*/], uDelegate::New(::TYPES[23/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileSystemModule__ReadTextFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[30/*"readTextFro...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadTextFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[31/*"writeBuffer...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteBufferToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[32/*"writeBuffer...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteBufferToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[33/*"writeTextTo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[34/*"writeTextTo...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteTextToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[35/*"appendTextT...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__AppendTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[36/*"appendTextT...*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__AppendTextToFileSync_fn, this)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) [instance] :186
::g::Uno::Threading::Future1* FileSystemModule::AppendTextToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    return uPtr(_operations)->AppendTextToFile(path, text);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :207
uObject* FileSystemModule::AppendTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    uPtr(_operations)->AppendTextToFileSync(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) [instance] :234
::g::Uno::Threading::Future1* FileSystemModule::CreateDirectory(uArray* args)
{
    return uPtr(_operations)->CreateDirectory(FileSystemModule::GetPathFromArgs(args));
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) [instance] :252
uObject* FileSystemModule::CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uPtr(_operations)->CreateDirectorySync(FileSystemModule::GetPathFromArgs(args));
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) [instance] :278
::g::Uno::Threading::Future1* FileSystemModule::Delete(uArray* args)
{
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[25/*bool*/])) ? uUnbox<bool>(::TYPES[25/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    return uPtr(_operations)->Delete(FileSystemModule::GetPathFromArgs(args), recursive);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) [instance] :298
uObject* FileSystemModule::DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[25/*bool*/])) ? uUnbox<bool>(::TYPES[25/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    uPtr(_operations)->DeleteSync(FileSystemModule::GetPathFromArgs(args), recursive);
    return NULL;
}

// private Uno.Threading.Future<bool> Exists(object[] args) [instance] :324
::g::Uno::Threading::Future1* FileSystemModule::Exists(uArray* args)
{
    return uPtr(_operations)->Exists(FileSystemModule::GetPathFromArgs(args));
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) [instance] :343
uObject* FileSystemModule::ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uBox(::TYPES[25/*bool*/], uPtr(_operations)->ExistsSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Collections.Dictionary<string, string> GetAndroidPaths() [instance] :359
::g::Uno::Collections::Dictionary* FileSystemModule::GetAndroidPaths()
{
    return ::g::Fuse::FileSystem::AndroidPaths::GetPathDictionary();
}

// private string GetCacheDirectory() [instance] :379
uString* FileSystemModule::GetCacheDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetCacheDirectory();
}

// private string GetDataDirectory() [instance] :396
uString* FileSystemModule::GetDataDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetDataDirectory();
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(object[] args) [instance] :428
::g::Uno::Threading::Future1* FileSystemModule::GetDirectoryInfo(uArray* args)
{
    return uPtr(_operations)->GetDirectoryInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :455
uObject* FileSystemModule::GetDirectoryInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetDirectoryInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(object[] args) [instance] :488
::g::Uno::Threading::Future1* FileSystemModule::GetFileInfo(uArray* args)
{
    return uPtr(_operations)->GetFileInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :515
uObject* FileSystemModule::GetFileInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetFileInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) [instance] :562
::g::Uno::Threading::Future1* FileSystemModule::ListDirectories(uArray* args)
{
    return uPtr(_operations)->ListDirectories(FileSystemModule::GetPathFromArgs(args));
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) [instance] :582
uObject* FileSystemModule::ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListDirectoriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) [instance] :606
::g::Uno::Threading::Future1* FileSystemModule::ListEntries(uArray* args)
{
    return uPtr(_operations)->ListEntries(FileSystemModule::GetPathFromArgs(args));
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) [instance] :626
uObject* FileSystemModule::ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListEntriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) [instance] :650
::g::Uno::Threading::Future1* FileSystemModule::ListFiles(uArray* args)
{
    return uPtr(_operations)->ListFiles(FileSystemModule::GetPathFromArgs(args));
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) [instance] :670
uObject* FileSystemModule::ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return FileSystemModule::ToScriptingArray(::TYPES[19/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListFilesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) [instance] :696
::g::Uno::Threading::Future1* FileSystemModule::Move(uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[40/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[41/*"Second argu...*/]);
    return uPtr(_operations)->Move(source, destination);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) [instance] :717
uObject* FileSystemModule::MoveSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[40/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[41/*"Second argu...*/]);
    uPtr(_operations)->Move(source, destination);
    return NULL;
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) [instance] :744
::g::Uno::Threading::Future1* FileSystemModule::ReadBufferFromFile(uArray* args)
{
    return uPtr(_operations)->ReadBufferFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :763
uObject* FileSystemModule::ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uPtr(_operations)->ReadBufferFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) [instance] :787
::g::Uno::Threading::Future1* FileSystemModule::ReadTextFromFile(uArray* args)
{
    return uPtr(_operations)->ReadTextFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :807
uObject* FileSystemModule::ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    return uPtr(_operations)->ReadTextFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) [instance] :836
::g::Uno::Threading::Future1* FileSystemModule::WriteBufferToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[34/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[48/*"Second argu...*/]);
    return uPtr(_operations)->WriteBufferToFile(path, data);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :861
uObject* FileSystemModule::WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[34/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[48/*"Second argu...*/]);
    uPtr(_operations)->WriteBufferToFileSync(path, data);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) [instance] :889
::g::Uno::Threading::Future1* FileSystemModule::WriteTextToFile(uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    return uPtr(_operations)->WriteTextToFile(path, text);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :910
uObject* FileSystemModule::WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[24/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[37/*"Second argu...*/]);
    uPtr(_operations)->WriteTextToFileSync(path, text);
    return NULL;
}

// private static T GetArg<T>(object[] args, int index, string error) [static] :919
uObject* FileSystemModule::GetArg(uType* __type, uArray* args, int index, uString* error)
{
    uType* __types[] = {
        __type->U(0),
    };

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"args"*/]));

    uObject* val = (uPtr(args)->Length() > index) ? uAs<uObject*>(uPtr(args)->Strong<uObject*>(index), __types[0]) : NULL;

    if (val == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(error));

    return val;
}

// private static string GetPathFromArgs(object[] args) [static] :934
uString* FileSystemModule::GetPathFromArgs(uArray* args)
{
    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[38/*"args"*/]));

    uString* filename = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[26/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[39/*"first argum...*/]));

    return filename;
}

// public FileSystemModule New() [static] :117
FileSystemModule* FileSystemModule::New2()
{
    FileSystemModule* obj1 = (FileSystemModule*)uNew(FileSystemModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) [static] :948
::g::Fuse::Scripting::Array* FileSystemModule::ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.OfType<T, object>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uArray* convertedArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OfType(__types[0], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[1], sourceArray))));
    return uPtr(context)->NewArray(convertedArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) [static] :971
uObject* FileSystemModule::ToScriptingDate(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time)
{
    int64_t msSinceUnixEpoch = ::g::Uno::Time::Instant__op_Subtraction1(uPtr(time)->ToInstant(), ::g::Uno::Time::Constants::UnixEpoch()).Ticks() / 10000LL;
    return uPtr(context)->Evaluate(::STRINGS[42/*"(Date Conve...*/], ::g::Uno::String::Format(::STRINGS[43/*"new Date({0})"*/], uArray::Init<uObject*>(::TYPES[30/*object[]*/], 1, uBox<int64_t>(::g::Uno::Long_typeof(), msSinceUnixEpoch))));
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Fuse.FileSystem.FileSystemInfo info) [static] :955
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject(::g::Fuse::Scripting::Context* context, ::g::Fuse::FileSystem::FileSystemInfo* info)
{
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    ::g::Fuse::FileSystem::FileInfo* fileInfo = uAs< ::g::Fuse::FileSystem::FileInfo*>(info, ::TYPES[31/*Fuse.FileSystem.FileInfo*/]);

    if (fileInfo != NULL)
        uPtr(jsobj)->Item(::STRINGS[44/*"length"*/], uBox(::g::Uno::Double_typeof(), (double)uPtr(fileInfo)->Length()));

    uPtr(jsobj)->Item(::STRINGS[13/*"exists"*/], uBox(::TYPES[25/*bool*/], uPtr(info)->Exists()));
    jsobj->Item(::STRINGS[45/*"fullName"*/], ::g::Fuse::FileSystem::PathTools::NormalizePath(info->FullName()));
    jsobj->Item(::STRINGS[46/*"lastWriteTime"*/], FileSystemModule::ToScriptingDate(context, info->LastWriteTimeUtc()));
    jsobj->Item(::STRINGS[47/*"lastAccessT...*/], FileSystemModule::ToScriptingDate(context, info->LastAccessTimeUtc()));
    return jsobj;
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) [static] :979
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<string, T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.KeyValuePair<string, T>*/),
        __type->U(0),
    };
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__types[2], U_ALLOCA(__types[2]->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kvp(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;
    uString* ret5;
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();

    for (enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(dict), &ret2), ret2); (::g::Uno::Collections::Dictionary__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3); )
    {
        kvp = (::g::Uno::Collections::Dictionary__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
        uPtr(jsobj)->Item((::g::Uno::Collections::KeyValuePair__get_Key_fn(&kvp, __types[1], &ret5), ret5), uBoxPtr(__types[2], (::g::Uno::Collections::KeyValuePair__get_Value_fn(&kvp, __types[1], &ret6), ret6)));
    }

    return jsobj;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class FileSystemOperations :1001
// {
static void FileSystemOperations_build(uType* type)
{
    ::TYPES[35] = type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[37] = type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.Nothing>*/, ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[39] = type->MakeMethod(2/*RunTask<string, bool, Fuse.FileSystem.Nothing>*/, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[41] = type->MakeMethod(1/*RunTask<string, bool>*/, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[43] = type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.FileSystemInfo>*/, ::g::Uno::String_typeof(), ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::FileSystem::FileSystemInfo_typeof(), NULL);
    ::TYPES[45] = type->MakeMethod(1/*RunTask<string, string[]>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), NULL);
    ::TYPES[46] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array(), NULL);
    ::TYPES[47] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*Select<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[50] = type->MakeMethod(1/*RunTask<string, byte[]>*/, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[51] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[52] = type->MakeMethod(1/*RunTask<string, string>*/, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Threading::Promise_typeof();
    ::TYPES[54] = ::g::Uno::Func_typeof();
    ::TYPES[55] = FileSystemOperations__Closure_typeof();
    ::TYPES[56] = FileSystemOperations__Closure1_typeof();
    ::TYPES[57] = type->MakeMethod(2/*RunTask<string, byte[], Fuse.FileSystem.Nothing>*/, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Func2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[53/*Uno.Threading.Promise`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[1]->U(1), NULL),
        ::TYPES[54/*Uno.Func`1*/]->MakeType(type->MethodTypes[1]->U(1), NULL),
        ::TYPES[55/*Fuse.FileSystem.FileSystemOperations.Closure`2*/]->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[2]->U(2), NULL),
        ::TYPES[54/*Uno.Func`1*/]->MakeType(type->MethodTypes[2]->U(2), NULL),
        ::TYPES[56/*Fuse.FileSystem.FileSystemOperations.Closure`3*/]->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), type->MethodTypes[2]->U(2), NULL));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(::g::Fuse::FileSystem::FileSystemOperations, _dispatcher), 0);
}

uType* FileSystemOperations_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(2, 3);
    type->MethodTypes[2] = type->NewMethodType(3, 3);
    type->fp_build_ = FileSystemOperations_build;
    type->fp_ctor_ = (void*)FileSystemOperations__New1_fn;
    return type;
}

// public FileSystemOperations() :1006
void FileSystemOperations__ctor__fn(FileSystemOperations* __this)
{
    __this->ctor_();
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) :1009
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher)
{
    __this->ctor_1(dispatcher);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) :1015
void FileSystemOperations__AppendTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) :1021
void FileSystemOperations__AppendTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->AppendTextToFileSync(path, text);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) :1028
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(path);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) :1034
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CreateDirectorySync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) :1041
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(path, *recursive);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) :1047
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->DeleteSync(path, *recursive);
}

// public Uno.Threading.Future<bool> Exists(string path) :1058
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(path);
}

// public bool ExistsSync(string path) :1064
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval)
{
    *__retval = __this->ExistsSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) :1072
void FileSystemOperations__GetDirectoryInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) :1078
void FileSystemOperations__GetDirectoryInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) :1084
void FileSystemOperations__GetFileInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(path);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) :1090
void FileSystemOperations__GetFileInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::FileSystemInfo** __retval)
{
    *__retval = __this->GetFileInfoSync(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) :1096
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(path);
}

// public string[] ListDirectoriesSync(string path) :1102
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListDirectoriesSync(path);
}

// public Uno.Threading.Future<string[]> ListEntries(string path) :1108
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(path);
}

// public string[] ListEntriesSync(string path) :1114
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListEntriesSync(path);
}

// public Uno.Threading.Future<string[]> ListFiles(string path) :1120
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(path);
}

// public string[] ListFilesSync(string path) :1126
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListFilesSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) :1132
void FileSystemOperations__Move_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(source, destination);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) :1138
void FileSystemOperations__MoveSync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->MoveSync(source, destination);
}

// public FileSystemOperations New() :1006
void FileSystemOperations__New1_fn(FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New1();
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) :1148
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(path);
}

// public byte[] ReadBufferFromFileSync(string path) :1154
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) :1161
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(path);
}

// public string ReadTextFromFileSync(string path) :1167
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval)
{
    *__retval = __this->ReadTextFromFileSync(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) :1200
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->RunTask(__type, del);
}

// private Uno.Threading.Future<TResult> RunTask<T1, TResult>(Uno.Func<T1, TResult> del, T1 arg1) :1208
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, TResult>*/),
    };
    FileSystemOperations__Closure* ret15;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure__Invoke_fn, (FileSystemOperations__Closure__New1_fn(__types[2], del, arg1, &ret15), ret15))), void();
}

// private Uno.Threading.Future<TResult> RunTask<T1, T2, TResult>(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :1214
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, T2, TResult>*/),
    };
    FileSystemOperations__Closure1* ret16;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure1__Invoke_fn, (FileSystemOperations__Closure1__New1_fn(__types[2], del, arg1, arg2, &ret16), ret16))), void();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) :1174
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(path, data);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) :1180
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteBufferToFileSync(path, data);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) :1187
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) :1193
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteTextToFileSync(path, text);
}

// public FileSystemOperations() [instance] :1006
void FileSystemOperations::ctor_()
{
    ctor_1(NULL);
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) [instance] :1009
void FileSystemOperations::ctor_1(uObject* dispatcher)
{
    _dispatcher = dispatcher;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) [instance] :1015
::g::Uno::Threading::Future1* FileSystemOperations::AppendTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret3;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[35/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[36/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__AppendTextToFileSync_fn, this), path, text, &ret3), ret3);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) [instance] :1021
::g::Fuse::FileSystem::Nothing* FileSystemOperations::AppendTextToFileSync(uString* path, uString* text)
{
    ::g::Uno::IO::File::AppendAllText(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) [instance] :1028
::g::Uno::Threading::Future1* FileSystemOperations::CreateDirectory(uString* path)
{
    ::g::Uno::Threading::Future1* ret4;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[37/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[38/*Uno.Func<string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__CreateDirectorySync_fn, this), path, &ret4), ret4);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) [instance] :1034
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CreateDirectorySync(uString* path)
{
    ::g::Uno::IO::Directory::CreateDirectory(path);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) [instance] :1041
::g::Uno::Threading::Future1* FileSystemOperations::Delete(uString* path, bool recursive)
{
    ::g::Uno::Threading::Future1* ret5;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[39/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[40/*Uno.Func<string, bool, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__DeleteSync_fn, this), path, uCRef(recursive), &ret5), ret5);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) [instance] :1047
::g::Fuse::FileSystem::Nothing* FileSystemOperations::DeleteSync(uString* path, bool recursive)
{
    if (::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::Delete(path, recursive);
    else
        ::g::Uno::IO::File::Delete(path);

    return NULL;
}

// public Uno.Threading.Future<bool> Exists(string path) [instance] :1058
::g::Uno::Threading::Future1* FileSystemOperations::Exists(uString* path)
{
    ::g::Uno::Threading::Future1* ret6;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[41/*Fuse.FileSystem.FileSystemOperations.RunTask<string, bool>*/], uDelegate::New(::TYPES[42/*Uno.Func<string, bool>*/], (void*)FileSystemOperations__ExistsSync_fn, this), path, &ret6), ret6);
}

// public bool ExistsSync(string path) [instance] :1064
bool FileSystemOperations::ExistsSync(uString* path)
{
    return ::g::Uno::IO::File::Exists(path) || ::g::Uno::IO::Directory::Exists(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetDirectoryInfo(string path) [instance] :1072
::g::Uno::Threading::Future1* FileSystemOperations::GetDirectoryInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret7;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[43/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.FileSystemInfo>*/], uDelegate::New(::TYPES[44/*Uno.Func<string, Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemOperations__GetDirectoryInfoSync_fn, this), path, &ret7), ret7);
}

// public Fuse.FileSystem.FileSystemInfo GetDirectoryInfoSync(string path) [instance] :1078
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetDirectoryInfoSync(uString* path)
{
    return ::g::Fuse::FileSystem::DirectoryInfo::New1(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.FileSystemInfo> GetFileInfo(string path) [instance] :1084
::g::Uno::Threading::Future1* FileSystemOperations::GetFileInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret8;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[43/*Fuse.FileSystem.FileSystemOperations.RunTask<string, Fuse.FileSystem.FileSystemInfo>*/], uDelegate::New(::TYPES[44/*Uno.Func<string, Fuse.FileSystem.FileSystemInfo>*/], (void*)FileSystemOperations__GetFileInfoSync_fn, this), path, &ret8), ret8);
}

// public Fuse.FileSystem.FileSystemInfo GetFileInfoSync(string path) [instance] :1090
::g::Fuse::FileSystem::FileSystemInfo* FileSystemOperations::GetFileInfoSync(uString* path)
{
    return ::g::Fuse::FileSystem::FileInfo::New1(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) [instance] :1096
::g::Uno::Threading::Future1* FileSystemOperations::ListDirectories(uString* path)
{
    ::g::Uno::Threading::Future1* ret9;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[45/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[46/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListDirectoriesSync_fn, this), path, &ret9), ret9);
}

// public string[] ListDirectoriesSync(string path) [instance] :1102
uArray* FileSystemOperations::ListDirectoriesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[47/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[48/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateDirectories(path), uDelegate::New(::TYPES[49/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListEntries(string path) [instance] :1108
::g::Uno::Threading::Future1* FileSystemOperations::ListEntries(uString* path)
{
    ::g::Uno::Threading::Future1* ret10;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[45/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[46/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListEntriesSync_fn, this), path, &ret10), ret10);
}

// public string[] ListEntriesSync(string path) [instance] :1114
uArray* FileSystemOperations::ListEntriesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[47/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[48/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFileSystemEntries(path), uDelegate::New(::TYPES[49/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListFiles(string path) [instance] :1120
::g::Uno::Threading::Future1* FileSystemOperations::ListFiles(uString* path)
{
    ::g::Uno::Threading::Future1* ret11;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[45/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string[]>*/], uDelegate::New(::TYPES[46/*Uno.Func<string, string[]>*/], (void*)FileSystemOperations__ListFilesSync_fn, this), path, &ret11), ret11);
}

// public string[] ListFilesSync(string path) [instance] :1126
uArray* FileSystemOperations::ListFilesSync(uString* path)
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[47/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[48/*Uno.Collections.EnumerableExtensions.Select<string, string>*/], ::g::Uno::IO::Directory::EnumerateFiles(path), uDelegate::New(::TYPES[49/*Uno.Func<string, string>*/], (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) [instance] :1132
::g::Uno::Threading::Future1* FileSystemOperations::Move(uString* source, uString* destination)
{
    ::g::Uno::Threading::Future1* ret12;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[35/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[36/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__MoveSync_fn, this), source, destination, &ret12), ret12);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) [instance] :1138
::g::Fuse::FileSystem::Nothing* FileSystemOperations::MoveSync(uString* source, uString* destination)
{
    if (::g::Uno::IO::Directory::Exists(source))
        ::g::Uno::IO::Directory::Move(source, destination);
    else
        ::g::Uno::IO::File::Move(source, destination);

    return NULL;
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) [instance] :1148
::g::Uno::Threading::Future1* FileSystemOperations::ReadBufferFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret13;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[50/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[]>*/], uDelegate::New(::TYPES[51/*Uno.Func<string, byte[]>*/], (void*)FileSystemOperations__ReadBufferFromFileSync_fn, this), path, &ret13), ret13);
}

// public byte[] ReadBufferFromFileSync(string path) [instance] :1154
uArray* FileSystemOperations::ReadBufferFromFileSync(uString* path)
{
    return ::g::Uno::IO::File::ReadAllBytes(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) [instance] :1161
::g::Uno::Threading::Future1* FileSystemOperations::ReadTextFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret14;
    return (FileSystemOperations__RunTask1_fn(this, ::TYPES[52/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string>*/], uDelegate::New(::TYPES[49/*Uno.Func<string, string>*/], (void*)FileSystemOperations__ReadTextFromFileSync_fn, this), path, &ret14), ret14);
}

// public string ReadTextFromFileSync(string path) [instance] :1167
uString* FileSystemOperations::ReadTextFromFileSync(uString* path)
{
    return ::g::Uno::IO::File::ReadAllText(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) [instance] :1200
::g::Uno::Threading::Future1* FileSystemOperations::RunTask(uType* __type, uDelegate* del)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };

    if (_dispatcher == NULL)
        return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(__types[0], del);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(__types[0], _dispatcher, del);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) [instance] :1174
::g::Uno::Threading::Future1* FileSystemOperations::WriteBufferToFile(uString* path, uArray* data)
{
    ::g::Uno::Threading::Future1* ret17;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[57/*Fuse.FileSystem.FileSystemOperations.RunTask<string, byte[], Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[58/*Uno.Func<string, byte[], Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteBufferToFileSync_fn, this), path, data, &ret17), ret17);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) [instance] :1180
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteBufferToFileSync(uString* path, uArray* data)
{
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) [instance] :1187
::g::Uno::Threading::Future1* FileSystemOperations::WriteTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret18;
    return (FileSystemOperations__RunTask2_fn(this, ::TYPES[35/*Fuse.FileSystem.FileSystemOperations.RunTask<string, string, Fuse.FileSystem.Nothing>*/], uDelegate::New(::TYPES[36/*Uno.Func<string, string, Fuse.FileSystem.Nothing>*/], (void*)FileSystemOperations__WriteTextToFileSync_fn, this), path, text, &ret18), ret18);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) [instance] :1193
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteTextToFileSync(uString* path, uString* text)
{
    ::g::Uno::IO::File::WriteAllText(path, text);
    return NULL;
}

// public FileSystemOperations New() [static] :1006
FileSystemOperations* FileSystemOperations::New1()
{
    FileSystemOperations* obj1 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal sealed class Nothing :1318
// {
static void Nothing_build(uType* type)
{
}

uType* Nothing_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.Nothing", options);
    type->fp_build_ = Nothing_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal static class PathTools :1333
// {
static void PathTools_build(uType* type)
{
}

uClassType* PathTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.PathTools", options);
    type->fp_build_ = PathTools_build;
    return type;
}

// public static string NormalizePath(string path) :1335
void PathTools__NormalizePath_fn(uString* path, uString** __retval)
{
    *__retval = PathTools::NormalizePath(path);
}

// public static string NormalizePath(string path) [static] :1335
uString* PathTools::NormalizePath(uString* path)
{
    if (::g::Uno::IO::Path::DirectorySeparatorChar() == '\\')
        return ::g::Uno::String::Replace(uPtr(path), '\\', '/');

    return path;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno
// ----------------------------------------------------------------------------------

// internal static extern class UnifiedPaths :1353
// {
static void UnifiedPaths_build(uType* type)
{
}

uClassType* UnifiedPaths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.UnifiedPaths", options);
    type->fp_build_ = UnifiedPaths_build;
    return type;
}

// public static string GetCacheDirectory() :1356
void UnifiedPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetCacheDirectory();
}

// public static string GetDataDirectory() :1363
void UnifiedPaths__GetDataDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetDataDirectory();
}

// public static string GetCacheDirectory() [static] :1356
uString* UnifiedPaths::GetCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCacheDirectory283", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetDataDirectory() [static] :1363
uString* UnifiedPaths::GetDataDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDataDirectory284", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}} // ::g::Fuse::FileSystem
