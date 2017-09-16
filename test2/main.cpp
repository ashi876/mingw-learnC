/*
1. 创建目标 all:ex1
2. 找一个C的项目，尝试学习理解它的Makefile，并看能否改进本例中的Makefile
   https://notabug.org/koz.ross/awesome-c

   https://github.com/DaveGamble/cJSON/blob/master/Makefile
   
   
   用下行的命令生成utf8编码并在命令台正常显示出来试试：
g++ -Wall -g -o1 -fexec-charset=utf-8 -finput-charset=gb2312 -m32 -o main main.c
*/

#include <stdio.h>
#include <stdlib.h> //没有这个不能使用pause这一系统命令，注释掉这行看看
int main(int argc, char *argv[])
{
  system("pause");//加入一暂停
  puts("hello world");
  puts("选择936编码或ansi试试");
  (system("pause"));//学习暂停命令
  return 0;
}