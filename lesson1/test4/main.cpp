/*
	变量类型

	仔细观察下面代码中printf占位符及其对应的变量类型

TODO：

随便修改下面代码让其崩溃，查看并理解错误信息
使用printf的一些高级占位符
尝试按八进制或十进制来打印数字
打印空字符串
以上原注释
以下：
因为加入了第二段初尝指针，对初学来说有一点点难度，加速吧，一个星期入不了门，你的兴趣就会消失
*/

// 引入头文件stdio.h，头文件一般以.h为扩展名
#include <stdio.h>
#include <conio.h>

/*

main 函数，为入口函数
花括号{}，表示函数块的开始和结束

*/
int main(int argc, char *argv[])
{
	// 定义变量，前面需要指定类型
	// 任何语句必须以分号结尾
	int distance = 100;
	char power[]= "2.345f";
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Zed";
	char last_name[] = "Shaw";

	// printf函数，接受两个参数，第一个是字符串，第二个是要替换占位符的变量
	printf("you are %d miles away. \n", distance);
	printf("you have %s levels of power. \n", power);
	printf("you have %f awesome super powers. \n", super_power);
	printf("I have an initial %c. \n", initial);
	printf("I have an first name %s. \n", first_name);
	printf("I have an first name %s. \n", last_name);
	printf("My whole name is %s %c.	%s. \n", first_name, initial, last_name);
	
	
	int i = 0;
	//for循环语句。第一个参数用来初始化循环，中间的为终止循环条件，第三个参数增加循环变量以便进入下一个循环
	for(i = 1; i < argc; i++){
		printf("arg %d : %s \n", i, argv[i]);
	}

	// 这种写法创建了一个二维字符串数组.如果混用加了""的字符和变量的字符，char*前要加上const.学一下指针吧
	const char *six[] = {
		power, "initial", first_name, last_name
	};
	//想一下上一面的来""的"initial"和不带的有什么不同，去掉试试，先想想结果

	int num_six = 4;
	for(i=0; i < num_six; i++){
    printf("state %s\n", six[i]);
	}

	//注意上面一段和第一段代码的区别，for循环是如何工作的，char命令下为何不能加入另两个变量
	getch();
	// 返回0，告诉系统要退出了
	return 0;
}
