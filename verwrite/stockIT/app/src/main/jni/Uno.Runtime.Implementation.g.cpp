// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GLFramebufferHandle.h>
#include <time.h>
#include <uBase/Console.h>
#include <uBase/Time.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.MouseButton.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIResizeReason.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.ArrayCopyImpl.h>
#include <Uno.Runtime.Implementation.ArraySortImpl.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.ClockImpl.h>
#include <Uno.Runtime.Implementation.DebugImpl.h>
#include <Uno.Runtime.Implementation.GenericEqualsImpl.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.GraphicsContextImpl.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Runtime.Implementation.TextEncodingImpl.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno/Base64.h>
#include <Uno/Support.h>
#include <XliPlatform/Display.h>
extern ::Xli::Window* _XliWindowPtr;
static uString* STRINGS[14];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class ArrayCopyImpl :9
// {
static void ArrayCopyImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sourceArray");
    ::STRINGS[1] = uString::Const("destinationArray");
    ::STRINGS[2] = uString::Const("Non-negative number required.");
    ::STRINGS[3] = uString::Const("sourceIndex");
    ::STRINGS[4] = uString::Const("destinationIndex");
    ::STRINGS[5] = uString::Const("length");
    ::STRINGS[6] = uString::Const("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds.");
    ::STRINGS[7] = uString::Const(", ");
    ::STRINGS[8] = uString::Const("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.");
    type->MethodTypes[0]->SetPrecalc(
        type->MakeMethod(1/*ValidateArguments<T>*/, type->MethodTypes[0]->U(0), NULL));
}

uClassType* ArrayCopyImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ArrayCopyImpl", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 0);
    type->fp_build_ = ArrayCopyImpl_build;
    return type;
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :39
void ArrayCopyImpl__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    ArrayCopyImpl::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void ValidateArguments<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :11
void ArrayCopyImpl__ValidateArguments_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    ArrayCopyImpl::ValidateArguments(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :39
void ArrayCopyImpl::Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArrayCopyImpl.ValidateArguments<T>*/),
    };
    ArrayCopyImpl::ValidateArguments(__types[0], sourceArray, sourceIndex, destinationArray, destinationIndex, length);

    for (int i = 0; i < length; i++)
        uPtr(destinationArray)->TItem(destinationIndex + i) = uPtr(sourceArray)->TItem(sourceIndex + i);
}

// public static void ValidateArguments<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :11
void ArrayCopyImpl::ValidateArguments(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    if (sourceArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"sourceArray"*/]));

    if (destinationArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[1/*"destination...*/]));

    if (sourceIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[3/*"sourceIndex"*/]));

    if (destinationIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[4/*"destination...*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[5/*"length"*/]));

    if (uPtr(sourceArray)->Length() < (sourceIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Destination...*/], uBox<int>(::g::Uno::Int_typeof(), uPtr(sourceArray)->Length())), ::STRINGS[7/*", "*/]), uBox<int>(::g::Uno::Int_typeof(), destinationIndex)), ::STRINGS[7/*", "*/]), uBox<int>(::g::Uno::Int_typeof(), length))));

    if (uPtr(destinationArray)->Length() < (destinationIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[8/*"Source arra...*/]));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class ArraySortImpl :68
