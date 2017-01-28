// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\backends\cplusplus\Uno\_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Array.h>
#include <uBase/Memory.h>
#include <XliPlatform/GL.h>
#include <XliPlatform/GLContext.h>
#include <XliPlatform/Application.h>
#include <Uno/Support.h>
#include <Uno.Exception.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Application.h>
#include <Uno.String.h>

#ifdef DEBUG_DUMPS
#include <stdio.h> // needed for sprintf
#endif

/**
    \addtogroup Main
    @{
*/
Xli::Window* _XliWindowPtr;
Xli::GLContext* _XliGLContextPtr;
uSStrong<uArray*> _CommandLineArgs = 0;
static const uBase::Array<uBase::String>* _BaseArgs;

class uApplication : public Xli::Application
{
    uBase::Auto<Xli::GLContext> _gl;

public:
    virtual uBase::String GetInitTitle()
    {
        return "stockIT";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef U_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif
        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        _XliWindowPtr = wnd;
        _XliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Start();
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnUpdate();
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::g::Uno::Application::Current() && ::g::Uno::Application::Current()->NeedsRedraw())
            {
                ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnDraw();
                _gl->SwapBuffers();
            }
        }

#ifdef DEBUG_DUMPS
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyDown(wnd, key))
            return true;

#ifdef WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyboardResized(wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyUp(wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const uBase::String& text)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTextInput(wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseDown(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseUp(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, uBase::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseMove(wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, uBase::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseWheel(wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchDown(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchMove(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchUp(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowSizeChanged(wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO
        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowClosed(wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::OnReceivedLowMemoryWarning();
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Terminate();
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterInteractive();
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterBackground();
    }
};

int Main(const uBase::Array<uBase::String>& args)
{
    _BaseArgs = &args;
    uRuntime uno;
    uAutoReleasePool pool;

    try
    {
        uApplication app;
        Xli::Application::Run(&app);
    }
    catch (const uThrowable& t)
    {
        uBase::String str = "(null)";

        if (t.Exception)
            str = uStringToXliString(t.Exception->ToString());

        uBase::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;
        throw x;
    }

    return 0;
}

