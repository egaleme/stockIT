// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Primitives.Coverage.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// internal sealed class StrokeCoverage :213
// {
uType* StrokeCoverage_typeof();
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this);
void StrokeCoverage__New1_fn(StrokeCoverage** __retval);

struct StrokeCoverage : ::g::Fuse::Drawing::Primitives::Coverage
{
    float Center;
    float Radius;

    void ctor_1();
    static StrokeCoverage* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
