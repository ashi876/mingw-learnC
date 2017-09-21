

/*
  执行命令编译它：
    $ make ex1
  编译后执行：
    $ ./ex1
  使它崩溃：
    $ CFLAGS="-Wall" make ex1
  输出警告：
    warning: implicit declaration of function ‘puts’ ...
  想去除警告就得添加头文件
   #include <stdio.h>

  TODO:
  删除下面代码种的任意部分，编译看看出什么问题
  多打印几行文本
  查看man puts

以上为原注释：
以下：
makefile将从下课开始讲解
*/

#include <stdio.h>
#include <stdlib.h> //没有这个不能使用pause这一系统命令，注释掉这行看看
int main(int argc, char *argv[])
{
  (system("pause"));//加入暂停
  puts("hello world");
  puts("用中文的选择936编码或ansi试试");
  (system("pause"));//学习暂停命令
  return 0;
}
