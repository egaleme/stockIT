// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Brush.Converter.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.LinearGradientDrawable.h>
#include <Fuse.Drawing.RepeatBaker.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAdjustment.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Marshal.IConverter.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Color.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[23];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Drawing{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public enum BlendMode :8
uEnumType* BlendMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.BlendMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Normal", 0LL,
        "Add", 1LL,
        "Screen", 2LL,
        "Multiply", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public static class BlendModeHelpers :17
// {
// static BlendModeHelpers() :17
static void BlendModeHelpers__cctor__fn(uType* __type)
{
    BlendModeHelpers::_invalidBlendMode_ = ::STRINGS[0/*"Invalid ble...*/];
}

static void BlendModeHelpers_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid blend mode");
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&::g::Fuse::Drawing::BlendModeHelpers::_invalidBlendMode_, uFieldFlagsStatic);
}

uClassType* BlendModeHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.BlendModeHelpers", options);
    type->fp_build_ = BlendModeHelpers_build;
    type->fp_cctor_ = BlendModeHelpers__cctor__fn;
    return type;
}

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) :60
void BlendModeHelpers__GetDstAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) :34
void BlendModeHelpers__GetDstRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetDstRgb(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) :47
void BlendModeHelpers__GetSrcAlpha_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcAlpha(*mode);
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) :21
void BlendModeHelpers__GetSrcRgb_fn(int* mode, int* __retval)
{
    *__retval = BlendModeHelpers::GetSrcRgb(*mode);
}

uSStrong<uString*> BlendModeHelpers::_invalidBlendMode_;

// public static Uno.Graphics.BlendOperand GetDstAlpha(Fuse.Drawing.BlendMode mode) [static] :60
int BlendModeHelpers::GetDstAlpha(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 3;
        case 2:
            return 3;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetDstRgb(Fuse.Drawing.BlendMode mode) [static] :34
int BlendModeHelpers::GetDstRgb(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 3;
        case 1:
            return 1;
        case 2:
            return 5;
        case 3:
            return 3;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcAlpha(Fuse.Drawing.BlendMode mode) [static] :47
int BlendModeHelpers::GetSrcAlpha(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 1;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}

// public static Uno.Graphics.BlendOperand GetSrcRgb(Fuse.Drawing.BlendMode mode) [static] :21
int BlendModeHelpers::GetSrcRgb(int mode)
{
    BlendModeHelpers_typeof()->Init();

    switch (mode)
    {
        case 0:
            return 1;
        case 1:
            return 1;
        case 2:
            return 1;
        case 3:
            return 8;
        default:
            U_THROW(::g::Uno::Exception::New2(BlendModeHelpers::_invalidBlendMode()));
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public abstract class Brush :86
// {
// static Brush() :106
static void Brush__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::Marshal::AddConverter((uObject*)Brush__Converter::New1());
}

static void Brush_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Brush is not pinned, preparation invalid");
    ::STRINGS[2] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Drawing\\0.43.11\\$.uno");
    ::STRINGS[3] = uString::Const("Prepare");
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Brush, _pinCount), 0);
}

Brush_type* Brush_typeof()
{
    static uSStrong<Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Brush);
    options.TypeSize = sizeof(Brush_type);
    type = (Brush_type*)uClassType::New("Fuse.Drawing.Brush", options);
    type->fp_build_ = Brush_build;
    type->fp_cctor_ = Brush__cctor__fn;
    type->fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent_fn;
    type->fp_OnPinned = Brush__OnPinned_fn;
    type->fp_OnPrepare = Brush__OnPrepare_fn;
    type->fp_OnUnpinned = Brush__OnUnpinned_fn;
    return type;
}

// internal Brush() :130
void Brush__ctor_1_fn(Brush* __this)
{
    __this->ctor_1();
}

// public virtual bool get_IsCompletelyTransparent() :114
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bool get_IsPinned() :147
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected virtual void OnPinned() :158
void Brush__OnPinned_fn(Brush* __this)
{
}

// protected virtual void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :156
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
}

// protected virtual void OnUnpinned() :159
void Brush__OnUnpinned_fn(Brush* __this)
{
}

// public void Pin() :133
void Brush__Pin_fn(Brush* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :149
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void Unpin() :140
void Brush__Unpin_fn(Brush* __this)
{
    __this->Unpin();
}

// internal Brush() [instance] :130
void Brush::ctor_1()
{
    ctor_();
}

// public bool get_IsPinned() [instance] :147
bool Brush::IsPinned()
{
    return _pinCount > 0;
}

// public void Pin() [instance] :133
void Brush::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :149
void Brush::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (!IsPinned())
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[1/*"Brush is no...*/], this, ::STRINGS[2/*"C:\\Users\\...*/], 152, ::STRINGS[3/*"Prepare"*/]);

    OnPrepare(dc, canvasSize);
}

// public void Unpin() [instance] :140
void Brush::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public static class Brushes :237
// {
// static Brushes() :237
static void Brushes__cctor__fn(uType* __type)
{
    Brushes::Transparent_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Black_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Silver_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Silver());
    Brushes::Gray_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Gray());
    Brushes::White_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::White());
    Brushes::Maroon_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Maroon());
    Brushes::Red_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Red());
    Brushes::Purple_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Purple());
    Brushes::Fuchsia_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Fuchsia());
    Brushes::Green_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Green());
    Brushes::Lime_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Lime());
    Brushes::Olive_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Olive());
    Brushes::Yellow_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Yellow());
    Brushes::Navy_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Navy());
    Brushes::Blue_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Blue());
    Brushes::Teal_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Teal());
    Brushes::Aqua_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Aqua());
}

static void Brushes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Aqua_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Black_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Blue_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Fuchsia_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Gray_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Green_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Lime_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Maroon_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Navy_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Olive_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Purple_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Red_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Silver_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Teal_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Transparent_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::White_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Yellow_, uFieldFlagsStatic);
}

