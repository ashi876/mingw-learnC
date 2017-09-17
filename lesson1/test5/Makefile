#原作者：zyl910 参加修改及注释人员名单：千城真人
#本makefile命令如下：
#make BITS=32//(生成32位程序.改成64则生成64位)
#make RELEASE=0//(0为debug版，1为release版)
#例：make RELEASE=0 BITS=32//(32位的debug版)。
#严重警告。代码在第二行的一定要用缩进而不是空格，我从网上复制这些代码在这卡N久~

# flags
CC = g++
#上行为指定编译器为g++或gcc
CFLAGS = -Wall
#上行为开关项：-Wall警告/
LFLAGS = 
#上行指定库文件路径
# args
RELEASE =0
#上行(0为debug版，1为release版)，本程序中可以用命令参数指定。
BITS =
#生成文件的位数。本程序中可以用命令参数指定。

# [args] 生成模式. 0代表debug模式, 1代表release模式.命令为make RELEASE=0或1
ifeq ($(RELEASE),0)
    # debug#debug版：加上 -g 参数，生成调试信息。
    CFLAGS += -g
	BB =debug
else
    # release#release版：加上 -static 参数，进行静态链接，使程序不再依赖动态库。加上 -O3 参数，进行最快速度优化。加上-DNDEBUG参数，定义NDEBUG宏，屏蔽断言。
    CFLAGS += -static -O3 -DNDEBUG
    LFLAGS += -static
	BB =release
endif

# [args] 程序位数. 32代表32位程序, 64代表64位程序, 其他默认.命令为make BITS=32或64
#当没有-m32或-m64参数时，一般情况下会生成跟操作系统位数一致的代码，但某些编译器存在例外
ifeq ($(BITS),32)
    CFLAGS += -m32
    LFLAGS += -m32
	AA =32
else
    ifeq ($(BITS),64)
        CFLAGS += -m64
        LFLAGS += -m64
		AA =64
    else
    endif
endif


.PHONY : all clean

# files,需要增加代码文件或依赖关系时，修改此项
TARGETS = main
OBJS = hello.o print.o

all : $(TARGETS)

main : $(OBJS)
	$(CC) $(LFLAGS) -o $@$(AA)$(BB) $^
#说明：$@--目标文件，本例就是main.exe,$^--所有的依赖文件OBJS =后的文件，$<--第一个依赖文件。
	
main.o : main.cpp
	$(CC) $(CFLAGS) -c $<
#说明：$<--第一个依赖文件,上行改成$^试试

print.o :print.c print.h

clean :
	@del -f $(OBJS) $(TARGETS)*.exe 2>nul
#上行原句为:	rm -f $(OBJS) $(TARGETS) $(addsuffix .exe,$(TARGETS))
#本例中唯一不通用项，linux下改del为rm。因Windows下的可执行文件的扩展名是exe，所以使用了addsuffix函数增加“.exe”扩展名。因Linux下不会生成.exe可执行文件，而Windows下不会生成无扩展名的可执行文件，导致rm会因找不到文件而报错。这时可以加上-f参数忽略该错误。
	
#全命令例：	
#命令〈make RELEASE=0〉为(默认位数的)debug版。
#命令〈make RELEASE=1〉为(默认位数的)release版。
#命令〈make BITS=32〉为32位(的debug)版。
#命令〈make BITS=64〉为64位(的debug)版。
#命令〈make RELEASE=0 BITS=32〉为32位的debug版。
#命令〈make RELEASE=0 BITS=64〉为64位的debug版。
#命令〈make RELEASE=1 BITS=32〉为32位的release版。
#命令〈make RELEASE=1 BITS=64〉为64位的release版。
#命令〈make clean〉为清空生成的文件
