@echo off
::rmdir /s /q build
cmake -G "MinGW Makefiles" -S . -B build
cd build
cmake --build .
if %ERRORLEVEL% NEQ 0 (
    echo Build failed. Exiting...
    exit /b %ERRORLEVEL%
)
echo Build successful. Running main.exe...
main.exe

if %ERRORLEVEL% NEQ 0 (
    echo Program crashed or exited with error code %ERRORLEVEL%.
    pause
    exit /b %ERRORLEVEL%
)