uClassType* Brushes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Brushes", options);
    type->fp_build_ = Brushes_build;
    type->fp_cctor_ = Brushes__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Aqua_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Black_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Blue_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Fuchsia_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Gray_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Green_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Lime_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Maroon_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Navy_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Olive_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Purple_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Red_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Silver_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Teal_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Transparent_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::White_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Yellow_;
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public static class Colors :216
// {
// static Colors() :216
static void Colors__cctor__fn(uType* __type)
{
    Colors::Transparent_ = ::g::Uno::Color::FromRgba321(0U);
    Colors::Black_ = ::g::Uno::Color::FromRgba321(255U);
    Colors::Silver_ = ::g::Uno::Color::FromRgba321(3233857791U);
    Colors::Gray_ = ::g::Uno::Color::FromRgba321(2155905279U);
    Colors::White_ = ::g::Uno::Color::FromRgba321(4294967295U);
    Colors::Maroon_ = ::g::Uno::Color::FromRgba321(2147483903U);
    Colors::Red_ = ::g::Uno::Color::FromRgba321(4278190335U);
    Colors::Purple_ = ::g::Uno::Color::FromRgba321(2147516671U);
    Colors::Fuchsia_ = ::g::Uno::Color::FromRgba321(4278255615U);
    Colors::Green_ = ::g::Uno::Color::FromRgba321(8388863U);
    Colors::Lime_ = ::g::Uno::Color::FromRgba321(16711935U);
    Colors::Olive_ = ::g::Uno::Color::FromRgba321(2155872511U);
    Colors::Yellow_ = ::g::Uno::Color::FromRgba321(4294902015U);
    Colors::Navy_ = ::g::Uno::Color::FromRgba321(33023U);
    Colors::Blue_ = ::g::Uno::Color::FromRgba321(65535U);
    Colors::Teal_ = ::g::Uno::Color::FromRgba321(8421631U);
    Colors::Aqua_ = ::g::Uno::Color::FromRgba321(16777215U);
}

static void Colors_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Aqua_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Black_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Blue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Fuchsia_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Gray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Green_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Lime_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Maroon_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Navy_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Olive_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Purple_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Red_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Silver_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Teal_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Transparent_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::White_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Yellow_, uFieldFlagsStatic);
}

uClassType* Colors_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Colors", options);
    type->fp_build_ = Colors_build;
    type->fp_cctor_ = Colors__cctor__fn;
    return type;
}

::g::Uno::Float4 Colors::Aqua_;
::g::Uno::Float4 Colors::Black_;
::g::Uno::Float4 Colors::Blue_;
::g::Uno::Float4 Colors::Fuchsia_;
::g::Uno::Float4 Colors::Gray_;
::g::Uno::Float4 Colors::Green_;
::g::Uno::Float4 Colors::Lime_;
::g::Uno::Float4 Colors::Maroon_;
::g::Uno::Float4 Colors::Navy_;
::g::Uno::Float4 Colors::Olive_;
::g::Uno::Float4 Colors::Purple_;
::g::Uno::Float4 Colors::Red_;
::g::Uno::Float4 Colors::Silver_;
::g::Uno::Float4 Colors::Teal_;
::g::Uno::Float4 Colors::Transparent_;
::g::Uno::Float4 Colors::White_;
::g::Uno::Float4 Colors::Yellow_;
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// private sealed class Brush.Converter :88
// {
static void Brush__Converter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Type_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::Marshal__IConverter_typeof(), offsetof(Brush__Converter_type, interface0));
}

Brush__Converter_type* Brush__Converter_typeof()
{
    static uSStrong<Brush__Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Brush__Converter);
    options.TypeSize = sizeof(Brush__Converter_type);
    type = (Brush__Converter_type*)uClassType::New("Fuse.Drawing.Brush.Converter", options);
    type->fp_build_ = Brush__Converter_build;
    type->fp_ctor_ = (void*)Brush__Converter__New1_fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))Brush__Converter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))Brush__Converter__TryConvert_fn;
    return type;
}

// public generated Converter() :88
void Brush__Converter__ctor__fn(Brush__Converter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t) :90
void Brush__Converter__CanConvert_fn(Brush__Converter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated Converter New() :88
void Brush__Converter__New1_fn(Brush__Converter** __retval)
{
    *__retval = Brush__Converter::New1();
}

// public object TryConvert(Uno.Type t, object o) :94
void Brush__Converter__TryConvert_fn(Brush__Converter* __this, uType* t, uObject* o, uObject** __retval)
{
    *__retval = __this->TryConvert(t, o);
}

// public generated Converter() [instance] :88
void Brush__Converter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance] :90
bool Brush__Converter::CanConvert(uType* t)
{
    return ::g::Uno::Type::op_Equality(t, ::g::Fuse::Drawing::Brush_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Fuse::Drawing::Brush_typeof());
}

// public object TryConvert(Uno.Type t, object o) [instance] :94
uObject* Brush__Converter::TryConvert(uType* t, uObject* o)
{
    if (CanConvert(t))
    {
        ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New2();
        b->SetColor(::g::Fuse::Scripting::Marshal::ToFloat41(o));
        return b;
    }

    return NULL;
}

// public generated Converter New() [static] :88
Brush__Converter* Brush__Converter::New1()
{
    Brush__Converter* obj1 = (Brush__Converter*)uNew(Brush__Converter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\drawing\$.uno
// ----------------------------------------------------------------------------------------

// public struct ImageFill.DrawParams :95
// {
static void ImageFill__DrawParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Size), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, UVClip), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Texture), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordBias1), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordBias2), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordScale1), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordScale2), 0,
        ::g::Uno::Graphics::SamplerState_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, SamplerState), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, NeedFract), 0);
}

uStructType* ImageFill__DrawParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ValueSize = sizeof(ImageFill__DrawParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.ImageFill.DrawParams", options);
    type->fp_build_ = ImageFill__DrawParams_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public abstract class DynamicBrush :164
// {
// static DynamicBrush() :164
static void DynamicBrush__cctor_1_fn(uType* __type)
{
    DynamicBrush::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Opacity"*/]);
    DynamicBrush::_blendModeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BlendMode"*/]);
}

static void DynamicBrush_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Opacity");
    ::STRINGS[5] = uString::Const("BlendMode");
    type->SetFields(2,
        ::g::Fuse::Drawing::BlendMode_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _blendMode), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _opacity), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DynamicBrush::_blendModeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DynamicBrush::_opacityName_, uFieldFlagsStatic);
}

::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(DynamicBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DynamicBrush", options);
    type->fp_build_ = DynamicBrush_build;
    type->fp_cctor_ = DynamicBrush__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DynamicBrush__get_IsCompletelyTransparent_fn;
    return type;
}

