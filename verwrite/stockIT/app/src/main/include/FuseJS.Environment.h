// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseJS\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace FuseJS{struct Environment;}}

namespace g{
namespace FuseJS{

// public sealed class Environment :377
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof();
void Environment__ctor_2_fn(Environment* __this);
void Environment__GetMobileOSVersion_fn(uString** __retval);
void Environment__New2_fn(Environment** __retval);

struct Environment : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Environment*> _instance_;
    static uSStrong<Environment*>& _instance() { return _instance_; }

    void ctor_2();
    static uString* GetMobileOSVersion();
    static Environment* New2();
};
// }

}} // ::g::FuseJS
