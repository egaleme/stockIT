package com.foreign.Fuse;

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

public class App
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void StartFrameCallback287(final UnoObject _this)
    {
        if (android.os.Build.VERSION.SDK_INT >= 16)
        			{
        				android.view.Choreographer.getInstance().postFrameCallback(new android.view.Choreographer.FrameCallback()
        				{
        					android.view.Choreographer _choreographer = android.view.Choreographer.getInstance();
        					long _previousTimeNanos = 0;
        					public void doFrame(long frameTimeNanos)
        					{
        						_choreographer.postFrameCallback(this);
        						double currentTime = frameTimeNanos * 1e-9;
        						double deltaTime = (frameTimeNanos - _previousTimeNanos) * 1e-9;
        						ExternedBlockHost.callUno_Fuse_App_OnFrameCallback288((UnoObject)_this,(double)currentTime,(double)deltaTime);
        						_previousTimeNanos = frameTimeNanos;
        					}
        				});
        			}
        			else
        			{
        				android.animation.TimeAnimator timeAnimator = new android.animation.TimeAnimator();
        				timeAnimator.setDuration(Long.MAX_VALUE);
        				timeAnimator.setTimeListener(new android.animation.TimeAnimator.TimeListener()
        				{
        					public void onTimeUpdate(android.animation.TimeAnimator animation, long totalTime, long deltaTime)
        					{
        						ExternedBlockHost.callUno_Fuse_App_OnFrameCallback288((UnoObject)_this,(double)totalTime / 1000.0,(double)deltaTime / 1000.0);
        					}
        				});
        				timeAnimator.start();
        			}
    }
    
}
