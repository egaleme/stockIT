// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawingPrimitives_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.BlendMode.h>
#include <Fuse.Drawing.BlendModeHelpers.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.ConvexWedgeCoverage.h>
#include <Fuse.Drawing.Primitives.Coverage.h>
#include <Fuse.Drawing.Primitives.Falloff.h>
#include <Fuse.Drawing.Primitives.FillCoverage.h>
#include <Fuse.Drawing.Primitives.LimitCoverage.h>
#include <Fuse.Drawing.Primitives.OneLimitCoverage.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.Primitives.ShadowFalloff.h>
#include <Fuse.Drawing.Primitives.StrokeCoverage.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitives.WedgeCoverage.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Circle :21
// {
// static Circle() :21
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferIndex), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _bufferVertex), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_1551e075), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_1551e0d6), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_337df6ed), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_3851f461), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_4451e6f7), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_5d5c9248), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_78f203d2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_78f203f1), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_87cbf821), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_989fe82b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99edfa56), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99edfa75), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_99edfa98), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_afc1d22f), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c5609772), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c5609795), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_c56097b4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_cc53f0e5), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_e5c515b2), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_e658c966), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_f01b083e), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_f01b0861), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_f01b0880), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _draw_fecfc103), 0,
        ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Circle, _strokeCoverage), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendDstAlpha_fecfc103_12_7_25), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendDstRgb_fecfc103_12_5_24), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendSrcAlpha_fecfc103_12_6_23), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Circle, Draw_BlendSrcRgb_fecfc103_12_4_22), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Circle::Singleton_, uFieldFlagsStatic);
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 34;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle() :21
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) :79
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) :43
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls() :21
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :53
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New() :21
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) :27
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance] :21
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float2 extend, float2 center, float smoothness) [instance] :79
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, ::g::Uno::Float2 extend, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;

    if (_bufferVertex == NULL)
        InitBuffers();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_87cbf821_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_87cbf821_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_87cbf821_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_87cbf821.BlendEnabled(true);
                _draw_87cbf821.DepthTestEnabled(false);
                _draw_87cbf821.CullFace(uPtr(dc)->CullFace());
                _draw_87cbf821.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_87cbf821.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_87cbf821.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_87cbf821.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_87cbf821.Const(0, DP_87cbf821_14_7_4.NeedFract);
                _draw_87cbf821.Const(1, DP_87cbf821_14_7_4.Texture == NULL);
                _draw_87cbf821.Use();
                _draw_87cbf821.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_87cbf821.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_87cbf821.Uniform2(4, center);
                _draw_87cbf821.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_87cbf821.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_87cbf821.Uniform2(7, DP_87cbf821_14_7_4.Origin);
                _draw_87cbf821.Uniform2(8, DP_87cbf821_14_7_4.Size);
                _draw_87cbf821.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_87cbf821_14_7_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_87cbf821_14_7_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_87cbf821.Uniform2(10, (ind3 = DP_87cbf821_14_7_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_87cbf821.Uniform2(11, DP_87cbf821_14_7_4.TexCoordScale1);
                _draw_87cbf821.Uniform2(12, DP_87cbf821_14_7_4.TexCoordBias1);
                _draw_87cbf821.Uniform2(13, DP_87cbf821_14_7_4.TexCoordScale2);
                _draw_87cbf821.Uniform2(14, DP_87cbf821_14_7_4.TexCoordBias2);
                _draw_87cbf821.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_87cbf821.Uniform(16, radius);
                _draw_87cbf821.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_87cbf821.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_87cbf821.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_87cbf821.Uniform(20, 1.0f / smoothness);
                _draw_87cbf821.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_87cbf821.Uniform2(22, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_87cbf821_20_2_15, EndVec_87cbf821_20_3_16)));
                _draw_87cbf821.Uniform2(23, StartVec_87cbf821_20_2_15);
                _draw_87cbf821.Uniform2(24, EndVec_87cbf821_20_3_16);
                _draw_87cbf821.Sampler3(25, DP_87cbf821_14_7_4.Texture, DP_87cbf821_14_7_4.SamplerState);
                _draw_87cbf821.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e658c966_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_e658c966_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_e658c966_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_e658c966.BlendEnabled(true);
                _draw_e658c966.DepthTestEnabled(false);
                _draw_e658c966.CullFace(uPtr(dc)->CullFace());
                _draw_e658c966.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e658c966.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e658c966.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e658c966.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e658c966.Const(0, DP_e658c966_14_7_4.NeedFract);
                _draw_e658c966.Const(1, DP_e658c966_14_7_4.Texture == NULL);
                _draw_e658c966.Use();
                _draw_e658c966.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e658c966.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_e658c966.Uniform2(4, center);
                _draw_e658c966.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_e658c966.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_e658c966.Uniform2(7, DP_e658c966_14_7_4.Origin);
                _draw_e658c966.Uniform2(8, DP_e658c966_14_7_4.Size);
                _draw_e658c966.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_e658c966_14_7_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_e658c966_14_7_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_e658c966.Uniform2(10, (ind6 = DP_e658c966_14_7_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_e658c966.Uniform2(11, DP_e658c966_14_7_4.TexCoordScale1);
                _draw_e658c966.Uniform2(12, DP_e658c966_14_7_4.TexCoordBias1);
                _draw_e658c966.Uniform2(13, DP_e658c966_14_7_4.TexCoordScale2);
                _draw_e658c966.Uniform2(14, DP_e658c966_14_7_4.TexCoordBias2);
                _draw_e658c966.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e658c966.Uniform(16, radius);
                _draw_e658c966.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e658c966.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e658c966.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_e658c966.Uniform(20, 1.0f / smoothness);
                _draw_e658c966.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e658c966.Uniform2(22, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_e658c966_20_2_15, EndVec_e658c966_20_3_16)));
                _draw_e658c966.Uniform2(23, StartVec_e658c966_20_2_15);
                _draw_e658c966.Uniform2(24, EndVec_e658c966_20_3_16);
                _draw_e658c966.Sampler3(25, DP_e658c966_14_7_4.Texture, DP_e658c966_14_7_4.SamplerState);
                _draw_e658c966.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_989fe82b_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_989fe82b.BlendEnabled(true);
                _draw_989fe82b.DepthTestEnabled(false);
                _draw_989fe82b.CullFace(uPtr(dc)->CullFace());
                _draw_989fe82b.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_989fe82b.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_989fe82b.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_989fe82b.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_989fe82b.Const(0, DP_989fe82b_14_7_4.NeedFract);
                _draw_989fe82b.Const(1, DP_989fe82b_14_7_4.Texture == NULL);
                _draw_989fe82b.Use();
                _draw_989fe82b.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_989fe82b.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_989fe82b.Uniform2(4, center);
                _draw_989fe82b.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_989fe82b.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_989fe82b.Uniform2(7, DP_989fe82b_14_7_4.Origin);
                _draw_989fe82b.Uniform2(8, DP_989fe82b_14_7_4.Size);
                _draw_989fe82b.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_989fe82b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_989fe82b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_989fe82b.Uniform2(10, (ind9 = DP_989fe82b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_989fe82b.Uniform2(11, DP_989fe82b_14_7_4.TexCoordScale1);
                _draw_989fe82b.Uniform2(12, DP_989fe82b_14_7_4.TexCoordBias1);
                _draw_989fe82b.Uniform2(13, DP_989fe82b_14_7_4.TexCoordScale2);
                _draw_989fe82b.Uniform2(14, DP_989fe82b_14_7_4.TexCoordBias2);
                _draw_989fe82b.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_989fe82b.Uniform(16, radius);
                _draw_989fe82b.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_989fe82b.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_989fe82b.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_989fe82b.Uniform(20, 1.0f / smoothness);
                _draw_989fe82b.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_989fe82b.Sampler3(22, DP_989fe82b_14_7_4.Texture, DP_989fe82b_14_7_4.SamplerState);
                _draw_989fe82b.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4451e6f7_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4451e6f7_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_4451e6f7.BlendEnabled(true);
                _draw_4451e6f7.DepthTestEnabled(false);
                _draw_4451e6f7.CullFace(uPtr(dc)->CullFace());
                _draw_4451e6f7.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_4451e6f7.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_4451e6f7.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_4451e6f7.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_4451e6f7.Use();
                _draw_4451e6f7.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4451e6f7.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_4451e6f7.Uniform2(2, center);
                _draw_4451e6f7.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4451e6f7.Uniform(4, radius);
                _draw_4451e6f7.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4451e6f7.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4451e6f7.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_4451e6f7.Uniform(8, 1.0f / smoothness);
                _draw_4451e6f7.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_4451e6f7.Uniform6(10, (ind10 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)));
                _draw_4451e6f7.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_4451e6f7.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4451e6f7_20_2_7, EndVec_4451e6f7_20_3_8)));
                _draw_4451e6f7.Uniform2(13, StartVec_4451e6f7_20_2_7);
                _draw_4451e6f7.Uniform2(14, EndVec_4451e6f7_20_3_8);
                _draw_4451e6f7.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_e5c515b2_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_e5c515b2_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_e5c515b2.BlendEnabled(true);
                _draw_e5c515b2.DepthTestEnabled(false);
                _draw_e5c515b2.CullFace(uPtr(dc)->CullFace());
                _draw_e5c515b2.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e5c515b2.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e5c515b2.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e5c515b2.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e5c515b2.Use();
                _draw_e5c515b2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_e5c515b2.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_e5c515b2.Uniform2(2, center);
                _draw_e5c515b2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_e5c515b2.Uniform(4, radius);
                _draw_e5c515b2.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e5c515b2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e5c515b2.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_e5c515b2.Uniform(8, 1.0f / smoothness);
                _draw_e5c515b2.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_e5c515b2.Uniform6(10, (ind11 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind11.X, ind11.Y, ind11.Z)));
                _draw_e5c515b2.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e5c515b2.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_e5c515b2_20_2_7, EndVec_e5c515b2_20_3_8)));
                _draw_e5c515b2.Uniform2(13, StartVec_e5c515b2_20_2_7);
                _draw_e5c515b2.Uniform2(14, EndVec_e5c515b2_20_3_8);
                _draw_e5c515b2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_337df6ed.BlendEnabled(true);
                _draw_337df6ed.DepthTestEnabled(false);
                _draw_337df6ed.CullFace(uPtr(dc)->CullFace());
                _draw_337df6ed.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_337df6ed.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_337df6ed.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_337df6ed.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_337df6ed.Use();
                _draw_337df6ed.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_337df6ed.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_337df6ed.Uniform2(2, center);
                _draw_337df6ed.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_337df6ed.Uniform(4, radius);
                _draw_337df6ed.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_337df6ed.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_337df6ed.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_337df6ed.Uniform(8, 1.0f / smoothness);
                _draw_337df6ed.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_337df6ed.Uniform6(10, (ind12 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)));
                _draw_337df6ed.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_337df6ed.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_3851f461_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_3851f461_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_3851f461_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_3851f461_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_3851f461.BlendEnabled(true);
                _draw_3851f461.DepthTestEnabled(false);
                _draw_3851f461.CullFace(uPtr(dc)->CullFace());
                _draw_3851f461.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_3851f461.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_3851f461.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_3851f461.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_3851f461.Use();
                _draw_3851f461.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_3851f461.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_3851f461.Uniform2(2, center);
                _draw_3851f461.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_3851f461.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_3851f461.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_3851f461_14_18_6, angleLen_3851f461_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_3851f461.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_3851f461.Uniform(7, radius);
                _draw_3851f461.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_3851f461.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_3851f461.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_3851f461.Uniform(11, 1.0f / smoothness);
                _draw_3851f461.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_3851f461.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_3851f461_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_3851f461.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_3851f461_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_3851f461.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_3851f461_20_2_15, EndVec_3851f461_20_3_16)));
                _draw_3851f461.Uniform2(16, StartVec_3851f461_20_2_15);
                _draw_3851f461.Uniform2(17, EndVec_3851f461_20_3_16);
                _draw_3851f461.Sampler2(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_3851f461.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_1551e075_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_1551e075_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_1551e075_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1551e075_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_1551e075.BlendEnabled(true);
                _draw_1551e075.DepthTestEnabled(false);
                _draw_1551e075.CullFace(uPtr(dc)->CullFace());
                _draw_1551e075.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e075.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e075.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e075.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e075.Use();
                _draw_1551e075.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1551e075.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_1551e075.Uniform2(2, center);
                _draw_1551e075.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1551e075.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1551e075.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_1551e075_14_18_6, angleLen_1551e075_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_1551e075.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_1551e075.Uniform(7, radius);
                _draw_1551e075.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1551e075.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1551e075.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1551e075.Uniform(11, 1.0f / smoothness);
                _draw_1551e075.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_1551e075.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_1551e075_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_1551e075.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_1551e075_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_1551e075.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1551e075_20_2_15, EndVec_1551e075_20_3_16)));
                _draw_1551e075.Uniform2(16, StartVec_1551e075_20_2_15);
                _draw_1551e075.Uniform2(17, EndVec_1551e075_20_3_16);
                _draw_1551e075.Sampler2(18, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_1551e075.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_1551e0d6_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_1551e0d6_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_1551e0d6.BlendEnabled(true);
                _draw_1551e0d6.DepthTestEnabled(false);
                _draw_1551e0d6.CullFace(uPtr(dc)->CullFace());
                _draw_1551e0d6.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e0d6.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e0d6.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e0d6.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_1551e0d6.Use();
                _draw_1551e0d6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1551e0d6.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_1551e0d6.Uniform2(2, center);
                _draw_1551e0d6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1551e0d6.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1551e0d6.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_1551e0d6_14_18_6, angleLen_1551e0d6_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_1551e0d6.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_1551e0d6.Uniform(7, radius);
                _draw_1551e0d6.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_1551e0d6.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_1551e0d6.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1551e0d6.Uniform(11, 1.0f / smoothness);
                _draw_1551e0d6.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_1551e0d6.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_1551e0d6_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_1551e0d6.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_1551e0d6_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_1551e0d6.Sampler2(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_1551e0d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_fecfc103_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_fecfc103_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_fecfc103.BlendEnabled(true);
                _draw_fecfc103.DepthTestEnabled(false);
                _draw_fecfc103.CullFace(uPtr(dc)->CullFace());
                _draw_fecfc103.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_fecfc103.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_fecfc103.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_fecfc103.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_fecfc103.Use();
                _draw_fecfc103.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_fecfc103.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_fecfc103.Uniform2(2, center);
                _draw_fecfc103.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_fecfc103.Uniform(4, radius);
                _draw_fecfc103.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_fecfc103.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_fecfc103.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_fecfc103.Uniform(8, 1.0f / smoothness);
                _draw_fecfc103.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_fecfc103.Uniform6(10, (ind13 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind13.X, ind13.Y, ind13.Z)));
                _draw_fecfc103.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_fecfc103_20_2_7, EndVec_fecfc103_20_3_8)));
                _draw_fecfc103.Uniform2(12, StartVec_fecfc103_20_2_7);
                _draw_fecfc103.Uniform2(13, EndVec_fecfc103_20_3_8);
                _draw_fecfc103.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_5d5c9248_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_5d5c9248_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_5d5c9248.BlendEnabled(true);
                _draw_5d5c9248.DepthTestEnabled(false);
                _draw_5d5c9248.CullFace(uPtr(dc)->CullFace());
                _draw_5d5c9248.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_5d5c9248.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_5d5c9248.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_5d5c9248.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_5d5c9248.Use();
                _draw_5d5c9248.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_5d5c9248.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_5d5c9248.Uniform2(2, center);
                _draw_5d5c9248.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_5d5c9248.Uniform(4, radius);
                _draw_5d5c9248.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_5d5c9248.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_5d5c9248.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_5d5c9248.Uniform(8, 1.0f / smoothness);
                _draw_5d5c9248.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_5d5c9248.Uniform6(10, (ind14 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind14.X, ind14.Y, ind14.Z)));
                _draw_5d5c9248.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_5d5c9248_20_2_7, EndVec_5d5c9248_20_3_8)));
                _draw_5d5c9248.Uniform2(12, StartVec_5d5c9248_20_2_7);
                _draw_5d5c9248.Uniform2(13, EndVec_5d5c9248_20_3_8);
                _draw_5d5c9248.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_cc53f0e5.BlendEnabled(true);
                _draw_cc53f0e5.DepthTestEnabled(false);
                _draw_cc53f0e5.CullFace(uPtr(dc)->CullFace());
                _draw_cc53f0e5.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_cc53f0e5.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_cc53f0e5.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_cc53f0e5.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_cc53f0e5.Use();
                _draw_cc53f0e5.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_cc53f0e5.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_cc53f0e5.Uniform2(2, center);
                _draw_cc53f0e5.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_cc53f0e5.Uniform(4, radius);
                _draw_cc53f0e5.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_cc53f0e5.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_cc53f0e5.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_cc53f0e5.Uniform(8, 1.0f / smoothness);
                _draw_cc53f0e5.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_cc53f0e5.Uniform6(10, (ind15 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind15.X, ind15.Y, ind15.Z)));
                _draw_cc53f0e5.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c5609772_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_c5609772_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_c5609772_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_c5609772.BlendEnabled(true);
                _draw_c5609772.DepthTestEnabled(false);
                _draw_c5609772.CullFace(uPtr(dc)->CullFace());
                _draw_c5609772.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609772.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609772.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609772.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609772.Const(0, DP_c5609772_14_7_4.NeedFract);
                _draw_c5609772.Const(1, DP_c5609772_14_7_4.Texture == NULL);
                _draw_c5609772.Use();
                _draw_c5609772.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c5609772.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c5609772.Uniform2(4, center);
                _draw_c5609772.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c5609772.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c5609772.Uniform2(7, DP_c5609772_14_7_4.Origin);
                _draw_c5609772.Uniform2(8, DP_c5609772_14_7_4.Size);
                _draw_c5609772.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind16 = DP_c5609772_14_7_4.UVClip, ::g::Uno::Float2__New2(ind16.Z, ind16.W)), (ind17 = DP_c5609772_14_7_4.UVClip, ::g::Uno::Float2__New2(ind17.X, ind17.Y))));
                _draw_c5609772.Uniform2(10, (ind18 = DP_c5609772_14_7_4.UVClip, ::g::Uno::Float2__New2(ind18.X, ind18.Y)));
                _draw_c5609772.Uniform2(11, DP_c5609772_14_7_4.TexCoordScale1);
                _draw_c5609772.Uniform2(12, DP_c5609772_14_7_4.TexCoordBias1);
                _draw_c5609772.Uniform2(13, DP_c5609772_14_7_4.TexCoordScale2);
                _draw_c5609772.Uniform2(14, DP_c5609772_14_7_4.TexCoordBias2);
                _draw_c5609772.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c5609772.Uniform(16, radius);
                _draw_c5609772.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_c5609772.Uniform(18, 1.0f / smoothness);
                _draw_c5609772.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c5609772.Uniform2(20, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_c5609772_20_2_14, EndVec_c5609772_20_3_15)));
                _draw_c5609772.Uniform2(21, StartVec_c5609772_20_2_14);
                _draw_c5609772.Uniform2(22, EndVec_c5609772_20_3_15);
                _draw_c5609772.Sampler3(23, DP_c5609772_14_7_4.Texture, DP_c5609772_14_7_4.SamplerState);
                _draw_c5609772.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c5609795_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_c5609795_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_c5609795_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_c5609795.BlendEnabled(true);
                _draw_c5609795.DepthTestEnabled(false);
                _draw_c5609795.CullFace(uPtr(dc)->CullFace());
                _draw_c5609795.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609795.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609795.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609795.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c5609795.Const(0, DP_c5609795_14_7_4.NeedFract);
                _draw_c5609795.Const(1, DP_c5609795_14_7_4.Texture == NULL);
                _draw_c5609795.Use();
                _draw_c5609795.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c5609795.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c5609795.Uniform2(4, center);
                _draw_c5609795.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c5609795.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c5609795.Uniform2(7, DP_c5609795_14_7_4.Origin);
                _draw_c5609795.Uniform2(8, DP_c5609795_14_7_4.Size);
                _draw_c5609795.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind19 = DP_c5609795_14_7_4.UVClip, ::g::Uno::Float2__New2(ind19.Z, ind19.W)), (ind20 = DP_c5609795_14_7_4.UVClip, ::g::Uno::Float2__New2(ind20.X, ind20.Y))));
                _draw_c5609795.Uniform2(10, (ind21 = DP_c5609795_14_7_4.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_c5609795.Uniform2(11, DP_c5609795_14_7_4.TexCoordScale1);
                _draw_c5609795.Uniform2(12, DP_c5609795_14_7_4.TexCoordBias1);
                _draw_c5609795.Uniform2(13, DP_c5609795_14_7_4.TexCoordScale2);
                _draw_c5609795.Uniform2(14, DP_c5609795_14_7_4.TexCoordBias2);
                _draw_c5609795.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c5609795.Uniform(16, radius);
                _draw_c5609795.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_c5609795.Uniform(18, 1.0f / smoothness);
                _draw_c5609795.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c5609795.Uniform2(20, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_c5609795_20_2_14, EndVec_c5609795_20_3_15)));
                _draw_c5609795.Uniform2(21, StartVec_c5609795_20_2_14);
                _draw_c5609795.Uniform2(22, EndVec_c5609795_20_3_15);
                _draw_c5609795.Sampler3(23, DP_c5609795_14_7_4.Texture, DP_c5609795_14_7_4.SamplerState);
                _draw_c5609795.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c56097b4_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_c56097b4.BlendEnabled(true);
                _draw_c56097b4.DepthTestEnabled(false);
                _draw_c56097b4.CullFace(uPtr(dc)->CullFace());
                _draw_c56097b4.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c56097b4.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c56097b4.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c56097b4.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_c56097b4.Const(0, DP_c56097b4_14_7_4.NeedFract);
                _draw_c56097b4.Const(1, DP_c56097b4_14_7_4.Texture == NULL);
                _draw_c56097b4.Use();
                _draw_c56097b4.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c56097b4.Uniform2(3, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_c56097b4.Uniform2(4, center);
                _draw_c56097b4.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c56097b4.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c56097b4.Uniform2(7, DP_c56097b4_14_7_4.Origin);
                _draw_c56097b4.Uniform2(8, DP_c56097b4_14_7_4.Size);
                _draw_c56097b4.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_c56097b4_14_7_4.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_c56097b4_14_7_4.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_c56097b4.Uniform2(10, (ind24 = DP_c56097b4_14_7_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_c56097b4.Uniform2(11, DP_c56097b4_14_7_4.TexCoordScale1);
                _draw_c56097b4.Uniform2(12, DP_c56097b4_14_7_4.TexCoordBias1);
                _draw_c56097b4.Uniform2(13, DP_c56097b4_14_7_4.TexCoordScale2);
                _draw_c56097b4.Uniform2(14, DP_c56097b4_14_7_4.TexCoordBias2);
                _draw_c56097b4.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c56097b4.Uniform(16, radius);
                _draw_c56097b4.Uniform(17, dc->ViewportPixelsPerPoint());
                _draw_c56097b4.Uniform(18, 1.0f / smoothness);
                _draw_c56097b4.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c56097b4.Sampler3(20, DP_c56097b4_14_7_4.Texture, DP_c56097b4_14_7_4.SamplerState);
                _draw_c56097b4.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_78f203d2_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_78f203d2_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_78f203d2.BlendEnabled(true);
                _draw_78f203d2.DepthTestEnabled(false);
                _draw_78f203d2.CullFace(uPtr(dc)->CullFace());
                _draw_78f203d2.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203d2.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203d2.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203d2.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203d2.Use();
                _draw_78f203d2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_78f203d2.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_78f203d2.Uniform2(2, center);
                _draw_78f203d2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_78f203d2.Uniform(4, radius);
                _draw_78f203d2.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_78f203d2.Uniform(6, 1.0f / smoothness);
                _draw_78f203d2.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_78f203d2.Uniform6(8, (ind25 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind25.X, ind25.Y, ind25.Z)));
                _draw_78f203d2.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_78f203d2.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_78f203d2_20_2_6, EndVec_78f203d2_20_3_7)));
                _draw_78f203d2.Uniform2(11, StartVec_78f203d2_20_2_6);
                _draw_78f203d2.Uniform2(12, EndVec_78f203d2_20_3_7);
                _draw_78f203d2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_78f203f1_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_78f203f1_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_78f203f1.BlendEnabled(true);
                _draw_78f203f1.DepthTestEnabled(false);
                _draw_78f203f1.CullFace(uPtr(dc)->CullFace());
                _draw_78f203f1.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203f1.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203f1.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203f1.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_78f203f1.Use();
                _draw_78f203f1.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_78f203f1.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_78f203f1.Uniform2(2, center);
                _draw_78f203f1.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_78f203f1.Uniform(4, radius);
                _draw_78f203f1.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_78f203f1.Uniform(6, 1.0f / smoothness);
                _draw_78f203f1.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_78f203f1.Uniform6(8, (ind26 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind26.X, ind26.Y, ind26.Z)));
                _draw_78f203f1.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_78f203f1.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_78f203f1_20_2_6, EndVec_78f203f1_20_3_7)));
                _draw_78f203f1.Uniform2(11, StartVec_78f203f1_20_2_6);
                _draw_78f203f1.Uniform2(12, EndVec_78f203f1_20_3_7);
                _draw_78f203f1.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_afc1d22f.BlendEnabled(true);
                _draw_afc1d22f.DepthTestEnabled(false);
                _draw_afc1d22f.CullFace(uPtr(dc)->CullFace());
                _draw_afc1d22f.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_afc1d22f.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_afc1d22f.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_afc1d22f.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_afc1d22f.Use();
                _draw_afc1d22f.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_afc1d22f.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_afc1d22f.Uniform2(2, center);
                _draw_afc1d22f.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_afc1d22f.Uniform(4, radius);
                _draw_afc1d22f.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_afc1d22f.Uniform(6, 1.0f / smoothness);
                _draw_afc1d22f.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_afc1d22f.Uniform6(8, (ind27 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind27.X, ind27.Y, ind27.Z)));
                _draw_afc1d22f.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_afc1d22f.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_99edfa98_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_99edfa98_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_99edfa98_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_99edfa98_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_99edfa98.BlendEnabled(true);
                _draw_99edfa98.DepthTestEnabled(false);
                _draw_99edfa98.CullFace(uPtr(dc)->CullFace());
                _draw_99edfa98.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa98.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa98.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa98.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa98.Use();
                _draw_99edfa98.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99edfa98.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99edfa98.Uniform2(2, center);
                _draw_99edfa98.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_99edfa98.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_99edfa98.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_99edfa98_14_18_6, angleLen_99edfa98_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_99edfa98.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_99edfa98.Uniform(7, radius);
                _draw_99edfa98.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_99edfa98.Uniform(9, 1.0f / smoothness);
                _draw_99edfa98.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_99edfa98.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_99edfa98_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa98.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_99edfa98_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa98.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_99edfa98_20_2_14, EndVec_99edfa98_20_3_15)));
                _draw_99edfa98.Uniform2(14, StartVec_99edfa98_20_2_14);
                _draw_99edfa98.Uniform2(15, EndVec_99edfa98_20_3_15);
                _draw_99edfa98.Sampler2(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_99edfa98.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_99edfa75_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_99edfa75_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                ::g::Uno::Float2 StartVec_99edfa75_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_99edfa75_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_99edfa75.BlendEnabled(true);
                _draw_99edfa75.DepthTestEnabled(false);
                _draw_99edfa75.CullFace(uPtr(dc)->CullFace());
                _draw_99edfa75.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa75.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa75.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa75.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa75.Use();
                _draw_99edfa75.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99edfa75.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99edfa75.Uniform2(2, center);
                _draw_99edfa75.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_99edfa75.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_99edfa75.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_99edfa75_14_18_6, angleLen_99edfa75_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_99edfa75.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_99edfa75.Uniform(7, radius);
                _draw_99edfa75.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_99edfa75.Uniform(9, 1.0f / smoothness);
                _draw_99edfa75.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_99edfa75.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_99edfa75_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa75.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_99edfa75_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa75.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_99edfa75_20_2_14, EndVec_99edfa75_20_3_15)));
                _draw_99edfa75.Uniform2(14, StartVec_99edfa75_20_2_14);
                _draw_99edfa75.Uniform2(15, EndVec_99edfa75_20_3_15);
                _draw_99edfa75.Sampler2(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_99edfa75.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float2 angleSlope_99edfa56_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_99edfa56_14_17_7 = ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(uPtr(visual)->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_99edfa56.BlendEnabled(true);
                _draw_99edfa56.DepthTestEnabled(false);
                _draw_99edfa56.CullFace(uPtr(dc)->CullFace());
                _draw_99edfa56.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa56.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa56.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa56.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_99edfa56.Use();
                _draw_99edfa56.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_99edfa56.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_99edfa56.Uniform2(2, center);
                _draw_99edfa56.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_99edfa56.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_99edfa56.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(visual->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_99edfa56_14_18_6, angleLen_99edfa56_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), visual->ActualSize()));
                _draw_99edfa56.Uniform2(6, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_99edfa56.Uniform(7, radius);
                _draw_99edfa56.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_99edfa56.Uniform(9, 1.0f / smoothness);
                _draw_99edfa56.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_99edfa56.Uniform2(11, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_99edfa56_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa56.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_99edfa56_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), visual->ActualSize())));
                _draw_99edfa56.Sampler2(13, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_99edfa56.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f01b0880_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f01b0880_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_f01b0880.BlendEnabled(true);
                _draw_f01b0880.DepthTestEnabled(false);
                _draw_f01b0880.CullFace(uPtr(dc)->CullFace());
                _draw_f01b0880.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_f01b0880.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_f01b0880.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_f01b0880.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_f01b0880.Use();
                _draw_f01b0880.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f01b0880.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_f01b0880.Uniform2(2, center);
                _draw_f01b0880.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f01b0880.Uniform(4, radius);
                _draw_f01b0880.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_f01b0880.Uniform(6, 1.0f / smoothness);
                _draw_f01b0880.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_f01b0880.Uniform6(8, (ind28 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind28.X, ind28.Y, ind28.Z)));
                _draw_f01b0880.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f01b0880_20_2_6, EndVec_f01b0880_20_3_7)));
                _draw_f01b0880.Uniform2(10, StartVec_f01b0880_20_2_6);
                _draw_f01b0880.Uniform2(11, EndVec_f01b0880_20_3_7);
                _draw_f01b0880.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_f01b0861_20_2_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_f01b0861_20_3_7 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_f01b0861.BlendEnabled(true);
                _draw_f01b0861.DepthTestEnabled(false);
                _draw_f01b0861.CullFace(uPtr(dc)->CullFace());
                _draw_f01b0861.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_f01b0861.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_f01b0861.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_f01b0861.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_f01b0861.Use();
                _draw_f01b0861.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f01b0861.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_f01b0861.Uniform2(2, center);
                _draw_f01b0861.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f01b0861.Uniform(4, radius);
                _draw_f01b0861.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_f01b0861.Uniform(6, 1.0f / smoothness);
                _draw_f01b0861.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_f01b0861.Uniform6(8, (ind29 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind29.X, ind29.Y, ind29.Z)));
                _draw_f01b0861.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_f01b0861_20_2_6, EndVec_f01b0861_20_3_7)));
                _draw_f01b0861.Uniform2(10, StartVec_f01b0861_20_2_6);
                _draw_f01b0861.Uniform2(11, EndVec_f01b0861_20_3_7);
                _draw_f01b0861.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_f01b083e.BlendEnabled(true);
                _draw_f01b083e.DepthTestEnabled(false);
                _draw_f01b083e.CullFace(uPtr(dc)->CullFace());
                _draw_f01b083e.BlendSrcRgb(Draw_BlendSrcRgb_fecfc103_12_4_22);
                _draw_f01b083e.BlendSrcAlpha(Draw_BlendSrcAlpha_fecfc103_12_6_23);
                _draw_f01b083e.BlendDstRgb(Draw_BlendDstRgb_fecfc103_12_5_24);
                _draw_f01b083e.BlendDstAlpha(Draw_BlendDstAlpha_fecfc103_12_7_25);
                _draw_f01b083e.Use();
                _draw_f01b083e.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_f01b083e.Uniform2(1, ::g::Uno::Float2__op_Addition(radius, ::g::Uno::Float2__op_Multiply1(extend, 2.0f)));
                _draw_f01b083e.Uniform2(2, center);
                _draw_f01b083e.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_f01b083e.Uniform(4, radius);
                _draw_f01b083e.Uniform(5, dc->ViewportPixelsPerPoint());
                _draw_f01b083e.Uniform(6, 1.0f / smoothness);
                _draw_f01b083e.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_f01b083e.Uniform6(8, (ind30 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind30.X, ind30.Y, ind30.Z)));
                _draw_f01b083e.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance] :43
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private generated void init_DrawCalls() [instance] :21
void Circle::init_DrawCalls()
{
    Draw_BlendSrcRgb_fecfc103_12_4_22 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_fecfc103_12_6_23 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_fecfc103_12_5_24 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_fecfc103_12_7_25 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_87cbf821 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle038d0b56());
    _draw_e658c966 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle60e596bb());
    _draw_989fe82b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlebe3e2220());
    _draw_4451e6f7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4c78c62c());
    _draw_e5c515b2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleef203ac7());
    _draw_337df6ed = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle91c7af62());
    _draw_3851f461 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle01247f96());
    _draw_1551e075 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe());
    _draw_1551e0d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff());
    _draw_fecfc103 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74());
    _draw_5d5c9248 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled802ead9());
    _draw_cc53f0e5 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4a971b16());
    _draw_c5609772 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlecfb305c7());
    _draw_c5609795 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlecfb305ca());
    _draw_c56097b4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlecfb305c9());
    _draw_78f203d2 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb());
    _draw_78f203f1 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee8f0edda());
    _draw_afc1d22f = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled0e74ba4());
    _draw_99edfa98 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle09647389());
    _draw_99edfa75 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle09647386());
    _draw_99edfa56 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle09647387());
    _draw_f01b0880 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28f173d());
    _draw_f01b0861 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28f173e());
    _draw_f01b083e = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef28f173b());
}

