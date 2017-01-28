:: This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\run.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    "C:\Users\Emenike pc\AppData\Local\Fusetools\Fuse\App\app-0.32.0.9613\uno.exe" open -a"Android Studio" "%~dp0stockIT"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.stockit
    "C:\Users\Emenike pc\AppData\Local\Fusetools\Fuse\App\app-0.32.0.9613\uno.exe" adb uninstall com.apps.stockit
    exit /b %ERRORLEVEL%
)

"C:\Users\Emenike pc\AppData\Local\Fusetools\Fuse\App\app-0.32.0.9613\uno.exe" launch-apk "%~dp0stockIT.apk" ^
    --package=com.apps.stockit ^
    --activity=stockIT ^
    --sym-dir="%~dp0stockIT\src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
