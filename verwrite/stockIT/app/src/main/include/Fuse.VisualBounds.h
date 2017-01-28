// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Geometry.Box.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{

// public sealed class VisualBounds :4843
// {
uType* VisualBounds_typeof();
void VisualBounds__ctor__fn(VisualBounds* __this);
void VisualBounds__AddRect_fn(VisualBounds* __this, ::g::Uno::Float2* mn, ::g::Uno::Float2* mx, VisualBounds** __retval);
void VisualBounds__AddRect1_fn(VisualBounds* __this, ::g::Uno::Rect* r, VisualBounds** __retval);
void VisualBounds__get_AxisMax_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__get_AxisMin_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__Box_fn(::g::Uno::Geometry::Box* a, VisualBounds** __retval);
void VisualBounds__BoxTransform_fn(::g::Uno::Geometry::Box* box, ::g::Uno::Float4x4* transform, ::g::Uno::Geometry::Box* __retval);
void VisualBounds__ContainsPoint_fn(VisualBounds* __this, ::g::Uno::Float2* pt, bool* __retval);
void VisualBounds__get_Empty_fn(VisualBounds** __retval);
void VisualBounds__get_FlatRect_fn(VisualBounds* __this, ::g::Uno::Rect* __retval);
void VisualBounds__get_Infinite_fn(VisualBounds** __retval);
void VisualBounds__InflateXY_fn(VisualBounds* __this, float* padding, VisualBounds** __retval);
void VisualBounds__IntersectsRay_fn(VisualBounds* __this, ::g::Uno::Geometry::Ray* ray, bool* __retval);
void VisualBounds__IntersectXY_fn(VisualBounds* __this, VisualBounds* nb, VisualBounds** __retval);
void VisualBounds__get_IsEmpty_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__get_IsFlat_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__get_IsInfinite_fn(VisualBounds* __this, bool* __retval);
void VisualBounds__Merge_fn(VisualBounds* __this, VisualBounds* nb, ::g::Fuse::FastMatrix* trans, VisualBounds** __retval);
void VisualBounds__MergeChild_fn(VisualBounds* __this, ::g::Fuse::Visual* child, VisualBounds* nb, VisualBounds** __retval);
void VisualBounds__New1_fn(VisualBounds** __retval);
void VisualBounds__Rect_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, VisualBounds** __retval);
void VisualBounds__Rect1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, VisualBounds** __retval);
void VisualBounds__Scale_fn(VisualBounds* __this, ::g::Uno::Float3* factor, VisualBounds** __retval);
void VisualBounds__get_Size_fn(VisualBounds* __this, ::g::Uno::Float3* __retval);
void VisualBounds__Translate_fn(VisualBounds* __this, ::g::Uno::Float3* offset, VisualBounds** __retval);

struct VisualBounds : uObject
{
    ::g::Uno::Geometry::Box _box;
    static uSStrong<VisualBounds*> _empty_;
    static uSStrong<VisualBounds*>& _empty() { return VisualBounds_typeof()->Init(), _empty_; }
    static uSStrong<VisualBounds*> _infinite_;
    static uSStrong<VisualBounds*>& _infinite() { return VisualBounds_typeof()->Init(), _infinite_; }

    void ctor_();
    VisualBounds* AddRect(::g::Uno::Float2 mn, ::g::Uno::Float2 mx);
    VisualBounds* AddRect1(::g::Uno::Rect r);
    ::g::Uno::Float3 AxisMax();
    ::g::Uno::Float3 AxisMin();
    bool ContainsPoint(::g::Uno::Float2 pt);
    ::g::Uno::Rect FlatRect();
    VisualBounds* InflateXY(float padding);
    bool IntersectsRay(::g::Uno::Geometry::Ray ray);
    VisualBounds* IntersectXY(VisualBounds* nb);
    bool IsEmpty();
    bool IsFlat();
    bool IsInfinite();
    VisualBounds* Merge(VisualBounds* nb, ::g::Fuse::FastMatrix* trans);
    VisualBounds* MergeChild(::g::Fuse::Visual* child, VisualBounds* nb);
    VisualBounds* Scale(::g::Uno::Float3 factor);
    ::g::Uno::Float3 Size();
    VisualBounds* Translate(::g::Uno::Float3 offset);
    static VisualBounds* Box(::g::Uno::Geometry::Box a);
    static ::g::Uno::Geometry::Box BoxTransform(::g::Uno::Geometry::Box box, ::g::Uno::Float4x4 transform);
    static VisualBounds* New1();
    static VisualBounds* Rect(::g::Uno::Float2 a, ::g::Uno::Float2 b);
    static VisualBounds* Rect1(::g::Uno::Float3 a, ::g::Uno::Float3 b);
    static VisualBounds* Empty();
    static VisualBounds* Infinite();
};
// }

}} // ::g::Fuse