// private void InitBuffers() [instance] :53
void Circle::InitBuffers()
{
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance] :27
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Circle New() [static] :21
Circle* Circle::New1()
{
    Circle* obj31 = (Circle*)uNew(Circle_typeof());
    obj31->ctor_();
    return obj31;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage :592
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage() :592
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New() :592
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance] :592
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static] :592
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage :587
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage() :587
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New() :587
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance] :587
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static] :587
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class Coverage :203
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage() :203
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance] :203
void Coverage::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal class Falloff :222
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff() :222
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New() :222
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance] :222
void Falloff::ctor_()
{
}

// public generated Falloff New() [static] :222
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class FillCoverage :207
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage() :207
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New() :207
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance] :207
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static] :207
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class LimitCoverage :12
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage() :12
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance] :12
void LimitCoverage::ctor_()
{
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class OneLimitCoverage :16
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage() :16
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New() :16
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance] :16
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static] :16
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Rectangle :234
// {
// static Rectangle() :234
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[9] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[10] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[12] = ::TYPES[9/*float[]*/]->Array();
    ::TYPES[13] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _bufferDistance), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_2af26768), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_2af26787), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_8d31c878), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_b23914ac), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_b23914cb), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e193fb34), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942474), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e194259b), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942cb4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1942d57), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e19434f4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_e1943513), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_ea968cf8), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_ea968d17), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_f294ef1c), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _draw_f294ef3b), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _edgeInfo), 0,
        ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _shadowFalloff), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _strokeCoverage), 0,
        ::TYPES[9/*float[]*/], offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _uniforms), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendDstAlpha_e193fb34_12_7_19), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendDstRgb_e193fb34_12_5_18), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendSrcAlpha_e193fb34_12_6_17), 0,
        ::g::Uno::Graphics::BlendOperand_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Rectangle, Draw_BlendSrcRgb_e193fb34_12_4_16), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Rectangle::Singleton_, uFieldFlagsStatic);
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle() :234
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b) :270
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) :474
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) :255
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls() :234
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers() :305
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a) :286
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New() :234
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) :239
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b) :278
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance] :234
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[9/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance] :270
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance] :474
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;

    if (_bufferDistance == NULL)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[10/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == NULL) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e1942474_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e1942474.BlendEnabled(true);
                _draw_e1942474.DepthTestEnabled(false);
                _draw_e1942474.CullFace(uPtr(dc)->CullFace());
                _draw_e1942474.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e1942474.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e1942474.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e1942474.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e1942474.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942474.Const(1, DP_e1942474_14_7_4.NeedFract);
                _draw_e1942474.Const(2, DP_e1942474_14_7_4.Texture == NULL);
                _draw_e1942474.Use();
                _draw_e1942474.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942474.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942474.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942474.Uniform1(6, _uniforms);
                _draw_e1942474.Uniform2(7, position);
                _draw_e1942474.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e1942474.Uniform2(9, csz);
                _draw_e1942474.Uniform2(10, DP_e1942474_14_7_4.Origin);
                _draw_e1942474.Uniform2(11, DP_e1942474_14_7_4.Size);
                _draw_e1942474.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_e1942474_14_7_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_e1942474_14_7_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_e1942474.Uniform2(13, (ind3 = DP_e1942474_14_7_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_e1942474.Uniform2(14, DP_e1942474_14_7_4.TexCoordScale1);
                _draw_e1942474.Uniform2(15, DP_e1942474_14_7_4.TexCoordBias1);
                _draw_e1942474.Uniform2(16, DP_e1942474_14_7_4.TexCoordScale2);
                _draw_e1942474.Uniform2(17, DP_e1942474_14_7_4.TexCoordBias2);
                _draw_e1942474.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e1942474.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942474.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942474.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_e1942474.Uniform(22, 1.0f / smoothness);
                _draw_e1942474.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e1942474.Sampler3(24, DP_e1942474_14_7_4.Texture, DP_e1942474_14_7_4.SamplerState);
                _draw_e1942474.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_e194259b_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_e194259b.BlendEnabled(true);
                _draw_e194259b.DepthTestEnabled(false);
                _draw_e194259b.CullFace(uPtr(dc)->CullFace());
                _draw_e194259b.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e194259b.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e194259b.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e194259b.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_e194259b.Const1(0, uPtr(_uniforms)->Length());
                _draw_e194259b.Const(1, DP_e194259b_14_7_4.NeedFract);
                _draw_e194259b.Const(2, DP_e194259b_14_7_4.Texture == NULL);
                _draw_e194259b.Use();
                _draw_e194259b.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e194259b.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e194259b.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e194259b.Uniform1(6, _uniforms);
                _draw_e194259b.Uniform2(7, position);
                _draw_e194259b.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_e194259b.Uniform2(9, csz);
                _draw_e194259b.Uniform2(10, DP_e194259b_14_7_4.Origin);
                _draw_e194259b.Uniform2(11, DP_e194259b_14_7_4.Size);
                _draw_e194259b.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_e194259b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_e194259b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_e194259b.Uniform2(13, (ind6 = DP_e194259b_14_7_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_e194259b.Uniform2(14, DP_e194259b_14_7_4.TexCoordScale1);
                _draw_e194259b.Uniform2(15, DP_e194259b_14_7_4.TexCoordBias1);
                _draw_e194259b.Uniform2(16, DP_e194259b_14_7_4.TexCoordScale2);
                _draw_e194259b.Uniform2(17, DP_e194259b_14_7_4.TexCoordBias2);
                _draw_e194259b.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_e194259b.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e194259b.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e194259b.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_e194259b.Uniform(22, 1.0f / smoothness);
                _draw_e194259b.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_e194259b.Sampler3(24, DP_e194259b_14_7_4.Texture, DP_e194259b_14_7_4.SamplerState);
                _draw_e194259b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e1942cb4.BlendEnabled(true);
                _draw_e1942cb4.DepthTestEnabled(false);
                _draw_e1942cb4.CullFace(uPtr(dc)->CullFace());
                _draw_e1942cb4.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942cb4.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942cb4.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942cb4.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942cb4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942cb4.Use();
                _draw_e1942cb4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942cb4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942cb4.Uniform1(4, _uniforms);
                _draw_e1942cb4.Uniform2(5, position);
                _draw_e1942cb4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942cb4.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942cb4.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942cb4.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_e1942cb4.Uniform(10, 1.0f / smoothness);
                _draw_e1942cb4.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_e1942cb4.Uniform6(12, (ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)));
                _draw_e1942cb4.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e1942cb4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e1942d57.BlendEnabled(true);
                _draw_e1942d57.DepthTestEnabled(false);
                _draw_e1942d57.CullFace(uPtr(dc)->CullFace());
                _draw_e1942d57.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942d57.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942d57.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942d57.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_e1942d57.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1942d57.Use();
                _draw_e1942d57.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1942d57.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1942d57.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1942d57.Uniform1(4, _uniforms);
                _draw_e1942d57.Uniform2(5, position);
                _draw_e1942d57.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1942d57.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1942d57.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1942d57.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_e1942d57.Uniform(10, 1.0f / smoothness);
                _draw_e1942d57.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_e1942d57.Uniform6(12, (ind8 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)));
                _draw_e1942d57.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_e1942d57.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float2 angleSlope_e19434f4_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_e19434f4_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_e19434f4.BlendEnabled(true);
                _draw_e19434f4.DepthTestEnabled(false);
                _draw_e19434f4.CullFace(uPtr(dc)->CullFace());
                _draw_e19434f4.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e19434f4.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e19434f4.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e19434f4.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e19434f4.Const1(0, uPtr(_uniforms)->Length());
                _draw_e19434f4.Use();
                _draw_e19434f4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e19434f4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e19434f4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e19434f4.Uniform1(4, _uniforms);
                _draw_e19434f4.Uniform2(5, position);
                _draw_e19434f4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e19434f4.Uniform2(7, csz);
                _draw_e19434f4.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_e19434f4_14_18_6, angleLen_e19434f4_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
                _draw_e19434f4.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e19434f4.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e19434f4.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e19434f4.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_e19434f4.Uniform(13, 1.0f / smoothness);
                _draw_e19434f4.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e19434f4.Uniform2(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_e19434f4_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_e19434f4.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_e19434f4_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_e19434f4.Sampler2(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_e19434f4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float2 angleSlope_e1943513_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_e1943513_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_e1943513.BlendEnabled(true);
                _draw_e1943513.DepthTestEnabled(false);
                _draw_e1943513.CullFace(uPtr(dc)->CullFace());
                _draw_e1943513.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e1943513.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e1943513.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e1943513.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_e1943513.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1943513.Use();
                _draw_e1943513.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1943513.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1943513.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1943513.Uniform1(4, _uniforms);
                _draw_e1943513.Uniform2(5, position);
                _draw_e1943513.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1943513.Uniform2(7, csz);
                _draw_e1943513.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_e1943513_14_18_6, angleLen_e1943513_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
                _draw_e1943513.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e1943513.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1943513.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1943513.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_e1943513.Uniform(13, 1.0f / smoothness);
                _draw_e1943513.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e1943513.Uniform2(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_e1943513_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_e1943513.Uniform(16, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_e1943513_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_e1943513.Sampler2(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_e1943513.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_e193fb34.BlendEnabled(true);
                _draw_e193fb34.DepthTestEnabled(false);
                _draw_e193fb34.CullFace(uPtr(dc)->CullFace());
                _draw_e193fb34.BlendSrcRgb(Draw_BlendSrcRgb_e193fb34_12_4_16);
                _draw_e193fb34.BlendSrcAlpha(Draw_BlendSrcAlpha_e193fb34_12_6_17);
                _draw_e193fb34.BlendDstRgb(Draw_BlendDstRgb_e193fb34_12_5_18);
                _draw_e193fb34.BlendDstAlpha(Draw_BlendDstAlpha_e193fb34_12_7_19);
                _draw_e193fb34.Const1(0, uPtr(_uniforms)->Length());
                _draw_e193fb34.Use();
                _draw_e193fb34.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e193fb34.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e193fb34.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e193fb34.Uniform1(4, _uniforms);
                _draw_e193fb34.Uniform2(5, position);
                _draw_e193fb34.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e193fb34.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e193fb34.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e193fb34.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_e193fb34.Uniform(10, 1.0f / smoothness);
                _draw_e193fb34.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_e193fb34.Uniform6(12, (ind9 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)));
                _draw_e193fb34.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_8d31c878.BlendEnabled(true);
                _draw_8d31c878.DepthTestEnabled(false);
                _draw_8d31c878.CullFace(uPtr(dc)->CullFace());
                _draw_8d31c878.BlendSrcRgb(Draw_BlendSrcRgb_e193fb34_12_4_16);
                _draw_8d31c878.BlendSrcAlpha(Draw_BlendSrcAlpha_e193fb34_12_6_17);
                _draw_8d31c878.BlendDstRgb(Draw_BlendDstRgb_e193fb34_12_5_18);
                _draw_8d31c878.BlendDstAlpha(Draw_BlendDstAlpha_e193fb34_12_7_19);
                _draw_8d31c878.Const1(0, uPtr(_uniforms)->Length());
                _draw_8d31c878.Use();
                _draw_8d31c878.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8d31c878.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8d31c878.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8d31c878.Uniform1(4, _uniforms);
                _draw_8d31c878.Uniform2(5, position);
                _draw_8d31c878.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_8d31c878.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8d31c878.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8d31c878.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_8d31c878.Uniform(10, 1.0f / smoothness);
                _draw_8d31c878.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_8d31c878.Uniform6(12, (ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)));
                _draw_8d31c878.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[8/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_2af26768_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_2af26768.BlendEnabled(true);
                _draw_2af26768.DepthTestEnabled(false);
                _draw_2af26768.CullFace(uPtr(dc)->CullFace());
                _draw_2af26768.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26768.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26768.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26768.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26768.Const1(0, uPtr(_uniforms)->Length());
                _draw_2af26768.Const(1, DP_2af26768_14_7_4.NeedFract);
                _draw_2af26768.Const(2, DP_2af26768_14_7_4.Texture == NULL);
                _draw_2af26768.Use();
                _draw_2af26768.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2af26768.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2af26768.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2af26768.Uniform1(6, _uniforms);
                _draw_2af26768.Uniform2(7, position);
                _draw_2af26768.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_2af26768.Uniform2(9, csz);
                _draw_2af26768.Uniform2(10, DP_2af26768_14_7_4.Origin);
                _draw_2af26768.Uniform2(11, DP_2af26768_14_7_4.Size);
                _draw_2af26768.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind11 = DP_2af26768_14_7_4.UVClip, ::g::Uno::Float2__New2(ind11.Z, ind11.W)), (ind12 = DP_2af26768_14_7_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y))));
                _draw_2af26768.Uniform2(13, (ind13 = DP_2af26768_14_7_4.UVClip, ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_2af26768.Uniform2(14, DP_2af26768_14_7_4.TexCoordScale1);
                _draw_2af26768.Uniform2(15, DP_2af26768_14_7_4.TexCoordBias1);
                _draw_2af26768.Uniform2(16, DP_2af26768_14_7_4.TexCoordScale2);
                _draw_2af26768.Uniform2(17, DP_2af26768_14_7_4.TexCoordBias2);
                _draw_2af26768.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_2af26768.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_2af26768.Uniform(20, 1.0f / smoothness);
                _draw_2af26768.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_2af26768.Sampler3(22, DP_2af26768_14_7_4.Texture, DP_2af26768_14_7_4.SamplerState);
                _draw_2af26768.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_2af26787_14_7_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_2af26787.BlendEnabled(true);
                _draw_2af26787.DepthTestEnabled(false);
                _draw_2af26787.CullFace(uPtr(dc)->CullFace());
                _draw_2af26787.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26787.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26787.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26787.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->BlendMode()));
                _draw_2af26787.Const1(0, uPtr(_uniforms)->Length());
                _draw_2af26787.Const(1, DP_2af26787_14_7_4.NeedFract);
                _draw_2af26787.Const(2, DP_2af26787_14_7_4.Texture == NULL);
                _draw_2af26787.Use();
                _draw_2af26787.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2af26787.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2af26787.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2af26787.Uniform1(6, _uniforms);
                _draw_2af26787.Uniform2(7, position);
                _draw_2af26787.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_2af26787.Uniform2(9, csz);
                _draw_2af26787.Uniform2(10, DP_2af26787_14_7_4.Origin);
                _draw_2af26787.Uniform2(11, DP_2af26787_14_7_4.Size);
                _draw_2af26787.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind14 = DP_2af26787_14_7_4.UVClip, ::g::Uno::Float2__New2(ind14.Z, ind14.W)), (ind15 = DP_2af26787_14_7_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y))));
                _draw_2af26787.Uniform2(13, (ind16 = DP_2af26787_14_7_4.UVClip, ::g::Uno::Float2__New2(ind16.X, ind16.Y)));
                _draw_2af26787.Uniform2(14, DP_2af26787_14_7_4.TexCoordScale1);
                _draw_2af26787.Uniform2(15, DP_2af26787_14_7_4.TexCoordBias1);
                _draw_2af26787.Uniform2(16, DP_2af26787_14_7_4.TexCoordScale2);
                _draw_2af26787.Uniform2(17, DP_2af26787_14_7_4.TexCoordBias2);
                _draw_2af26787.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_2af26787.Uniform(19, dc->ViewportPixelsPerPoint());
                _draw_2af26787.Uniform(20, 1.0f / smoothness);
                _draw_2af26787.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_2af26787.Sampler3(22, DP_2af26787_14_7_4.Texture, DP_2af26787_14_7_4.SamplerState);
                _draw_2af26787.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_f294ef1c.BlendEnabled(true);
                _draw_f294ef1c.DepthTestEnabled(false);
                _draw_f294ef1c.CullFace(uPtr(dc)->CullFace());
                _draw_f294ef1c.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef1c.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef1c.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef1c.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef1c.Const1(0, uPtr(_uniforms)->Length());
                _draw_f294ef1c.Use();
                _draw_f294ef1c.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_f294ef1c.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_f294ef1c.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_f294ef1c.Uniform1(4, _uniforms);
                _draw_f294ef1c.Uniform2(5, position);
                _draw_f294ef1c.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_f294ef1c.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_f294ef1c.Uniform(8, 1.0f / smoothness);
                _draw_f294ef1c.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_f294ef1c.Uniform6(10, (ind17 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)));
                _draw_f294ef1c.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_f294ef1c.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_f294ef3b.BlendEnabled(true);
                _draw_f294ef3b.DepthTestEnabled(false);
                _draw_f294ef3b.CullFace(uPtr(dc)->CullFace());
                _draw_f294ef3b.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef3b.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef3b.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef3b.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->BlendMode()));
                _draw_f294ef3b.Const1(0, uPtr(_uniforms)->Length());
                _draw_f294ef3b.Use();
                _draw_f294ef3b.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_f294ef3b.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_f294ef3b.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_f294ef3b.Uniform1(4, _uniforms);
                _draw_f294ef3b.Uniform2(5, position);
                _draw_f294ef3b.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_f294ef3b.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_f294ef3b.Uniform(8, 1.0f / smoothness);
                _draw_f294ef3b.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W);
                _draw_f294ef3b.Uniform6(10, (ind18 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)));
                _draw_f294ef3b.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_f294ef3b.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float2 angleSlope_ea968cf8_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_ea968cf8_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_ea968cf8.BlendEnabled(true);
                _draw_ea968cf8.DepthTestEnabled(false);
                _draw_ea968cf8.CullFace(uPtr(dc)->CullFace());
                _draw_ea968cf8.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968cf8.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968cf8.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968cf8.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968cf8.Const1(0, uPtr(_uniforms)->Length());
                _draw_ea968cf8.Use();
                _draw_ea968cf8.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_ea968cf8.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_ea968cf8.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_ea968cf8.Uniform1(4, _uniforms);
                _draw_ea968cf8.Uniform2(5, position);
                _draw_ea968cf8.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_ea968cf8.Uniform2(7, csz);
                _draw_ea968cf8.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_ea968cf8_14_18_6, angleLen_ea968cf8_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
                _draw_ea968cf8.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ea968cf8.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_ea968cf8.Uniform(11, 1.0f / smoothness);
                _draw_ea968cf8.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ea968cf8.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_ea968cf8_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_ea968cf8.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_ea968cf8_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_ea968cf8.Sampler2(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_ea968cf8.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float2 angleSlope_ea968d17_14_18_6 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                float angleLen_ea968d17_14_17_7 = ::g::Uno::Math::Abs1(csz.X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(csz.Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Angle()));
                _draw_ea968d17.BlendEnabled(true);
                _draw_ea968d17.DepthTestEnabled(false);
                _draw_ea968d17.CullFace(uPtr(dc)->CullFace());
                _draw_ea968d17.BlendSrcRgb(::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968d17.BlendSrcAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968d17.BlendDstRgb(::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968d17.BlendDstAlpha(::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->BlendMode()));
                _draw_ea968d17.Const1(0, uPtr(_uniforms)->Length());
                _draw_ea968d17.Use();
                _draw_ea968d17.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_ea968d17.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_ea968d17.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_ea968d17.Uniform1(4, _uniforms);
                _draw_ea968d17.Uniform2(5, position);
                _draw_ea968d17.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_ea968d17.Uniform2(7, csz);
                _draw_ea968d17.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(csz, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_ea968d17_14_18_6, angleLen_ea968d17_14_17_7), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), csz));
                _draw_ea968d17.Uniform2(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ea968d17.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_ea968d17.Uniform(11, 1.0f / smoothness);
                _draw_ea968d17.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ea968d17.Uniform2(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_ea968d17_14_18_6 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_ea968d17.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_ea968d17_14_17_7 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), csz)));
                _draw_ea968d17.Sampler2(15, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer());
                _draw_ea968d17.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[11/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_b23914ac.BlendEnabled(true);
                _draw_b23914ac.DepthTestEnabled(false);
                _draw_b23914ac.CullFace(uPtr(dc)->CullFace());
                _draw_b23914ac.BlendSrcRgb(Draw_BlendSrcRgb_e193fb34_12_4_16);
                _draw_b23914ac.BlendSrcAlpha(Draw_BlendSrcAlpha_e193fb34_12_6_17);
                _draw_b23914ac.BlendDstRgb(Draw_BlendDstRgb_e193fb34_12_5_18);
                _draw_b23914ac.BlendDstAlpha(Draw_BlendDstAlpha_e193fb34_12_7_19);
                _draw_b23914ac.Const1(0, uPtr(_uniforms)->Length());
                _draw_b23914ac.Use();
                _draw_b23914ac.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_b23914ac.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_b23914ac.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_b23914ac.Uniform1(4, _uniforms);
                _draw_b23914ac.Uniform2(5, position);
                _draw_b23914ac.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_b23914ac.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_b23914ac.Uniform(8, 1.0f / smoothness);
                _draw_b23914ac.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_b23914ac.Uniform6(10, (ind19 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind19.X, ind19.Y, ind19.Z)));
                _draw_b23914ac.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_b23914cb.BlendEnabled(true);
                _draw_b23914cb.DepthTestEnabled(false);
                _draw_b23914cb.CullFace(uPtr(dc)->CullFace());
                _draw_b23914cb.BlendSrcRgb(Draw_BlendSrcRgb_e193fb34_12_4_16);
                _draw_b23914cb.BlendSrcAlpha(Draw_BlendSrcAlpha_e193fb34_12_6_17);
                _draw_b23914cb.BlendDstRgb(Draw_BlendDstRgb_e193fb34_12_5_18);
                _draw_b23914cb.BlendDstAlpha(Draw_BlendDstAlpha_e193fb34_12_7_19);
                _draw_b23914cb.Const1(0, uPtr(_uniforms)->Length());
                _draw_b23914cb.Use();
                _draw_b23914cb.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_b23914cb.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_b23914cb.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_b23914cb.Uniform1(4, _uniforms);
                _draw_b23914cb.Uniform2(5, position);
                _draw_b23914cb.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_b23914cb.Uniform(7, dc->ViewportPixelsPerPoint());
                _draw_b23914cb.Uniform(8, 1.0f / smoothness);
                _draw_b23914cb.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color().W);
                _draw_b23914cb.Uniform6(10, (ind20 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[7/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind20.X, ind20.Y, ind20.Z)));
                _draw_b23914cb.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance] :255
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance] :234
void Rectangle::init_DrawCalls()
{
    Draw_BlendSrcRgb_e193fb34_12_4_16 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcRgb(0);
    Draw_BlendSrcAlpha_e193fb34_12_6_17 = ::g::Fuse::Drawing::BlendModeHelpers::GetSrcAlpha(0);
    Draw_BlendDstRgb_e193fb34_12_5_18 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstRgb(0);
    Draw_BlendDstAlpha_e193fb34_12_7_19 = ::g::Fuse::Drawing::BlendModeHelpers::GetDstAlpha(0);
    _draw_e1942474 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc());
    _draw_e194259b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f503());
    _draw_e1942cb4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c());
    _draw_e1942d57 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f());
    _draw_e19434f4 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c());
    _draw_e1943513 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b());
    _draw_e193fb34 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc());
    _draw_8d31c878 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4());
    _draw_2af26768 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e4());
    _draw_2af26787 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e3());
    _draw_f294ef1c = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5ec());
    _draw_f294ef3b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5eb());
    _draw_ea968cf8 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cc());
    _draw_ea968d17 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cb());
    _draw_b23914ac = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4());
    _draw_b23914cb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3());
}

