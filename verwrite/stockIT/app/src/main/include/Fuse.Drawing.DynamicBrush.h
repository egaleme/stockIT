// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
namespace g{namespace Fuse{namespace Drawing{struct DynamicBrush;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract class DynamicBrush :164
// {
::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();
void DynamicBrush__ctor_2_fn(DynamicBrush* __this);
void DynamicBrush__get_BlendMode_fn(DynamicBrush* __this, int* __retval);
void DynamicBrush__set_BlendMode_fn(DynamicBrush* __this, int* value);
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval);
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval);
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value);

struct DynamicBrush : ::g::Fuse::Drawing::Brush
{
    int _blendMode;
    static ::g::Uno::UX::Selector _blendModeName_;
    static ::g::Uno::UX::Selector& _blendModeName() { return DynamicBrush_typeof()->Init(), _blendModeName_; }
    float _opacity;
    static ::g::Uno::UX::Selector _opacityName_;
    static ::g::Uno::UX::Selector& _opacityName() { return DynamicBrush_typeof()->Init(), _opacityName_; }

    void ctor_2();
    int BlendMode();
    void BlendMode(int value);
    float Opacity();
    void Opacity(float value);
};
// }

}}} // ::g::Fuse::Drawing
