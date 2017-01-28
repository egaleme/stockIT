// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseJS\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace FuseJS{struct Globals;}}

namespace g{
namespace FuseJS{

// public sealed class Globals :10
// {
::g::Fuse::Scripting::NativeModule_type* Globals_typeof();
void Globals__ctor_2_fn(Globals* __this);
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval);
void Globals__New2_fn(Globals** __retval);
void Globals__readAsText_fn(uArray* args, uString** __retval);

struct Globals : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Globals*> _instance_;
    static uSStrong<Globals*>& _instance() { return _instance_; }

    void ctor_2();
    static bool FileSourceAcceptor(uObject* obj);
    static Globals* New2();
    static uString* readAsText(uArray* args);
};
// }

}} // ::g::FuseJS
