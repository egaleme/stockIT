// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Marshal.IConverter.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct FileSourceConverter;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class FileSourceConverter :967
// {
struct FileSourceConverter_type : uType
{
    ::g::Fuse::Scripting::Marshal__IConverter interface0;
};

FileSourceConverter_type* FileSourceConverter_typeof();
void FileSourceConverter__ctor__fn(FileSourceConverter* __this);
void FileSourceConverter__CanConvert_fn(FileSourceConverter* __this, uType* t, bool* __retval);
void FileSourceConverter__New1_fn(FileSourceConverter** __retval);
void FileSourceConverter__TryConvert_fn(FileSourceConverter* __this, uType* t, uObject* obj, uObject** __retval);

struct FileSourceConverter : uObject
{
    void ctor_();
    bool CanConvert(uType* t);
    uObject* TryConvert(uType* t, uObject* obj);
    static FileSourceConverter* New1();
};
// }

}}} // ::g::Fuse::Scripting
