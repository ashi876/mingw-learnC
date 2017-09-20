#include <stdio.h>
#include <conio.h>

//很有意思的程序，改掉几个不规范的地方之后不报错了，不改也能生成exe正常运行．输入1234进入游戏，输入58成功退出～

int main(void)

{
	int Password=0,Number=0,price=58,i=0;

	while( Password != 1234 )
	{
		if( i >= 3 )
			return 0;
		i++;
		puts("Please input Password: ");
		scanf("%d",&Password);
	//	getch();
	}

	i=0;
	while( Number!=price )
	{
		do{
			puts("Please input a number between 1 and 100: ");
			scanf("%d",&Number);
			printf("Your input number is %d\n",Number);
		}while( !(Number>=1 && Number<=100) );
		if( Number >= 90 )
		{
			printf("Too Bigger! Press any key to try again!\n");
		}
		else if( Number >= 70 && Number < 90 )
		{
			printf("Bigger!\n");
		}
		else if( Number >= 1 && Number <= 30 )
		{
			printf("Too Small! Press any key to try again!\n");
		}
		else if( Number > 30 && Number <= 50 )
		{
			printf("Small! Press any key to try again!\n");
		}
		else
		{
			if( Number == price )
			{
				printf("OK! You are right! Bye Bye!\n");
			}
			else if( Number < price )
			{
				printf("Sorry,Only a little smaller! Press any key to try again!\n");

			}
			else if( Number > price )
				printf(" Sorry, Only a little bigger! Press any key to try again!\n");
		}
		getch();
		return (0);
	}
}