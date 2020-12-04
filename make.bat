@echo off
set OLD_PATH=%PATH%

set TOOLCHAIN_PATH=C:/DevTools/gcc-arm-none-eabi-9-2020-q2-update-win32/bin
set GNU_UTILS_PATH=C:/DevTools/msys64/usr/bin
set  OPEN_OCD_PATH=C:/DevTools/OpenOCD-20200310-0.10.0/bin

set MAKE_PATH=C:/DevTools/msys64/usr/bin

set PATH=%GNU_UTILS_PATH%;%TOOLCHAIN_PATH%;%OPEN_OCD_PATH%;%PATH%

echo Running "make %*"

%MAKE_PATH%/make.exe %* -j -Otarget

set PATH=%OLD_PATH%
