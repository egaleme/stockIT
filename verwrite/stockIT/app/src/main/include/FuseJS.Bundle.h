// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseJS\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace FuseJS{struct Bundle;}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace FuseJS{

// public sealed class Bundle :690
// {
::g::Fuse::Scripting::NativeModule_type* Bundle_typeof();
void Bundle__ctor_2_fn(Bundle* __this);
void Bundle__New2_fn(Bundle** __retval);
void Bundle__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void Bundle__Read1_fn(uString* filename, uString** __retval);
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval);
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval);
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval);

struct Bundle : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Bundle*> _instance_;
    static uSStrong<Bundle*>& _instance() { return _instance_; }

    void ctor_2();
    static Bundle* New2();
    static uObject* Read(::g::Fuse::Scripting::Context* c, uArray* args);
    static uString* Read1(uString* filename);
    static ::g::Uno::Threading::Future1* ReadAsync(uArray* args);
    static ::g::Uno::Threading::Future1* ReadAsync1(uString* filename);
    static bool TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile);
};
// }

}} // ::g::FuseJS
