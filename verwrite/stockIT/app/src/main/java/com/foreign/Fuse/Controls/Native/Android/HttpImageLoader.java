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

// user defined imports
import java.lang.Runnable;
import android.graphics.*;
import android.app.Activity;
import java.net.*;
import java.io.*;
import java.lang.*;

public class HttpImageLoader
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void LoadAsync76(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        Thread thread = new Thread() {
        				public void run() {
        					try
        					{
        						URL url = new URL(urlString);
        						HttpURLConnection connection = (HttpURLConnection)url.openConnection();
        						connection.setDoInput(true);
        						connection.connect();
        						InputStream input = connection.getInputStream();
        						Bitmap bitmap = BitmapFactory.decodeStream(input);
        						success.run(bitmap);
        					}
        					catch (IOException e)
        					{
        						error.run(e.getMessage());
        					}
        				}
        			};
        			thread.start();
    }
    
}
