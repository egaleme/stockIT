// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace FileSystem{struct UnifiedPaths;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal static extern class UnifiedPaths :1353
// {
uClassType* UnifiedPaths_typeof();
void UnifiedPaths__GetCacheDirectory_fn(uString** __retval);
void UnifiedPaths__GetDataDirectory_fn(uString** __retval);

struct UnifiedPaths : uObject
{
    static uString* GetCacheDirectory();
    static uString* GetDataDirectory();
};
// }

}}} // ::g::Fuse::FileSystem
