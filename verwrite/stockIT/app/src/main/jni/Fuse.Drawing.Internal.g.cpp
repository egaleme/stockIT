// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Internal.Float2Buffer.h>
#include <Fuse.Drawing.Internal.FloatBuffer.h>
#include <Fuse.Drawing.Internal.TypedBuffer.h>
#include <Fuse.Drawing.Internal.UShortBuffer.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.UShort.h>

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public sealed class Float2Buffer :151
// {
static void Float2Buffer_build(uType* type)
{
    type->SetFields(6);
}

uType* Float2Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float2Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float2Buffer", options);
    type->fp_build_ = Float2Buffer_build;
    type->fp_ctor_ = (void*)Float2Buffer__New3_fn;
    return type;
}

// public Float2Buffer() :152
void Float2Buffer__ctor_2_fn(Float2Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y) :164
void Float2Buffer__Append_fn(Float2Buffer* __this, double* x, double* y)
{
    __this->Append(*x, *y);
}

// public void Append(float2 value) :159
void Float2Buffer__Append1_fn(Float2Buffer* __this, ::g::Uno::Float2* value)
{
    __this->Append1(*value);
}

// public Float2Buffer New() :152
void Float2Buffer__New3_fn(Float2Buffer** __retval)
{
    *__retval = Float2Buffer::New3();
}

// public void Set(int offset, float2 value) :155
void Float2Buffer__Set_fn(Float2Buffer* __this, int* offset, ::g::Uno::Float2* value)
{
    __this->Set(*offset, *value);
}

// public Float2Buffer() [instance] :152
void Float2Buffer::ctor_2()
{
    ctor_1(8, 32);
}

// public void Append(double x, double y) [instance] :164
void Float2Buffer::Append(double x, double y)
{
    Append1(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void Append(float2 value) [instance] :159
void Float2Buffer::Append1(::g::Uno::Float2 value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float2 value) [instance] :155
void Float2Buffer::Set(int offset, ::g::Uno::Float2 value)
{
    uPtr(back)->Set5(offset * typeSize, value, true);
}

// public Float2Buffer New() [static] :152
Float2Buffer* Float2Buffer::New3()
{
    Float2Buffer* obj1 = (Float2Buffer*)uNew(Float2Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public sealed class FloatBuffer :133
// {
static void FloatBuffer_build(uType* type)
{
    type->SetFields(6);
}

uType* FloatBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FloatBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.FloatBuffer", options);
    type->fp_build_ = FloatBuffer_build;
    type->fp_ctor_ = (void*)FloatBuffer__New3_fn;
    return type;
}

// public FloatBuffer() :134
void FloatBuffer__ctor_2_fn(FloatBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(float value) :141
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value)
{
    __this->Append1(*value);
}

// public FloatBuffer New() :134
void FloatBuffer__New3_fn(FloatBuffer** __retval)
{
    *__retval = FloatBuffer::New3();
}

// public void Set(int offset, float value) :137
void FloatBuffer__Set_fn(FloatBuffer* __this, int* offset, float* value)
{
    __this->Set(*offset, *value);
}

// public FloatBuffer() [instance] :134
void FloatBuffer::ctor_2()
{
    ctor_1(4, 32);
}

// public void Append(float value) [instance] :141
void FloatBuffer::Append1(float value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float value) [instance] :137
void FloatBuffer::Set(int offset, float value)
{
    uPtr(back)->Set4(offset * typeSize, value, true);
}

// public FloatBuffer New() [static] :134
FloatBuffer* FloatBuffer::New3()
{
    FloatBuffer* obj1 = (FloatBuffer*)uNew(FloatBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public class TypedBuffer :22
// {
static void TypedBuffer_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Buffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, back), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, capacity), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, deviceIndex), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, deviceVertex), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, size), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Internal::TypedBuffer, typeSize), 0);
}

uType* TypedBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TypedBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.TypedBuffer", options);
    type->fp_build_ = TypedBuffer_build;
    return type;
}

