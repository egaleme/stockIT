// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Sockets\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct SocketException;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class SocketException :1134
// {
::g::Uno::Exception_type* SocketException_typeof();
void SocketException__ctor_3_fn(SocketException* __this, uString* message);
void SocketException__New4_fn(uString* message, SocketException** __retval);

struct SocketException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static SocketException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Net::Sockets
