#include <stdio.h>
#include <conio.h>
#include <assert.h>

// ��ȡ����λ����������Ϊ����λ�Ĵ��룩
int GetProgramBits()
{
    return sizeof(int*) * 8;
}

int main(int argc, char* argv[])
{
    printf("bits:\t%d\n", GetProgramBits());
//    assert( argc>1 );
	getch();
    return 0;
}