// protected generated DynamicBrush() :164
void DynamicBrush__ctor_2_fn(DynamicBrush* __this)
{
    __this->ctor_2();
}

// public Fuse.Drawing.BlendMode get_BlendMode() :187
void DynamicBrush__get_BlendMode_fn(DynamicBrush* __this, int* __retval)
{
    *__retval = __this->BlendMode();
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) :188
void DynamicBrush__set_BlendMode_fn(DynamicBrush* __this, int* value)
{
    __this->BlendMode(*value);
}

// public override bool get_IsCompletelyTransparent() :166
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval)
{
    return *__retval = __this->Opacity() == 0.0f, void();
}

// public float get_Opacity() :173
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :174
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value)
{
    __this->Opacity(*value);
}

::g::Uno::UX::Selector DynamicBrush::_blendModeName_;
::g::Uno::UX::Selector DynamicBrush::_opacityName_;

// protected generated DynamicBrush() [instance] :164
void DynamicBrush::ctor_2()
{
    _opacity = 1.0f;
    ctor_1();
}

// public Fuse.Drawing.BlendMode get_BlendMode() [instance] :187
int DynamicBrush::BlendMode()
{
    return _blendMode;
}

// public void set_BlendMode(Fuse.Drawing.BlendMode value) [instance] :188
void DynamicBrush::BlendMode(int value)
{
    if (value == _blendMode)
        return;

    _blendMode = value;
    OnPropertyChanged(DynamicBrush::_blendModeName());
}

// public float get_Opacity() [instance] :173
float DynamicBrush::Opacity()
{
    return _opacity;
}

// public void set_Opacity(float value) [instance] :174
void DynamicBrush::Opacity(float value)
{
    if (value == _opacity)
        return;

    _opacity = value;
    OnPropertyChanged(DynamicBrush::_opacityName());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class GradientStop :14
// {
// static GradientStop() :14
static void GradientStop__cctor__fn(uType* __type)
{
    GradientStop::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Offset"*/]);
    GradientStop::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Color"*/]);
}

static void GradientStop_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Offset");
    ::STRINGS[7] = uString::Const("Color");
    type->SetFields(1,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _offset), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_offsetName_, uFieldFlagsStatic);
}

uType* GradientStop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(GradientStop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.GradientStop", options);
    type->fp_build_ = GradientStop_build;
    type->fp_cctor_ = GradientStop__cctor__fn;
    return type;
}

// public float4 get_Color() :37
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :38
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Offset() :21
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :22
void GradientStop__set_Offset_fn(GradientStop* __this, float* value)
{
    __this->Offset(*value);
}

::g::Uno::UX::Selector GradientStop::_colorName_;
::g::Uno::UX::Selector GradientStop::_offsetName_;

// public float4 get_Color() [instance] :37
::g::Uno::Float4 GradientStop::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :38
void GradientStop::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(GradientStop::_colorName());
    }
}

// public float get_Offset() [instance] :21
float GradientStop::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :22
void GradientStop::Offset(float value)
{
    if (_offset != value)
    {
        _offset = value;
        OnPropertyChanged(GradientStop::_offsetName());
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\drawing\$.uno
// ----------------------------------------------------------------------------------------

// public sealed class ImageFill :29
// {
// static ImageFill() :29
static void ImageFill__cctor_2_fn(uType* __type)
{
    ImageFill::_sourceName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Source"*/]);
    ImageFill::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Color"*/]);
    ImageFill::_wrapModeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"WrapMode"*/]);
    ImageFill::_paramName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"Param"*/]);
    ImageFill::_sizingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"Sizing"*/]);
}

static void ImageFill_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Source");
    ::STRINGS[7] = uString::Const("Color");
    ::STRINGS[9] = uString::Const("WrapMode");
    ::STRINGS[10] = uString::Const("Param");
    ::STRINGS[11] = uString::Const("Sizing");
    type->SetInterfaces(
        ::g::Fuse::ILoading_typeof(), offsetof(ImageFill_type, interface0),
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(ImageFill_type, interface1));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _container), 0,
        ImageFill__DrawParams_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _drawParams), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _tempTexture), 0,
        ::g::Fuse::Drawing::WrapMode_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _wrapMode), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_paramName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sizingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sourceName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_wrapModeName_, uFieldFlagsStatic);
}

ImageFill_type* ImageFill_typeof()
{
    static uSStrong<ImageFill_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ImageFill);
    options.TypeSize = sizeof(ImageFill_type);
    type = (ImageFill_type*)uClassType::New("Fuse.Drawing.ImageFill", options);
    type->fp_build_ = ImageFill_build;
    type->fp_cctor_ = ImageFill__cctor_2_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnPinned_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))ImageFill__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnUnpinned_fn;
    type->interface1.fp_OnSourceChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface1.fp_OnParamChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface1.fp_OnSizingChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    type->interface0.fp_get_IsLoading = (void(*)(uObject*, bool*))ImageFill__FuseILoadingget_IsLoading_fn;
    return type;
}

// public float4 get_Color() :77
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :78
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private bool Fuse.ILoading.get_IsLoading() :63
void ImageFill__FuseILoadingget_IsLoading_fn(ImageFill* __this, bool* __retval)
{
    ::g::Fuse::Resources::ImageSource* src = uPtr(__this->_container)->Source();

    if (src == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(src)->State() == 2) || (uPtr(src)->State() == 0), void();
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :240
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this)
{
    __this->OnPropertyChanged(ImageFill::_paramName());
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :252
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this)
{
    __this->OnPropertyChanged(ImageFill::_sizingName());
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :55
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this)
{
    __this->OnPropertyChanged(ImageFill::_sourceName());
    __this->OnPropertyChanged(::g::Fuse::ILoadingStatic::IsLoadingName());
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) :161
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval)
{
    *__retval = __this->GetDrawParams(dc, *size);
}

