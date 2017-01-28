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

public class StatusBarHelper
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static int GetStatusBarColor269()
    {
        android.view.Window window = com.apps.stockit.stockIT.GetRootActivity().getWindow();
        			if (Integer.valueOf(android.os.Build.VERSION.SDK) >= 21)
        				return window.getStatusBarColor();
        			else
        				return android.graphics.Color.BLACK;
    }
    
    public static void InstallGlobalListener270()
    {
        android.view.Window window = com.apps.stockit.stockIT.GetRootActivity().getWindow();
        			window.getDecorView().getViewTreeObserver().addOnGlobalFocusChangeListener(
        				new android.view.ViewTreeObserver.OnGlobalFocusChangeListener() {
        					boolean _focusWasEditText;
        					public void onGlobalFocusChanged(android.view.View oldFocus, android.view.View newFocus) {
        						if (_focusWasEditText)
        							ExternedBlockHost.callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar271();
        
        						_focusWasEditText = newFocus instanceof android.widget.EditText;
        					}
        				}
        			);
    }
    
    public static void SetStatusBarColor272(final int color)
    {
        android.view.Window window = com.apps.stockit.stockIT.GetRootActivity().getWindow();
        			if (Integer.valueOf(android.os.Build.VERSION.SDK) >= 21)
        			{
        				window.setFlags(
        					android.view.WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS,
        					android.view.WindowManager.LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
        				window.setStatusBarColor(color);
        			}
    }
    
}