// {
static void ArraySortImpl_build(uType* type)
{
    ::STRINGS[9] = uString::Const("elements");
    ::STRINGS[2] = uString::Const("Non-negative number required.");
    ::STRINGS[10] = uString::Const("index");
    ::STRINGS[5] = uString::Const("length");
    ::STRINGS[11] = uString::Const("Index and length do not specify a valid range in elements.");
    ::STRINGS[12] = uString::Const("Comparer is null.");
    type->MethodTypes[0]->SetPrecalc(
        type->MakeMethod(3/*Swap<T>*/, type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(3/*Swap<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(4/*ValidateArguments<T>*/, type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(0/*QuickSort<T>*/, type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(1/*ShellSort<T>*/, type->MethodTypes[2]->U(0), NULL));
}

uClassType* ArraySortImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ArraySortImpl", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->MethodTypes[2] = type->NewMethodType(1, 3);
    type->MethodTypes[3] = type->NewMethodType(1, 0);
    type->MethodTypes[4] = type->NewMethodType(1, 0);
    type->fp_build_ = ArraySortImpl_build;
    return type;
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :144
void ArraySortImpl__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    ArraySortImpl::QuickSort(__type, data, comparison, *left, *right);
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :114
void ArraySortImpl__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    ArraySortImpl::ShellSort(__type, data, comparison, *left, *right);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :88
void ArraySortImpl__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    ArraySortImpl::Sort(__type, elements, *index, *length, comparison);
}

// private static void Swap<T>(T[] data, int a, int b) :107
void ArraySortImpl__Swap_fn(uType* __type, uArray* data, int* a, int* b)
{
    ArraySortImpl::Swap(__type, data, *a, *b);
}

// private static void ValidateArguments<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :70
void ArraySortImpl__ValidateArguments_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    ArraySortImpl::ValidateArguments(__type, elements, *index, *length, comparison);
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :144
void ArraySortImpl::QuickSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Runtime.Implementation.ArraySortImpl.Swap<T>*/),
        __type->Base->MakeMethod(0/*QuickSort<T>*/, __type->U(0), NULL),
    };
    uT pivotValue(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int ret1;

    if (left < right)
    {
        int rightIndex = right - 1;
        int pivotIndex = left;
        pivotValue = uPtr(data)->TItem(pivotIndex);
        ArraySortImpl::Swap(__types[1], data, pivotIndex, rightIndex);

        for (int i = left; i < rightIndex; i++)
            if ((uPtr(comparison)->Invoke(&ret1, 2, (void*)uPtr(data)->TItem(i), (void*)pivotValue), ret1) < 0)
            {
                ArraySortImpl::Swap(__types[1], data, i, pivotIndex);
                pivotIndex++;
            }

        ArraySortImpl::Swap(__types[1], data, pivotIndex, rightIndex);
        ArraySortImpl::QuickSort(__types[2], data, comparison, left, pivotIndex);
        ArraySortImpl::QuickSort(__types[2], data, comparison, pivotIndex + 1, right);
    }
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :114
void ArraySortImpl::ShellSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Runtime.Implementation.ArraySortImpl.Swap<T>*/),
    };
    uT temp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int ret2;
    float s = 2.8f;
    int size = right - left;
    int increment = size / 2;

    while (increment > 0)
    {
        for (int i = left + increment; i < size; i++)
        {
            int j = i;
            temp = uPtr(data)->TItem(i);

            while ((j >= increment) && ((uPtr(comparison)->Invoke(&ret2, 2, (void*)temp, (void*)data->TItem(j - increment)), ret2) < 0))
            {
                ArraySortImpl::Swap(__types[1], data, j, j - increment);
                j = j - increment;
            }

            data->TItem(j) = temp;
        }

        if (((float)increment < 2.8f) && (increment > 1))
            increment = 1;
        else
            increment = (int)((float)increment / 2.8f);
    }
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :88
void ArraySortImpl::Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.ArraySortImpl.ValidateArguments<T>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.ArraySortImpl.QuickSort<T>*/),
        __type->Precalced(2/*Uno.Runtime.Implementation.ArraySortImpl.ShellSort<T>*/),
    };

    if (length == 0)
        return;

    ArraySortImpl::ValidateArguments(__types[0], elements, index, length, comparison);

    if (length > 280)
        ArraySortImpl::QuickSort(__types[1], elements, comparison, index, index + length);
    else
        ArraySortImpl::ShellSort(__types[2], elements, comparison, index, index + length);
}

// private static void Swap<T>(T[] data, int a, int b) [static] :107
void ArraySortImpl::Swap(uType* __type, uArray* data, int a, int b)
{
    uType* __types[] = {
        __type->U(0),
    };
    uT temp(__types[0], U_ALLOCA(__types[0]->ValueSize));
    temp = uPtr(data)->TItem(a);
    data->TItem(a) = data->TItem(b);
    data->TItem(b) = temp;
}

// private static void ValidateArguments<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :70
void ArraySortImpl::ValidateArguments(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    if (elements == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[9/*"elements"*/]));

    if (index < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[10/*"index"*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[2/*"Non-negativ...*/], ::STRINGS[5/*"length"*/]));

    if (uPtr(elements)->Length() < (index + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[11/*"Index and l...*/]));

    if (::g::Uno::Delegate::op_Equality(comparison, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[12/*"Comparer is...*/]));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// public static class BufferImpl :181
// {
static void BufferImpl_build(uType* type)
{
}