// private float2 GetSize() :88
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// protected override sealed void OnPinned() :36
void ImageFill__OnPinned_fn(ImageFill* __this)
{
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :108
void ImageFill__OnPrepare_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    ::g::Uno::Float2 canvasSize_ = *canvasSize;
    uPtr(uPtr(__this->_container)->Sizing)->absoluteZoom = ((dc == NULL) ? 1.0f : uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(__this->_container)->Sizing)->CalcScale(canvasSize_, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(uPtr(__this->_container)->Sizing)->CalcOrigin(canvasSize_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ImageFill__DrawParams dp = uDefault<ImageFill__DrawParams>();
    dp.Origin = origin;
    dp.Size = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    dp.UVClip = uPtr(uPtr(__this->_container)->Sizing)->CalcClip(canvasSize_, &dp.Origin, &dp.Size);
    dp.Texture = uPtr(__this->_container)->GetTexture();

    if (((dp.Texture != NULL) && !uPtr(dp.Texture)->IsPow2()) && (__this->WrapMode() == 0))
    {
        if (__this->_tempTexture == NULL)
        {
            ::g::Uno::Int2 size = ::g::Uno::Int2__New2(uPtr(dp.Texture)->Size().X + 1, uPtr(dp.Texture)->Size().Y + 1);
            __this->_tempTexture = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
        }

        dp.TexCoordBias1 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_UnaryNegation(::g::Uno::Float2__New1(0.5f)), ::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()));
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New1(0.5f), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        dp.TexCoordScale2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        uPtr(::g::Fuse::Drawing::RepeatBaker::Singleton())->FillBuffer(dc, dp.Texture, __this->_tempTexture);
        dp.Texture = uPtr(__this->_tempTexture)->ColorBuffer();
        dp.SamplerState = ::g::Uno::Graphics::SamplerState__LinearClamp();
        dp.NeedFract = true;
    }
    else
    {
        if (__this->_tempTexture != NULL)
        {
            ::g::Fuse::FramebufferPool::Release(__this->_tempTexture);
            __this->_tempTexture = NULL;
        }

        dp.TexCoordBias1 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale2 = ::g::Uno::Float2__New1(1.0f);
        dp.SamplerState = ((__this->WrapMode() == 0) ? ::g::Uno::Graphics::SamplerState__LinearWrap() : ::g::Uno::Graphics::SamplerState__LinearClamp());
        dp.NeedFract = false;
    }

    __this->_drawParams = dp;
}

// protected override sealed void OnUnpinned() :42
void ImageFill__OnUnpinned_fn(ImageFill* __this)
{
    if (__this->_tempTexture != NULL)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_tempTexture);
        __this->_tempTexture = NULL;
    }

    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Resources.ImageSource get_Source() :214
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :215
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode() :228
void ImageFill__get_WrapMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->WrapMode();
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value) :229
void ImageFill__set_WrapMode_fn(ImageFill* __this, int* value)
{
    __this->WrapMode(*value);
}

::g::Uno::UX::Selector ImageFill::_colorName_;
::g::Uno::UX::Selector ImageFill::_paramName_;
::g::Uno::UX::Selector ImageFill::_sizingName_;
::g::Uno::UX::Selector ImageFill::_sourceName_;
::g::Uno::UX::Selector ImageFill::_wrapModeName_;

// public float4 get_Color() [instance] :77
::g::Uno::Float4 ImageFill::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :78
void ImageFill::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(ImageFill::_colorName());
    }
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) [instance] :161
ImageFill__DrawParams ImageFill::GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size)
{
    return _drawParams;
}

// private float2 GetSize() [instance] :88
::g::Uno::Float2 ImageFill::GetSize()
{
    if (Source() != NULL)
        return uPtr(uPtr(_container)->Sizing)->CalcContentSize(uPtr(Source())->Size(), uPtr(Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// public Fuse.Resources.ImageSource get_Source() [instance] :214
::g::Fuse::Resources::ImageSource* ImageFill::Source()
{
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :215
void ImageFill::Source(::g::Fuse::Resources::ImageSource* value)
{
    uPtr(_container)->Source(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode() [instance] :228
int ImageFill::WrapMode()
{
    return _wrapMode;
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value) [instance] :229
void ImageFill::WrapMode(int value)
{
    if (_wrapMode != value)
    {
        _wrapMode = value;
        OnPropertyChanged(ImageFill::_wrapModeName());
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ISolidColor :370
// {
uInterfaceType* ISolidColor_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISolidColor", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class LinearGradient :96
// {
// static LinearGradient() :231
static void LinearGradient__cctor_2_fn(uType* __type)
{
    LinearGradient::_stopsName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"Stops"*/]);
    LinearGradient::_stopOffsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Offset"*/]);
    LinearGradient::_stopColorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Color"*/]);
    LinearGradient::_startPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"StartPoint"*/]);
    LinearGradient::_endPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"EndPoint"*/]);
    LinearGradient::_angleName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Angle"*/]);
    LinearGradient::_gradientSize_ = 256;
    LinearGradient::_gradientSize_ = ::g::Uno::Math::Min8(1028, ::g::Uno::Graphics::Texture2D::MaxSize());
}

static void LinearGradient_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Stops");
    ::STRINGS[6] = uString::Const("Offset");
    ::STRINGS[7] = uString::Const("Color");
    ::STRINGS[13] = uString::Const("StartPoint");
    ::STRINGS[14] = uString::Const("EndPoint");
    ::STRINGS[15] = uString::Const("Angle");
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LinearGradient_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _angle), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _endPoint), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientBuffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientStart), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _hasAngle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _invalid), 0,
        ::g::Fuse::Drawing::GradientStop_typeof()->Array(), offsetof(::g::Fuse::Drawing::LinearGradient, _sortedStops), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _startPoint), 0,
        ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL), offsetof(::g::Fuse::Drawing::LinearGradient, _stops), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_angleName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_endPointName_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_gradientSize_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_startPointName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopColorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopOffsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopsName_, uFieldFlagsStatic);
}

LinearGradient_type* LinearGradient_typeof()
{
    static uSStrong<LinearGradient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LinearGradient);
    options.TypeSize = sizeof(LinearGradient_type);
    type = (LinearGradient_type*)uClassType::New("Fuse.Drawing.LinearGradient", options);
    type->fp_build_ = LinearGradient_build;
    type->fp_cctor_ = LinearGradient__cctor_2_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))LinearGradient__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public float get_Angle() :167
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :168
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value)
{
    __this->Angle(*value);
}

// public float2 get_EndPoint() :150
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(float2 value) :151
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->EndPoint(*value);
}

