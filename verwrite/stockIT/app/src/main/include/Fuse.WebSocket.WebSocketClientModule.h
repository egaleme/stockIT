// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.WebSockets\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.WebSocket.NativeFunctionModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace WebSocket{struct WebSocketClientModule;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace WebSocket{

// public sealed class WebSocketClientModule :155
// {
::g::Fuse::WebSocket::NativeFunctionModule_type* WebSocketClientModule_typeof();
void WebSocketClientModule__ctor_3_fn(WebSocketClientModule* __this);
void WebSocketClientModule__Create_fn(WebSocketClientModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void WebSocketClientModule__New2_fn(WebSocketClientModule** __retval);
void WebSocketClientModule__OnReset_fn(WebSocketClientModule* __this, uObject* o, ::g::Uno::EventArgs* e);

struct WebSocketClientModule : ::g::Fuse::WebSocket::NativeFunctionModule
{
    void ctor_3();
    void OnReset(uObject* o, ::g::Uno::EventArgs* e);
    static WebSocketClientModule* New2();
};
// }

}}} // ::g::Fuse::WebSocket
