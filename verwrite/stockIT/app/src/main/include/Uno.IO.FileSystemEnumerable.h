// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerable;}}}

namespace g{
namespace Uno{
namespace IO{

// internal sealed class FileSystemEnumerable :1741
// {
struct FileSystemEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

FileSystemEnumerable_type* FileSystemEnumerable_typeof();
void FileSystemEnumerable__ctor__fn(FileSystemEnumerable* __this, uString* dirName, int* mode);
void FileSystemEnumerable__GetEnumerator_fn(FileSystemEnumerable* __this, uObject** __retval);
void FileSystemEnumerable__New1_fn(uString* dirName, int* mode, FileSystemEnumerable** __retval);

struct FileSystemEnumerable : uObject
{
    uStrong<uString*> _dirName;
    int _mode;

    void ctor_(uString* dirName, int mode);
    uObject* GetEnumerator();
    static FileSystemEnumerable* New1(uString* dirName, int mode);
};
// }

}}} // ::g::Uno::IO
