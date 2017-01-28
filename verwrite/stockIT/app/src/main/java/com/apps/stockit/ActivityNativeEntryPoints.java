package com.apps.stockit;

import android.os.Bundle;

public class ActivityNativeEntryPoints {

	//------------------------------------------------
	// Callbacks to C++ code
	public static native void cppOnCreate(boolean _seperateUnoThread);

	public static native void cppOnDestroy();

	public static native void cppOnPause();

	public static native void cppOnResume();

	public static native void cppOnRestart();

	public static native void cppOnStart();

	public static native void cppOnStop();

	public static native void cppForceRedraw(int forFrames);

	public static native void cppForceRedrawUnsafe();

	public static native void cppOnSaveInstanceState(Bundle state);

	public static native void cppOnConfigChanged();

	public static native void cppOnLowMemory();

	public static native void cppOnWindowFocusChanged(boolean hasFocus);

	public static native void cppOnStartMainLoop(boolean seperateCoreThread, boolean _cppMainLoop, boolean _resurrected);

	public static native void cppOnKeyUp(int keyCode);

	public static native void cppOnKeyDown(int keyCode);

	public static native void cppOnKeyboardResized(int height);

	public static native void cppOnTopFrameChanged(int height);

	public static native void cppTimerCallback(int id);

	public static native void cppJavaThrowError(int code, String throwMessage);

    public static native void cppOnReceiveURI(String data);

}
