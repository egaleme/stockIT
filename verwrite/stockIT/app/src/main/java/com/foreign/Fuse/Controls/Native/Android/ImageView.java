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

public class ImageView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void ClearBitmap77(final Object handle)
    {
        ((android.widget.ImageView)handle).setImageResource(0);
        			((android.widget.ImageView)handle).invalidate();
    }
    
    public static Object Create78(final Object container)
    {
        android.widget.RelativeLayout relativeLayout = (android.widget.RelativeLayout)container;
        			android.widget.ImageView imageView = new android.widget.ImageView(com.apps.stockit.stockIT.GetRootActivity());
        			imageView.setScaleType(android.widget.ImageView.ScaleType.MATRIX);
        			imageView.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			relativeLayout.addView(imageView);
        			return imageView;
    }
    
    public static Object CreateContainer79()
    {
        android.widget.RelativeLayout relativeLayout = new android.widget.RelativeLayout(com.apps.stockit.stockIT.GetRootActivity());
        			relativeLayout.setFocusable(true);
        			relativeLayout.setFocusableInTouchMode(true);
        			relativeLayout.setClipToPadding(true);
        			relativeLayout.setClipChildren(true);
        			relativeLayout.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return relativeLayout;
    }
    
    public static void GetImageSize80(final Object handle,final com.uno.IntArray wh)
    {
        android.widget.ImageView imageView = (android.widget.ImageView)handle;
        			imageView.measure(
        				android.view.View.MeasureSpec.UNSPECIFIED,
        				android.view.View.MeasureSpec.UNSPECIFIED);
        			wh.set(0, imageView.getMeasuredWidth());
        			wh.set(1, imageView.getMeasuredHeight());
    }
    
    public static void SetBitmap81(final Object handle,final Object bitmapHandle)
    {
        ((android.widget.ImageView)handle).setImageBitmap( (android.graphics.Bitmap)bitmapHandle );
        			((android.widget.ImageView)handle).invalidate();
    }
    
    public static void SetImageMatrix82(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        android.widget.ImageView imageView = (android.widget.ImageView)handle;
        			float[] m = new float[]
        			{
        				scaleX, 0.0f, 	x,
        				0.0f,	scaleY, y,
        				0.0f,	0.0f,	1.0f
        			};
        			android.graphics.Matrix matrix = new android.graphics.Matrix();
        			matrix.setValues(m);
        			imageView.setImageMatrix(matrix);
    }
    
    public static void SetImageSize183(final Object handle,final com.uno.IntArray wh)
    {
        android.widget.ImageView imageView = (android.widget.ImageView)handle;
        			imageView.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(wh.get(0), wh.get(1)));
    }
    
    public static void SetTint84(final Object handle,final int rgba)
    {
        android.graphics.drawable.Drawable drawable = ((android.widget.ImageView)handle).getDrawable();
        			if (drawable != null)
        			{
        				drawable.setTintMode(android.graphics.PorterDuff.Mode.MULTIPLY);
        				drawable.setTint(rgba);
        			}
    }
    
}
