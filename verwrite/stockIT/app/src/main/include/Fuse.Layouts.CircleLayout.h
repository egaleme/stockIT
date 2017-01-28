// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\layouts\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct CircleLayout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class CircleLayout :34
// {
::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void CircleLayout__GetContentSize_fn(CircleLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval);
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value);

struct CircleLayout : ::g::Fuse::Layouts::Layout
{
    float _endAngle;
    float _itemSpacing;
    float _radius;
    float _startAngle;

    float Radius();
    void Radius(float value);
};
// }

}}} // ::g::Fuse::Layouts
