// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class Stroke :319
// {
struct Stroke_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
};

Stroke_type* Stroke_typeof();
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval);
void Stroke__set_Adjustment_fn(Stroke* __this, int* value);
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval);
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval);
void Stroke__set_Alignment_fn(Stroke* __this, int* value);
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval);
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value);
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval);
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value);
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* ppi, ::g::Uno::Float2* __retval);
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval);
void Stroke__get_Offset_fn(Stroke* __this, float* __retval);
void Stroke__set_Offset_fn(Stroke* __this, float* value);
void Stroke__OnPinned_fn(Stroke* __this);
void Stroke__OnUnpinned_fn(Stroke* __this);
void Stroke__Pin_fn(Stroke* __this);
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Stroke__SetColor_fn(Stroke* __this, ::g::Uno::Float4* color, uObject* origin);
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Stroke__Unpin_fn(Stroke* __this);
void Stroke__get_Width_fn(Stroke* __this, float* __retval);
void Stroke__set_Width_fn(Stroke* __this, float* value);

struct Stroke : ::g::Uno::UX::PropertyObject
{
    int _adjustment;
    static ::g::Uno::UX::Selector _adjustmentName_;
    static ::g::Uno::UX::Selector& _adjustmentName() { return Stroke_typeof()->Init(), _adjustmentName_; }
    int _alignment;
    static ::g::Uno::UX::Selector _alignmentName_;
    static ::g::Uno::UX::Selector& _alignmentName() { return Stroke_typeof()->Init(), _alignmentName_; }
    uStrong< ::g::Fuse::Drawing::Brush*> _brush;
    static ::g::Uno::UX::Selector _brushName_;
    static ::g::Uno::UX::Selector& _brushName() { return Stroke_typeof()->Init(), _brushName_; }
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return Stroke_typeof()->Init(), _colorName_; }
    static ::g::Uno::UX::Selector _lineCapName_;
    static ::g::Uno::UX::Selector& _lineCapName() { return Stroke_typeof()->Init(), _lineCapName_; }
    static ::g::Uno::UX::Selector _lineJoinName_;
    static ::g::Uno::UX::Selector& _lineJoinName() { return Stroke_typeof()->Init(), _lineJoinName_; }
    float _offset;
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return Stroke_typeof()->Init(), _offsetName_; }
    int _pinCount;
    static ::g::Uno::UX::Selector _shadingName_;
    static ::g::Uno::UX::Selector& _shadingName() { return Stroke_typeof()->Init(), _shadingName_; }
    float _width;
    static ::g::Uno::UX::Selector _widthName_;
    static ::g::Uno::UX::Selector& _widthName() { return Stroke_typeof()->Init(), _widthName_; }

    float Adjust(float w, float ppi);
    int Adjustment();
    void Adjustment(int value);
    float AdjustPosition(float w, float ppi);
    int Alignment();
    void Alignment(int value);
    ::g::Fuse::Drawing::Brush* Brush();
    void Brush(::g::Fuse::Drawing::Brush* value);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Uno::Float2 GetDeviceAdjusted(float ppi);
    bool IsPinned();
    float Offset();
    void Offset(float value);
    void OnPinned();
    void OnUnpinned();
    void Pin();
    void Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void SetColor(::g::Uno::Float4 color, uObject* origin);
    void Unpin();
    float Width();
    void Width(float value);
};
// }

}}} // ::g::Fuse::Drawing