// public bool get_HasAngle() :186
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval)
{
    *__retval = __this->HasAngle();
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :242
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    if (__this->_gradientBuffer == NULL)
    {
        __this->_gradientBuffer = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2(LinearGradient::_gradientSize(), 1), 3, false);
        __this->_invalid = true;
    }

    if (__this->_invalid)
    {
        __this->_gradientStart = uPtr(::g::Fuse::Drawing::LinearGradientDrawable::Singleton())->FillBuffer(dc, __this, __this->_gradientBuffer);
        __this->_invalid = false;
    }
}

// protected override sealed void OnUnpinned() :257
void LinearGradient__OnUnpinned_fn(LinearGradient* __this)
{
    if (__this->_gradientBuffer != NULL)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
        __this->_invalid = true;
    }
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() :114
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval)
{
    *__retval = __this->SortedStops();
}

// public float2 get_StartPoint() :129
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(float2 value) :130
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->StartPoint(*value);
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() :117
void LinearGradient__get_Stops_fn(LinearGradient* __this, uObject** __retval)
{
    *__retval = __this->Stops();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :102
void LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn(LinearGradient* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopOffsetName()) || ::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopColorName()))
        __this->_invalid = true;

    __this->OnPropertyChanged(LinearGradient::_stopsName());
}

::g::Uno::UX::Selector LinearGradient::_angleName_;
::g::Uno::UX::Selector LinearGradient::_endPointName_;
int LinearGradient::_gradientSize_;
::g::Uno::UX::Selector LinearGradient::_startPointName_;
::g::Uno::UX::Selector LinearGradient::_stopColorName_;
::g::Uno::UX::Selector LinearGradient::_stopOffsetName_;
::g::Uno::UX::Selector LinearGradient::_stopsName_;

// public float get_Angle() [instance] :167
float LinearGradient::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance] :168
void LinearGradient::Angle(float value)
{
    if ((_angle != value) || !_hasAngle)
    {
        _angle = value;
        _hasAngle = true;
        OnPropertyChanged(LinearGradient::_angleName());
    }
}

// public float2 get_EndPoint() [instance] :150
::g::Uno::Float2 LinearGradient::EndPoint()
{
    return _endPoint;
}

// public void set_EndPoint(float2 value) [instance] :151
void LinearGradient::EndPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_endPoint, value))
    {
        _endPoint = value;
        OnPropertyChanged(LinearGradient::_endPointName());
    }
}

// public bool get_HasAngle() [instance] :186
bool LinearGradient::HasAngle()
{
    return _hasAngle;
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() [instance] :114
uArray* LinearGradient::SortedStops()
{
    return _sortedStops;
}

// public float2 get_StartPoint() [instance] :129
::g::Uno::Float2 LinearGradient::StartPoint()
{
    return _startPoint;
}

// public void set_StartPoint(float2 value) [instance] :130
void LinearGradient::StartPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_startPoint, value))
    {
        _startPoint = value;
        OnPropertyChanged(LinearGradient::_startPointName());
    }
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() [instance] :117
uObject* LinearGradient::Stops()
{
    return (uObject*)_stops;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed class LinearGradientDrawable :290
// {
// static LinearGradientDrawable() :290
static void LinearGradientDrawable__cctor__fn(uType* __type)
{
    LinearGradientDrawable::Singleton_ = LinearGradientDrawable::New1();
}

static void LinearGradientDrawable_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, _draw_ae3a1d65), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_TexCoord_ae3a1d65_1_1_1), 0,
        ::TYPES[3/*float2[]*/], offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_Vertices_ae3a1d65_1_0_9), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::LinearGradientDrawable::Singleton_, uFieldFlagsStatic);
}

uType* LinearGradientDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LinearGradientDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LinearGradientDrawable", options);
    type->fp_build_ = LinearGradientDrawable_build;
    type->fp_ctor_ = (void*)LinearGradientDrawable__New1_fn;
    type->fp_cctor_ = LinearGradientDrawable__cctor__fn;
    return type;
}

// public generated LinearGradientDrawable() :290
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this)
{
    __this->ctor_();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) :294
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FillBuffer(dc, lg, fb);
}

// private static generated float4[] FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) :323
void LinearGradientDrawable__FillBuffer_Colors_ae3a1d65_1_6_6_fn(int* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(*Colors_1_6_4, Colors_1_6_5);
}

// private static generated float[] FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) :316
void LinearGradientDrawable__FillBuffer_Offsets_ae3a1d65_1_5_4_fn(int* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(*Offsets_1_5_1, Offsets_1_5_2);
}

// private generated void init_DrawCalls() :290
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

// public generated LinearGradientDrawable New() :290
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval)
{
    *__retval = LinearGradientDrawable::New1();
}

uSStrong<LinearGradientDrawable*> LinearGradientDrawable::Singleton_;

// public generated LinearGradientDrawable() [instance] :290
void LinearGradientDrawable::ctor_()
{
    init_DrawCalls();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) [instance] :294
::g::Uno::Float2 LinearGradientDrawable::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb)
{
    uArray* stops = uPtr(lg)->SortedStops();

    if (uPtr(stops)->Length() < 2)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float length = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(uPtr(stops)->Length() - 1))->Offset() - uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset();
    uPtr(dc)->PushRenderTarget(fb);
    uArray* Offsets_ae3a1d65_1_5_5 = LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(stops->Length(), stops);
    uArray* Colors_ae3a1d65_1_6_7 = LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(stops->Length(), stops);
    _draw_ae3a1d65.DepthTestEnabled(false);
    _draw_ae3a1d65.Const1(0, uPtr(Offsets_ae3a1d65_1_5_5)->Length());
    _draw_ae3a1d65.Const1(1, uPtr(Colors_ae3a1d65_1_6_7)->Length());
    _draw_ae3a1d65.Use();
    _draw_ae3a1d65.Attrib1(2, 2, FillBuffer_TexCoord_ae3a1d65_1_1_1, 8, 0);
    _draw_ae3a1d65.Uniform1(3, Offsets_ae3a1d65_1_5_5);
    _draw_ae3a1d65.Uniform(4, length);
    _draw_ae3a1d65.Uniform11(5, Colors_ae3a1d65_1_6_7);
    _draw_ae3a1d65.DrawArrays(uPtr(FillBuffer_Vertices_ae3a1d65_1_0_9)->Length());
    dc->PopRenderTarget();
    return ::g::Uno::Float2__New2(uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

// private generated void init_DrawCalls() [instance] :290
void LinearGradientDrawable::init_DrawCalls()
{
    uArray* Vertices_ae3a1d65_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[3/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_TexCoord_ae3a1d65_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_ae3a1d65_1_0_0), 0);
    FillBuffer_Vertices_ae3a1d65_1_0_9 = Vertices_ae3a1d65_1_0_0;
    _draw_ae3a1d65 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawing_bundle::LinearGradientDrawable479fd075());
}

