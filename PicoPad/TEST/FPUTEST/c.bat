@echo off
rem Compilation...

set TARGET=FPUTEST
set GRPDIR=TEST
set MEMMAP=

if "%1"=="" goto default
if "%1"=="picopadvga" goto stop
..\..\..\_c1.bat %1

:default
rem ..\..\..\_c1.bat picopad08
rem ..\..\..\_c1.bat picopad10
..\..\..\_c1.bat picopad20
rem ..\..\..\_c1.bat picopad20riscv

:stop