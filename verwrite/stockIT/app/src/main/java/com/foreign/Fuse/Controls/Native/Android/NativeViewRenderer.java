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

public class NativeViewRenderer
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static Object CreateBitmap111(final int w,final int h)
    {
        return android.graphics.Bitmap.createBitmap(w, h, android.graphics.Bitmap.Config.ARGB_8888);
    }
    
    public static void DisposeBitmap112(final Object bitmap)
    {
        ((android.graphics.Bitmap)bitmap).recycle();
    }
    
    public static void Upload113(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        android.view.View view = (android.view.View)viewHandle;
        
        			view.measure(
        				android.view.View.MeasureSpec.makeMeasureSpec(w, android.view.View.MeasureSpec.EXACTLY),
        				android.view.View.MeasureSpec.makeMeasureSpec(h, android.view.View.MeasureSpec.EXACTLY));
        
        			view.layout(0, 0, w, h);
        			android.graphics.Bitmap bitmap = (android.graphics.Bitmap)bitmapHandle;
        			android.graphics.Canvas canvas = new android.graphics.Canvas(bitmap);
        
        			bitmap.eraseColor((int)0x00000000);
        
        			view.draw(canvas);
        			
        			if (reuse)
        			{
        				android.opengl.GLUtils.texSubImage2D(android.opengl.GLES20.GL_TEXTURE_2D, 0, 0, 0, bitmap);
        			}
        			else
        			{
        				android.opengl.GLUtils.texImage2D(android.opengl.GLES20.GL_TEXTURE_2D, 0, bitmap, 0);
        			}
    }
    
}