// private static generated float4[] FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) [static] :323
uArray* LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, uArray* Colors_1_6_5)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* cols = uArray::New(::TYPES[1/*float4[]*/], ::g::Uno::Math::Max8(Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
        uPtr(cols)->Item< ::g::Uno::Float4>(i) = uPtr(uPtr(Colors_1_6_5)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color();

    return cols;
}

// private static generated float[] FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) [static] :316
uArray* LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, uArray* Offsets_1_5_2)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* ofs = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Math::Max8(Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
        uPtr(ofs)->Item<float>(i) = uPtr(uPtr(Offsets_1_5_2)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();

    return ofs;
}

// public generated LinearGradientDrawable New() [static] :290
LinearGradientDrawable* LinearGradientDrawable::New1()
{
    LinearGradientDrawable* obj1 = (LinearGradientDrawable*)uNew(LinearGradientDrawable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\drawing\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed class RepeatBaker :270
// {
// static RepeatBaker() :270
static void RepeatBaker__cctor__fn(uType* __type)
{
    RepeatBaker::Singleton_ = RepeatBaker::New1();
}

static void RepeatBaker_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::RepeatBaker, _draw_2972f423), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::RepeatBaker, FillBuffer_VertexPosition_2972f423_1_1_1), 0,
        ::TYPES[3/*float2[]*/], offsetof(::g::Fuse::Drawing::RepeatBaker, FillBuffer_Vertices_2972f423_1_0_6), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::RepeatBaker::Singleton_, uFieldFlagsStatic);
}

uType* RepeatBaker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RepeatBaker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.RepeatBaker", options);
    type->fp_build_ = RepeatBaker_build;
    type->fp_ctor_ = (void*)RepeatBaker__New1_fn;
    type->fp_cctor_ = RepeatBaker__cctor__fn;
    return type;
}

// public generated RepeatBaker() :270
void RepeatBaker__ctor__fn(RepeatBaker* __this)
{
    __this->ctor_();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb) :274
void RepeatBaker__FillBuffer_fn(RepeatBaker* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->FillBuffer(dc, tex, fb);
}

// private generated void init_DrawCalls() :270
void RepeatBaker__init_DrawCalls_fn(RepeatBaker* __this)
{
    __this->init_DrawCalls();
}

// public generated RepeatBaker New() :270
void RepeatBaker__New1_fn(RepeatBaker** __retval)
{
    *__retval = RepeatBaker::New1();
}

uSStrong<RepeatBaker*> RepeatBaker::Singleton_;

// public generated RepeatBaker() [instance] :270
void RepeatBaker::ctor_()
{
    init_DrawCalls();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb) [instance] :274
void RepeatBaker::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    uPtr(dc)->PushRenderTarget(fb);
    _draw_2972f423.DepthTestEnabled(false);
    _draw_2972f423.CullFace(0);
    _draw_2972f423.Use();
    _draw_2972f423.Attrib1(0, 2, FillBuffer_VertexPosition_2972f423_1_1_1, 8, 0);
    _draw_2972f423.Uniform2(1, ::g::Uno::Float2__op_Implicit1(uPtr(fb)->Size()));
    _draw_2972f423.Uniform2(2, ::g::Uno::Float2__op_Implicit1(uPtr(tex)->Size()));
    _draw_2972f423.Sampler3(3, tex, ::g::Uno::Graphics::SamplerState__NearestClamp());
    _draw_2972f423.DrawArrays(uPtr(FillBuffer_Vertices_2972f423_1_0_6)->Length());
    dc->PopRenderTarget();
}

// private generated void init_DrawCalls() [instance] :270
void RepeatBaker::init_DrawCalls()
{
    uArray* Vertices_2972f423_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[3/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_VertexPosition_2972f423_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_2972f423_1_0_0), 0);
    FillBuffer_Vertices_2972f423_1_0_6 = Vertices_2972f423_1_0_0;
    _draw_2972f423 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::RepeatBaker447c61dc());
}

// public generated RepeatBaker New() [static] :270
RepeatBaker* RepeatBaker::New1()
{
    RepeatBaker* obj1 = (RepeatBaker*)uNew(RepeatBaker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public enum ResampleMode :281
uEnumType* ResampleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.ResampleMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class SolidColor :375
// {
// static SolidColor() :375
static void SolidColor__cctor_2_fn(uType* __type)
{
    SolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Color"*/]);
}

static void SolidColor_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Color");
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(SolidColor_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::SolidColor, _color), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::SolidColor::_colorName_, uFieldFlagsStatic);
}

SolidColor_type* SolidColor_typeof()
{
    static uSStrong<SolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SolidColor);
    options.TypeSize = sizeof(SolidColor_type);
    type = (SolidColor_type*)uClassType::New("Fuse.Drawing.SolidColor", options);
    type->fp_build_ = SolidColor_build;
    type->fp_ctor_ = (void*)SolidColor__New2_fn;
    type->fp_cctor_ = SolidColor__cctor_2_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))SolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))SolidColor__get_Color_fn;
    return type;
}

// public SolidColor() :413
void SolidColor__ctor_3_fn(SolidColor* __this)
{
    __this->ctor_3();
}

