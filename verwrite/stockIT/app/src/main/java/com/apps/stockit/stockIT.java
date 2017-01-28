package com.apps.stockit;

import android.os.Build;
import android.util.Log;
import android.os.Bundle;
import android.os.Looper;
import android.view.View;
import android.view.Window;
import android.app.Activity;
import android.view.Display;
import android.view.Surface;
import android.view.KeyEvent;
import android.content.Intent;
import android.app.AlertDialog;
import java.lang.reflect.Field;
import android.widget.TextView;
import android.widget.ScrollView;
import android.widget.FrameLayout;
import android.view.Choreographer;
import android.app.NativeActivity;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.annotation.TargetApi;
import android.view.ViewTreeObserver;
import android.content.DialogInterface;
import android.graphics.SurfaceTexture;
import android.annotation.SuppressLint;
import android.content.res.AssetManager;
import android.content.res.Configuration;
import android.support.v4.app.ActivityCompat;
import android.view.View.OnLayoutChangeListener;



//#if #(GRADLE:Defined)
//public class #(Activity.Name) extends android.support.v7.app.AppCompatActivity implements ActivityCompat.OnRequestPermissionsResultCallback
//#else
public class stockIT extends android.app.Activity implements ActivityCompat.OnRequestPermissionsResultCallback
//#endif
{

    static
    {
        // load c++ libs needed by uno
        CppManager.LoadLibraries();
        // http://stackoverflow.com/a/37239813/574033  we use wildcard for `appcompat` so do same for `design`
//#if #(GRADLE:Defined)
//        android.support.v7.app.AppCompatDelegate.setCompatVectorFromResourcesEnabled(true);
//#endif
    }

    // state
    private static AppState _appState;  // lasts through all resurrections
    private static ActivityState.AndroidLifecycleListener _lifecycleListener; // gives lifecycle info the AppState
    public final ActivityState activityState; // one per activity

    //
    public stockIT()
    {
    	super();
    	_appState = AppState.Create(this);
    	activityState = new ActivityState(_appState);
        _lifecycleListener = activityState.GetLifecycleProxy();
    }

    public static void TerminateNow()
    {
        _appState.CurrentActivity.activityState.Destroyed = true;
        android.os.Process.killProcess(android.os.Process.myPid());
    }

    public static void TerminateOnException(final Exception e)
    {
    	stockIT activity = _appState.CurrentActivity;
        ActivityState activityState = activity.activityState;
        activityState.Destroyed = true;

        activity.runOnUiThread(new Runnable() {
        	public void run() {
        		AlertDialog d = MakeUnoExceptionAlertDialog(e);
        		d.setCanceledOnTouchOutside(false); d.show();
        	}});
    }

    private static AlertDialog MakeUnoExceptionAlertDialog(final Exception e)
    {
    	stockIT activity = _appState.CurrentActivity;
    	final TextView textView = new TextView(activity);
    	textView.setText(makeExceptionString(e));
    	final ScrollView scrollView = new ScrollView(activity);
    	scrollView.addView(textView);
    	final AlertDialog.Builder b = new AlertDialog.Builder(activity);

        b.setTitle("Unhandled Exception");
        b.setView(scrollView);
        b.setCancelable(false);
        b.setPositiveButton("OK", new DialogInterface.OnClickListener() {
                public void onClick(DialogInterface dialog, int which) { AnyThrow.throwUncheked(e); }
            });
    	 return b.create();
    }

    private static class AnyThrow {
    	//Throws unchecked exception. We need this so we can rethrow the uno exception as a
    	// java exception from inside an interface method that doesnt allow exceptions.
        public static void throwUncheked(Throwable e) {
            AnyThrow.<RuntimeException>throwAny(e);
        }
        @SuppressWarnings("unchecked")
        private static <E extends Throwable> void throwAny(Throwable e) throws E {
            throw (E)e;
        }
    }

    private static String makeExceptionString(Exception e)
    {
    	return "-Uno Trace-\n\n" + e.getMessage() + "\n" + getJavaStackTrace(e);
    }

    private static String getJavaStackTrace(Exception e)
    {
    	String trace = "\n-Java Trace-\n";
    	for (StackTraceElement i : e.getStackTrace()) {
    		trace+="\n"+i.toString();
		}
    	return trace;
    }


	@Override
    protected void onCreate(Bundle savedInstanceState)
    {
        // Set action bar default state
    	_appState.SystemUI.StatusBarOnCreate(this);

    	// Set current view
    	_appState.Layout.AttachToActivity(this);

        // mandatory call to super
        super.onCreate(savedInstanceState);

        // start main loop
        activityState.MainLoop.Start();

        // ensure arrival of any intent
        onNewIntent(getIntent());

        // call c++ for setup
    	LOG.D( "Call OnCreate");
        ActivityNativeEntryPoints.cppOnCreate(AppRuntimeSettings.SeperateUnoThread);
        LOG.D( "Called OnCreate");

        //
        FinishOnCreate();
    }

    private String pendingURI = "";
    @Override
    protected void onNewIntent (Intent intent)
    {
//#if #(Project.Mobile.UriScheme:IsSet)
//        if (intent!=null && intent.getScheme()!=null && intent.getScheme().equals("#(Project.Mobile.UriScheme)"))
//        {
//            pendingURI = intent.getDataString();
//        }
//#endif
        com.fuse.Activity._onActivityIntent(intent);
        
    }

    private void FinishOnCreate()
    {
    	_appState.HasCreated = true;
        ActivityNativeEntryPoints.cppOnConfigChanged();
    }

    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            ActivityNativeEntryPoints.cppOnKeyUp(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            ActivityNativeEntryPoints.cppOnKeyUp(201);
            if (AppRuntimeSettings.KillOnBackButton) finish();
            return true;
        }
        
        {
            return false;
        }
    }
    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event)
    {
    	if (keyCode == KeyEvent.KEYCODE_MENU) {
            ActivityNativeEntryPoints.cppOnKeyDown(200);
    		return true;
    	}
        if (keyCode == KeyEvent.KEYCODE_BACK) {
            ActivityNativeEntryPoints.cppOnKeyDown(201);
            if (AppRuntimeSettings.KillOnBackButton) finish();
            return true;
        }
        
        {
            return false;
        }
    }
    @Override
    public void onActivityResult (int arg0, int arg1, android.content.Intent arg2)
    {
        if (!_appState.HasCreated) return;
        com.fuse.Activity._onActivityResult(arg0, arg1, arg2);
        
    }

    @SuppressLint("NewApi")
	@SuppressWarnings("deprecation")
	@Override
    protected void onDestroy() {
    	activityState.Destroyed = true;
    	LOG.D( "Call OnDestroy");
    	_appState.Layout.DetachFromActivity();
    	super.onDestroy();
    	LOG.D( "Called OnDestroy");
        if (AppRuntimeSettings.KillActivityOnDestroy) android.os.Process.killProcess(android.os.Process.myPid());
    }

    @Override
    protected void onPause() {
        focusOnPause();
    	LOG.D( "Call OnPause");
        super.onPause();
        ActivityNativeEntryPoints.cppOnPause();
        _appState.Layout.RootLayout.setVisibility(View.GONE);
        _lifecycleListener.onPause();
        LOG.D( "Called OnPause");
    }

    @Override
    protected void onResume() {
    	LOG.D( "Call OnResume");
        super.onResume();
        _appState.SystemUI.UpdateStatusBar();
        _appState.Layout.RootLayout.setVisibility(View.VISIBLE);
        ActivityNativeEntryPoints.cppOnResume();
        _lifecycleListener.onResume();
        LOG.D( "Called OnResume");
        focusOnResume();

        if (pendingURI!="")
        {
            ActivityNativeEntryPoints.cppOnReceiveURI(pendingURI);
            pendingURI = "";
        }
    }

    @Override
    protected void onRestart() {
    	LOG.D( "Call OnRestart");
        super.onRestart();
        ActivityNativeEntryPoints.cppOnRestart();
        LOG.D( "Called OnRestart");
    }

    @Override
    protected void onSaveInstanceState(Bundle outState) {
    	LOG.D( "Call OnSave");
        ActivityNativeEntryPoints.cppOnSaveInstanceState(null); // {TODO} direct byte buffer?
        LOG.D( "Called OnSave");
    }

    @Override
    protected void onStart() {
    	LOG.D( "Call OnStart");
        super.onStart();
        ActivityNativeEntryPoints.cppOnStart();
        _lifecycleListener.onStart();
        LOG.D( "Called OnStart");
    }

    @Override
    protected void onStop() {
    	LOG.D( "Call OnStop");
        super.onStop();
        ActivityNativeEntryPoints.cppOnStop();
        _lifecycleListener.onStop();
        LOG.D( "Called OnStop");
        if (Build.VERSION.SDK_INT < 11 && AppRuntimeSettings.KillActivityOnDestroy) {
            android.os.Process.killProcess(android.os.Process.myPid());
        }
    }

    @Override
    public void onConfigurationChanged(Configuration arg0) {
    	LOG.D( "Call OnConfigChanged");
        super.onConfigurationChanged(arg0);
        if (!activityState.Destroyed) {
            ActivityNativeEntryPoints.cppOnConfigChanged();
            _appState.SystemUI.ActivityConfigurationChanged();
            
        }
        LOG.D( "Called OnConfigChanged");
    }

    @Override
    public void onLowMemory() {
    	LOG.D( "Call OnLowMem");
        super.onLowMemory();
        if (!activityState.Destroyed) {
            ActivityNativeEntryPoints.cppOnLowMemory();
            
        }
        LOG.D( "Called OnLowMem");
    }

    @Override
    public void onRequestPermissionsResult(int requestCode, String[] permissions, int[] grantResults)
    {
        
    }

    //------------------------------------------------
    // Normalize Focus Changed Events.
    // Force the focus changed events to be have as a part of the regular
    // lifecycle model, only firing between resume & pause.

    private boolean cachedForResume = false;
    private boolean currentlyInteractive = false;
    private boolean allowedToChangeFocus = false;

    @Override
    public void onWindowFocusChanged(boolean arg0) {
        super.onWindowFocusChanged(arg0);
        if (!activityState.Destroyed) {
        	if (arg0!=currentlyInteractive) {
        		if (allowedToChangeFocus) {
        			currentlyInteractive = arg0;
                    LOG.D( "Call OnFocusChanged:"+arg0);
        			ActivityNativeEntryPoints.cppOnWindowFocusChanged(arg0);
                    LOG.D( "Called OnFocusChanged:"+arg0);
        		} else if (arg0=true) {
        			cachedForResume = true;
        		}
        	}
            _lifecycleListener.onWindowFocusChanged(arg0);
        }
    }
    private void focusOnResume()
    {
    	if (!activityState.Destroyed) {
    		if (currentlyInteractive) {
    			Log.e(AppRuntimeSettings.AppName, "State Error: Java backend asserts interactive pre-resume.");
    		}
    		if (currentlyInteractive) {
    			Log.e(AppRuntimeSettings.AppName, "State Error: Java backend asserts allow interact state change pre-resume.");
    		}
    		if (cachedForResume) {
        		currentlyInteractive = true;
                LOG.D( "Call OnFocusChanged:true (for onResume)");
        		ActivityNativeEntryPoints.cppOnWindowFocusChanged(true);
                LOG.D( "Called OnFocusChanged:true  (for onResume)");
        	}
        	cachedForResume = false;
        	allowedToChangeFocus = true;
        }
    }
    private void focusOnPause()
    {
    	if (!activityState.Destroyed) {
        	if (currentlyInteractive) {
        		currentlyInteractive = false;
        		cachedForResume = false;
                LOG.D( "Call OnFocusChanged:false (for onPause)");
        		ActivityNativeEntryPoints.cppOnWindowFocusChanged(false);
                LOG.D( "Called OnFocusChanged:false (for onPause)");
        	}
        }
    	allowedToChangeFocus = false;
    }

    //-----------------------------------------------------------

    

    //-----------------------------------------------------------

    public static int ReflectR(String path)
    {
    	try {
    		int lastDot = path.lastIndexOf(".", path.length()-1);
    		Class<?> cls = Class.forName(R.class.getName()+"$"+(((String)path.subSequence(0, lastDot)).replace('.','$')));
			Field f = cls.getField((String)path.subSequence(lastDot+1, path.length()));
			return f.getInt(null);
		} catch (Exception e) {
			return -1;
		}
    }

    //-----------------------------------------------------------
    // Here be less favorable stuff that has tickets for cleanup

    // these two are cludges until we clean up UIEntryPoints & the custom views
    public static void RunOnUIThread(Runnable action)
    {
    	_appState.CurrentActivity.runOnUiThread(action);
    }
    public static Object GetSystemService(String name)
    {
    	return _appState.CurrentActivity.getSystemService(name);
    }
    public static boolean GetIsDestroyed()
    {
    	return _appState.CurrentActivity.activityState.Destroyed;
    }

    // used by c++ and annoyingly the custom view, fix this
    public static Activity GetRootActivity()
    {
        return _appState.CurrentActivity;
    }
    public static stockIT RootActivity()
    {
        return _appState.CurrentActivity;
    }
    public static FrameLayout GetRootView()
    {
        return _appState.Layout.RootLayout;
    }
    public static AssetManager GetAssetManager()
    {
        return _appState.CurrentActivity.getAssets();
    }
    public static float GetStatusBarHeight()
    {
        return _appState.SystemUI.GetStatusBarHeight();
    }
    public static void HideStatusBar()
    {
        _appState.SystemUI.HideStatusBar();
    }
    public static void ShowStatusBar()
    {
        _appState.SystemUI.ShowStatusBar();
    }
    public static void EnterFullscreen()
    {
        _appState.SystemUI.EnterFullscreen();
    }

    public static void SetAsRootView(Object view)
    {
        final View uview = (View)view;
        _appState.CurrentActivity.runOnUiThread(new Runnable() { public void run() {
            if (uview==null)
            {
                _appState.Layout.RootLayout.removeAllViews();
            }
            else
            {
                if (_appState.Layout.RootLayout.getChildCount()>0)
                {
                    _appState.Layout.RootLayout.removeAllViews();
                }
                _appState.Layout.RootLayout.addView(uview, 0);
            }
        }});
    }

    private static SurfaceTexture _keepDummySurfaceTexture;
    public static Object CreateDummySurface(int texName)
    {
        // this is a temp hack. Moments like this make me want to make attribute
        // that gives bad code a halflife, after 2 months it deletes itself.
        _keepDummySurfaceTexture = new SurfaceTexture(texName);
        return new Surface(_keepDummySurfaceTexture);
    }

    // Used by xli
    public static int ShowMessageBox(CharSequence caption, CharSequence message, int buttons, int hints)
    {
        return MessageBoxHelper.ShowMessageBox(_appState.CurrentActivity, caption, message, buttons, hints);
    }
}
