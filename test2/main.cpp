/*
1. ����Ŀ�� all:ex1
2. ��һ��C����Ŀ������ѧϰ�������Makefile�������ܷ�Ľ������е�Makefile
   https://notabug.org/koz.ross/awesome-c

   https://github.com/DaveGamble/cJSON/blob/master/Makefile
   
   
   �����е���������utf8���벢������̨������ʾ�������ԣ�
g++ -Wall -g -o1 -fexec-charset=utf-8 -finput-charset=gb2312 -m32 -o main main.c
*/

#include <stdio.h>
#include <stdlib.h> //û���������ʹ��pause��һϵͳ���ע�͵����п���
int main(int argc, char *argv[])
{
  system("pause");//����һ��ͣ
  puts("hello world");
  puts("ѡ��936�����ansi����");
  (system("pause"));//ѧϰ��ͣ����
  return 0;
}