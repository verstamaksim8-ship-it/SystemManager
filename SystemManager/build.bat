`batch
@echo off
chcp 65001 > nul
echo ====================================
echo        SYSTEM MANAGER
echo ====================================
echo.
echo [1/2] Checking compiler...
g++ --version > nul 2>&1
if %errorlevel% neq 0 (
    echo ERROR: C++ compiler not found!
    echo Install MinGW or Visual Studio Build Tools
    pause
    exit /b 1
)

echo [2/2] Building project...
g++ -fexec-charset=utf-8 src\main.cpp -o SystemManager.exe

if %errorlevel% neq 0 (
    echo ERROR: Build failed!
    pause
    exit /b 1
)

pause