@echo off
setlocal enabledelayedexpansion
title mingw-makefile������
color f0 
mode con: cols=60 lines=25
cls>nul
:menu
ping -n 1 127.1 > nul&CLS
echo =����õ��ļ�������build�ļ�����
echo ========================================
echo =������32λ��debug�� ������������������1
echo =������64λ��debug�� ������������������2
echo =������32λ��release�� ����������������3
echo =������64λ��release�� ����������������4
echo =�����build�ļ��� ��������������������5
echo =���˳���������������������������������6
echo ========================================


set UserSelection=nul
set /p UserSelection=ѡ�� ( 1 , 2 ��3��4��5��6)
if "!UserSelection!"=="6" (
	exit
)

if "!UserSelection!"=="5" (
	make clean
	ping -n 2 127.1 > nul&CLS
	::@del /f /a /s /q %cd%\build\* 2>nul
	rd /q /s %cd%\build
::	pause
	goto menu
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

@if not exist %cd%\build md %cd%\build
copy *.exe %cd%\build\
make clean
::���ݵ�ǰĿ¼������exe�ļ���buildĿ¼
::	pause
goto menu
pause

::bat�����������
::@if not exist %dir1% md %dir1%����Ҳ����ļ�%dir1%����
::cd /d %~dp0��������������Ŀ¼

::@echo off
::set num=0
::for /f "delims=" %%i in (IPv44.txt) do (
::    set /a num+=1
::    set str=%%i
::   if !num! equ 1 echo !str!>oneip.txt
::)
::��IPv44.txt����ȡ����IP���е�oneip.txt,���һ������1�Ǳ�ʾIPv44.txt��ĵڼ���

::for /f "delims= " %%j in (oneip.txt) do set aa=%%j
::ȥ��IPǰ��һ���ո