uClassType* BufferImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.BufferImpl", options);
    type->fp_build_ = BufferImpl_build;
    return type;
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) :255
void BufferImpl__GetInt_fn(uArray* buffer, int* offset, bool* littleEndian, int* __retval)
{
    *__retval = BufferImpl::GetInt(buffer, *offset, *littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) :421
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian)
{
    BufferImpl::SetFloat(buffer, *offset, *value, *littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) :273
void BufferImpl__SetInt_fn(uArray* buffer, int* offset, int* value, bool* littleEndian)
{
    BufferImpl::SetInt(buffer, *offset, *value, *littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :237
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian)
{
    BufferImpl::SetUShort(buffer, *offset, *value, *littleEndian);
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) [static] :255
int BufferImpl::GetInt(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<int>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) [static] :421
void BufferImpl::SetFloat(uArray* buffer, int offset, float value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) [static] :273
void BufferImpl::SetInt(uArray* buffer, int offset, int value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) [static] :237
void BufferImpl::SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class ClockImpl :487
// {
static void ClockImpl_build(uType* type)
{
}

uClassType* ClockImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ClockImpl", options);
    type->fp_build_ = ClockImpl_build;
    return type;
}

// public static double GetSeconds() :507
void ClockImpl__GetSeconds_fn(double* __retval)
{
    *__retval = ClockImpl::GetSeconds();
}

// public static long GetTicks() :489
void ClockImpl__GetTicks_fn(int64_t* __retval)
{
    *__retval = ClockImpl::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) :525
void ClockImpl__GetTimezoneOffset_fn(int* year, int* month, int* day, int* __retval)
{
    *__retval = ClockImpl::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static] :507
double ClockImpl::GetSeconds()
{
    return uBase::GetSeconds();
}

// public static long GetTicks() [static] :489
int64_t ClockImpl::GetTicks()
{
    return uBase::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static] :525
int ClockImpl::GetTimezoneOffset(int year, int month, int day)
{
    struct tm stm;
                    stm.tm_year = year - 1900;
                    stm.tm_mon = month - 1;
                    stm.tm_mday = day;
                    stm.tm_hour = 0;
                    stm.tm_min = 0;
                    stm.tm_sec = 0;
                    stm.tm_wday = 0;
                    stm.tm_yday = 0;
                    stm.tm_isdst = 0;
                    time_t current_time = mktime(&stm);
    #ifdef WIN32
                    gmtime_s(&stm, &current_time);
                    time_t utc = mktime(&stm);
    
                    localtime_s(&stm, &current_time);
                    time_t local = mktime(&stm);
                    return (local - utc) / 60 + stm.tm_isdst * 60;
    #else
                    struct tm *info;
                    info = gmtime(&current_time);
                    time_t utc = mktime(info);
    
                    info = localtime(&current_time);
                    time_t local = mktime(info);
                    return (local - utc) / 60 + stm.tm_isdst * 60;
    #endif
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class DebugImpl :582
// {
static void DebugImpl_build(uType* type)
{
}

uClassType* DebugImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.DebugImpl", options);
    type->fp_build_ = DebugImpl_build;
    return type;
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) :584
void DebugImpl__Log_fn(uString* message, int* type)
{
    DebugImpl::Log(message, *type);
}

// public static void Log(string message, Uno.Diagnostics.DebugMessageType type) [static] :584
void DebugImpl::Log(uString* message, int type)
{
    uBase::PrintLine(uStringToXliString(message));
                    uBase::Out->GetStream()->Flush();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class GenericEqualsImpl :691
// {
static void GenericEqualsImpl_build(uType* type)
{
}

uClassType* GenericEqualsImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.GenericEqualsImpl", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = GenericEqualsImpl_build;
    return type;
}

// public static bool Equals<T>(T left, T right) :693
void GenericEqualsImpl__Equals_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uType* type = __type->U(0);
                    return *__retval = U_IS_OBJECT(type)
                            ? (uObject*)left == (uObject*)right || (
                                    (uObject*)left &&
                                    (uObject*)right &&
                                    ((uObject*)left)->Equals((uObject*)right)
                                )
                            : memcmp(left, right, type->ValueSize) == 0, void();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal struct GraphicsContextHandle :733
// {
static void GraphicsContextHandle_build(uType* type)
{
}

uStructType* GraphicsContextHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uGraphicsContext);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.GraphicsContextHandle", options);
    type->fp_build_ = GraphicsContextHandle_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class GraphicsContextImpl :739
// {
static void GraphicsContextImpl_build(uType* type)
{
}

uClassType* GraphicsContextImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.GraphicsContextImpl", options);
    type->fp_build_ = GraphicsContextImpl_build;
    return type;
}

