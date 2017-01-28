// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace FileSystem{struct FileStatus;}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileStatusHelpers;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal static extern class FileStatusHelpers :186
// {
uClassType* FileStatusHelpers_typeof();
void FileStatusHelpers__GetFileStatus_fn(uString* path, ::g::Fuse::FileSystem::FileStatus** __retval);
void FileStatusHelpers__UnixTimeToZoned_fn(int64_t* sec, ::g::Uno::Time::ZonedDateTime** __retval);

struct FileStatusHelpers : uObject
{
    static ::g::Fuse::FileSystem::FileStatus* GetFileStatus(uString* path);
    static ::g::Uno::Time::ZonedDateTime* UnixTimeToZoned(int64_t sec);
};
// }

}}} // ::g::Fuse::FileSystem
