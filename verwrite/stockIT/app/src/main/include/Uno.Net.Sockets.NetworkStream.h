// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Sockets\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct NetworkStream;}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class NetworkStream :515
// {
::g::Uno::IO::Stream_type* NetworkStream_typeof();
void NetworkStream__Flush_fn(NetworkStream* __this);
void NetworkStream__get_Length_fn(NetworkStream* __this, int64_t* __retval);
void NetworkStream__get_Position_fn(NetworkStream* __this, int64_t* __retval);
void NetworkStream__set_Position_fn(NetworkStream* __this, int64_t* value);
void NetworkStream__Read_fn(NetworkStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void NetworkStream__Write_fn(NetworkStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct NetworkStream : ::g::Uno::IO::Stream
{
    uStrong< ::g::Uno::Net::Sockets::Socket*> _socket;
};
// }

}}}} // ::g::Uno::Net::Sockets
