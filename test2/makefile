CC=g++
#没这句编译就是用cc编译会出错,可以改成g++或gcc
#CFLAGS=-Wall -g -o1
#Wall警告/g调试/o优化等级1-4
#-fexec-charset=utf-8 -finput-charset=gb2312
#输出字符，这句基本没用了，官方网站有人提交这个bug

all:32test2
all:64test2
#就一个源文件，这句我可以注释掉

32test2:32test2.o
	g++ -Wall -g -o1 -m32 32test2.o -o 32test2
64test2:64test2.o
	g++ -Wall -g -o1 -m64 64test2.o -o 64test2
32test2.o:test2.c
	g++ -Wall -g -o1 -c -m32 test2.c -o 32test2.o
64test2.o:test2.c
	g++ -Wall -g -o1 -c -m64 test2.c -o 64test2.o

#gcc和gcc必需是缩进符而不是空格，否则出错

clean:
	rm -f test2.exe test2.0
#装有gnuwin32的可以用rm,不然换成del吧