// public static extern OpenGL.GLFramebufferHandle GetBackbufferGLHandle(Uno.Runtime.Implementation.GraphicsContextHandle handle) :760
void GraphicsContextImpl__GetBackbufferGLHandle_fn(uGraphicsContext* handle, uint32_t* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferGLHandle(*handle);
}

// public static int2 GetBackbufferOffset(Uno.Runtime.Implementation.GraphicsContextHandle handle) :801
void GraphicsContextImpl__GetBackbufferOffset_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferOffset(*handle);
}

// public static Uno.Recti GetBackbufferScissor(Uno.Runtime.Implementation.GraphicsContextHandle handle) :811
void GraphicsContextImpl__GetBackbufferScissor_fn(uGraphicsContext* handle, ::g::Uno::Recti* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferScissor(*handle);
}

// public static int2 GetBackbufferSize(Uno.Runtime.Implementation.GraphicsContextHandle handle) :778
void GraphicsContextImpl__GetBackbufferSize_fn(uGraphicsContext* handle, ::g::Uno::Int2* __retval)
{
    *__retval = GraphicsContextImpl::GetBackbufferSize(*handle);
}

// public static Uno.Runtime.Implementation.GraphicsContextHandle GetInstance() :741
void GraphicsContextImpl__GetInstance_fn(uGraphicsContext* __retval)
{
    *__retval = GraphicsContextImpl::GetInstance();
}

// public static int GetRealBackbufferHeight(Uno.Runtime.Implementation.GraphicsContextHandle handle) :821
void GraphicsContextImpl__GetRealBackbufferHeight_fn(uGraphicsContext* handle, int* __retval)
{
    *__retval = GraphicsContextImpl::GetRealBackbufferHeight(*handle);
}

// public static extern OpenGL.GLFramebufferHandle GetBackbufferGLHandle(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :760
uint32_t GraphicsContextImpl::GetBackbufferGLHandle(uGraphicsContext handle)
{
    return handle.GetBackbufferGLHandle();
}

// public static int2 GetBackbufferOffset(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :801
::g::Uno::Int2 GraphicsContextImpl::GetBackbufferOffset(uGraphicsContext handle)
{
    return ::g::Uno::Int2__New2(0, 0);
}

// public static Uno.Recti GetBackbufferScissor(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :811
::g::Uno::Recti GraphicsContextImpl::GetBackbufferScissor(uGraphicsContext handle)
{
    return ::g::Uno::Recti__New2(GraphicsContextImpl::GetBackbufferOffset(handle), GraphicsContextImpl::GetBackbufferSize(handle));
}

// public static int2 GetBackbufferSize(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :778
::g::Uno::Int2 GraphicsContextImpl::GetBackbufferSize(uGraphicsContext handle)
{
    ::g::Uno::Float2 size = uPtr(::g::Uno::Platform2::Display::MainDisplay())->Frame().Size();
    return ::g::Uno::Int2__New2((int)size.X, (int)size.Y);
}

// public static Uno.Runtime.Implementation.GraphicsContextHandle GetInstance() [static] :741
uGraphicsContext GraphicsContextImpl::GetInstance()
{
    return uGraphicsContext::GetInstance();
}

// public static int GetRealBackbufferHeight(Uno.Runtime.Implementation.GraphicsContextHandle handle) [static] :821
int GraphicsContextImpl::GetRealBackbufferHeight(uGraphicsContext handle)
{
    return GraphicsContextImpl::GetBackbufferSize(handle).Y;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// public struct PlatformWindowHandle :845
// {
static void PlatformWindowHandle_build(uType* type)
{
}

uStructType* PlatformWindowHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(::Xli::Window*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.PlatformWindowHandle", options);
    type->fp_build_ = PlatformWindowHandle_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// public static class PlatformWindowImpl :853
// {
// static PlatformWindowImpl() :858
static void PlatformWindowImpl__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::SystemUI::add_BottomFrameWillResize(uDelegate::New(::TYPES[0/*Uno.EventHandler<Uno.Platform.SystemUIWillResizeEventArgs>*/], (void*)PlatformWindowImpl__OnSoftKeyboardWillResize_fn));
}

static void PlatformWindowImpl_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::PlatformWindowImpl::keyboardFrame_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Uno::Runtime::Implementation::PlatformWindowImpl::keyboardVisible_, uFieldFlagsStatic);
}

