// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Elements{struct PreplacementArgs;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class PreplacementArgs :1646
// {
uType* PreplacementArgs_typeof();
void PreplacementArgs__ctor_1_fn(PreplacementArgs* __this, bool* hasPrev);
void PreplacementArgs__get_HasPrev_fn(PreplacementArgs* __this, bool* __retval);
void PreplacementArgs__set_HasPrev_fn(PreplacementArgs* __this, bool* value);
void PreplacementArgs__New2_fn(bool* hasPrev, PreplacementArgs** __retval);

struct PreplacementArgs : ::g::Uno::EventArgs
{
    bool _HasPrev;

    void ctor_1(bool hasPrev);
    bool HasPrev();
    void HasPrev(bool value);
    static PreplacementArgs* New2(bool hasPrev);
};
// }

}}} // ::g::Fuse::Elements
