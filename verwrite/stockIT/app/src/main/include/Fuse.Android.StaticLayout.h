// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct Canvas;}}}
namespace g{namespace Fuse{namespace Android{struct StaticLayout;}}}
namespace g{namespace Fuse{namespace Android{struct TextPaint;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{

// internal sealed extern class StaticLayout :166
// {
uType* StaticLayout_typeof();
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle);
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad);
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith);
void StaticLayout__Create_fn(uString* text, int* bufStart, int* bufEnd, ::g::Java::Object* paintHandle, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, ::g::Java::Object** __retval);
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval);
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Canvas* canvas);
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle);
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int* __retval);
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, float* __retval);
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval);
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int* __retval);
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int* __retval);
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int* line, int* __retval);
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int* line, int* __retval);
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int* __retval);
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int* line, int* __retval);
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int* line, int* __retval);
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int* line, float* __retval);
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int* line, float* __retval);
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int* line, int* __retval);
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int* line, int* __retval);
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval);
void StaticLayout__get_Height_fn(StaticLayout* __this, int* __retval);
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int* __retval);
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval);
void StaticLayout__New3_fn(uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, StaticLayout** __retval);

struct StaticLayout : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_(::g::Java::Object* handle);
    void ctor_1(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad);
    void ctor_2(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith);
    void Draw(::g::Fuse::Android::Canvas* canvas);
    int EllipsizedWidth();
    int GetLineBaseline(int line);
    int GetLineEnd(int line);
    float GetLineLeft(int line);
    int GetLineStart(int line);
    ::g::Java::Object* Handle();
    int Height();
    int LineCount();
    static ::g::Java::Object* Create(uString* text, int bufStart, int bufEnd, ::g::Java::Object* paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith);
    static ::g::Java::Object* Create1(uString* text, ::g::Java::Object* paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad);
    static void Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle);
    static float GetDesiredWidth(uString* text, ::g::Fuse::Android::TextPaint* paint);
    static float GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle);
    static int GetEllipsizedWidth(::g::Java::Object* handle);
    static int GetHeight(::g::Java::Object* handle);
    static int GetLineBaseline1(::g::Java::Object* handle, int line);
    static int GetLineCount(::g::Java::Object* handle);
    static int GetLineEnd1(::g::Java::Object* handle, int line);
    static float GetLineLeft1(::g::Java::Object* handle, int line);
    static int GetLineStart1(::g::Java::Object* handle, int line);
    static StaticLayout* New2(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad);
    static StaticLayout* New3(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith);
};
// }

}}} // ::g::Fuse::Android