uClassType* PlatformWindowImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.PlatformWindowImpl", options);
    type->fp_build_ = PlatformWindowImpl_build;
    type->fp_cctor_ = PlatformWindowImpl__cctor__fn;
    return type;
}

// public static Uno.Runtime.Implementation.PlatformWindowHandle GetInstance() :864
void PlatformWindowImpl__GetInstance_fn(::Xli::Window** __retval)
{
    *__retval = PlatformWindowImpl::GetInstance();
}

// public static bool GetKeyState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) :1059
void PlatformWindowImpl__GetKeyState_fn(::Xli::Window** handle, int* key, bool* __retval)
{
    *__retval = PlatformWindowImpl::GetKeyState(*handle, *key);
}

// public static bool GetMouseButtonState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.MouseButton button) :1041
void PlatformWindowImpl__GetMouseButtonState_fn(::Xli::Window** handle, int* button, bool* __retval)
{
    *__retval = PlatformWindowImpl::GetMouseButtonState(*handle, *button);
}

// private static extern void OnSoftKeyboardWillResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) :1118
void PlatformWindowImpl__OnSoftKeyboardWillResize_fn(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl::OnSoftKeyboardWillResize(sender, args);
}

::g::Uno::Rect PlatformWindowImpl::keyboardFrame_;
bool PlatformWindowImpl::keyboardVisible_;

// public static Uno.Runtime.Implementation.PlatformWindowHandle GetInstance() [static] :864
::Xli::Window* PlatformWindowImpl::GetInstance()
{
    PlatformWindowImpl_typeof()->Init();
    return _XliWindowPtr;
}

// public static bool GetKeyState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.Key key) [static] :1059
bool PlatformWindowImpl::GetKeyState(::Xli::Window* handle, int key)
{
    PlatformWindowImpl_typeof()->Init();
    return handle->GetKeyState((Xli::Key)key);
}

// public static bool GetMouseButtonState(Uno.Runtime.Implementation.PlatformWindowHandle handle, Uno.Platform.MouseButton button) [static] :1041
bool PlatformWindowImpl::GetMouseButtonState(::Xli::Window* handle, int button)
{
    PlatformWindowImpl_typeof()->Init();
    return handle->GetMouseButtonState((Xli::MouseButton)button);
}

