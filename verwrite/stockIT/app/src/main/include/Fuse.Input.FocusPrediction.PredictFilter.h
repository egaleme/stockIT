// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct FocusPrediction__PredictFilter;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class FocusPrediction.PredictFilter :89
// {
uType* FocusPrediction__PredictFilter_typeof();
void FocusPrediction__PredictFilter__ctor__fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Visual* origin, uDelegate* filter);
void FocusPrediction__PredictFilter__Filter_fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Node* node, bool* __retval);
void FocusPrediction__PredictFilter__New1_fn(::g::Fuse::Visual* origin, uDelegate* filter, FocusPrediction__PredictFilter** __retval);

struct FocusPrediction__PredictFilter : uObject
{
    uStrong<uDelegate*> _filter;
    uStrong< ::g::Fuse::Visual*> _origin;

    void ctor_(::g::Fuse::Visual* origin, uDelegate* filter);
    bool Filter(::g::Fuse::Node* node);
    static FocusPrediction__PredictFilter* New1(::g::Fuse::Visual* origin, uDelegate* filter);
};
// }

}}} // ::g::Fuse::Input
