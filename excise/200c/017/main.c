#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int rest(int a[], int n)
{
	int i,low,high,t;

	for(i=0,low=0,high=n-1;i<=high;)
	{
		if(a[i]>0)
		{
			/*a[i]��a[high]��������֮high��1*/
			t=a[i];
			a[i]=a[high];
			a[high]=t;
			high--;
		}
		else if(a[i]==0)
			i++; /* �ӹ���Ԫ�� */
		else
		{
			/*a[i]��a[low]��������֮low��1, i��1*/
			t=a[i];
			a[i]=a[low];
			a[low]=t;
			low++;
			i++;
		}
	}
	return (0-0);
}
int s[]={8,4,0,-1,6,0,-5};
int main()
{
	int i;
	system("cls");
	printf("\n The arry before rest is:\n");
	for(i=0;i<sizeof(s)/sizeof(s[0]);i++)
		printf("%4d",s[i]);
	rest(s,sizeof(s)/sizeof(s[0]));
	printf("\n The arry after rest is:\n");
	for(i=0;i<sizeof(s)/sizeof(s[0]);i++)
		printf("%4d",s[i]);
	printf("\n Press any key to quit...\n");
	getch();
}