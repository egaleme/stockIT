package com.apps.stockit;

import android.app.Activity;
import android.os.Build;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.View.OnLayoutChangeListener;
import android.widget.FrameLayout;
import android.view.Gravity;

public class AppLayout implements SystemUIChangeRecipient {
	// private state
	private AppState _appState;
	private KeyboardListener _keyboardListener;

	// public state
	public FrameLayout SuperLayout;
	public FrameLayout RootLayout;


	// This takes care of the differences between version and also provides
	// things that android opts not to give us e.g. keyboard size
	public AppLayout(AppState appState)
	{
		_appState = appState;
	}

	public void AttachToActivity(Activity activity)
	{
		if (SuperLayout==null) CreateLayouts(activity);
		activity.getWindow().setContentView(SuperLayout);
		_keyboardListener = new KeyboardListener();
		_keyboardListener.Attach(RootLayout);
	}

	public void CreateLayouts(Activity activity)
	{
		if (AppRuntimeSettings.SDKVersion >= 11) {
    		SuperLayout = new FrameLayout(activity);
            RootLayout = new FrameLayout(activity);
            SuperLayout.addOnLayoutChangeListener(new PostV11LayoutChangeListener());
    	} else {
            SuperLayout = new FallbackFrameLayout(activity);
            RootLayout = new FrameLayout(activity);
    	}
		SuperLayout.addView(RootLayout);
        SetFrame(RootLayout, 0, 0, FrameLayout.LayoutParams.MATCH_PARENT, Display.GetRealDisplayHeight());
        CompensateRootLayoutForSystemUI();
	}

    private void SetFrame(View uview, final int originX, final int originY, final int width, final int height)
    {
        FrameLayout.LayoutParams lp = new FrameLayout.LayoutParams(width,height);
        if (Build.VERSION.SDK_INT < 14) {
            lp.gravity = Gravity.TOP;
        }
        lp.leftMargin = originX;
        lp.topMargin = originY;
        uview.setLayoutParams(lp);
    }

	public void DetachFromActivity()
	{
		_keyboardListener.Detach();
	}

    private class PostV11LayoutChangeListener implements OnLayoutChangeListener
    {
    	int lastWidth = Display.GetRealDisplayWidth();
    	int lastHeight = Display.GetRealDisplayHeight();

		@Override
		public void onLayoutChange(View v, int left, int top, int right, int bottom, int oldLeft, int oldTop, int oldRight, int oldBottom) {
            int newWidth = right - left;
            int newHeight = bottom - top;
            if (newWidth!=lastWidth || newHeight!=lastHeight) {
                lastHeight = newHeight;
                lastWidth = newWidth;
                ActivityNativeEntryPoints.cppOnConfigChanged();
                if (_keyboardListener!=null) _keyboardListener.ResendFrameSizes();
            }
		}
    }

	public void CompensateRootLayoutForSystemUI()
    {
		Display.CalcRealSizes();
        if (RootLayout != null) {
            int compensation = -(int)_appState.SystemUI.GetStatusBarHeight();
            SetFrame(RootLayout, 0, compensation, FrameLayout.LayoutParams.MATCH_PARENT, Display.GetRealDisplayHeight());
        }
    }

    //Keyboard
    class KeyboardListener implements ViewTreeObserver.OnGlobalLayoutListener
    {
    	private FrameLayout layoutAttachedTo;
    	private boolean firstSizing = true;
    	boolean keyboardVisible;
        int lastKeyboardHeight = 0;

        public int getKeyboardSize() {  return lastKeyboardHeight; }

        @Override
        public void onGlobalLayout() {
            int heightDiff = Display.GetRealDisplayHeight()-SuperLayout.getHeight();
            heightDiff -= _appState.SystemUI.GetStatusBarHeight();
            int contentViewTop = _appState.CurrentActivity.getWindow().findViewById(Window.ID_ANDROID_CONTENT).getTop();
            boolean keyboardClosed = (heightDiff-contentViewTop)<(Display.GetRealDisplayHeight()/4);
            if (heightDiff!=lastKeyboardHeight || firstSizing) {
                if (keyboardClosed) {
                    onHideKeyboard(heightDiff, firstSizing);
                } else {
                    onShowKeyboard(heightDiff, firstSizing);
                }
            }
            firstSizing = false;
            // {TODO} Clearly this forcing for multiple frames sucks, change it
            _appState.CurrentActivity.activityState.MainLoop.ForceForNFrames(5);
        }

        public void Attach(FrameLayout layout) {
            if (layoutAttachedTo!=null) { return; }
            layoutAttachedTo = layout;
            layout.getViewTreeObserver().addOnGlobalLayoutListener(_keyboardListener);
        }
        public void Detach() {
        	if (layoutAttachedTo!=null) {
            	if (AppRuntimeSettings.SDKVersion >= Build.VERSION_CODES.JELLY_BEAN) {
            		RootLayout.getViewTreeObserver().removeOnGlobalLayoutListener(_keyboardListener);
            	} else {
            		RootLayout.getViewTreeObserver().removeGlobalOnLayoutListener(_keyboardListener);
            	}
            }
        	layoutAttachedTo = null;
        }

        protected void onShowKeyboard(int keyboardHeight, boolean force)
        {
        	keyboardVisible=true;
        	if (lastKeyboardHeight!=keyboardHeight || force)
        	{
        		lastKeyboardHeight = keyboardHeight;
        		ActivityNativeEntryPoints.cppOnKeyboardResized(keyboardHeight);
        	}
        }

        protected void onHideKeyboard(int keyboardHeight, boolean force)
        {
        	if (keyboardVisible || force)
        	{
        		keyboardVisible=false;
        		lastKeyboardHeight = keyboardHeight;
        		ActivityNativeEntryPoints.cppOnKeyboardResized(keyboardHeight);
        	}
        }

		public void ResendFrameSizes()
		{
            int statusBarHeight = (int)_appState.SystemUI.GetStatusBarHeight();
		    int heightDiff = com.apps.stockit.Display.GetRealDisplayHeight()-_appState.Layout.SuperLayout.getHeight();
		    heightDiff -= statusBarHeight;
		    lastKeyboardHeight = heightDiff;
		    ActivityNativeEntryPoints.cppOnKeyboardResized(heightDiff);
		}
    }

    public SystemUIChangeRecipient GetSystemUIChangeCallback()
    {
    	return this;
    }

    public void SystemUIChangeOccured()
    {
    	CompensateRootLayoutForSystemUI();
    }
}
