// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct FocusLostArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class FocusLostArgs :27
// {
::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof();
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Visual* visual);
void FocusLostArgs__New3_fn(::g::Fuse::Visual* visual, FocusLostArgs** __retval);

struct FocusLostArgs : ::g::Fuse::VisualEventArgs
{
    void ctor_2(::g::Fuse::Visual* visual);
    static FocusLostArgs* New3(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
