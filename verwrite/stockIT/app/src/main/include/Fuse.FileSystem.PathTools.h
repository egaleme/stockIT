// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace FileSystem{struct PathTools;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal static class PathTools :1333
// {
uClassType* PathTools_typeof();
void PathTools__NormalizePath_fn(uString* path, uString** __retval);

struct PathTools : uObject
{
    static uString* NormalizePath(uString* path);
};
// }

}}} // ::g::Fuse::FileSystem
