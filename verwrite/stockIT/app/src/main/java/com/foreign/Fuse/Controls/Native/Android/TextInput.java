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

public class TextInput
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void AddEditorActionListener154(final UnoObject _this, final Object handle)
    {
        ((android.widget.TextView)handle).setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
        				public boolean onEditorAction(android.widget.TextView v, int actionId, android.view.KeyEvent ke) { 
        					return ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction155((UnoObject)_this,(int)actionId);
        				}
        			});
    }
    
    public static void AddTextChangedListener156(final UnoObject _this, final Object handle)
    {
        ((android.widget.TextView)handle).addTextChangedListener(new android.text.TextWatcher() {
        				public void afterTextChanged(android.text.Editable e) {
        
        				}
        				public void beforeTextChanged(java.lang.CharSequence cs, int start, int count, int after) {
        					
        				}
        				public void onTextChanged(java.lang.CharSequence cs, int start, int before, int count) {
        					java.lang.String str = cs.toString();
        					ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged157((UnoObject)_this,(String)str);
        				}
        			});
    }
    
    public static void ClearFocus158(final Object handle)
    {
        android.widget.TextView t = (android.widget.TextView)handle;
        			t.clearFocus();
    }
    
    public static Object Create1159()
    {
        return new android.widget.EditText(com.apps.stockit.stockIT.GetRootActivity());
    }
    
    public static boolean HasFocus160(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).hasFocus();
    }
    
    public static void RequestFocus161(final Object viewHandle)
    {
        ((android.view.View)viewHandle).requestFocus();
    }
    
    public static void SetCursorDrawableColor162(final UnoObject _this, final Object handle,final int color)
    {
        android.widget.EditText editText = (android.widget.EditText)handle;
        			try {
        				/*
        					(ﾉಥДಥ)ﾉ︵┻━┻･/
        				*/
        				java.lang.reflect.Field fCursorDrawableRes = android.widget.TextView.class.getDeclaredField("mCursorDrawableRes");
        				fCursorDrawableRes.setAccessible(true);
        				int mCursorDrawableRes = fCursorDrawableRes.getInt(editText);
        				java.lang.reflect.Field fEditor = android.widget.TextView.class.getDeclaredField("mEditor");
        				fEditor.setAccessible(true);
        				java.lang.Object editor = fEditor.get(editText);
        				Class<?> clazz = editor.getClass();
        				java.lang.reflect.Field fCursorDrawable = clazz.getDeclaredField("mCursorDrawable");
        				fCursorDrawable.setAccessible(true);
        				android.graphics.drawable.Drawable[] drawables = new android.graphics.drawable.Drawable[2];
        
        
        
        
        				drawables[0] = editText.getContext().getResources().getDrawable(mCursorDrawableRes);
        				drawables[1] = editText.getContext().getResources().getDrawable(mCursorDrawableRes);
        
        
        				drawables[0].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        				drawables[1].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        				fCursorDrawable.set(editor, drawables);
        			} catch (Throwable ignored) {
        
        			}
    }
    
    public static void SetImeOptions163(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setImeOptions(value);
    }
    
    public static void SetInputType164(final Object handle,final int value)
    {
        android.widget.EditText et = (android.widget.EditText)handle;
        
        			// preserve selection, setInputType() might reset it
        			int start = et.getSelectionStart();
        			int end = et.getSelectionEnd();
        
        			// get typeface and set after setInputType is called,
        			// InputType.TYPE_TEXT_VARIATION_PASSWORD sets the typeface to monospace
        			android.graphics.Typeface tf = et.getTypeface();
        
        			// call setTransformationMethod before setInputType
        			// ref: https://code.google.com/p/android/issues/detail?id=7092
        			et.setTransformationMethod((((value & 0x80) != 0) ? android.text.method.PasswordTransformationMethod.getInstance() : null));
        			et.setInputType(value);			
        			et.setTypeface(tf);
        
        			et.setSelection(start, end);
    }
    
    public static void SetPlaceholderColor165(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setHintTextColor(value);
    }
    
    public static void SetPlaceholderText166(final Object handle,final String value)
    {
        ((android.widget.TextView)handle).setHint(value);
    }
    
    public static void SetSelectionColor167(final Object handle,final int color)
    {
        ((android.widget.TextView)handle).setHighlightColor(color);
    }
    
}
