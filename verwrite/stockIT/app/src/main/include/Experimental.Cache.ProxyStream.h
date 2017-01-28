// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.Http\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Experimental{namespace Cache{struct ProxyStream;}}}

namespace g{
namespace Experimental{
namespace Cache{

// internal sealed class ProxyStream :121
// {
::g::Uno::IO::Stream_type* ProxyStream_typeof();
void ProxyStream__Close_fn(ProxyStream* __this);
void ProxyStream__Dispose1_fn(ProxyStream* __this, bool* disposing);
void ProxyStream__Flush_fn(ProxyStream* __this);
void ProxyStream__get_Length_fn(ProxyStream* __this, int64_t* __retval);
void ProxyStream__get_Position_fn(ProxyStream* __this, int64_t* __retval);
void ProxyStream__set_Position_fn(ProxyStream* __this, int64_t* value);
void ProxyStream__Read_fn(ProxyStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void ProxyStream__Write_fn(ProxyStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct ProxyStream : ::g::Uno::IO::Stream
{
    uStrong< ::g::Uno::IO::Stream*> Backing;
};
// }

}}} // ::g::Experimental::Cache