namespace g{uClassType* FuseControls_bundle_typeof();}
namespace g{uClassType* FuseControlsNative_bundle_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof();}
namespace g{uClassType* FuseControlsPanels_bundle_typeof();}
namespace g{uClassType* FuseControlsPrimitives_bundle_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof();}
namespace g{uClassType* FuseControlsVideo_bundle_typeof();}
namespace g{uClassType* FuseCore_bundle_typeof();}
namespace g{uClassType* FuseDrawing_bundle_typeof();}
namespace g{uClassType* FuseDrawingPrimitives_bundle_typeof();}
namespace g{uClassType* FuseEffects_bundle_typeof();}
namespace g{uClassType* FuseElements_bundle_typeof();}
namespace g{uClassType* FuseReactive_bundle_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* CreateItem_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* CreateUser_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* HomePage__Template_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* HomePage_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Shape_type;}} ::g::Fuse::Controls::Shape_type* HorizontalLine_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* Icon_typeof();}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type;}} ::g::Fuse::Controls::TextInputControl_type* InputText_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* LoginScreen_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template1_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template2_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template3_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template4_typeof();}
namespace g{namespace Fuse{struct AppBase_type;} ::g::Fuse::AppBase_type* MainView_typeof();}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type;}} ::g::Fuse::Controls::TextControl_type* Operation_typeof();}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type;}} ::g::Fuse::Controls::TextInputControl_type* ProductInput_typeof();}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type;}} ::g::Fuse::Controls::TextControl_type* ProductText_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Shape_type;}} ::g::Fuse::Controls::Shape_type* Seperator_typeof();}
namespace g{uClassType* stockIT_bundle_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseControlsShape_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseControlsTextControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseControlsTextInputControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseDrawingSolidColor_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseElementsElement_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* stockIT_FuseReactiveEach_Items_Property_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* UpdateItem_typeof();}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type;}} ::g::Fuse::Controls::TextInputControl_type* WhiteTextInput_typeof();}
namespace g{namespace OpenGL{uClassType* GL_typeof();}}
namespace g{namespace OpenGL{uStructType* GLBufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLFramebufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLProgramHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLRenderbufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLShaderHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLTextureHandle_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* AggregateException_typeof();}}
namespace g{namespace Uno{uType* Application_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentNullException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof();}}
namespace g{namespace Uno{uClassType* Array_typeof();}}
namespace g{namespace Uno{uStructType* Bool_typeof();}}
namespace g{namespace Uno{uType* Buffer_typeof();}}
namespace g{namespace Uno{uStructType* Byte_typeof();}}
namespace g{namespace Uno{uStructType* Char_typeof();}}
namespace g{namespace Uno{uClassType* Color_typeof();}}
namespace g{namespace Uno{uClassType* ColorHelper_typeof();}}
namespace g{namespace Uno{uType* DateTime_typeof();}}
namespace g{namespace Uno{uType* Delegate_typeof();}}
namespace g{namespace Uno{uStructType* Double_typeof();}}
namespace g{namespace Uno{uClassType* Enum_typeof();}}
namespace g{namespace Uno{uType* EventArgs_typeof();}}
namespace g{namespace Uno{struct Exception_type; Exception_type* Exception_typeof();}}
namespace g{namespace Uno{uStructType* Float_typeof();}}
namespace g{namespace Uno{uStructType* Float2_typeof();}}
namespace g{namespace Uno{uStructType* Float2x2_typeof();}}
namespace g{namespace Uno{uStructType* Float3_typeof();}}
namespace g{namespace Uno{uStructType* Float3x3_typeof();}}
namespace g{namespace Uno{uStructType* Float4_typeof();}}
namespace g{namespace Uno{uStructType* Float4x4_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* FormatException_typeof();}}
namespace g{namespace Uno{uClassType* GC_typeof();}}
namespace g{namespace Uno{uClassType* Generic_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* IndexOutOfRangeException_typeof();}}
namespace g{namespace Uno{uStructType* Int_typeof();}}
namespace g{namespace Uno{uStructType* Int2_typeof();}}
namespace g{namespace Uno{uStructType* Int3_typeof();}}
namespace g{namespace Uno{uStructType* Int4_typeof();}}
namespace g{namespace Uno{uStructType* IntPtr_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidCastException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidOperationException_typeof();}}
namespace g{namespace Uno{uStructType* Long_typeof();}}
namespace g{namespace Uno{uClassType* Math_typeof();}}
namespace g{namespace Uno{uClassType* Matrix_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotImplementedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotSupportedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NullReferenceException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ObjectDisposedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* OverflowException_typeof();}}
namespace g{namespace Uno{uClassType* Quaternion_typeof();}}
namespace g{namespace Uno{uStructType* Rect_typeof();}}
namespace g{namespace Uno{uStructType* Recti_typeof();}}
namespace g{namespace Uno{uStructType* SByte_typeof();}}
namespace g{namespace Uno{uStructType* Short_typeof();}}
namespace g{namespace Uno{uType* String_typeof();}}
namespace g{namespace Uno{uClassType* Tuple_typeof();}}
namespace g{namespace Uno{uType* Tuple2_typeof();}}
namespace g{namespace Uno{uType* Type_typeof();}}
namespace g{namespace Uno{uStructType* UInt_typeof();}}
namespace g{namespace Uno{uStructType* ULong_typeof();}}
namespace g{namespace Uno{uStructType* UShort_typeof();}}
namespace g{namespace Uno{uClassType* Vector_typeof();}}
namespace g{namespace Uno{uType* WeakReference_typeof();}}
namespace g{namespace Uno{namespace Collections{uStructType* Dictionary__Bucket_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary_type; Dictionary_type* Dictionary_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* EnumerableExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__Enumerator_type; Dictionary__Enumerator_type* Dictionary__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection__Enumerator_type; Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue__Enumerator_type; Queue__Enumerator_type* Queue__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List__Enumerator_type; List__Enumerator_type* List__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet__Enumerator_type; HashSet__Enumerator_type* HashSet__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList__Enumerator_type; LinkedList__Enumerator_type* LinkedList__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet_type; HashSet_type* HashSet_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* IListExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* KeyValuePair_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList_type; LinkedList_type* LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* EnumerableExtensions__LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* LinkedListNode_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List_type; List_type* List_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList_type; ObservableList_type* ObservableList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerable_type; OfTypeEnumerable_type* OfTypeEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerator_type; OfTypeEnumerator_type* OfTypeEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* OrderByCompare_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue_type; Queue_type* Queue_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerable_type; SelectEnumerable_type* SelectEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerator_type; SelectEnumerator_type* SelectEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection_type; Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof();}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{uClassType* ExternBlockHost_typeof();}}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{uClassType* JavaToUnoArrayEntrypoints_typeof();}}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{uClassType* JavaUnoObject_typeof();}}}}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Clock_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Debug_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; DeviceBuffer_type* DeviceBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer_type; Framebuffer_type* Framebuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uType* GraphicsContext_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget_type; RenderTarget_type* RenderTarget_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* SamplerState_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D_type; Texture2D_type* Texture2D_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* TextureHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* VertexAttributeInfo_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture_type; VideoTexture_type* VideoTexture_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader_type; BinaryReader_type* BinaryReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter_type; BinaryWriter_type* BinaryWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* Bundle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* BundleFile_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* CppXliStream_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* CppXliStreamHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Directory_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* EndOfStreamException_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* File_typeof();}}}
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerable_type; FileSystemEnumerable_type* FileSystemEnumerable_typeof();}}}
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerator_type; FileSystemEnumerator_type* FileSystemEnumerator_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* FileSystemEnumeratorHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemEnumeratorImpl_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemImpl_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* IOException_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* MemoryStream_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Path_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; Stream_type* Stream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StreamReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StreamWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StringReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; TextReader_type* TextReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; TextWriter_type* TextWriter_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* FrameChangedEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* KeyEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* PointerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uClassType* SystemUI_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* SystemUIWillResizeEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TextInputEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TimerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uStructType* ViewNativeHandle_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* Window_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uClassType* Application_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uType* Display_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uStructType* Display__PrivateState_typeof();}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArrayCopyImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArraySortImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* BufferImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ClockImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* DebugImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GenericEqualsImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* GraphicsContextHandle_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GraphicsContextImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* PlatformWindowHandle_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* PlatformWindowImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* TextEncodingImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerable_type; ArrayEnumerable_type* ArrayEnumerable_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerator_type; ArrayEnumerator_type* ArrayEnumerator_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BootstrapHints_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* Bootstrapper_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BufferConverters_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; FormatStringToken_type* FormatStringToken_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* FormatStringTokenizer_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* NumericFormatter_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram_type; GLCompiledProgram_type* GLCompiledProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uStructType* GLDrawCall_typeof();}}}}}}
namespace g{namespace Uno{struct Exception_type; namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{::g::Uno::Exception_type* GLException_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLHelpers_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLInterop_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uType* GLProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Text{uClassType* Ascii_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Base64_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; Decoder_type* Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; Encoding_type* Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilder_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilderElement_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Utf8_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; ::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; ::g::Uno::Text::Encoding_type* UTF8Encoding_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1InvokeFunc_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg2Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent_type; AutoResetEvent_type* AutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEventImpl_type; AutoResetEventImpl_type* AutoResetEventImpl_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationToken_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationTokenSource_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* Future1__Closure_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary_type; ConcurrentDictionary_type* ConcurrentDictionary_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue_type; ConcurrentQueue_type* ConcurrentQueue_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; Future_type* Future_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Future1_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* IDispatcherExtensions_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct LockGuard_type; LockGuard_type* LockGuard_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent_type; ManualResetEvent_type* ManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEventImpl_type; ManualResetEventImpl_type* ManualResetEventImpl_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* Monitor_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; Mutex_type* Mutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct MutexImpl_type; MutexImpl_type* MutexImpl_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEventImpl_type; ::g::Uno::Threading::AutoResetEventImpl_type* PosixAutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEventImpl_type; ::g::Uno::Threading::ManualResetEventImpl_type* PosixManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct MutexImpl_type; ::g::Uno::Threading::MutexImpl_type* POSIXMutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadImpl_type; ::g::Uno::Threading::ThreadImpl_type* POSIXThread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Promise_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* POSIXThread__ReleasingLauncher_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct SyncDispatcher_type; SyncDispatcher_type* SyncDispatcher_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Task_type; Task_type* Task_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* TaskFuture_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* Thread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadImpl_type; ThreadImpl_type* ThreadImpl_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool_type; ThreadPool_type* ThreadPool_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPoolTaskScheduler_type; ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* CalendarSystem_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Constants_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Converter_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; DateTimeZone_type* DateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Duration_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* HashCodeHelper_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Instant_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Offset_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Preconditions_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* ZonedDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* Era_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; ::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uClassType* TimeOfDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* WeekYearCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* FixedFormatPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern__OffsetBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; PatternPart_type* PatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SignPart_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* BoolValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; ::g::Uno::UX::FileSource_type* BundleFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ConditionalOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; FileSource_type* FileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* NameTable_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* NumberValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type; Property_type* Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type; Property1_type* Property1_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* PropertyObject_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* Resource_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Selector_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* SelectorRegistry_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Size2Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* SizeValue_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* StreamExtensions_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* StringValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type; Template_type* Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; Value_type* Value_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ValueChangedArgs_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector2Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector3Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector4Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* VectorValue_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Box_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Ray_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* NetworkHelpers_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Uno{namespace Net{namespace Sockets{::g::Uno::IO::Stream_type* NetworkStream_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; Socket_type* Socket_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Sockets{::g::Uno::Exception_type* SocketException_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{uStructType* Socket__SocketHandle_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure1_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpDefaultDispatcher_type; HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageCache_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler_type; HttpMessageHandler_type* HttpMessageHandler_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest_type; HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpStatusReasonPhrase_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidResponseTypeException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidStateException_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__ProgressClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageHandler__StaticData_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct AndroidHttpRequest_type; AndroidHttpRequest_type* AndroidHttpRequest_typeof();}}}}}
namespace g{namespace Java{uType* Object_typeof();}}
namespace g{namespace Android{uClassType* Bootstrapper_typeof();}}
namespace g{namespace Android{namespace Base{uClassType* AndroidBindingMacros_typeof();}}}
namespace g{namespace Android{namespace Base{uClassType* JNI_typeof();}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ConstCharPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JavaVMPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jfieldID_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jmethodID_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JNIEnvPtr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* JNINativeMethod_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* jweak_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujboolean_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujbyte_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujchar_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujclass_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujdouble_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujfloat_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujint_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujlong_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujobject_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujshort_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujstring_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* ujvalue_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Primitives{uStructType* uweakptr_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* Arrays_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* Bridge_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* ByteBuffer_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Types{uClassType* String_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Wrappers{uClassType* JavaObjectHelper_typeof();}}}}
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper_type; JWrapper_type* JWrapper_typeof();}}}}
namespace g{namespace Android{namespace com{namespace fuse{namespace ExperimentalHttp{struct HttpRequest_type; HttpRequest_type* HttpRequest_typeof();}}}}}
namespace g{namespace Fuse{uClassType* AndroidProperties_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; ::g::Fuse::AppBase_type* App_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; AppBase_type* AppBase_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* Behavior_typeof();}}
namespace g{namespace Fuse{struct Binding_type; Binding_type* Binding_typeof();}}
namespace g{namespace Fuse{uType* CacheFramebuffer_typeof();}}
namespace g{namespace Fuse{uType* Node__CallFuncClosure_typeof();}}
namespace g{namespace Fuse{uType* Diagnostic_typeof();}}
namespace g{namespace Fuse{uClassType* Diagnostics_typeof();}}
namespace g{namespace Fuse{uType* DrawContext_typeof();}}
namespace g{namespace Fuse{uType* DrawHelpers_typeof();}}
namespace g{namespace Fuse{uType* FastMatrix_typeof();}}
namespace g{namespace Fuse{uType* FastProperty1Link_typeof();}}
namespace g{namespace Fuse{uType* FastProperty1Link1_typeof();}}
namespace g{namespace Fuse{uType* FastProperty2Link_typeof();}}
namespace g{namespace Fuse{uType* FastProperty2Link1_typeof();}}
namespace g{namespace Fuse{struct FixedViewport_type; FixedViewport_type* FixedViewport_typeof();}}
namespace g{namespace Fuse{uType* Font_typeof();}}
namespace g{namespace Fuse{uClassType* FramebufferPool_typeof();}}
namespace g{namespace Fuse{struct FramebufferPoolImpl_type; FramebufferPoolImpl_type* FramebufferPoolImpl_typeof();}}
namespace g{namespace Fuse{uType* FrustumViewport_typeof();}}
namespace g{namespace Fuse{uClassType* GraphicsWorker_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; ::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof();}}
namespace g{namespace Fuse{uType* HitTestContext_typeof();}}
namespace g{namespace Fuse{uType* Visual__HitTestRecord_typeof();}}
namespace g{namespace Fuse{uType* HitTestResult_typeof();}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode_type; ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();}}
namespace g{namespace Fuse{uClassType* ILoadingStatic_typeof();}}
namespace g{namespace Fuse{uStructType* Visual__InteractionItem_typeof();}}
namespace g{namespace Fuse{uType* KeyboardBootstrapper_typeof();}}
namespace g{namespace Fuse{uStructType* LayoutParams_typeof();}}
namespace g{namespace Fuse{uClassType* LayoutPriority_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__LocalMode_type; TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof();}}
namespace g{namespace Fuse{uType* MobileBootstrapping_typeof();}}
namespace g{namespace Fuse{uClassType* NameRegistry_typeof();}}
namespace g{namespace Fuse{struct Node_type; Node_type* Node_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* NodeGroupBase_typeof();}}
namespace g{namespace Fuse{struct OrthographicFrustum_type; OrthographicFrustum_type* OrthographicFrustum_typeof();}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__ParentSizeMode_type; TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof();}}
namespace g{namespace Fuse{uType* PendingRemoveVisual_typeof();}}
namespace g{namespace Fuse{struct PlacedArgs_type; PlacedArgs_type* PlacedArgs_typeof();}}
namespace g{namespace Fuse{uType* Properties_typeof();}}
namespace g{namespace Fuse{uType* PropertyHandle_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; RelativeTransform_type* RelativeTransform_typeof();}}
namespace g{namespace Fuse{uType* RenderTargetEntry_typeof();}}
namespace g{namespace Fuse{uType* RequestBringIntoViewArgs_typeof();}}
namespace g{namespace Fuse{struct RootViewport_type; RootViewport_type* RootViewport_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Rotation_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; ::g::Fuse::RelativeTransform_type* Scaling_typeof();}}
namespace g{namespace Fuse{uClassType* ScalingModes_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Shear_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();}}
namespace g{namespace Fuse{uType* Stage_typeof();}}
namespace g{namespace Fuse{uType* SystemFont_typeof();}}
namespace g{namespace Fuse{uClassType* Time_typeof();}}
namespace g{namespace Fuse{struct Transform_type; Transform_type* Transform_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; ::g::Fuse::RelativeTransform_type* Translation_typeof();}}
namespace g{namespace Fuse{uClassType* TranslationModes_typeof();}}
namespace g{namespace Fuse{uType* UnhandledExceptionArgs_typeof();}}
namespace g{namespace Fuse{uStructType* UpdateAction_typeof();}}
namespace g{namespace Fuse{struct UpdateDispatcher_type; UpdateDispatcher_type* UpdateDispatcher_typeof();}}
namespace g{namespace Fuse{uType* UpdateListener_typeof();}}
namespace g{namespace Fuse{uClassType* UpdateManager_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* UserEvent_typeof();}}
namespace g{namespace Fuse{struct UserEventArgs_type; UserEventArgs_type* UserEventArgs_typeof();}}
namespace g{namespace Fuse{uType* UserEventDispatch_typeof();}}
namespace g{namespace Fuse{uClassType* ViewportHelpers_typeof();}}
namespace g{namespace Fuse{struct Visual_type; Visual_type* Visual_typeof();}}
namespace g{namespace Fuse{uType* VisualBounds_typeof();}}
namespace g{namespace Fuse{struct VisualEvent_type; VisualEvent_type* VisualEvent_typeof();}}
namespace g{namespace Fuse{struct VisualEventArgs_type; VisualEventArgs_type* VisualEventArgs_typeof();}}
namespace g{namespace Fuse{uClassType* VisualListCache_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; ::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof();}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{::g::Uno::Exception_type* WrapException_typeof();}}
namespace g{namespace Fuse{namespace Platform{uClassType* AppEvents_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uType* Display_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uClassType* Lifecycle_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uStructType* AndroidSystemFont__Alias_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* AndroidSystemFont_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; Blender_type* Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* BlenderMap_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* DrawManager_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct MiniList__Enumerator_type; MiniList__Enumerator_type* MiniList__Enumerator_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uStructType* AndroidSystemFont__Family_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float3Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float4Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uStructType* AndroidSystemFont__FontDescriptor_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* FontFaceDescriptor_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FrustumMatrix_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* ImageContainer_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct MiniList_type; MiniList_type* MiniList_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* RectPacker_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ScalarBlender_type* ScalarBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Size2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* SizeBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SizingContainer_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uStructType* SkylineNode_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* Statistics_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* SystemFont_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* VectorUtil_typeof();}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{uType* SolidRectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; Animator_type* Animator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState_type; AnimatorState_type* AnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Attractor_type; Attractor_type* Attractor_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Change_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; Converter_type* Converter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterDouble_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* CreateStateParams_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Cycle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack_type; DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; Easing_type* Easing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct EasingTrack_type; EasingTrack_type* EasingTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialOutImpl_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Animations{::g::Fuse::Transform_type* FastMatrixTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uStructType* MasterBase__GFWResult_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__LinearImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; MasterBase_type* MasterBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; MasterProperty_type* MasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Mixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; MixerBase_type* MixerBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle_type; MixerHandle_type* MixerHandle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Move_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; OpenAnimatorState_type* OpenAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Player_type; Player_type* Player_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* PlayerPart_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct RangeAdapter_type; RangeAdapter_type* RangeAdapter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uClassType* RangeAdapterHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Resize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Scale_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Spin_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* TrackAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; TrackAnimatorState_type* TrackAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; TransformAnimator_type* TransformAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState_type; TriggerAnimationState_type* TriggerAnimationState_typeof();}}}
namespace g{namespace Fuse{namespace Preview{uClassType* SelectionManager_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Capturer_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* CustomPointerEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__DefaultPointerEventResponder_type; Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Focus_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* FocusGained_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* FocusLost_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPrediction_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPredictStrategy_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* HitTestHelpers_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Keyboard_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* KeyPressed_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* KeyReleased_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyReleasedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PELHolder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Pointer_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerEntered_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerEnteredArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEventData_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerLeft_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerLeftArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerMoved_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerPressed_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerPressedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PointerRecord_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerReleased_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerReleasedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* FocusPrediction__PredictFilter_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* SelectionQuery_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct AnyChangeObserver_type; AnyChangeObserver_type* AnyChangeObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* BindAttempt_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* BindingTypes_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure_type; EventBinding__CallClosure_type* EventBinding__CallClosure_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* Console_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding_type; ContextBinding_type* ContextBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* Instantiator__CountItem_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; DataBinding_type* DataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* DebugLog_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator_type; ::g::Fuse::Reactive::Instantiator_type* Each_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* JavaScript__EvaluateDataContext_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding_type; ::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator_type; Instantiator_type* Instantiator_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript_type; JavaScript_type* JavaScript_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PathObserver_type; PathObserver_type* PathObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding_type; PropertyBinding_type* PropertyBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ReadClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ReadDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type;}} namespace Fuse{namespace Reactive{::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct SegmentObserver_type; SegmentObserver_type* SegmentObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker_type; ThreadWorker_type* ThreadWorker_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* WriteClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* WriteDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Builtins_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerModule__CallbackClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FunctionClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpClient_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpRequest_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Http_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* HttpHeaders_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager__Timer_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof();}}}}
namespace g{namespace Fuse{namespace Resources{uType* HttpImageSourceImpl__BackgroundLoad_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* FileImageSourceImpl__BackgroundLoad_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* DisposalManager_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* FileImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* FileResource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct GenericResourceConverter_type; GenericResourceConverter_type* GenericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* HttpImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ImageSource_type* ImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ImageSourceChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs_type; ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; LoadingImageSource_type* LoadingImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* MemoryPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; NumericResourceConverter_type* NumericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ProxyImageSource_typeof();}}}
namespace g{namespace Fuse{struct Binding_type; namespace Resources{::g::Fuse::Binding_type* ResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceConverters_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceRegistry_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* SystemFileSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure2_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Add_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* AppInitialized_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; Array_type* Array_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs_type; BoolChangedArgs_type* BoolChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptMethod1__CallClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ClassInstance_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Clear_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* AppInitialized__Closure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; Context_type* Context_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__ContextClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeEventEmitterModule__EmitClosure_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* Error_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* EventEmitterModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* External_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* FactoryClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type; ::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct FileSourceConverter_type; FileSourceConverter_type* FileSourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; Function_type* Function_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Scripting{::g::Uno::UX::FileSource_type* JSFileSource_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Json_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty_type; ::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ListMirror_type* ListMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Marshal_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* Context__MethodClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; Module_type* Module_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ModuleResult_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; ::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type; ::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeFunction__NativeFunctionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; NativeMember_type* NativeMember_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type; NativeModule_type* NativeModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; NativeProperty_type* NativeProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback__NumberConverter_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; Object_type* Object_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObjectMirror_type; ObjectMirror_type* ObjectMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ::g::Fuse::Scripting::ListMirror_type* Observable_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty_type; ObservableProperty_type* ObservableProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeEventEmitterModule__OnClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; Observable__Operation_type* Observable__Operation_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__PromiseClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* Context__PropertyClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ObservableProperty__PushCapture_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveRange_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptModule__RequireContext_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptClass_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* ScriptException_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptMember_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ScriptMethod_type* ScriptMethod_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type; ScriptModule_type* ScriptModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty_type; ScriptProperty_type* ScriptProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty_type; ::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Set_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs_type; StringChangedArgs_type* StringChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription_type; Observable__Subscription_type* Observable__Subscription_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Value_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror_type; ValueMirror_type* ValueMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; namespace V8{::g::Fuse::Scripting::Array_type* Array_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uType* ArrayHandle_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool_type; AutoReleasePool_type* AutoReleasePool_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uType* Marshaller__CallbackWrapper_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; namespace V8{::g::Fuse::Scripting::Context_type* Context_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context__EnterVM_type; Context__EnterVM_type* Context__EnterVM_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uClassType* Error_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; namespace V8{::g::Fuse::Scripting::Function_type* Function_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uClassType* Handle_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uClassType* Marshaller_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; namespace V8{::g::Fuse::Scripting::Object_type* Object_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{uClassType* V8SimpleExtensions_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uClassType* Context_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSArray_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSContext_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSExternal_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSFunction_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSObject_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSScriptException_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSString_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uStructType* JSValue_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uClassType* ScriptException_typeof();}}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{uClassType* Value_typeof();}}}}}
namespace g{namespace Fuse{namespace Motion{uType* DestinationMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* MotionConfig_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* NavigationMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* ScrollViewMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AdapterMultiplier_type; AdapterMultiplier_type* AdapterMultiplier_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AngularAdapter_type; AngularAdapter_type* AngularAdapter_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D_type; BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct EasingMotion_type; EasingMotion_type* EasingMotion_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct ElasticForce_type; ElasticForce_type* ElasticForce_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct Friction_type; Friction_type* Friction_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{uType* PointerVelocity_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct SmoothSnap_type; SmoothSnap_type* SmoothSnap_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BlendModeHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; Brush_type* Brush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Brushes_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Colors_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush__Converter_type; Brush__Converter_type* Brush__Converter_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uStructType* ImageFill__DrawParams_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* GradientStop_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill_type; ImageFill_type* ImageFill_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient_type; LinearGradient_type* LinearGradient_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* LinearGradientDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* RepeatBaker_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor_type; SolidColor_type* SolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* StaticBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor_type; StaticSolidColor_type* StaticSolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke_type; Stroke_type* Stroke_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float2Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* FloatBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* TypedBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* UShortBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConcaveWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConvexWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Coverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Falloff_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* FillCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* LimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* OneLimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ShadowFalloff_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* StrokeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Wedge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* WedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* BusyTask_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Triggers{::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* BusyTaskModule__ConstructorClosure_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ContentSizeLength_type; IScrolledLengths__ContentSizeLength_type* IScrolledLengths__ContentSizeLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* Trigger__DeferredItem_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* StateGroup__GotoImpl_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* IScrolledLengths_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* LayoutTransition_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Triggers{::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Triggers{::g::Fuse::VisualEventArgs_type* LayoutTransitionedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PixelsLength_type; IScrolledLengths__PixelsLength_type* IScrolledLengths__PixelsLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PointsLength_type; IScrolledLengths__PointsLength_type* IScrolledLengths__PointsLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode_type; LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible__RelativeToKeyboardMode_type; WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation_type; RemovingAnimation_type* RemovingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode_type; LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode_type; LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Scrolled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* ScrolledArgs_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* ScrollRegion_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ScrollViewSizeLength_type; IScrolledLengths__ScrollViewSizeLength_type* IScrolledLengths__ScrollViewSizeLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* State_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Triggers{::g::Fuse::Node_type* StateGroup_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline_type; Timeline_type* Timeline_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Transition_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* TransitionGroup_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; Trigger_type* Trigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; WhileBool_type* WhileBool_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; ::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; ::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; WhileValue_type* WhileValue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* WhileValueStatic_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode_type; LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* DebugProperty_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct JSEventArgs_type; JSEventArgs_type* JSEventArgs_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml_type; LoadHtml_type* LoadHtml_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; TriggerAction_type* TriggerAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* UserEventArg_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; WebViewNavAction_type* WebViewNavAction_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{uClassType* AlignmentHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__AnchorOrigin_type; TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__BoxCenter_type; TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* BoxPlacement_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; BoxSizing_type* BoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* CacheHelper_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* CacheTile_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__CenterOrigin_type; TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* DisplayHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type; Element_type* Element_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebuffer_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* ElementAtlasFramebufferPool_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebufferPoolEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl_type; ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch_type; ElementBatch_type* ElementBatch_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementBatchEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher_type; ElementBatcher_type* ElementBatcher_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* Element__GMSCacheItem_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Elements{::g::Fuse::Transform_type* InteractiveTransform_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* LayoutMasterBoxSizing__LayoutMasterData_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* PreplacementArgs_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__RelativeResizeChangeMode_type; TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct SingleVisualDrawable_type; SingleVisualDrawable_type* SingleVisualDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__SizeFactorMode_type; TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* TranslationModes__OffsetMode__Subscriptions_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__TopLeftOrigin_type; TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TransformOrigins_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TranslationModes_typeof();}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; BasicEffect_type* BasicEffect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* DropShadow__Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Blur_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Effect_type; Effect_type* Effect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* EffectHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Mask_type; Mask_type* Mask_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* ButtonBase_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* ClientPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ContentControl_type* ContentControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller_type;}} namespace Fuse{namespace Controls{::g::Fuse::Gestures::Scroller_type* ScrollView__DefaultScroller_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type;}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::WhileBool_type* ScrollView__DefaultTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* Navigator__DeferSwitch_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Disable_type; NativeViewHost__Disable_type* NativeViewHost__Disable_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* DockPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__DummyRenderer_type; NativeViewHost__DummyRenderer_type* NativeViewHost__DummyRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* EdgeNavigator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Property1_type* Element_Opacity_Property_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Enable_type; NativeViewHost__Enable_type* NativeViewHost__Enable_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct FallbackWebViewClient_type; FallbackWebViewClient_type* FallbackWebViewClient_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ForwardProperties_type; ForwardProperties_type* ForwardProperties_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* FreezeDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Grid_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Image_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ImageElementDraw_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct JavaScriptCall_type; JavaScriptCall_type* JavaScriptCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* LayoutControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct LoadHtmlCall_type; LoadHtmlCall_type* LoadHtmlCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit_type; MobileTextEdit_type* MobileTextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost_type; ::g::Fuse::Controls::NativeViewHost_type* NativeTextEditHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost_type; NativeViewHost_type* NativeViewHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl_type; NavigationControl_type* NavigationControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator_type; Navigator_type* Navigator_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Controls{::g::Fuse::VisualEventArgs_type* NavigatorSwitchedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* Navigator__NavPage_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Page_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl_type; PageControl_type* PageControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* EdgeNavigator__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* NavigationControl__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* PageIndicatorDot_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* PageIndicatorDotTemplate_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Panel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Rectangle_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Property1_type* Router_PrepareProgress_Property_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs_type; ScrollPositionChangedArgs_type* ScrollPositionChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase_type; ::g::Fuse::Controls::ScrollViewBase_type* ScrollView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase_type; ScrollViewBase_type* ScrollViewBase_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; Shape_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* StackPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* StatusBarBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* Text_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; TextControl_type* TextControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextEdit_type; TextEdit_type* TextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type; ::g::Fuse::Controls::TextInputControl_type* TextInput_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Controls{::g::Fuse::VisualEventArgs_type* TextInputActionArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type; TextInputControl_type* TextInputControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ToggleControl_type* ToggleControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Video_type; Video_type* Video_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* Shape__Watcher_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle_type; ImageHandle_type* ImageHandle_typeof();}}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Controls{namespace Native{::g::Uno::Threading::Future_type* ImageLoader__ImageHandlePromise_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{uClassType* ImageLoader_typeof();}}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Controls{namespace Native{::g::Uno::Threading::Future_type* ImageLoader__PendingPromise_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* Blitter_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Circle_type; Circle_type* Circle_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct DrawableViewGroup_type; DrawableViewGroup_type* DrawableViewGroup_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Shape_type; ::g::Fuse::Controls::Native::Android::Shape_type* Ellipse_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusChangedListener_type; FocusChangedListener_type* FocusChangedListener_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* FocusManager_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uClassType* Helpers_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ImageView_type; ImageView_type* ImageView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uClassType* InputDispatch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* JavaMap_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct LeafView_type; LeafView_type* LeafView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* MotionEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct NativeViewRenderer_type; NativeViewRenderer_type* NativeViewRenderer_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Rectangle_type; Rectangle_type* Rectangle_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ScrollView_type; ScrollView_type* ScrollView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Shape_type; Shape_type* Shape_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct LeafView_type; ::g::Fuse::Controls::Native::Android::LeafView_type* Slider_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uClassType* SoftKeyboard_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsView_type; ::g::Fuse::Controls::Native::Android::GraphicsView_type* SurfaceView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch_type; Switch_type* Switch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput_type; ::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEditRenderer_type; TextEditRenderer_type* TextEditRenderer_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEditRenderHost_type; TextEditRenderHost_type* TextEditRenderHost_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextInput_type; TextInput_type* TextInput_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextView_type; TextView_type* TextView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* Typeface_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uClassType* TypefaceCache_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View_type; View_type* View_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ViewGroup_type; ViewGroup_type* ViewGroup_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ControlVisual_type* ControlVisual_typeof();}}}}
namespace g{namespace Fuse{struct Visual_type; namespace Controls{namespace Graphics{::g::Fuse::Visual_type* Visual_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Triggers::Trigger_type* NavEnterHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Triggers::Trigger_type* NavExitHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Triggers::RemovingAnimation_type* NavRemoveHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Controls{namespace NavigationInternal{::g::Fuse::Triggers::Trigger_type* PageWhileNavigatingFreeze_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct EmptyVideo_type; EmptyVideo_type* EmptyVideo_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct GraphicsVideoService_type; GraphicsVideoService_type* GraphicsVideoService_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct LoadingClosure_type; LoadingClosure_type* LoadingClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uClassType* VideoDiskCache_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uType* VideoDrawElement_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uClassType* VideoLoader_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoVisual_type; VideoVisual_type* VideoVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct MediaPlayer_type; MediaPlayer_type* MediaPlayer_typeof();}}}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{::g::Uno::Threading::Future_type* VideoLoader__NoHardwareAcceleration_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{uType* VideoLoader_typeof();}}}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof();}}}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Clicked_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* Clicker_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* DegreeSpan_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* KeepFocusInView_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* KeepInViewCommon_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller_type; Scroller_type* Scroller_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Swiped_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture_type; SwipeGesture_type* SwipeGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* SwipeGestureHelper_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation_type; SwipingAnimation_type* SwipingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Tapped_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* TappedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* SwipeRegion__DoSwiped_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* EdgeSwiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* Swiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion_type; SwipeRegion_type* SwipeRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* EndSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Router__GetRouteCallback_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation_type; ::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs_type; NavigatedArgs_type* NavigatedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Navigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; NavigationAnimation_type* NavigationAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavigationPageProperty_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy_type; NavigationPageProxy_type* NavigationPageProxy_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uStructType* NavigationPageState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; NavigationTriggerAction_type* NavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* VisualNavigation__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct PageResourceBinding_type; PageResourceBinding_type* PageResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Route_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Router_type; Router_type* Router_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Actions::TriggerAction_type* RouterCancelNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Actions::TriggerAction_type* RouterModify_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation_type; StructuredNavigation_type* StructuredNavigation_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Navigation{::g::Fuse::Node_type* SwipeNavigate_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* UpdateSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; VisualNavigation_type* VisualNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Column_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* DefinitionBase_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DockLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* GridLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; Layout_type* Layout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uClassType* Layouts_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Row_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* StackLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* AppRoot_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct AppRoot__AppRootParent_type; AppRoot__AppRootParent_type* AppRoot__AppRootParent_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextRenderer__BackgroundRender_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct Bitmap_type; Bitmap_type* Bitmap_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* Canvas_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* GLUtils_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* Helpers_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* StaticLayout_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Android{::g::Fuse::Node_type* StatusBarConfig_typeof();}}}
namespace g{namespace Fuse{namespace Android{uClassType* StatusBarHelper_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextControlLayout_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextPaint_typeof();}}}
namespace g{namespace Fuse{namespace Android{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* TextUtils_typeof();}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{uType* EvaluateJsCommand_typeof();}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{uType* JSEvalRequestManager_typeof();}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{uClassType* WebViewForeign_typeof();}}}}}
namespace g{namespace Fuse{namespace FileSystem{uType* AndroidPaths_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations__Closure_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations__Closure1_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; ::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; ::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileStatus_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* FileStatusHelpers_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; FileSystemInfo_type* FileSystemInfo_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace FileSystem{::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* PathTools_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* UnifiedPaths_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Selection{::g::Fuse::Node_type* Selectable_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct Selection_type; Selection_type* Selection_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Selection{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uClassType* ApplicationDir_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__ReadClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Storage{::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__WriteClosure_typeof();}}}
namespace g{namespace Fuse{namespace WebSocket{uType* NativeFunctionModule__FunctionClosure_typeof();}}}
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule_type; NativeFunctionModule_type* NativeFunctionModule_typeof();}}}
namespace g{namespace Fuse{namespace WebSocket{uType* WebSocketClient_typeof();}}}
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule_type; ::g::Fuse::WebSocket::NativeFunctionModule_type* WebSocketClientModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace WebSocket{::g::Fuse::Scripting::NativeModule_type* WebSocketClientWrapper_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* BinaryLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* HttpLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uType* HttpResponseHeader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; Loader_type* Loader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* LoaderConst_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* TextLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{namespace Internal{uClassType* DateUtil_typeof();}}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Experimental{namespace Cache{::g::Uno::IO::Stream_type* ProxyStream_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uType* Callback_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Experimental{namespace TextureLoader{::g::Uno::Exception_type* InvalidContentTypeException_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoader_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoaderImpl_typeof();}}}
namespace g{namespace Neovisionaries{struct WebSocketClient_type; WebSocketClient_type* WebSocketClient_typeof();}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule_type; WindowModule_type* WindowModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Base64_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Bundle_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Environment_typeof();}}
namespace g{namespace FuseJS{uType* FileReaderImpl__FileReadCommand_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Globals_typeof();}}
namespace g{namespace FuseJS{uClassType* Latin1Helpers_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof();}}
namespace g{namespace FuseJS{uType* RaiseEvent_typeof();}}
namespace g{namespace FuseJS{uType* Bundle__ReadClosure_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof();}}
void uInitRtti(uType*(*factories[])());

void uInitRtti()
{
    static uType*(*factories[])() =
    {
        (uType*(*)())&::g::FuseControls_bundle_typeof,
        (uType*(*)())&::g::FuseControlsNative_bundle_typeof,
        (uType*(*)())&::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof,
        (uType*(*)())&::g::FuseControlsNavigation_FuseControlsShape_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPanels_bundle_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_bundle_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsVideo_bundle_typeof,
        (uType*(*)())&::g::FuseCore_bundle_typeof,
        (uType*(*)())&::g::FuseDrawing_bundle_typeof,
        (uType*(*)())&::g::FuseDrawingPrimitives_bundle_typeof,
        (uType*(*)())&::g::FuseEffects_bundle_typeof,
        (uType*(*)())&::g::FuseElements_bundle_typeof,
        (uType*(*)())&::g::FuseReactive_bundle_typeof,
        (uType*(*)())&::g::CreateItem_typeof,
        (uType*(*)())&::g::CreateUser_typeof,
        (uType*(*)())&::g::HomePage__Template_typeof,
        (uType*(*)())&::g::HomePage_typeof,
        (uType*(*)())&::g::HorizontalLine_typeof,
        (uType*(*)())&::g::Icon_typeof,
        (uType*(*)())&::g::InputText_typeof,
        (uType*(*)())&::g::LoginScreen_typeof,
        (uType*(*)())&::g::MainView__Template_typeof,
        (uType*(*)())&::g::MainView__Template1_typeof,
        (uType*(*)())&::g::MainView__Template2_typeof,
        (uType*(*)())&::g::MainView__Template3_typeof,
        (uType*(*)())&::g::MainView__Template4_typeof,
        (uType*(*)())&::g::MainView_typeof,
        (uType*(*)())&::g::Operation_typeof,
        (uType*(*)())&::g::ProductInput_typeof,
        (uType*(*)())&::g::ProductText_typeof,
        (uType*(*)())&::g::Seperator_typeof,
        (uType*(*)())&::g::stockIT_bundle_typeof,
        (uType*(*)())&::g::stockIT_FuseControlsShape_Color_Property_typeof,
        (uType*(*)())&::g::stockIT_FuseControlsTextControl_Value_Property_typeof,
        (uType*(*)())&::g::stockIT_FuseControlsTextInputControl_Value_Property_typeof,
        (uType*(*)())&::g::stockIT_FuseDrawingSolidColor_Color_Property_typeof,
        (uType*(*)())&::g::stockIT_FuseElementsElement_Opacity_Property_typeof,
        (uType*(*)())&::g::stockIT_FuseReactiveEach_Items_Property_typeof,
        (uType*(*)())&::g::UpdateItem_typeof,
        (uType*(*)())&::g::WhiteTextInput_typeof,
        (uType*(*)())&::g::OpenGL::GL_typeof,
        (uType*(*)())&::g::OpenGL::GLBufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLFramebufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLProgramHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLRenderbufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLShaderHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLTextureHandle_typeof,
        (uType*(*)())&::g::Uno::AggregateException_typeof,
        (uType*(*)())&::g::Uno::Application_typeof,
        (uType*(*)())&::g::Uno::ArgumentException_typeof,
        (uType*(*)())&::g::Uno::ArgumentNullException_typeof,
        (uType*(*)())&::g::Uno::ArgumentOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Array_typeof,
        (uType*(*)())&::g::Uno::Bool_typeof,
        (uType*(*)())&::g::Uno::Buffer_typeof,
        (uType*(*)())&::g::Uno::Byte_typeof,
        (uType*(*)())&::g::Uno::Char_typeof,
        (uType*(*)())&::g::Uno::Color_typeof,
        (uType*(*)())&::g::Uno::ColorHelper_typeof,
        (uType*(*)())&::g::Uno::DateTime_typeof,
        (uType*(*)())&::g::Uno::Delegate_typeof,
        (uType*(*)())&::g::Uno::Double_typeof,
        (uType*(*)())&::g::Uno::Enum_typeof,
        (uType*(*)())&::g::Uno::EventArgs_typeof,
        (uType*(*)())&::g::Uno::Exception_typeof,
        (uType*(*)())&::g::Uno::Float_typeof,
        (uType*(*)())&::g::Uno::Float2_typeof,
        (uType*(*)())&::g::Uno::Float2x2_typeof,
        (uType*(*)())&::g::Uno::Float3_typeof,
        (uType*(*)())&::g::Uno::Float3x3_typeof,
        (uType*(*)())&::g::Uno::Float4_typeof,
        (uType*(*)())&::g::Uno::Float4x4_typeof,
        (uType*(*)())&::g::Uno::FormatException_typeof,
        (uType*(*)())&::g::Uno::GC_typeof,
        (uType*(*)())&::g::Uno::Generic_typeof,
        (uType*(*)())&::g::Uno::IndexOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Int_typeof,
        (uType*(*)())&::g::Uno::Int2_typeof,
        (uType*(*)())&::g::Uno::Int3_typeof,
        (uType*(*)())&::g::Uno::Int4_typeof,
        (uType*(*)())&::g::Uno::IntPtr_typeof,
        (uType*(*)())&::g::Uno::InvalidCastException_typeof,
        (uType*(*)())&::g::Uno::InvalidOperationException_typeof,
        (uType*(*)())&::g::Uno::Long_typeof,
        (uType*(*)())&::g::Uno::Math_typeof,
        (uType*(*)())&::g::Uno::Matrix_typeof,
        (uType*(*)())&::g::Uno::NotImplementedException_typeof,
        (uType*(*)())&::g::Uno::NotSupportedException_typeof,
        (uType*(*)())&::g::Uno::NullReferenceException_typeof,
        (uType*(*)())&::g::Uno::ObjectDisposedException_typeof,
        (uType*(*)())&::g::Uno::OverflowException_typeof,
        (uType*(*)())&::g::Uno::Quaternion_typeof,
        (uType*(*)())&::g::Uno::Rect_typeof,
        (uType*(*)())&::g::Uno::Recti_typeof,
        (uType*(*)())&::g::Uno::SByte_typeof,
        (uType*(*)())&::g::Uno::Short_typeof,
        (uType*(*)())&::g::Uno::String_typeof,
        (uType*(*)())&::g::Uno::Tuple_typeof,
        (uType*(*)())&::g::Uno::Tuple2_typeof,
        (uType*(*)())&::g::Uno::Type_typeof,
        (uType*(*)())&::g::Uno::UInt_typeof,
        (uType*(*)())&::g::Uno::ULong_typeof,
        (uType*(*)())&::g::Uno::UShort_typeof,
        (uType*(*)())&::g::Uno::Vector_typeof,
        (uType*(*)())&::g::Uno::WeakReference_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Bucket_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::List__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet_typeof,
        (uType*(*)())&::g::Uno::Collections::IListExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::KeyValuePair_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions__LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedListNode_typeof,
        (uType*(*)())&::g::Uno::Collections::List_typeof,
        (uType*(*)())&::g::Uno::Collections::ObservableList_typeof,
        (uType*(*)())&::g::Uno::Collections::OfTypeEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::OfTypeEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::OrderByCompare_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::ExternBlockHost_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaToUnoArrayEntrypoints_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Clock_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Debug_typeof,
        (uType*(*)())&::g::Uno::Graphics::DeviceBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::Framebuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::GraphicsContext_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::RenderTarget_typeof,
        (uType*(*)())&::g::Uno::Graphics::SamplerState_typeof,
        (uType*(*)())&::g::Uno::Graphics::Texture2D_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeInfo_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::VideoTexture_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryReader_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryWriter_typeof,
        (uType*(*)())&::g::Uno::IO::Bundle_typeof,
        (uType*(*)())&::g::Uno::IO::BundleFile_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStream_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStreamHandle_typeof,
        (uType*(*)())&::g::Uno::IO::Directory_typeof,
        (uType*(*)())&::g::Uno::IO::EndOfStreamException_typeof,
        (uType*(*)())&::g::Uno::IO::File_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumerable_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumerator_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumeratorHandle_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumeratorImpl_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemImpl_typeof,
        (uType*(*)())&::g::Uno::IO::IOException_typeof,
        (uType*(*)())&::g::Uno::IO::MemoryStream_typeof,
        (uType*(*)())&::g::Uno::IO::Path_typeof,
        (uType*(*)())&::g::Uno::IO::Stream_typeof,
        (uType*(*)())&::g::Uno::IO::StreamReader_typeof,
        (uType*(*)())&::g::Uno::IO::StreamWriter_typeof,
        (uType*(*)())&::g::Uno::IO::StringReader_typeof,
        (uType*(*)())&::g::Uno::IO::TextReader_typeof,
        (uType*(*)())&::g::Uno::IO::TextWriter_typeof,
        (uType*(*)())&::g::Uno::Platform::FrameChangedEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::KeyEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::PointerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUI_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TextInputEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TimerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::ViewNativeHandle_typeof,
        (uType*(*)())&::g::Uno::Platform::Window_typeof,
        (uType*(*)())&::g::Uno::Platform2::Application_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display__PrivateState_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArraySortImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::BufferImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ClockImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::DebugImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::TextEncodingImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BootstrapHints_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::Bootstrapper_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferConverters_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringItem_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof,
        (uType*(*)())&::g::Uno::Text::Ascii_typeof,
        (uType*(*)())&::g::Uno::Text::Base64_typeof,
        (uType*(*)())&::g::Uno::Text::Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::Encoding_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilder_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilderElement_typeof,
        (uType*(*)())&::g::Uno::Text::Utf8_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Encoding_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::AutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::AutoResetEventImpl_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationToken_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationTokenSource_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1__Closure_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentDictionary_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__DefaultWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::Future_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions_typeof,
        (uType*(*)())&::g::Uno::Threading::LockGuard_typeof,
        (uType*(*)())&::g::Uno::Threading::ManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::ManualResetEventImpl_typeof,
        (uType*(*)())&::g::Uno::Threading::Monitor_typeof,
        (uType*(*)())&::g::Uno::Threading::Mutex_typeof,
        (uType*(*)())&::g::Uno::Threading::MutexImpl_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__ParameterizedWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixAutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXMutex_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread_typeof,
        (uType*(*)())&::g::Uno::Threading::Promise_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread__ReleasingLauncher_typeof,
        (uType*(*)())&::g::Uno::Threading::SyncDispatcher_typeof,
        (uType*(*)())&::g::Uno::Threading::Task_typeof,
        (uType*(*)())&::g::Uno::Threading::TaskFuture_typeof,
        (uType*(*)())&::g::Uno::Threading::Thread_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadImpl_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPoolTaskScheduler_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__WorkItem_typeof,
        (uType*(*)())&::g::Uno::Time::CalendarSystem_typeof,
        (uType*(*)())&::g::Uno::Time::Constants_typeof,
        (uType*(*)())&::g::Uno::Time::Converter_typeof,
        (uType*(*)())&::g::Uno::Time::DateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::DeviceTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::Duration_typeof,
        (uType*(*)())&::g::Uno::Time::FixedDateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::HashCodeHelper_typeof,
        (uType*(*)())&::g::Uno::Time::Instant_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::Offset_typeof,
        (uType*(*)())&::g::Uno::Time::Preconditions_typeof,
        (uType*(*)())&::g::Uno::Time::ZonedDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::Era_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::TimeOfDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::WeekYearCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Text::FixedFormatPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::NumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern__OffsetBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::PatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SeparatorPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SignPart_typeof,
        (uType*(*)())&::g::Uno::UX::BoolValue_typeof,
        (uType*(*)())&::g::Uno::UX::BundleFileSource_typeof,
        (uType*(*)())&::g::Uno::UX::ConditionalOperator_typeof,
        (uType*(*)())&::g::Uno::UX::FileSource_typeof,
        (uType*(*)())&::g::Uno::UX::NameTable_typeof,
        (uType*(*)())&::g::Uno::UX::NumberValue_typeof,
        (uType*(*)())&::g::Uno::UX::Property_typeof,
        (uType*(*)())&::g::Uno::UX::Property1_typeof,
        (uType*(*)())&::g::Uno::UX::PropertyObject_typeof,
        (uType*(*)())&::g::Uno::UX::Resource_typeof,
        (uType*(*)())&::g::Uno::UX::Selector_typeof,
        (uType*(*)())&::g::Uno::UX::SelectorRegistry_typeof,
        (uType*(*)())&::g::Uno::UX::Size_typeof,
        (uType*(*)())&::g::Uno::UX::Size2_typeof,
        (uType*(*)())&::g::Uno::UX::Size2Value_typeof,
        (uType*(*)())&::g::Uno::UX::SizeValue_typeof,
        (uType*(*)())&::g::Uno::UX::StreamExtensions_typeof,
        (uType*(*)())&::g::Uno::UX::StringValue_typeof,
        (uType*(*)())&::g::Uno::UX::Template_typeof,
        (uType*(*)())&::g::Uno::UX::Value_typeof,
        (uType*(*)())&::g::Uno::UX::ValueChangedArgs_typeof,
        (uType*(*)())&::g::Uno::UX::Vector2Value_typeof,
        (uType*(*)())&::g::Uno::UX::Vector3Value_typeof,
        (uType*(*)())&::g::Uno::UX::Vector4Value_typeof,
        (uType*(*)())&::g::Uno::UX::VectorValue_typeof,
        (uType*(*)())&::g::Uno::Geometry::Box_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision_typeof,
        (uType*(*)())&::g::Uno::Geometry::Ray_typeof,
        (uType*(*)())&::g::Uno::Net::NetworkHelpers_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::NetworkStream_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::SocketException_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket__SocketHandle_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpDefaultDispatcher_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpStatusReasonPhrase_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidResponseTypeException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidStateException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__ProgressClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler__StaticData_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::AndroidHttpRequest_typeof,
        (uType*(*)())&::g::Java::Object_typeof,
        (uType*(*)())&::g::Android::Bootstrapper_typeof,
        (uType*(*)())&::g::Android::Base::AndroidBindingMacros_typeof,
        (uType*(*)())&::g::Android::Base::JNI_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ConstCharPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JavaVMPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jfieldID_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jmethodID_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JNIEnvPtr_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::JNINativeMethod_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::jweak_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujboolean_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujbyte_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujchar_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujclass_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujdouble_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujfloat_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujint_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujlong_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujobject_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujshort_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujstring_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::ujvalue_typeof,
        (uType*(*)())&::g::Android::Base::Primitives::uweakptr_typeof,
        (uType*(*)())&::g::Android::Base::Types::Arrays_typeof,
        (uType*(*)())&::g::Android::Base::Types::Bridge_typeof,
        (uType*(*)())&::g::Android::Base::Types::ByteBuffer_typeof,
        (uType*(*)())&::g::Android::Base::Types::String_typeof,
        (uType*(*)())&::g::Android::Base::Wrappers::JavaObjectHelper_typeof,
        (uType*(*)())&::g::Android::Base::Wrappers::JWrapper_typeof,
        (uType*(*)())&::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof,
        (uType*(*)())&::g::Fuse::AndroidProperties_typeof,
        (uType*(*)())&::g::Fuse::App_typeof,
        (uType*(*)())&::g::Fuse::AppBase_typeof,
        (uType*(*)())&::g::Fuse::Behavior_typeof,
        (uType*(*)())&::g::Fuse::Binding_typeof,
        (uType*(*)())&::g::Fuse::CacheFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Node__CallFuncClosure_typeof,
        (uType*(*)())&::g::Fuse::Diagnostic_typeof,
        (uType*(*)())&::g::Fuse::Diagnostics_typeof,
        (uType*(*)())&::g::Fuse::DrawContext_typeof,
        (uType*(*)())&::g::Fuse::DrawHelpers_typeof,
        (uType*(*)())&::g::Fuse::FastMatrix_typeof,
        (uType*(*)())&::g::Fuse::FastProperty1Link_typeof,
        (uType*(*)())&::g::Fuse::FastProperty1Link1_typeof,
        (uType*(*)())&::g::Fuse::FastProperty2Link_typeof,
        (uType*(*)())&::g::Fuse::FastProperty2Link1_typeof,
        (uType*(*)())&::g::Fuse::FixedViewport_typeof,
        (uType*(*)())&::g::Fuse::Font_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::FrustumViewport_typeof,
        (uType*(*)())&::g::Fuse::GraphicsWorker_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__HeightMode_typeof,
        (uType*(*)())&::g::Fuse::HitTestContext_typeof,
        (uType*(*)())&::g::Fuse::Visual__HitTestRecord_typeof,
        (uType*(*)())&::g::Fuse::HitTestResult_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes__IdentityMode_typeof,
        (uType*(*)())&::g::Fuse::ILoadingStatic_typeof,
        (uType*(*)())&::g::Fuse::Visual__InteractionItem_typeof,
        (uType*(*)())&::g::Fuse::KeyboardBootstrapper_typeof,
        (uType*(*)())&::g::Fuse::LayoutParams_typeof,
        (uType*(*)())&::g::Fuse::LayoutPriority_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__LocalMode_typeof,
        (uType*(*)())&::g::Fuse::MobileBootstrapping_typeof,
        (uType*(*)())&::g::Fuse::NameRegistry_typeof,
        (uType*(*)())&::g::Fuse::Node_typeof,
        (uType*(*)())&::g::Fuse::NodeGroupBase_typeof,
        (uType*(*)())&::g::Fuse::OrthographicFrustum_typeof,
        (uType*(*)())&::g::Fuse::Visual__ParameterProperty_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__ParentSizeMode_typeof,
        (uType*(*)())&::g::Fuse::PendingRemoveVisual_typeof,
        (uType*(*)())&::g::Fuse::PlacedArgs_typeof,
        (uType*(*)())&::g::Fuse::Properties_typeof,
        (uType*(*)())&::g::Fuse::PropertyHandle_typeof,
        (uType*(*)())&::g::Fuse::RelativeTransform_typeof,
        (uType*(*)())&::g::Fuse::RenderTargetEntry_typeof,
        (uType*(*)())&::g::Fuse::RequestBringIntoViewArgs_typeof,
        (uType*(*)())&::g::Fuse::RootViewport_typeof,
        (uType*(*)())&::g::Fuse::Rotation_typeof,
        (uType*(*)())&::g::Fuse::Scaling_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes_typeof,
        (uType*(*)())&::g::Fuse::Shear_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__SizeMode_typeof,
        (uType*(*)())&::g::Fuse::Stage_typeof,
        (uType*(*)())&::g::Fuse::SystemFont_typeof,
        (uType*(*)())&::g::Fuse::Time_typeof,
        (uType*(*)())&::g::Fuse::Transform_typeof,
        (uType*(*)())&::g::Fuse::Translation_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::UnhandledExceptionArgs_typeof,
        (uType*(*)())&::g::Fuse::UpdateAction_typeof,
        (uType*(*)())&::g::Fuse::UpdateDispatcher_typeof,
        (uType*(*)())&::g::Fuse::UpdateListener_typeof,
        (uType*(*)())&::g::Fuse::UpdateManager_typeof,
        (uType*(*)())&::g::Fuse::UserEvent_typeof,
        (uType*(*)())&::g::Fuse::UserEventArgs_typeof,
        (uType*(*)())&::g::Fuse::UserEventDispatch_typeof,
        (uType*(*)())&::g::Fuse::ViewportHelpers_typeof,
        (uType*(*)())&::g::Fuse::Visual_typeof,
        (uType*(*)())&::g::Fuse::VisualBounds_typeof,
        (uType*(*)())&::g::Fuse::VisualEvent_typeof,
        (uType*(*)())&::g::Fuse::VisualEventArgs_typeof,
        (uType*(*)())&::g::Fuse::VisualListCache_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__WidthMode_typeof,
        (uType*(*)())&::g::Fuse::WrapException_typeof,
        (uType*(*)())&::g::Fuse::Platform::AppEvents_typeof,
        (uType*(*)())&::g::Fuse::Platform::Display_typeof,
        (uType*(*)())&::g::Fuse::Platform::Lifecycle_typeof,
        (uType*(*)())&::g::Fuse::Internal::AndroidSystemFont__Alias_typeof,
        (uType*(*)())&::g::Fuse::Internal::AndroidSystemFont_typeof,
        (uType*(*)())&::g::Fuse::Internal::Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::BlenderMap_typeof,
        (uType*(*)())&::g::Fuse::Internal::DoubleBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::DrawManager_typeof,
        (uType*(*)())&::g::Fuse::Internal::MiniList__Enumerator_typeof,
        (uType*(*)())&::g::Fuse::Internal::AndroidSystemFont__Family_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float3Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float4Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FloatBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::AndroidSystemFont__FontDescriptor_typeof,
        (uType*(*)())&::g::Fuse::Internal::FontFaceDescriptor_typeof,
        (uType*(*)())&::g::Fuse::Internal::FrustumMatrix_typeof,
        (uType*(*)())&::g::Fuse::Internal::ImageContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::MiniList_typeof,
        (uType*(*)())&::g::Fuse::Internal::RectPacker_typeof,
        (uType*(*)())&::g::Fuse::Internal::ScalarBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Size2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizeBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizingContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::SkylineNode_typeof,
        (uType*(*)())&::g::Fuse::Internal::Statistics_typeof,
        (uType*(*)())&::g::Fuse::Internal::SystemFont_typeof,
        (uType*(*)())&::g::Fuse::Internal::VectorUtil_typeof,
        (uType*(*)())&::g::Fuse::Internal::Drawing::SolidRectangle_typeof,
        (uType*(*)())&::g::Fuse::Animations::Animator_typeof,
        (uType*(*)())&::g::Fuse::Animations::AnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Attractor_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Change_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::ContinuousTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Converter_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterDouble_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat2_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat3_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat4_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize2_typeof,
        (uType*(*)())&::g::Fuse::Animations::CreateStateParams_typeof,
        (uType*(*)())&::g::Fuse::Animations::CubicBezierEasing_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Cycle_typeof,
        (uType*(*)())&::g::Fuse::Animations::CycleState_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteSingleTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::FastMatrixTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase__GFWResult_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__LinearImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Mixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerHandle_typeof,
        (uType*(*)())&::g::Fuse::Animations::Move_typeof,
        (uType*(*)())&::g::Fuse::Animations::Nothing_typeof,
        (uType*(*)())&::g::Fuse::Animations::NothingAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Player_typeof,
        (uType*(*)())&::g::Fuse::Animations::PlayerPart_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::RangeAdapter_typeof,
        (uType*(*)())&::g::Fuse::Animations::RangeAdapterHelpers_typeof,
        (uType*(*)())&::g::Fuse::Animations::Resize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ResizeAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Rotate_typeof,
        (uType*(*)())&::g::Fuse::Animations::Scale_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Skew_typeof,
        (uType*(*)())&::g::Fuse::Animations::Spin_typeof,
        (uType*(*)())&::g::Fuse::Animations::SpinState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimation_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimationState_typeof,
        (uType*(*)())&::g::Fuse::Preview::SelectionManager_typeof,
        (uType*(*)())&::g::Fuse::Input::Capturer_typeof,
        (uType*(*)())&::g::Fuse::Input::CustomPointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__DefaultPointerEventResponder_typeof,
        (uType*(*)())&::g::Fuse::Input::Focus_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGained_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGainedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLost_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLostArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPrediction_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPredictStrategy_typeof,
        (uType*(*)())&::g::Fuse::Input::HitTestHelpers_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedEvent_typeof,
        (uType*(*)())&::g::Fuse::Input::Keyboard_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PELHolder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventData_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeft_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeftArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PointerRecord_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPrediction__PredictFilter_typeof,
        (uType*(*)())&::g::Fuse::Input::SelectionQuery_typeof,
        (uType*(*)())&::g::Fuse::Reactive::AnyChangeObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::BindAttempt_typeof,
        (uType*(*)())&::g::Fuse::Reactive::BindingTypes_typeof,
        (uType*(*)())&::g::Fuse::Reactive::EventBinding__CallClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Console_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ContextBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Instantiator__CountItem_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataToResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DebugLog_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Each_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript__EvaluateDataContext_typeof,
        (uType*(*)())&::g::Fuse::Reactive::EventBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Instantiator_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript_typeof,
        (uType*(*)())&::g::Fuse::Reactive::PathObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::PropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ReadClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ReadDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::RootableScriptModule_typeof,
        (uType*(*)())&::g::Fuse::Reactive::SegmentObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ThreadWorker_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WriteClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WriteDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Builtins_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::HttpHeaders_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager__Timer_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalManager_typeof,
        (uType*(*)())&::g::Fuse::Resources::DoubleResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileResource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FloatResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::GenericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceErrorArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::IntResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::LoadingImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::MemoryPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::MultiDensityImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::NumericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ProxyImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceConverters_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceRegistry_typeof,
        (uType*(*)())&::g::Fuse::Resources::SystemFileSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::TextureImageSource_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure2_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Add_typeof,
        (uType*(*)())&::g::Fuse::Scripting::AppInitialized_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ArrayMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::BoolChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod1__CallClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ClassInstance_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Clear_typeof,
        (uType*(*)())&::g::Fuse::Scripting::AppInitialized__Closure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__ContextClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule__EmitClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Error_typeof,
        (uType*(*)())&::g::Fuse::Scripting::EventEmitterModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::External_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FactoryClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FileModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FileSourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__InsertAll_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__InsertAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSFileSource_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Json_typeof,
        (uType*(*)())&::g::Fuse::Scripting::LazyObservableProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ListMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Marshal_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context__MethodClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Module_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ModuleResult_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEvent_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeMember_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__NewAll_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__NewAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__NumberConverter_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObjectMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObservableProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule__OnClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Operation_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context__PropertyClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObservableProperty__PushCapture_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__RemoveAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__RemoveRange_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule__RequireContext_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptClass_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptException_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMember_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethodInline_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptProperty1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Set_typeof,
        (uType*(*)())&::g::Fuse::Scripting::StringChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Subscription_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Value_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ValueMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::ArrayHandle_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::AutoReleasePool_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Marshaller__CallbackWrapper_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Context__EnterVM_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Error_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Handle_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Marshaller_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::V8SimpleExtensions_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSArray_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSContext_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSExternal_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSFunction_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSObject_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSScriptException_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSString_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::JSValue_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::ScriptException_typeof,
        (uType*(*)())&::g::Fuse::Scripting::V8::Simple::Value_typeof,
        (uType*(*)())&::g::Fuse::Motion::DestinationMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::MotionConfig_typeof,
        (uType*(*)())&::g::Fuse::Motion::NavigationMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::ScrollViewMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::AngularAdapter_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::BasicBoundedRegion2D_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::EasingMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::ElasticForce_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::Friction_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::PointerVelocity_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::SmoothSnap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BlendModeHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brushes_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Colors_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush__Converter_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill__DrawParams_typeof,
        (uType*(*)())&::g::Fuse::Drawing::DynamicBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::GradientStop_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradient_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradientDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RepeatBaker_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticSolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Stroke_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float2Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::FloatBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::TypedBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::UShortBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Circle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Coverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Falloff_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::FillCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::LimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Wedge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Triggers::AddingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTask_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTaskModule_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTaskModule__ConstructorClosure_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__ContentSizeLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Trigger__DeferredItem_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup__GotoImpl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitioned_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitionedArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__PixelsLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__PointsLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__PositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PulseTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible__RelativeToKeyboardMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::RemovingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ScaleChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Scrolled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrolledArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrollRegion_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__ScrollViewSizeLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::State_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Timeline_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Transition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::TransitionGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Trigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileBool_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFailed_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFalse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePaused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePlaying_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValueStatic_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__WorldPositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringIntoView_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringToFront_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Callback_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::CancelInteractions_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Collapse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugProperty_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::EvaluateJS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::GiveFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Hide_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::JSEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadHtml_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadUrl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pause_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlaybackAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlayTo_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pulse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseBackward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseForward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::RaiseUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleaseFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleasePage_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Reload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Resume_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::SendToBack_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Set_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Show_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Stop_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::StopLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Toggle_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionLayout_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionState_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::UserEventArg_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::WebViewNavAction_typeof,
        (uType*(*)())&::g::Fuse::Elements::AlignmentHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__AnchorOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__BoxCenter_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxPlacement_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::Cache_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheHelper_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheTile_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__CenterOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::DisplayHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatch_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatchEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatcher_typeof,
        (uType*(*)())&::g::Fuse::Elements::FillAspectBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element__GMSCacheItem_typeof,
        (uType*(*)())&::g::Fuse::Elements::InteractiveTransform_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData_typeof,
        (uType*(*)())&::g::Fuse::Elements::LimitBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__OffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__PositionOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::PreplacementArgs_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__RelativeResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::SingleVisualDrawable_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__SizeFactorMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::StandardBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__OffsetMode__Subscriptions_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__TopLeftOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__TransformOriginOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Effects::BasicEffect_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow__Blitter_typeof,
        (uType*(*)())&::g::Fuse::Effects::Blur_typeof,
        (uType*(*)())&::g::Fuse::Effects::Desaturate_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow_typeof,
        (uType*(*)())&::g::Fuse::Effects::Effect_typeof,
        (uType*(*)())&::g::Fuse::Effects::EffectHelpers_typeof,
        (uType*(*)())&::g::Fuse::Effects::Halftone_typeof,
        (uType*(*)())&::g::Fuse::Effects::Mask_typeof,
        (uType*(*)())&::g::Fuse::Controls::BottomFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::ButtonBase_typeof,
        (uType*(*)())&::g::Fuse::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ClientPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView__DefaultScroller_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView__DefaultTrigger_typeof,
        (uType*(*)())&::g::Fuse::Controls::Navigator__DeferSwitch_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__Disable_typeof,
        (uType*(*)())&::g::Fuse::Controls::DockPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__DummyRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::EdgeNavigator_typeof,
        (uType*(*)())&::g::Fuse::Controls::Element_Opacity_Property_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__Enable_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackWebViewClient_typeof,
        (uType*(*)())&::g::Fuse::Controls::ForwardProperties_typeof,
        (uType*(*)())&::g::Fuse::Controls::FreezeDrawable_typeof,
        (uType*(*)())&::g::Fuse::Controls::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Grid_typeof,
        (uType*(*)())&::g::Fuse::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Controls::ImageElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Controls::JavaScriptCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::LayoutControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::LoadHtmlCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::MobileTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeTextEditHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Navigator_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigatorSwitchedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::Navigator__NavPage_typeof,
        (uType*(*)())&::g::Fuse::Controls::Page_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::EdgeNavigator__PageData_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControl__PageData_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDot_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDotTemplate_typeof,
        (uType*(*)())&::g::Fuse::Controls::Panel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Router_PrepareProgress_Property_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollPositionChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollViewBase_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::StackPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::StatusBarBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Text_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInput_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputActionArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::ToggleControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TopFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Video_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape__Watcher_typeof,
        (uType*(*)())&::g::Fuse::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageHandle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageLoader__ImageHandlePromise_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageLoader__PendingPromise_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::DrawableViewGroup_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::FocusChangedListener_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::FocusManager_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::ImageView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::InputDispatch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::JavaMap_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::LeafView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::MotionEvent_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::NativeViewRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::SoftKeyboard_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::SurfaceView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TextEditRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TextEditRenderHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TextInput_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TextView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Typeface_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::TypefaceCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::View_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::ViewGroup_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ControlVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::Visual_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::EnterHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::EnterVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::ExitHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::ExitVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::NavEnterHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::NavExitHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::NavRemoveHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationInternal::PageWhileNavigatingFreeze_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::EmptyVideo_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::GraphicsVideoService_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::LoadingClosure_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoDiskCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoDrawElement_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Android::VideoLoader__NoHardwareAcceleration_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Android::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Android::VideoLoader__VideoPromise_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicked_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicker_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepFocusInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInViewCommon_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Scroller_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ScrollTo_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SetSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Swiped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Tapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ToggleSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::EdgeSwiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::Swiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::SwipeRegion_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ActivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DeactivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DirectNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EdgeNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EndSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnterExitAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnteringAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExitingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExplicitNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Router__GetRouteCallback_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::LinearNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigatedArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateTo_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateToggle_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Navigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProperty_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProxy_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::VisualNavigation__PageData_typeof,
        (uType*(*)())&::g::Fuse::Navigation::PageResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Route_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Router_typeof,
        (uType*(*)())&::g::Fuse::Navigation::RouterCancelNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::RouterModify_typeof,
        (uType*(*)())&::g::Fuse::Navigation::StructuredNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SwipeNavigate_typeof,
        (uType*(*)())&::g::Fuse::Navigation::UpdateSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::VisualNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileActive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInactive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInEnterState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInExitState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigating_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigationTrigger_typeof,
        (uType*(*)())&::g::Fuse::Layouts::CircleLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Column_typeof,
        (uType*(*)())&::g::Fuse::Layouts::ColumnLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefaultLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefinitionBase_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DockLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::GridLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layouts_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Row_typeof,
        (uType*(*)())&::g::Fuse::Layouts::StackLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::WrapLayout_typeof,
        (uType*(*)())&::g::Fuse::Android::AppRoot_typeof,
        (uType*(*)())&::g::Fuse::Android::AppRoot__AppRootParent_typeof,
        (uType*(*)())&::g::Fuse::Android::TextRenderer__BackgroundRender_typeof,
        (uType*(*)())&::g::Fuse::Android::Bitmap_typeof,
        (uType*(*)())&::g::Fuse::Android::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Android::Canvas_typeof,
        (uType*(*)())&::g::Fuse::Android::GLUtils_typeof,
        (uType*(*)())&::g::Fuse::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Android::StaticLayout_typeof,
        (uType*(*)())&::g::Fuse::Android::StatusBarConfig_typeof,
        (uType*(*)())&::g::Fuse::Android::StatusBarHelper_typeof,
        (uType*(*)())&::g::Fuse::Android::TextControlLayout_typeof,
        (uType*(*)())&::g::Fuse::Android::TextPaint_typeof,
        (uType*(*)())&::g::Fuse::Android::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Android::TextUtils_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::AndroidPaths_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations__Closure_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations__Closure1_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::DirectoryInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileStatus_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileStatusHelpers_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemModule_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::Nothing_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::PathTools_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::UnifiedPaths_typeof,
        (uType*(*)())&::g::Fuse::Selection::Selectable_typeof,
        (uType*(*)())&::g::Fuse::Selection::Selection_typeof,
        (uType*(*)())&::g::Fuse::Selection::ToggleSelection_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__ReadClosure_typeof,
        (uType*(*)())&::g::Fuse::Storage::StorageModule_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__WriteClosure_typeof,
        (uType*(*)())&::g::Fuse::WebSocket::NativeFunctionModule__FunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::WebSocket::NativeFunctionModule_typeof,
        (uType*(*)())&::g::Fuse::WebSocket::WebSocketClient_typeof,
        (uType*(*)())&::g::Fuse::WebSocket::WebSocketClientModule_typeof,
        (uType*(*)())&::g::Fuse::WebSocket::WebSocketClientWrapper_typeof,
        (uType*(*)())&::g::Experimental::Http::BinaryLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpResponseHeader_typeof,
        (uType*(*)())&::g::Experimental::Http::Loader_typeof,
        (uType*(*)())&::g::Experimental::Http::LoaderConst_typeof,
        (uType*(*)())&::g::Experimental::Http::TextLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::Internal::DateUtil_typeof,
        (uType*(*)())&::g::Experimental::Cache::ProxyStream_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::Callback_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::InvalidContentTypeException_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoader_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoaderImpl_typeof,
        (uType*(*)())&::g::Neovisionaries::WebSocketClient_typeof,
        (uType*(*)())&::g::Polyfills::Window::WindowModule_typeof,
        (uType*(*)())&::g::FuseJS::Base64_typeof,
        (uType*(*)())&::g::FuseJS::Bundle_typeof,
        (uType*(*)())&::g::FuseJS::Environment_typeof,
        (uType*(*)())&::g::FuseJS::FileReaderImpl__FileReadCommand_typeof,
        (uType*(*)())&::g::FuseJS::FileReaderImpl_typeof,
        (uType*(*)())&::g::FuseJS::Globals_typeof,
        (uType*(*)())&::g::FuseJS::Latin1Helpers_typeof,
        (uType*(*)())&::g::FuseJS::Lifecycle_typeof,
        (uType*(*)())&::g::FuseJS::RaiseEvent_typeof,
        (uType*(*)())&::g::FuseJS::Bundle__ReadClosure_typeof,
        (uType*(*)())&::g::FuseJS::UserEvents_typeof,
        NULL
    };

    uInitRtti(factories);
}

#include <_root.MainView.h>

void uStartApp()
{
    if (_BaseArgs)
    {
        _CommandLineArgs = uArray::New(::g::Uno::String_typeof()->Array(), _BaseArgs->Length());

        for (int i = 0; i < _BaseArgs->Length(); i++)
            _CommandLineArgs->Strong<uString*>(i) = uStringFromXliString((*_BaseArgs)[i]);
    }

    ::g::MainView::New1();
}

/** @} */
