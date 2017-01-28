// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.FileSystem\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace FileSystem{struct AndroidPaths;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed extern class AndroidPaths :11
// {
uType* AndroidPaths_typeof();
void AndroidPaths__GetCacheDirectory_fn(uString** __retval);
void AndroidPaths__GetExternalCacheDirectory_fn(uString** __retval);
void AndroidPaths__GetExternalFilesDirectory_fn(uString** __retval);
void AndroidPaths__GetFilesDirectory_fn(uString** __retval);
void AndroidPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval);

struct AndroidPaths : uObject
{
    static uString* GetCacheDirectory();
    static uString* GetExternalCacheDirectory();
    static uString* GetExternalFilesDirectory();
    static uString* GetFilesDirectory();
    static ::g::Uno::Collections::Dictionary* GetPathDictionary();
};
// }

}}} // ::g::Fuse::FileSystem