// private static extern void OnSoftKeyboardWillResize(object sender, Uno.Platform.SystemUIWillResizeEventArgs args) [static] :1118
void PlatformWindowImpl::OnSoftKeyboardWillResize(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args)
{
    PlatformWindowImpl_typeof()->Init();
    PlatformWindowImpl::keyboardVisible() = (uPtr(args)->ResizeReason() != 2);
    PlatformWindowImpl::keyboardFrame() = args->EndFrame();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static class TextEncodingImpl :1312
// {
static void TextEncodingImpl_build(uType* type)
{
    ::STRINGS[13] = uString::Const("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* TextEncodingImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.TextEncodingImpl", options);
    type->fp_build_ = TextEncodingImpl_build;
    return type;
}

// public static string DecodeAscii(byte[] value) :1547
void TextEncodingImpl__DecodeAscii_fn(uArray* value, uString** __retval)
{
    *__retval = TextEncodingImpl::DecodeAscii(value);
}

// public static byte[] DecodeBase64(string value) :1389
void TextEncodingImpl__DecodeBase64_fn(uString* value, uArray** __retval)
{
    *__retval = TextEncodingImpl::DecodeBase64(value);
}

// public static string DecodeUtf8(byte[] value) :1503
void TextEncodingImpl__DecodeUtf8_fn(uArray* value, uString** __retval)
{
    *__retval = TextEncodingImpl::DecodeUtf8(value);
}

// public static byte[] EncodeAscii(string value) :1567
void TextEncodingImpl__EncodeAscii_fn(uString* value, uArray** __retval)
{
    *__retval = TextEncodingImpl::EncodeAscii(value);
}

// public static string EncodeBase64(byte[] value) :1317
void TextEncodingImpl__EncodeBase64_fn(uArray* value, uString** __retval)
{
    *__retval = TextEncodingImpl::EncodeBase64(value);
}

// public static byte[] EncodeUtf8(string value) :1522
void TextEncodingImpl__EncodeUtf8_fn(uString* value, uArray** __retval)
{
    *__retval = TextEncodingImpl::EncodeUtf8(value);
}

// public static string DecodeAscii(byte[] value) [static] :1547
uString* TextEncodingImpl::DecodeAscii(uArray* value)
{
    if ((value == NULL) || (uPtr(value)->Length() == 0))
        return NULL;

    uString* res = ::g::Uno::String::Empty();

    for (int i = 0; i < uPtr(value)->Length(); i++)
        res = ::g::Uno::String::op_Addition1(res, uBox<uChar>(::g::Uno::Char_typeof(), (uPtr(value)->Item<uint8_t>(i) < 128) ? (uChar)uPtr(value)->Item<uint8_t>(i) : '?'));

    return res;
}

// public static byte[] DecodeBase64(string value) [static] :1389
uArray* TextEncodingImpl::DecodeBase64(uString* value)
{
    int addidionalSymbols = 0;
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<byte>*/]);
    uArray* charArray3 = uArray::New(::TYPES[2/*int[]*/], 3);
    uArray* charArray4 = uArray::New(::TYPES[2/*int[]*/], 4);

    for (int position = 0; position < uPtr(value)->Length(); position++)
    {
        if ((uPtr(value)->Item(position) == '=') || (::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), uPtr(value)->Item(position), 0) < 0))
            break;

        uPtr(charArray4)->Item<int>(addidionalSymbols) = (int)uPtr(value)->Item(position);
        addidionalSymbols++;

        if (addidionalSymbols == 4)
        {
            for (int j = 0; j < 4; j++)
                uPtr(charArray4)->Item<int>(j) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), (uChar)uPtr(charArray4)->Item<int>(j), 0);

            uPtr(charArray3)->Item<int>(0) = (uPtr(charArray4)->Item<int>(0) << 2) + ((uPtr(charArray4)->Item<int>(1) & 48) >> 4);
            charArray3->Item<int>(1) = ((charArray4->Item<int>(1) & 15) << 4) + ((charArray4->Item<int>(2) & 60) >> 2);
            charArray3->Item<int>(2) = ((charArray4->Item<int>(2) & 3) << 6) + charArray4->Item<int>(3);

            for (int j1 = 0; j1 < 3; j1++)
                ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int>(j1)));

            addidionalSymbols = 0;
        }
    }

    if (addidionalSymbols > 0)
    {
        for (int j2 = addidionalSymbols; j2 < 4; j2++)
            uPtr(charArray4)->Item<int>(j2) = 0;

        for (int j3 = 0; j3 < 4; j3++)
            uPtr(charArray4)->Item<int>(j3) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[13/*"ABCDEFGHIJK...*/]), (uChar)uPtr(charArray4)->Item<int>(j3), 0);

        uPtr(charArray3)->Item<int>(0) = (uPtr(charArray4)->Item<int>(0) << 2) + ((uPtr(charArray4)->Item<int>(1) & 48) >> 4);
        charArray3->Item<int>(1) = ((charArray4->Item<int>(1) & 15) << 4) + ((charArray4->Item<int>(2) & 60) >> 2);
        charArray3->Item<int>(2) = ((charArray4->Item<int>(2) & 3) << 6) + charArray4->Item<int>(3);

        for (int j4 = 0; j4 < (addidionalSymbols - 1); j4++)
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int>(j4)));
    }

    return (uArray*)ret->ToArray();
}

// public static string DecodeUtf8(byte[] value) [static] :1503
uString* TextEncodingImpl::DecodeUtf8(uArray* value)
{
    return uString::Utf8((const char*)uPtr(value)->Ptr(), uPtr(value)->Length());
}

// public static byte[] EncodeAscii(string value) [static] :1567
uArray* TextEncodingImpl::EncodeAscii(uString* value)
{
    if (::g::Uno::String::IsNullOrEmpty(value))
        return NULL;

    uArray* res = uArray::New(::TYPES[3/*byte[]*/], uPtr(value)->Length());

    for (int i = 0; i < value->Length(); i++)
        uPtr(res)->Item<uint8_t>(i) = (uint8_t)(((int)uPtr(value)->Item(i) < 128) ? uPtr(value)->Item(i) : '?');

    return res;
}

// public static string EncodeBase64(byte[] value) [static] :1317
uString* TextEncodingImpl::EncodeBase64(uArray* value)
{
    return uBase64Encode(value);
}

// public static byte[] EncodeUtf8(string value) [static] :1522
uArray* TextEncodingImpl::EncodeUtf8(uString* value)
{
    uBase::String str(uStringToXliString(value));
                    return uArray::New(::g::Uno::Byte_typeof()->Array(), str.Length(), str.Ptr());
}
// }

}}}} // ::g::Uno::Runtime::Implementation
