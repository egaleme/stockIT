// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Net{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Net.Sockets\0.43.8\$.uno
// ---------------------------------------------------------------------------------

// internal sealed extern class NetworkHelpers :463
// {
static void NetworkHelpers_build(uType* type)
{
}

uType* NetworkHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NetworkHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.NetworkHelpers", options);
    type->fp_build_ = NetworkHelpers_build;
    return type;
}

// public static extern string GetError() :482
void NetworkHelpers__GetError_fn(uString** __retval)
{
    *__retval = NetworkHelpers::GetError();
}

// public static extern string GetError() [static] :482
uString* NetworkHelpers::GetError()
{
    return uString::Utf8(strerror(errno));
}
// }

}}} // ::g::Uno::Net
