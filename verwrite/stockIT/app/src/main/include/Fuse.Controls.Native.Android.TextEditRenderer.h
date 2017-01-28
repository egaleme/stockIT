// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEditRenderer;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class TextEditRenderer :2566
// {
struct TextEditRenderer_type : uType
{
    ::g::Fuse::Controls::Native::INativeViewRenderer interface0;
    ::g::Uno::IDisposable interface1;
};

TextEditRenderer_type* TextEditRenderer_typeof();
void TextEditRenderer__ctor__fn(TextEditRenderer* __this, ::g::Java::Object* soruce);
void TextEditRenderer__CopyState_fn(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
void TextEditRenderer__CreateContainer_fn(::g::Java::Object** __retval);
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval);
void TextEditRenderer__FuseControlsNativeINativeViewRendererDraw_fn(TextEditRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void TextEditRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(TextEditRenderer* __this);
void TextEditRenderer__New1_fn(::g::Java::Object* soruce, TextEditRenderer** __retval);
void TextEditRenderer__UnoIDisposableDispose_fn(TextEditRenderer* __this);

struct TextEditRenderer : uObject
{
    uStrong< ::g::Java::Object*> _container;
    uStrong<uObject*> _nativeViewRenderer;
    uStrong< ::g::Java::Object*> _source;
    uStrong< ::g::Java::Object*> _target;
    bool _valid;

    void ctor_(::g::Java::Object* soruce);
    static void CopyState(::g::Java::Object* container, ::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle);
    static ::g::Java::Object* CreateContainer();
    static ::g::Java::Object* CreateTextEdit();
    static TextEditRenderer* New1(::g::Java::Object* soruce);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
