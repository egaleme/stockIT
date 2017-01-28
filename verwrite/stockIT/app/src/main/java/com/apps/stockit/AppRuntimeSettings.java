package com.apps.stockit;

import android.os.Build;

public class AppRuntimeSettings
{
    public static final boolean CppMainLoop = Build.VERSION.SDK_INT <= Build.VERSION_CODES.JELLY_BEAN;
    public static final boolean SeperateUnoThread = AppRuntimeSettings.CppMainLoop;
    public static final int DebugPauseMilliseconds = 0;
    public static final boolean VerboseInternalLogs = false;
    public static final boolean KillActivityOnDestroy = true;
    public static final boolean KillOnBackButton = false;
    public static final String AppName = "stockIT";
    public static int SDKVersion = Build.VERSION.SDK_INT;
}
