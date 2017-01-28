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

public class Ellipse
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void UpdateShapeDrawable167(final UnoObject _this, final Object handle)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)handle;
        			android.graphics.drawable.shapes.OvalShape oval = new android.graphics.drawable.shapes.OvalShape();
        			sd.setShape(oval);
    }
    
}
