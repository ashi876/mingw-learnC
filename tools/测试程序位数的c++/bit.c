/*************************************************************************
	> 文件名: bit.c
	> 作者: 千城真人
	> 程序功能: 获取程序位数
	> 创作时间: 2017-10-03
 ************************************************************************/
//64位编译命令gcc -Wall -o3 -s -m64 -mwindows bit.c -o bit64
//32位编译命令gcc -Wall -o3 -s -m32 -mwindows bit.c -o bit32
#include <stdio.h>
#include <windows.h>

char msg[256];

// 调用winapi使用msg窗口
int WINAPI WinMain( HINSTANCE hInstance, 
					HINSTANCE hPrevInstance, 
					LPSTR lpCmdLine, 
					int nCmdShow )
{
   	int bits=sizeof(int*)*8;//程序中真正有用就这一句sizeof(int*)*8
    //printf("bits: %d",bits);
    sprintf(msg,"经过严格的系统级测试验证结果如下:\n\n本程序为：%d位", bits);
	MessageBox(NULL,msg,"测试程序位数v1.0 千城真人",MB_OK);
	//getchar();
	return 0;
}
