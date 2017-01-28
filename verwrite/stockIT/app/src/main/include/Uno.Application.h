// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct GraphicsContext;}}}
namespace g{namespace Uno{namespace Platform{struct Window;}}}
namespace g{namespace Uno{struct Application;}}

namespace g{
namespace Uno{

// public abstract class Application :71
// {
uType* Application_typeof();
void Application__ctor__fn(Application* __this);
void Application__get_ClearColor_fn(Application* __this, ::g::Uno::Float4* __retval);
void Application__set_ClearColor_fn(Application* __this, ::g::Uno::Float4* value);
void Application__get_ClearDepth_fn(Application* __this, float* __retval);
void Application__set_ClearDepth_fn(Application* __this, float* value);
void Application__get_Current_fn(Application** __retval);
void Application__set_Current_fn(Application* value);
void Application__Draw_fn(Application* __this);
void Application__get_GraphicsContext_fn(Application* __this, ::g::Uno::Graphics::GraphicsContext** __retval);
void Application__set_GraphicsContext_fn(Application* __this, ::g::Uno::Graphics::GraphicsContext* value);
void Application__Load_fn(Application* __this);
void Application__get_NeedsRedraw_fn(Application* __this, bool* __retval);
void Application__Update_fn(Application* __this);
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval);
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value);

struct Application : uObject
{
    ::g::Uno::Float4 _ClearColor;
    float _ClearDepth;
    static uSStrong<Application*> _Current_;
    static uSStrong<Application*>& _Current() { return _Current_; }
    uStrong< ::g::Uno::Graphics::GraphicsContext*> _GraphicsContext;
    uStrong< ::g::Uno::Platform::Window*> _Window;

    void ctor_();
    ::g::Uno::Float4 ClearColor();
    void ClearColor(::g::Uno::Float4 value);
    float ClearDepth();
    void ClearDepth(float value);
    void Draw();
    ::g::Uno::Graphics::GraphicsContext* GraphicsContext();
    void GraphicsContext(::g::Uno::Graphics::GraphicsContext* value);
    void Load();
    bool NeedsRedraw();
    void Update();
    ::g::Uno::Platform::Window* Window();
    void Window(::g::Uno::Platform::Window* value);
    static Application* Current();
    static void Current(Application* value);
};
// }

}} // ::g::Uno
