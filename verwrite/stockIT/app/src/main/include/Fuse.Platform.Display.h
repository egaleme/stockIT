// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Platform\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Platform{struct Display;}}}
namespace g{namespace Uno{namespace Platform2{struct Display;}}}

namespace g{
namespace Fuse{
namespace Platform{

// internal sealed class Display :167
// {
uType* Display_typeof();
void Display__get_MainDisplay_fn(::g::Uno::Platform2::Display** __retval);

struct Display : uObject
{
    static ::g::Uno::Platform2::Display* MainDisplay();
};
// }

}}} // ::g::Fuse::Platform
