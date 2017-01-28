package com.apps.stockit;

import java.lang.reflect.Method;

import android.annotation.SuppressLint;
import android.os.Build;
import android.util.DisplayMetrics;

public class Display {
	// {TODO} Not pretty here

	private static AppState _appState;

	public Display(AppState appState)
	{
		_appState = appState;
	}

	//--------------------------------------------------------
	public static int realWidth = 0;
	public static int realHeight = 0;
	public static void CalcRealSizes()
	{
	    //cache initialSize so we have something sane
	    android.view.Display display = _appState.CurrentActivity.getWindowManager().getDefaultDisplay();
	    if (AppRuntimeSettings.SDKVersion >= 17){
	        //new pleasant way to get real metrics
	        DisplayMetrics realMetrics = new DisplayMetrics();
	        display.getRealMetrics(realMetrics);
	        realWidth = realMetrics.widthPixels;
	        realHeight = realMetrics.heightPixels;
	    } else if (AppRuntimeSettings.SDKVersion >= 14) {
	        //reflection for this weird in-between time
	        try {
	            Method mGetRawH = Display.class.getMethod("getRawHeight");
	            Method mGetRawW = Display.class.getMethod("getRawWidth");
	            realWidth = (Integer) mGetRawW.invoke(display);
	            realHeight = (Integer) mGetRawH.invoke(display);
	        } catch (Exception e) {
	            //this may not be 100% accurate, but it's all we've got
	            realWidth = display.getWidth();
	            realHeight = display.getHeight();
	        }
	    } else {
	        //This should be close, as lower API devices should not have window navigation bars
	        realWidth = display.getWidth();
	        realHeight = display.getHeight();
	    }
	    if (_appState.Layout.SuperLayout!=null) {
	    	int tmp = _appState.Layout.SuperLayout.getWidth();
	    	if (tmp!=0 && tmp!= realHeight && realWidth!=tmp) {
	    		realWidth = tmp;
	    	}
	    }
	}
	public static int GetRealDisplayWidth()
	{
	    CalcRealSizes();
		return realWidth;
	}
	public static int GetRealDisplayHeight()
	{
	    CalcRealSizes();
	    return realHeight;
	}
	@SuppressLint("NewApi")
	public static DisplayMetrics GetDisplayMetrics()
	{
		DisplayMetrics metrics = new DisplayMetrics();
		if (AppRuntimeSettings.SDKVersion >= Build.VERSION_CODES.JELLY_BEAN_MR1) {
			_appState.CurrentActivity.getWindowManager().getDefaultDisplay().getRealMetrics(metrics);
	        return metrics;
		} else {
			_appState.CurrentActivity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
	        return metrics;
		}
	}

}
