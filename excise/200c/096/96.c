#include<stdio.h>
int main()
{
    int n=1,count=0;
    system("cls");
    puts("*********************************************************");
    puts("*      >> This program is to verify Jiaogu Guess  <<    *");
    puts("* That is given any natural number, if it is an even,   *");
    puts("* divides 2, if it is an odd, multiple 3 and add 1, the *");
    puts("* result continues to be calculated analogously. After  *");
    puts("* some times, the result is always 1.                   *");
    puts("*********************************************************");
    while(n!=0)
    {
	    printf(" >> Please input a number to verify(0 to quit): ");
	    scanf("%d",&n);      /*������һ����*/
	    if(n==0)
		break;
	    printf(" >> ------ Results of verification: ------------\n");
	    do{
	        if(n%2)
	        {
	            n=n*3+1;           /*��Ϊ������n��3��1*/
		    printf(" >> Step No.%d: %d*3+1=%d\n",++count,(n-1)/3,n);
	        }
	        else
	        {
	            n/=2;          /*��Ϊż��n����2*/
		    printf(" >> Step No.%d: %d/2=%d\n",++count,2*n,n);
	        }
	    }while(n!=1);             /*n������1��������Ϲ���*/
	    printf(" >> ---------------------------------------------\n");
    }
    puts("\n Press any key to quit...");
    getch();
}