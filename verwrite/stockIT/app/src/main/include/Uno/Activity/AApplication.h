#include <Uno/Common/AndroidCommon.h>
#include <uBase/Thread.h>
#include <Uno.Platform2.Display.h>

class CTAction
{
public:
    virtual void Execute() = 0;
};

class AApplication
{
private:

public:
    static int _bottomFrameSize;
    static int _topFrameSize;
    static int _forceDrawForNext;
    static ::g::Uno::Platform2::Display* _rootDisplay;

    static ::g::Uno::Float2 _GetRootDisplaySize();
    static int GetBottomFrameHeight();

    static void cppOnCreate();
    static void cppOnDestroy();
    static void cppOnPause();
    static void cppOnResume();
    static void cppOnRestart();
    static void cppOnStart();
    static void cppOnStop();
    static void cppOnSaveInstanceState();
    static void cppOnConfigChanged();
    static void cppOnLowMemory();
    static void cppOnWindowFocusChanged(bool hasFocus);
    static void cppForceRedraw(int forFrames);

    static void cppJavaThrowError (uBase::String errorMessage);
    static void cppOnReceiveURI (jstring data);
    static void cppUnoViewReady (void* unoView, jobject view);
    static void cppViewVisibilityChanged(void* unoView, bool visibility);
    static void cppOnSurfaceTouch(void* unoView, int pointerID, int x, int y, int type);
    static void cppTimerCallback (int timerID);
    static void cppOnKeyboardResized (int height);
    static void cppOnTopFrameChanged (int height);
    static void cppOnTextViewTextChanged (void* unoViewPtr, jstring text);
    static void cppOnTextViewInputFinished (void* unoViewPtr);
    static void cppOnKeyUp (int key);
    static void cppOnKeyDown (int key);
    static void cppUnoSurfaceCreated (void* unoView, jobject surface);
    static void cppUnoSurfaceDestroyed(void* unoView);

    static void Init();
    static void mainLoop(bool _resurrected);

};
