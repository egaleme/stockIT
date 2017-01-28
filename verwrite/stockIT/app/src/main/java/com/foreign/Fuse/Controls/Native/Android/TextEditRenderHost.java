package com.foreign.Fuse.Controls.Native.Android;

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

public class TextEditRenderHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void AddView150(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.addView(childView);
    }
    
    public static Object Create151()
    {
        android.widget.RelativeLayout relativeLayout = new android.widget.RelativeLayout(com.apps.stockit.stockIT.GetRootActivity());
        			relativeLayout.setFocusable(true);
        			relativeLayout.setFocusableInTouchMode(true);
        			relativeLayout.setClipToPadding(false);
        			relativeLayout.setClipChildren(false);
        			relativeLayout.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return relativeLayout;
    }
    
    public static void RemoveView152(final Object parentHandle,final Object childHandle)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)parentHandle;
        			android.view.View childView = (android.view.View)childHandle;
        			viewGroup.removeView(childView);
    }
    
    public static void SetChildSize153(final Object handle,final int w,final int h)
    {
        ((android.view.View)handle).setLayoutParams(new android.widget.RelativeLayout.LayoutParams(w, h));
        			((android.view.View)handle).invalidate();
    }
    
}
