/* �ַ��Ű溯��,���ַ����ڵ���֮��Ŀհ��ַ�ƽ��������뵽����֮��*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
#define N 80
int edit(char *s)
{
	int i,sp,w,inw,v,r;
	char buf[N],*str;
	for(inw=sp=w=i=0;s[i];i++)
	{
		if(s[i]==' ')
		{		/* ͳ�ƿհ׸���*/
			sp++;
			inw=0;	/* �ÿհ׷�״̬*/
		}
		else if(!inw)
		{
			w++;	/* ͳ�Ƶ��ָ���*/
			inw=1;	/* �õ���״̬*/
		}
	}
	if(w<=1)
		return 1;	/* ������������1, ���Ű� */
	v=sp/(w-1);	/* ÿ�����ƽ���հ׷� */
	r=sp%(w-1);	/* ����Ŀհ׷� */
	strcpy(buf,s);
	for(str=buf;;)
	{
		while(*str==' ')str++; /* �ӹ��հ׷� */
		for(;*str&&*str!=' ';) /* ���Ƶ��� */
			*s++=*str++;
		if(--w==0)
			return 0;		/* ȫ�����ָ�����ϣ����� */
		for(i=0;i<v;i++)
			*s++=' ';	/* �������հ׷� */
		if(r)
		{
			*s++=' ';	/* ����һ������հ׷� */
			r--;
		}
	}
}
char buff[N];
int main()		/* ���ڲ���edit���� */
{
	system("cls");
	puts("This is a typeset program!\nPlease input a character line:\n");
	gets(buff);
	edit(buff);
	printf("\nThe character line after typeset is:\n\n%s\n",buff);
	puts("\n Press any key to quit...\n ");
	getch();
}