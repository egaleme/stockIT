// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitioned;}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitionedArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public static class LayoutTransition :26
// {
uClassType* LayoutTransition_typeof();
void LayoutTransition__GetPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos, bool* __retval);
void LayoutTransition__GetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize, bool* __retval);
void LayoutTransition__GetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* __retval);
void LayoutTransition__SetPositionChange_fn(::g::Fuse::Visual* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos);
void LayoutTransition__SetSizeChange_fn(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize);
void LayoutTransition__SetWorldPositionChange_fn(::g::Fuse::Node* n, ::g::Uno::Float3* change);
void LayoutTransition__get_Transitioned_fn(::g::Fuse::VisualEvent** __retval);

struct LayoutTransition : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _positionChange_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _positionChange() { return LayoutTransition_typeof()->Init(), _positionChange_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _sizeChange_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _sizeChange() { return LayoutTransition_typeof()->Init(), _sizeChange_; }
    static uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*> _transitioned_;
    static uSStrong< ::g::Fuse::Triggers::LayoutTransitioned*>& _transitioned() { return LayoutTransition_typeof()->Init(), _transitioned_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _worldPositionChange_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _worldPositionChange() { return LayoutTransition_typeof()->Init(), _worldPositionChange_; }
    static uSStrong<uObject*> PositionChange_;
    static uSStrong<uObject*>& PositionChange() { return LayoutTransition_typeof()->Init(), PositionChange_; }
    static uSStrong<uObject*> PositionLayoutChange_;
    static uSStrong<uObject*>& PositionLayoutChange() { return LayoutTransition_typeof()->Init(), PositionLayoutChange_; }
    static uSStrong<uObject*> ResizeSizeChange_;
    static uSStrong<uObject*>& ResizeSizeChange() { return LayoutTransition_typeof()->Init(), ResizeSizeChange_; }
    static uSStrong<uObject*> ScalingSizeChange_;
    static uSStrong<uObject*>& ScalingSizeChange() { return LayoutTransition_typeof()->Init(), ScalingSizeChange_; }
    static uSStrong<uObject*> SizeLayoutChange_;
    static uSStrong<uObject*>& SizeLayoutChange() { return LayoutTransition_typeof()->Init(), SizeLayoutChange_; }
    static uSStrong<uObject*> WorldPositionChange_;
    static uSStrong<uObject*>& WorldPositionChange() { return LayoutTransition_typeof()->Init(), WorldPositionChange_; }

    static bool GetPositionChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldPos, ::g::Uno::Float2* newPos);
    static bool GetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2* oldSize, ::g::Uno::Float2* newSize);
    static ::g::Uno::Float3 GetWorldPositionChange(::g::Fuse::Node* n);
    static void SetPositionChange(::g::Fuse::Visual* n, ::g::Uno::Float2 oldPos, ::g::Uno::Float2 newPos);
    static void SetSizeChange(::g::Fuse::Node* n, ::g::Uno::Float2 oldSize, ::g::Uno::Float2 newSize);
    static void SetWorldPositionChange(::g::Fuse::Node* n, ::g::Uno::Float3 change);
    static ::g::Fuse::VisualEvent* Transitioned();
};
// }

}}} // ::g::Fuse::Triggers
