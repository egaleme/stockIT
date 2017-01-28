package com.foreign.Fuse.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class AppRoot
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void ClearRootView246(final Object handle)
    {
        ((android.widget.RelativeLayout)handle).removeAllViews();
    }
    
    public static Object CreateRootView247()
    {
        android.widget.RelativeLayout relativeLayout = new android.widget.RelativeLayout(com.apps.stockit.stockIT.GetRootActivity()) {
        
        					android.view.MotionEvent _currentEvent;
        
        					public boolean onInterceptTouchEvent(android.view.MotionEvent motionEvent) {
        						_currentEvent = motionEvent;
        						return super.onInterceptTouchEvent(motionEvent);
        					}
        
        					public boolean onTouchEvent(android.view.MotionEvent motionEvent) {
        						if (_currentEvent != motionEvent)
        							return false;
        						boolean result = super.onTouchEvent(motionEvent);
        						ExternedBlockHost.callUno_Fuse_Android_AppRoot_OnTouchEvent__248((Object)motionEvent,UnoHelper.GetUnoObjectRef((Object)motionEvent));
        						return _currentEvent == motionEvent;
        					}
        
        				};
        			relativeLayout.setFocusable(true);
        			relativeLayout.setFocusableInTouchMode(true);
        			relativeLayout.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return relativeLayout;
    }
    
    public static void SetChildSize1249(final Object handle,final int w,final int h)
    {
        ((android.view.View)handle).setLayoutParams(new android.widget.RelativeLayout.LayoutParams(w, h));
        			((android.view.View)handle).invalidate();
    }
    
    public static void SetRootView250(final Object handle,final Object rootHandle)
    {
        ((android.widget.RelativeLayout)handle).addView(((android.view.View)rootHandle));
    }
    
}
