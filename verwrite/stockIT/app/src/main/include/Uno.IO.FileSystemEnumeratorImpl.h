// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
class CppXliFileSystemEnumerator;
namespace g{namespace Uno{namespace IO{struct FileSystemEnumeratorImpl;}}}

namespace g{
namespace Uno{
namespace IO{

// internal static class FileSystemEnumeratorImpl :1840
// {
uClassType* FileSystemEnumeratorImpl_typeof();
void FileSystemEnumeratorImpl__Dispose_fn(::CppXliFileSystemEnumerator** handle);
void FileSystemEnumeratorImpl__GetName_fn(::CppXliFileSystemEnumerator** handle, uString** __retval);
void FileSystemEnumeratorImpl__IsDirectory_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);
void FileSystemEnumeratorImpl__MoveNext_fn(::CppXliFileSystemEnumerator** handle, bool* __retval);
void FileSystemEnumeratorImpl__Reset_fn(::CppXliFileSystemEnumerator** handle);

struct FileSystemEnumeratorImpl : uObject
{
    static void Dispose(::CppXliFileSystemEnumerator* handle);
    static uString* GetName(::CppXliFileSystemEnumerator* handle);
    static bool IsDirectory(::CppXliFileSystemEnumerator* handle);
    static bool MoveNext(::CppXliFileSystemEnumerator* handle);
    static void Reset(::CppXliFileSystemEnumerator* handle);
};
// }

}}} // ::g::Uno::IO
