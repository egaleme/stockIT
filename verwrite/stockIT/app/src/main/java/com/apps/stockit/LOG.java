package com.apps.stockit;

import android.util.Log;

public class LOG {

	public static void D(String message)
	{
		if (AppRuntimeSettings.VerboseInternalLogs)
			Log.d(AppRuntimeSettings.AppName, message);
	}
	public static void E(String message)
	{
		Log.e(AppRuntimeSettings.AppName, message);
	}
}
