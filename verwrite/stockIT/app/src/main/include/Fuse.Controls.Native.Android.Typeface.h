// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Typeface;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Typeface :2963
// {
uType* Typeface_typeof();
void Typeface__ctor__fn(Typeface* __this, ::g::Java::Object* handle);
void Typeface__CreateFromBundleFile_fn(uString* bundlePath, ::g::Java::Object** __retval);
void Typeface__CreateFromBundleFile1_fn(::g::Uno::IO::BundleFile* file, Typeface** __retval);
void Typeface__CreateFromFile_fn(uString* path, Typeface** __retval);
void Typeface__CreateFromFileImpl_fn(uString* path, ::g::Java::Object** __retval);
void Typeface__get_Default_fn(Typeface** __retval);
void Typeface__Equals_fn(Typeface* __this, uObject* obj, bool* __retval);
void Typeface__GetDefault_fn(::g::Java::Object** __retval);
void Typeface__GetHashCode_fn(Typeface* __this, int* __retval);
void Typeface__get_Handle_fn(Typeface* __this, ::g::Java::Object** __retval);
void Typeface__New1_fn(::g::Java::Object* handle, Typeface** __retval);

struct Typeface : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_(::g::Java::Object* handle);
    ::g::Java::Object* Handle();
    static ::g::Java::Object* CreateFromBundleFile(uString* bundlePath);
    static Typeface* CreateFromBundleFile1(::g::Uno::IO::BundleFile* file);
    static Typeface* CreateFromFile(uString* path);
    static ::g::Java::Object* CreateFromFileImpl(uString* path);
    static ::g::Java::Object* GetDefault();
    static Typeface* New1(::g::Java::Object* handle);
    static Typeface* Default();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
