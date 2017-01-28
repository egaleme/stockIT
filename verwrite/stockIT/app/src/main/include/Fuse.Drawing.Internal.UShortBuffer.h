// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct UShortBuffer;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class UShortBuffer :169
// {
uType* UShortBuffer_typeof();
void UShortBuffer__ctor_2_fn(UShortBuffer* __this);
void UShortBuffer__Append_fn(UShortBuffer* __this, int* value);
void UShortBuffer__New3_fn(UShortBuffer** __retval);
void UShortBuffer__Set_fn(UShortBuffer* __this, int* offset, uint16_t* value);

struct UShortBuffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append(int value);
    void Set(int offset, uint16_t value);
    static UShortBuffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
