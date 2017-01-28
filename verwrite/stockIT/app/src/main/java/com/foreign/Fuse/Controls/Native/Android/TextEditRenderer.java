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

public class TextEditRenderer
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void CopyState147(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        android.widget.GridLayout gridLayout = (android.widget.GridLayout)container;
        			android.widget.TextView source = (android.widget.TextView)sourceHandle;
        			android.widget.TextView target = (android.widget.TextView)targetHandle;
        
        			if (target.getParent() == gridLayout)
        			{
        				gridLayout.removeView(target);
        			}
        
        			java.lang.String text = source.getText().toString();
        			java.lang.CharSequence hint = text.length() == 0 ? source.getHint() : "";
        			target.setText(text);
        			target.setHint(hint);
        			target.setTextColor(source.getCurrentTextColor());
        			target.setHintTextColor(source.getCurrentHintTextColor());
        			target.setImeOptions(source.getImeOptions());
        			target.setIncludeFontPadding(source.getIncludeFontPadding());
        			target.setTransformationMethod(source.getTransformationMethod());
        
        			// Setting the inputtype causes bugs when rendering RTL text,
        			// it triggers the same symptoms as the TextAlignment bug below.
        			// Assuming not copying this state is safe since it does not affect
        			// the rendering. No idea why this happens...
        			
        			// target.setInputType(source.getInputType());
        
        			target.setTextSize(android.util.TypedValue.COMPLEX_UNIT_PX, source.getTextSize());
        			target.setTypeface(source.getTypeface());
        			target.setLineSpacing(source.getLineSpacingExtra(), source.getLineSpacingMultiplier());
        			target.setPadding(
        				source.getPaddingLeft(),
        				source.getPaddingTop(),
        				source.getPaddingRight(),
        				source.getPaddingBottom());
        			target.setTextScaleX(source.getTextScaleX());
        
        			/*
        				Nasty workaround to avoid Android rendering bug when textalignment is set to center,
        				doing it the normal way makes all the characters render on top of eachother...
        			*/
        			android.widget.GridLayout.LayoutParams lp = new android.widget.GridLayout.LayoutParams();
        			lp.rowSpec = android.widget.GridLayout.spec(0, android.widget.GridLayout.FILL);
        			int gravity = source.getGravity();
        			if ((gravity & android.view.Gravity.LEFT) == android.view.Gravity.LEFT)
        			{
        				lp.setGravity(android.view.Gravity.LEFT);
        				lp.columnSpec = android.widget.GridLayout.spec(0, android.widget.GridLayout.LEFT);
        			}
        			else if ((gravity & android.view.Gravity.RIGHT) == android.view.Gravity.RIGHT)
        			{
        				lp.setGravity(android.view.Gravity.RIGHT);
        				lp.columnSpec = android.widget.GridLayout.spec(0, android.widget.GridLayout.RIGHT);
        			}
        			else if ((gravity & android.view.Gravity.CENTER_HORIZONTAL) == android.view.Gravity.CENTER_HORIZONTAL)
        			{
        				lp.setGravity(android.view.Gravity.CENTER_HORIZONTAL);
        				lp.columnSpec = android.widget.GridLayout.spec(0, android.widget.GridLayout.CENTER);
        			}
        			target.setLayoutParams(lp);
        			gridLayout.addView(target);
    }
    
    public static Object CreateContainer148()
    {
        android.widget.GridLayout gridLayout = new android.widget.GridLayout(com.apps.stockit.stockIT.GetRootActivity());
        			gridLayout.setLayoutParams(
        				new android.widget.RelativeLayout.LayoutParams(
        					android.view.ViewGroup.LayoutParams.FILL_PARENT,
        					android.view.ViewGroup.LayoutParams.FILL_PARENT));
        			return gridLayout;
    }
    
    public static Object CreateTextEdit149()
    {
        android.widget.TextView tv = new android.widget.TextView(com.apps.stockit.stockIT.GetRootActivity());
        			tv.setBackgroundResource(0);
        			return tv;
    }
    
}
