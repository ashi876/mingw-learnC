@echo off
setlocal enabledelayedexpansion
title mingw-makefile批处理
color f0 
mode con: cols=60 lines=25
cls>nul
:menu
ping -n 1 127.1 > nul&CLS
echo 多次编译时每次先执行〈命令5〉
echo ================================
echo 32位的debug版 ………………1
echo 64位的debug版 ………………2
echo 32位的release版 ……………3
echo 64位的release版 ……………4
echo 清空生成的文件………………5
echo 退出……………………………6
echo ================================

set UserSelection=nul
set /p UserSelection=选择 ( 1 , 2 ，3，4，5，6)
if "!UserSelection!"=="6" (
	exit
)

if "!UserSelection!"=="5" (
	make clean
)

if "!UserSelection!"=="4" (
	make RELEASE=1 BITS=64
)

if "!UserSelection!"=="3" (
	make RELEASE=1 BITS=32
)

if "!UserSelection!"=="2" (
	make RELEASE=0 BITS=64
)

if "!UserSelection!"=="1" (
	make RELEASE=0 BITS=32
)

goto menu
pause

::bat常用语句例：
::@if not exist %dir1% md %dir1%如果找不到文件%dir1%则建立
::cd /d %~dp0进入批处理所在目录

::@echo off
::set num=0
::for /f "delims=" %%i in (IPv44.txt) do (
::    set /a num+=1
::    set str=%%i
::   if !num! equ 1 echo !str!>oneip.txt
::)
::从IPv44.txt里提取所需IP整行到oneip.txt,最后一行数字1是表示IPv44.txt里的第几行

::for /f "delims= " %%j in (oneip.txt) do set aa=%%j
::去掉IP前的一个空格