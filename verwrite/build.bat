:: This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\targets\android\build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0stockIT\app\src\main"
set ANT_DIR=C:\Android\Ant
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_91

echo ## 1/2: libstockIT.so
call makew -s -j %NUMBER_OF_PROCESSORS% %* || goto ERROR

echo.
echo ## 2/2: stockIT.apk
if exist "%ANT_DIR%\bin\ant.bat" (
    set "ANT=%ANT_DIR%\bin\ant.bat"
) else (
    echo ERROR: ant.bat was not found in "%ANT_DIR%\bin"
    goto ERROR
)

call "%ANT%" release || goto ERROR

cd "%~dp0"
"C:\Users\Emenike pc\AppData\Local\Fusetools\Fuse\App\app-0.32.0.9613\uno.exe" cp stockIT/app/src/main/bin/stockIT-release.apk stockIT.apk || goto ERROR

popd && exit /b 0

:ERROR
popd && exit /b 1
