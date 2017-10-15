/* 字符串的所有字符排列函数，用已知字符串s中的所有字符，生成由其中n个字符组成的所有字符排列 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 20
char w[N];
int perm(int n, char *s)
{
	char s1[N];
	int i;
	if(n<1)
		printf("%s\n",w); /* 一个排列生成输出 */
	else
	{
		strcpy(s1,s);	/* 保存本层次可使用的字符 */
		for(i=0;*(s1+i);i++)	/* 依次选本层次可用字符 */
		{
			*(w+n-1)=*(s1+i);/* 将选用字符填入正在生成的字符排列中 */
			*(s1+i)=*s1;
			*s1=*(w+n-1);
			perm(n-1,s1+1);	 /* 递归 */
		}
	}
	return 0;
}
int main()
{
	int n=2;
	char s[N];
	w[n]='\0';
	system("cls");
	printf("This is a char permutation program!\nPlease input a string:\n");
	scanf("%s",s);
	puts("\nPlease input the char number of permuted:\n");
	scanf("%d",&n);
	puts("The permuted chars are:\n");
	perm(n,s);
	puts("\nPress any key to quit...");
	getch();
	return 0;
}