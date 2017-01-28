// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public class Font :2486
// {
uType* Font_typeof();
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors);
void Font__get_FileSource_fn(Font* __this, ::g::Uno::UX::FileSource** __retval);
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval);
void Font__get_PlatformDefault_fn(Font** __retval);
void Font__get_PlatformDefaultSize_fn(float* __retval);
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval);

struct Font : uObject
{
    static uSStrong<Font*> _fallback_;
    static uSStrong<Font*>& _fallback() { return _fallback_; }
    uStrong< ::g::Uno::Collections::List*> Descriptors;

    void ctor_(::g::Uno::Collections::List* descriptors);
    ::g::Uno::UX::FileSource* FileSource();
    static Font* New1(::g::Uno::Collections::List* descriptors);
    static Font* PlatformDefault();
    static float PlatformDefaultSize();
    static ::g::Uno::Float4 PlatformDefaultTextColor();
};
// }

}} // ::g::Fuse
