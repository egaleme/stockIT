package com.apps.stockit;

import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.app.ActionBar;
import android.app.Activity;
import android.os.Build;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;

public class SystemUI {
    public class UIState
    {
        public static final int Normal = 0;
        public static final int StatusBarHidden = 1;
        public static final int Fullscreen = 2;
    }

	private SystemUIChangeRecipient _layout;
	private AppState _appState;
    private int _systemUIState;

	public SystemUI(AppState appState, SystemUIChangeRecipient layout)
	{
		_appState = appState;
        _systemUIState = UIState.Normal;
		_layout = layout;
	}

	@TargetApi(Build.VERSION_CODES.HONEYCOMB)
	public void StatusBarOnCreate(Activity activity)
	{
        if (Build.VERSION.SDK_INT >= 11) {
            activity.getWindow().requestFeature(Window.FEATURE_ACTION_BAR);
//            #if #(Project.Mobile.ShowStatusbar)
                HideActionBar();
//            #endif
        }
	}

	public void UpdateStatusBar()
	{
		// this method reapplies the current status bar settings.
		// It does not change whether it is show or hiding.
        switch(_systemUIState)
        {
        case UIState.Normal:
            ShowStatusBar();
            break;
        case UIState.StatusBarHidden:
            HideStatusBar();
            break;
        case UIState.Fullscreen:
            EnterFullscreen();
            break;
        }
	}

	@SuppressLint("NewApi")
	public void HideStatusBar()
	{
	    com.apps.stockit.stockIT.RunOnUIThread(new Runnable() { public void run() {
            _systemUIState = UIState.StatusBarHidden;
	        // If the Android version is lower than Jellybean, use this call to hide
	        // the status bar.
	        if (Build.VERSION.SDK_INT < 16) {
	            _appState.CurrentActivity.getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN, WindowManager.LayoutParams.FLAG_FULLSCREEN);
	        } else {
	            View decorView = _appState.CurrentActivity.getWindow().getDecorView();
	            // Hide the status bar.
	            decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
                HideActionBar();
	        }
	        _layout.SystemUIChangeOccured();
            ActivityNativeEntryPoints.cppOnTopFrameChanged(0);
	    }});
	}

	@SuppressLint("NewApi")
	public void ShowStatusBar()
	{
	    com.apps.stockit.stockIT.RunOnUIThread(new Runnable() { public void run() {
            _systemUIState = UIState.Normal;
	        // If the Android version is lower than Jellybean, use this call to hide
	        // the status bar.
	        if (Build.VERSION.SDK_INT < 16) {
	            _appState.CurrentActivity.getWindow().clearFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN);
	        } else {
	            View decorView = _appState.CurrentActivity.getWindow().getDecorView();
	            // Hide the status bar.
	            decorView.setSystemUiVisibility(View.SYSTEM_UI_FLAG_VISIBLE);
                HideActionBar();
	        }
	        _layout.SystemUIChangeOccured();
            ActivityNativeEntryPoints.cppOnTopFrameChanged((int)GetStatusBarHeight());
	    }});
	}

    public void EnterFullscreen()
    {
        com.apps.stockit.stockIT.RunOnUIThread(new Runnable() { public void run() {
            _systemUIState = UIState.Fullscreen;
            // If the Android version is lower than Jellybean, use this call to hide
            // the status bar.
            if (Build.VERSION.SDK_INT < 19) {
                HideStatusBar();
            } else {
                View decorView = _appState.CurrentActivity.getWindow().getDecorView();
                // Hide the status bar.
                decorView.setSystemUiVisibility(
                        View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                        | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION // hide nav bar
                        | View.SYSTEM_UI_FLAG_FULLSCREEN // hide status bar
                        | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
                HideActionBar();
            }
            _layout.SystemUIChangeOccured();
            ActivityNativeEntryPoints.cppOnTopFrameChanged(0);
        }});
    }

    private void HideActionBar()
    {
        // ActionBar is ugly, hide it
        // {TODO} read all of http://stackoverflow.com/a/14167949/574033
        ActionBar actionBar = _appState.CurrentActivity.getActionBar();
//        #if #(Project.Mobile.ShowStatusbar)
            if (actionBar!=null)
                actionBar.hide();
//        #endif
    }

    boolean hasCachedStatusBarSize = false;
    int cachedOpenSize = 0;
	public float GetStatusBarHeight()
	{
	    int result = 0;
	    if (_systemUIState==UIState.Normal) {
	    	int resourceId = _appState.CurrentActivity.getResources().getIdentifier("status_bar_height", "dimen", "android");
	    	if (resourceId > 0) {
	    		result = _appState.CurrentActivity.getResources().getDimensionPixelSize(resourceId);
	    	}
            if (result == 0)
            {
                if (hasCachedStatusBarSize)
                {
                    result = cachedOpenSize;
                }
            } else {
                hasCachedStatusBarSize = true;
                cachedOpenSize = result;
            }

	    }
	    return (float)result;
	}

    public void ActivityConfigurationChanged()
    {
        _layout.SystemUIChangeOccured();
    }
}
