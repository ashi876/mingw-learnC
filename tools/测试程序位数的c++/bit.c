/*************************************************************************
	> �ļ���: bit.c
	> ����: ǧ������
	> ������: ��ȡ����λ��
	> ����ʱ��: 2017-10-03
 ************************************************************************/
//64λ��������gcc -Wall -o3 -s -m64 -mwindows bit.c -o bit64
//32λ��������gcc -Wall -o3 -s -m32 -mwindows bit.c -o bit32
#include <stdio.h>
#include <windows.h>

char msg[256];

// ����winapiʹ��msg����
int WINAPI WinMain( HINSTANCE hInstance, 
					HINSTANCE hPrevInstance, 
					LPSTR lpCmdLine, 
					int nCmdShow )
{
   	int bits=sizeof(int*)*8;//�������������þ���һ��sizeof(int*)*8
    //printf("bits: %d",bits);
    sprintf(msg,"�����ϸ��ϵͳ��������֤�������:\n\n������Ϊ��%dλ", bits);
	MessageBox(NULL,msg,"���Գ���λ��v1.0 ǧ������",MB_OK);
	//getchar();
	return 0;
}
