// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Capturer;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class Capturer :925
// {
uType* Capturer_typeof();
void Capturer__ctor__fn(Capturer* __this, ::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback);
void Capturer__get_Identity_fn(Capturer* __this, uObject** __retval);
void Capturer__set_Identity_fn(Capturer* __this, uObject* value);
void Capturer__get_IsSuitable_fn(Capturer* __this, bool* __retval);
void Capturer__get_LostCallback_fn(Capturer* __this, uDelegate** __retval);
void Capturer__set_LostCallback_fn(Capturer* __this, uDelegate* value);
void Capturer__New1_fn(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback, Capturer** __retval);
void Capturer__get_Visual_fn(Capturer* __this, ::g::Fuse::Visual** __retval);
void Capturer__set_Visual_fn(Capturer* __this, ::g::Fuse::Visual* value);

struct Capturer : uObject
{
    uStrong<uObject*> _Identity;
    uStrong<uDelegate*> _LostCallback;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback);
    uObject* Identity();
    void Identity(uObject* value);
    bool IsSuitable();
    uDelegate* LostCallback();
    void LostCallback(uDelegate* value);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static Capturer* New1(::g::Fuse::Visual* n, uObject* identity, uDelegate* lostCallback);
};
// }

}}} // ::g::Fuse::Input
