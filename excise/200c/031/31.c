#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 50
char cycle(char *s)
{
	char *h,*t;

	for(h=s,t=s+strlen(s)-1;t>h;h++,t--)
		if(*h!=*t) break;
	return t<=h;
}

int main()
{
	char s[MAX];
	system("cls");
	while(1)
	{
		puts("Please input the string you want to judge (input ^ to quit):");
		scanf("%s",s);
		if(s[0]=='^')
			break;
		if(cycle(s))
			printf(" %s is a cycle string.\n",s);

		else
			printf(" %s is not a cycle string.\n",s);

	}
	puts("\nThank you for your using,bye bye!\n");

	return 0;
}
