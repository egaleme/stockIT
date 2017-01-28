// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Sockets\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :844
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__Receive2_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* flags, int* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int* offset, int* length, int* __retval);

struct Socket : uObject
{
    int _handle;

    void Dispose();
    void Dispose1(bool disposing);
    int Receive2(uArray* buffer, int offset, int length, int flags);
    int Send1(uArray* buffer, int offset, int length);
};
// }

}}}} // ::g::Uno::Net::Sockets
