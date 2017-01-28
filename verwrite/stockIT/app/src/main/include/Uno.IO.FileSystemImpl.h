// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
class CppXliFileSystemEnumerator;
namespace g{namespace Uno{namespace IO{struct FileSystemImpl;}}}
namespace uBase { class Stream; }

namespace g{
namespace Uno{
namespace IO{

// internal static class FileSystemImpl :1898
// {
uClassType* FileSystemImpl_typeof();
void FileSystemImpl__AppendAllText_fn(uString* filename, uString* contents);
void FileSystemImpl__CppXliOpen_fn(uString* filename, int* filemode, uBase::Stream** __retval);
void FileSystemImpl__CppXliOpenRead_fn(uString* filename, uBase::Stream** __retval);
void FileSystemImpl__CreateDirectory_fn(uString* dirName);
void FileSystemImpl__DeleteDirectory_fn(uString* dirName, bool* recursive);
void FileSystemImpl__DeleteFile_fn(uString* filename);
void FileSystemImpl__GetCurrentDirectory_fn(uString** __retval);
void FileSystemImpl__GetEnumerator_fn(uString* dirName, ::CppXliFileSystemEnumerator** __retval);
void FileSystemImpl__GetUserDirectory_fn(int* dir, uString** __retval);
void FileSystemImpl__IsDirectory_fn(uString* filename, bool* __retval);
void FileSystemImpl__IsFile_fn(uString* filename, bool* __retval);
void FileSystemImpl__MoveDirectory_fn(uString* oldName, uString* newName);
void FileSystemImpl__MoveFile_fn(uString* oldName, uString* newName);
void FileSystemImpl__ReadAllBytes_fn(uString* filename, uArray** __retval);
void FileSystemImpl__ReadAllText_fn(uString* filename, uString** __retval);
void FileSystemImpl__WriteAllBytes_fn(uString* filename, uArray* bytes);
void FileSystemImpl__WriteAllText_fn(uString* filename, uString* text);

struct FileSystemImpl : uObject
{
    static void AppendAllText(uString* filename, uString* contents);
    static uBase::Stream* CppXliOpen(uString* filename, int filemode);
    static uBase::Stream* CppXliOpenRead(uString* filename);
    static void CreateDirectory(uString* dirName);
    static void DeleteDirectory(uString* dirName, bool recursive);
    static void DeleteFile(uString* filename);
    static uString* GetCurrentDirectory();
    static ::CppXliFileSystemEnumerator* GetEnumerator(uString* dirName);
    static uString* GetUserDirectory(int dir);
    static bool IsDirectory(uString* filename);
    static bool IsFile(uString* filename);
    static void MoveDirectory(uString* oldName, uString* newName);
    static void MoveFile(uString* oldName, uString* newName);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