// public SolidColor(float4 color) :418
void SolidColor__ctor_4_fn(SolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color() :383
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :384
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :409
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public SolidColor New() :413
void SolidColor__New2_fn(SolidColor** __retval)
{
    *__retval = SolidColor::New2();
}

// public SolidColor New(float4 color) :418
void SolidColor__New3_fn(::g::Uno::Float4* color, SolidColor** __retval)
{
    *__retval = SolidColor::New3(*color);
}

// internal void SetColor(float4 c) :404
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c)
{
    __this->SetColor(*c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) :394
void SolidColor__SetColor1_fn(SolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector SolidColor::_colorName_;

// public SolidColor() [instance] :413
void SolidColor::ctor_3()
{
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public SolidColor(float4 color) [instance] :418
void SolidColor::ctor_4(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :383
::g::Uno::Float4 SolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :384
void SolidColor::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(SolidColor::_colorName());
    }
}

// internal void SetColor(float4 c) [instance] :404
void SolidColor::SetColor(::g::Uno::Float4 c)
{
    Color(c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance] :394
void SolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(SolidColor::_colorName(), origin);
    }
}

// public SolidColor New() [static] :413
SolidColor* SolidColor::New2()
{
    SolidColor* obj1 = (SolidColor*)uNew(SolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public SolidColor New(float4 color) [static] :418
SolidColor* SolidColor::New3(::g::Uno::Float4 color)
{
    SolidColor* obj2 = (SolidColor*)uNew(SolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public abstract class StaticBrush :162
// {
static void StaticBrush_build(uType* type)
{
    type->SetFields(2);
}

::g::Fuse::Drawing::Brush_type* StaticBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StaticBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticBrush", options);
    type->fp_build_ = StaticBrush_build;
    return type;
}

// protected generated StaticBrush() :162
void StaticBrush__ctor_2_fn(StaticBrush* __this)
{
    __this->ctor_2();
}

// protected generated StaticBrush() [instance] :162
void StaticBrush::ctor_2()
{
    ctor_1();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\brushes\$.uno
// ---------------------------------------------------------------------------------------

// public sealed class StaticSolidColor :424
// {
static void StaticSolidColor_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(StaticSolidColor_type, interface0));
    type->SetFields(2,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::StaticSolidColor, _color), 0);
}

StaticSolidColor_type* StaticSolidColor_typeof()
{
    static uSStrong<StaticSolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::StaticBrush_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StaticSolidColor);
    options.TypeSize = sizeof(StaticSolidColor_type);
    type = (StaticSolidColor_type*)uClassType::New("Fuse.Drawing.StaticSolidColor", options);
    type->fp_build_ = StaticSolidColor_build;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))StaticSolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))StaticSolidColor__get_Color_fn;
    return type;
}

// public StaticSolidColor(float4 color) :437
void StaticSolidColor__ctor_3_fn(StaticSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_3(*color);
}

// public float4 get_Color() :431
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public override sealed bool get_IsCompletelyTransparent() :426
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Fuse::Drawing::Brush__get_IsCompletelyTransparent_fn(__this, &ret2), ret2) || (__this->Color().W == 0.0f), void();
}

// public StaticSolidColor New(float4 color) :437
void StaticSolidColor__New2_fn(::g::Uno::Float4* color, StaticSolidColor** __retval)
{
    *__retval = StaticSolidColor::New2(*color);
}

// public StaticSolidColor(float4 color) [instance] :437
void StaticSolidColor::ctor_3(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :431
::g::Uno::Float4 StaticSolidColor::Color()
{
    return _color;
}

// public StaticSolidColor New(float4 color) [static] :437
StaticSolidColor* StaticSolidColor::New2(::g::Uno::Float4 color)
{
    StaticSolidColor* obj1 = (StaticSolidColor*)uNew(StaticSolidColor_typeof());
    obj1->ctor_3(color);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public sealed class Stroke :319
// {
// static Stroke() :319
static void Stroke__cctor__fn(uType* __type)
{
    Stroke::_shadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Shading"*/]);
    Stroke::_brushName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Brush"*/]);
    Stroke::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Color"*/]);
    Stroke::_widthName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Width"*/]);
    Stroke::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Offset"*/]);
    Stroke::_adjustmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Adjustment"*/]);
    Stroke::_alignmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"Alignment"*/]);
    Stroke::_lineCapName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"LineCap"*/]);
    Stroke::_lineJoinName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"LineJoin"*/]);
}

static void Stroke_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Shading");
    ::STRINGS[17] = uString::Const("Brush");
    ::STRINGS[7] = uString::Const("Color");
    ::STRINGS[18] = uString::Const("Width");
    ::STRINGS[6] = uString::Const("Offset");
    ::STRINGS[19] = uString::Const("Adjustment");
    ::STRINGS[20] = uString::Const("Alignment");
    ::STRINGS[21] = uString::Const("LineCap");
    ::STRINGS[22] = uString::Const("LineJoin");
    ::TYPES[4] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::ISolidColor_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Stroke_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Drawing::StrokeAdjustment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _adjustment), 0,
        ::g::Fuse::Drawing::StrokeAlignment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _alignment), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _brush), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _pinCount), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _width), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_adjustmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_alignmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_brushName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineCapName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineJoinName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_offsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_shadingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_widthName_, uFieldFlagsStatic);
}

Stroke_type* Stroke_typeof()
{
    static uSStrong<Stroke_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(Stroke_type);
    type = (Stroke_type*)uClassType::New("Fuse.Drawing.Stroke", options);
    type->fp_build_ = Stroke_build;
    type->fp_cctor_ = Stroke__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// private float Adjust(float w, float ppi) :485
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->Adjust(*w, *ppi);
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() :409
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Adjustment();
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) :410
void Stroke__set_Adjustment_fn(Stroke* __this, int* value)
{
    __this->Adjustment(*value);
}

// private float AdjustPosition(float w, float ppi) :462
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->AdjustPosition(*w, *ppi);
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() :425
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) :426
void Stroke__set_Alignment_fn(Stroke* __this, int* value)
{
    __this->Alignment(*value);
}

// public Fuse.Drawing.Brush get_Brush() :332
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Brush();
}

// public void set_Brush(Fuse.Drawing.Brush value) :333
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Brush(value);
}

// public float4 get_Color() :356
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :362
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float2 GetDeviceAdjusted(float ppi) :437
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* ppi, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDeviceAdjusted(*ppi);
}

// public bool get_IsPinned() :546
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public float get_Offset() :396
void Stroke__get_Offset_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :397
void Stroke__set_Offset_fn(Stroke* __this, float* value)
{
    __this->Offset(*value);
}

// protected void OnPinned() :548
void Stroke__OnPinned_fn(Stroke* __this)
{
    __this->OnPinned();
}

