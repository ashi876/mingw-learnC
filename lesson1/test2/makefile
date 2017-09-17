#sg 本节学习简单的makefile语法
CC=g++
#没这句编译就是用cc编译会出错,可以改成g++或gcc
#CFLAGS=-Wall -g -o1
#Wall警告/g调试/o优化等级1-4
#-fexec-charset=utf-8 -finput-charset=gb2312
#输出字符，有人说没用了，实测有用的！win7 x64平台，5.0.2版mingw默认的7.1.0版gcc
#注意输出为utf-8,在命令台输入chcp 65001然后字体改成Licida

all:32main
all:64main
#就一个源文件，这句我可以注释掉

32main:32main.o
	g++ -Wall -g -o1 -m32 32main.o -o 32main
64main:64main.o
	g++ -Wall -g -o1 -m64 64main.o -o 64main
32main.o:main.c
	g++ -Wall -g -o1 -c -m32 main.c -o 32main.o
64main.o:main.c
	g++ -Wall -g -o1 -c -m64 main.c -o 64main.o

#上段中g++或gcc前必需是缩进符而不是空格，否则出错

clean:
	rm -f *.exe *.o
#装有gnuwin32的win系统可以用rm,不然换成del吧