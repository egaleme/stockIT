// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class MemoryPolicy :270
// {
uType* MemoryPolicy_typeof();
void MemoryPolicy__ctor__fn(MemoryPolicy* __this);
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval);
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value);
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval);
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value);
void MemoryPolicy__New1_fn(MemoryPolicy** __retval);
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int* dr, uObject* resource, bool* __retval);
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval);
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value);
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval);
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value);
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval);
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value);

struct MemoryPolicy : uObject
{
    static uSStrong<MemoryPolicy*> PreloadRetain_;
    static uSStrong<MemoryPolicy*>& PreloadRetain() { return MemoryPolicy_typeof()->Init(), PreloadRetain_; }
    static uSStrong<MemoryPolicy*> UnloadUnused_;
    static uSStrong<MemoryPolicy*>& UnloadUnused() { return MemoryPolicy_typeof()->Init(), UnloadUnused_; }
    bool _AllowPinnedFree;
    bool _BundlePreload;
    bool _UnloadInBackground;
    bool _UnpinInvisible;
    double _UnusedTimeout;

    void ctor_();
    bool AllowPinnedFree();
    void AllowPinnedFree(bool value);
    bool BundlePreload();
    void BundlePreload(bool value);
    bool ShouldSoftDispose(int dr, uObject* resource);
    bool UnloadInBackground();
    void UnloadInBackground(bool value);
    bool UnpinInvisible();
    void UnpinInvisible(bool value);
    double UnusedTimeout();
    void UnusedTimeout(double value);
    static MemoryPolicy* New1();
};
// }

}}} // ::g::Fuse::Resources