// protected void OnUnpinned() :554
void Stroke__OnUnpinned_fn(Stroke* __this)
{
    __this->OnUnpinned();
}

// public void Pin() :532
void Stroke__Pin_fn(Stroke* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :560
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin) :367
void Stroke__SetColor_fn(Stroke* __this, ::g::Uno::Float4* color, uObject* origin)
{
    __this->SetColor(*color, origin);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :322
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    __this->OnPropertyChanged(Stroke::_shadingName());
}

// public void Unpin() :539
void Stroke__Unpin_fn(Stroke* __this)
{
    __this->Unpin();
}

// public float get_Width() :384
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :385
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

::g::Uno::UX::Selector Stroke::_adjustmentName_;
::g::Uno::UX::Selector Stroke::_alignmentName_;
::g::Uno::UX::Selector Stroke::_brushName_;
::g::Uno::UX::Selector Stroke::_colorName_;
::g::Uno::UX::Selector Stroke::_lineCapName_;
::g::Uno::UX::Selector Stroke::_lineJoinName_;
::g::Uno::UX::Selector Stroke::_offsetName_;
::g::Uno::UX::Selector Stroke::_shadingName_;
::g::Uno::UX::Selector Stroke::_widthName_;

// private float Adjust(float w, float ppi) [instance] :485
float Stroke::Adjust(float w, float ppi)
{
    w = AdjustPosition(w, ppi);
    w = ::g::Uno::Math::Max1(w, 1.0f / ppi);
    return w;
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() [instance] :409
int Stroke::Adjustment()
{
    return _adjustment;
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) [instance] :410
void Stroke::Adjustment(int value)
{
    if (_adjustment != value)
    {
        _adjustment = value;
        OnPropertyChanged(Stroke::_adjustmentName());
    }
}

// private float AdjustPosition(float w, float ppi) [instance] :462
float Stroke::AdjustPosition(float w, float ppi)
{
    switch (Adjustment())
    {
        case 0:
            return w;
        case 1:
        {
            w = ::g::Uno::Math::Ceil1(w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::g::Uno::Math::Floor1((w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::g::Uno::Math::Floor1(w * ppi) / ppi;
            break;
        }
    }

    return w;
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() [instance] :425
int Stroke::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) [instance] :426
void Stroke::Alignment(int value)
{
    if (_alignment != value)
    {
        _alignment = value;
        OnPropertyChanged(Stroke::_alignmentName());
    }
}

// public Fuse.Drawing.Brush get_Brush() [instance] :332
::g::Fuse::Drawing::Brush* Stroke::Brush()
{
    return _brush;
}

// public void set_Brush(Fuse.Drawing.Brush value) [instance] :333
void Stroke::Brush(::g::Fuse::Drawing::Brush* value)
{
    if (value == _brush)
        return;

    if (IsPinned() && (_brush != NULL))
        uPtr(_brush)->Unpin();

    if (uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[5/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[5/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    _brush = value;

    if (uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[5/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[5/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    if (IsPinned() && (_brush != NULL))
        uPtr(_brush)->Pin();

    OnPropertyChanged(Stroke::_brushName());
}

// public float4 get_Color() [instance] :356
::g::Uno::Float4 Stroke::Color()
{
    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[6/*Fuse.Drawing.ISolidColor*/]))
        return ::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr((uObject*)Brush()), ::TYPES[6/*Fuse.Drawing.ISolidColor*/]));

    return ::g::Uno::Float4__New1(0.0f);
}

// public void set_Color(float4 value) [instance] :362
void Stroke::Color(::g::Uno::Float4 value)
{
    SetColor(value, (uObject*)this);
}

// public float2 GetDeviceAdjusted(float ppi) [instance] :437
::g::Uno::Float2 Stroke::GetDeviceAdjusted(float ppi)
{
    float lo = 0.0f, hi = 0.0f;

    switch (Alignment())
    {
        case 2:
        {
            lo = ::g::Uno::Math::Ceil1((_offset - 0.5f) * ppi) / ppi;
            hi = lo + Adjust(_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::g::Uno::Math::Floor1((_offset + 0.5f) * ppi) / ppi;
            lo = hi - Adjust(_width, ppi);
            break;
        }
        case 0:
        {
            lo = AdjustPosition(_offset - (_width / 2.0f), ppi);
            hi = lo + Adjust(_width, ppi);
            break;
        }
    }

    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(hi - lo, (hi + lo) / 2.0f);
    return r;
}

// public bool get_IsPinned() [instance] :546
bool Stroke::IsPinned()
{
    return _pinCount > 0;
}

// public float get_Offset() [instance] :396
float Stroke::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :397
void Stroke::Offset(float value)
{
    _offset = value;
    OnPropertyChanged(Stroke::_offsetName());
}

// protected void OnPinned() [instance] :548
void Stroke::OnPinned()
{
    if (Brush() != NULL)
        uPtr(Brush())->Pin();
}

// protected void OnUnpinned() [instance] :554
void Stroke::OnUnpinned()
{
    if (Brush() != NULL)
        uPtr(Brush())->Unpin();
}

// public void Pin() [instance] :532
void Stroke::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :560
void Stroke::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (Brush() != NULL)
        uPtr(Brush())->Prepare(dc, canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin) [instance] :367
void Stroke::SetColor(::g::Uno::Float4 color, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(color, Color()))
    {
        if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[4/*Fuse.Drawing.SolidColor*/]))
            Brush(::g::Fuse::Drawing::SolidColor::New3(color));
        else
            uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Brush(), ::TYPES[4/*Fuse.Drawing.SolidColor*/]))->Color(color);

        OnPropertyChanged1(Stroke::_colorName(), origin);
    }
}

// public void Unpin() [instance] :539
void Stroke::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}

// public float get_Width() [instance] :384
float Stroke::Width()
{
    return _width;
}

// public void set_Width(float value) [instance] :385
void Stroke::Width(float value)
{
    _width = value;
    OnPropertyChanged(Stroke::_widthName());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public enum StrokeAdjustment :304
uEnumType* StrokeAdjustment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAdjustment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public enum StrokeAlignment :312
uEnumType* StrokeAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public enum WrapMode :288
uEnumType* WrapMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.WrapMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Repeat", 0LL,
        "ClampToEdge", 1LL);
    return type;
}

}}} // ::g::Fuse::Drawing