// private void InitBuffers() [instance] :305
void Rectangle::InitBuffers()
{
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[9/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[12/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[13/*float2[]*/], vr->Length());

    for (int i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int>(::TYPES[14/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int>(::TYPES[14/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    ::g::Uno::Buffer* bufferVertex = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    ::g::Uno::Buffer* bufferEdge = ::g::Uno::Buffer::New4(vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New3(0);

    for (int i1 = 0; i1 < vsr->Length(); ++i1)
    {
        uPtr(bufferVertex)->Set8(i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(bufferEdge)->Set8(i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance] :286
uArray* Rectangle::neg(uArray* a)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance] :239
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance] :278
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[9/*float[]*/], uPtr(a)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static] :234
Rectangle* Rectangle::New1()
{
    Rectangle* obj21 = (Rectangle*)uNew(Rectangle_typeof());
    obj21->ctor_();
    return obj21;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class ShadowFalloff :227
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff() :227
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New() :227
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance] :227
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static] :227
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal sealed class StrokeCoverage :213
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Center), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::StrokeCoverage, Radius), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage() :213
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New() :213
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance] :213
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static] :213
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Wedge :597
// {
// static Wedge() :597
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(::g::Fuse::Drawing::Primitives::Wedge, _strokeCoverage), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::Primitives::Wedge::Singleton_, uFieldFlagsStatic);
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge() :597
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) :638
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New() :597
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) :604
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) :621
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance] :597
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance] :638
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, ::g::Uno::Float2__New1(smoothness), center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance] :604
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance] :621
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, ::g::Uno::Float2__New1(extend), center, smoothness);
}

// public generated Wedge New() [static] :597
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.43.11\$.uno
// ------------------------------------------------------------------------------------------

// internal abstract class WedgeCoverage :556
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, EndAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Primitives::WedgeCoverage, StartAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage() :556
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance] :556
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
