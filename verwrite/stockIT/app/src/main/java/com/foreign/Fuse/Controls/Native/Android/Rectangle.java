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

public class Rectangle
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void UpdateShapeDrawable1114(final UnoObject _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)handle;
        			float[] cornerRadius = { x, x, y, y, z, z, w, w };
        			android.graphics.drawable.shapes.RoundRectShape rrs = new android.graphics.drawable.shapes.RoundRectShape(cornerRadius, null, null);
        			sd.setShape(rrs);
    }
    
}
