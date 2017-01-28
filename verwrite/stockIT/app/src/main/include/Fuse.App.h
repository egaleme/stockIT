// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.AppBase.h>
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{struct App;}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract extern class App :556
// {
::g::Fuse::AppBase_type* App_typeof();
void App__ctor_2_fn(App* __this);
void App__get_Children_fn(App* __this, uObject** __retval);
void App__OnFrameCallback_fn(App* __this, double* currentTime, double* deltaTime);
void App__PropagateBackground_fn(App* __this);
void App__get_RootGraphicsView_fn(App* __this, ::g::Fuse::Controls::GraphicsView** __retval);
void App__StartFrameCallback_fn(App* __this);

struct App : ::g::Fuse::AppBase
{
    uStrong< ::g::Fuse::Controls::GraphicsView*> _graphicsView;

    void ctor_2();
    void OnFrameCallback(double currentTime, double deltaTime);
    void PropagateBackground();
    ::g::Fuse::Controls::GraphicsView* RootGraphicsView();
    void StartFrameCallback();
};
// }

}} // ::g::Fuse