// protected TypedBuffer(int typeSize, [int initSize]) :30
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int* typeSize1, int* initSize)
{
    __this->ctor_1(*typeSize1, *initSize);
}

// protected void CheckGrow() :96
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this)
{
    __this->CheckGrow();
}

// public int Count() :76
void TypedBuffer__Count_fn(TypedBuffer* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() :55
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->GetDeviceIndex();
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() :63
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->GetDeviceVertex();
}

// protected void Init(int initSize) :36
void TypedBuffer__Init_fn(TypedBuffer* __this, int* initSize)
{
    __this->Init(*initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) :52
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int* bu)
{
    __this->InitDeviceIndex(*bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) :60
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int* bu)
{
    __this->InitDeviceVertex(*bu);
}

// protected TypedBuffer(int typeSize, [int initSize]) [instance] :30
void TypedBuffer::ctor_1(int typeSize1, int initSize)
{
    typeSize = typeSize1;
    size = 0;
    Init(initSize);
}

// protected void CheckGrow() [instance] :96
void TypedBuffer::CheckGrow()
{
    if (size < capacity)
        return;

    int newCap = capacity * 2;
    ::g::Uno::Buffer* newBuf = ::g::Uno::Buffer::New4(typeSize * newCap);

    for (int i = 0; i < uPtr(back)->SizeInBytes(); ++i)
        uPtr(newBuf)->Set(i, uPtr(back)->Item(i));

    back = newBuf;
    capacity = newCap;
}

// public int Count() [instance] :76
int TypedBuffer::Count()
{
    return size;
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() [instance] :55
::g::Uno::Graphics::IndexBuffer* TypedBuffer::GetDeviceIndex()
{
    return deviceIndex;
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() [instance] :63
::g::Uno::Graphics::VertexBuffer* TypedBuffer::GetDeviceVertex()
{
    return deviceVertex;
}

// protected void Init(int initSize) [instance] :36
void TypedBuffer::Init(int initSize)
{
    capacity = initSize;
    back = ::g::Uno::Buffer::New4(typeSize * initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) [instance] :52
void TypedBuffer::InitDeviceIndex(int bu)
{
    deviceIndex = ::g::Uno::Graphics::IndexBuffer::New2(back, bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) [instance] :60
void TypedBuffer::InitDeviceVertex(int bu)
{
    deviceVertex = ::g::Uno::Graphics::VertexBuffer::New2(back, bu);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public sealed class UShortBuffer :169
// {
static void UShortBuffer_build(uType* type)
{
    type->SetFields(6);
}

uType* UShortBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(UShortBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.UShortBuffer", options);
    type->fp_build_ = UShortBuffer_build;
    type->fp_ctor_ = (void*)UShortBuffer__New3_fn;
    return type;
}

// public UShortBuffer() :170
void UShortBuffer__ctor_2_fn(UShortBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(int value) :182
void UShortBuffer__Append_fn(UShortBuffer* __this, int* value)
{
    __this->Append(*value);
}

// public UShortBuffer New() :170
void UShortBuffer__New3_fn(UShortBuffer** __retval)
{
    *__retval = UShortBuffer::New3();
}

// public void Set(int offset, ushort value) :173
void UShortBuffer__Set_fn(UShortBuffer* __this, int* offset, uint16_t* value)
{
    __this->Set(*offset, *value);
}

// public UShortBuffer() [instance] :170
void UShortBuffer::ctor_2()
{
    ctor_1(2, 32);
}

// public void Append(int value) [instance] :182
void UShortBuffer::Append(int value)
{
    CheckGrow();
    Set(size++, (uint16_t)value);
}

// public void Set(int offset, ushort value) [instance] :173
void UShortBuffer::Set(int offset, uint16_t value)
{
    uPtr(back)->Set23(offset * typeSize, value, true);
}

// public UShortBuffer New() [static] :170
UShortBuffer* UShortBuffer::New3()
{
    UShortBuffer* obj1 = (UShortBuffer*)uNew(UShortBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Drawing::Internal
