// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Application.h>
namespace g{namespace Fuse{struct AppBase;}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public abstract class AppBase :171
// {
struct AppBase_type : uType
{
    void(*fp_get_Children)(::g::Fuse::AppBase*, uObject**);
};

AppBase_type* AppBase_typeof();
void AppBase__ctor_1_fn(AppBase* __this);
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval);
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value);
void AppBase__get_Current1_fn(AppBase** __retval);
void AppBase__get_CurrentRootViewport_fn(::g::Fuse::RootViewport** __retval);
void AppBase__DoInvalidateSelection_fn(AppBase* __this);
void AppBase__DrawSelection_fn(AppBase* __this, ::g::Fuse::DrawContext* dc);
void AppBase__FindSelection_fn(AppBase* __this, ::g::Fuse::Node* n);
void AppBase__InvalidateGraphicsView_fn(AppBase* __this, ::g::Fuse::Node* n);
void AppBase__InvalidateSelection_fn(AppBase* __this);
void AppBase__OnEnteringBackground_fn(AppBase* __this, int* s);
void AppBase__OnLowMemory_fn(AppBase* __this);
void AppBase__OnSelectionChanged_fn(AppBase* __this, uObject* sender, ::g::Uno::EventArgs* args);
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e, bool* propagate);
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e);
void AppBase__OnUpdate_fn(AppBase* __this);
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval);
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval);
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value);
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value);
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value);

struct AppBase : ::g::Uno::Application
{
    bool _isInvalidateSelectionScheduled;
    uStrong< ::g::Uno::Collections::List*> _selection;
    static uSStrong< ::g::Fuse::RootViewport*> _testRootViewport_;
    static uSStrong< ::g::Fuse::RootViewport*>& _testRootViewport() { return _testRootViewport_; }
    uStrong< ::g::Fuse::RootViewport*> _RootViewport;
    uStrong<uDelegate*> UnhandledException1;

    void ctor_1();
    ::g::Uno::Float4 Background();
    void Background(::g::Uno::Float4 value);
    uObject* Children() { uObject* __retval; return (((AppBase_type*)__type)->fp_get_Children)(this, &__retval), __retval; }
    void DoInvalidateSelection();
    void DrawSelection(::g::Fuse::DrawContext* dc);
    void FindSelection(::g::Fuse::Node* n);
    void InvalidateGraphicsView(::g::Fuse::Node* n);
    void InvalidateSelection();
    void OnEnteringBackground(int s);
    void OnLowMemory();
    void OnSelectionChanged(uObject* sender, ::g::Uno::EventArgs* args);
    void OnUnhandledException(::g::Uno::Exception* e, bool propagate);
    void OnUpdate();
    float PixelsPerPoint();
    ::g::Fuse::RootViewport* RootViewport();
    void RootViewport(::g::Fuse::RootViewport* value);
    void add_UnhandledException(uDelegate* value);
    void remove_UnhandledException(uDelegate* value);
    static void OnUnhandledExceptionInternal(::g::Uno::Exception* e);
    static AppBase* Current1();
    static ::g::Fuse::RootViewport* CurrentRootViewport();
};
// }

}} // ::g::Fuse
