#include<stdio.h>
int a[]={0,1,2,5,8,7,6,3};     /*ָ������.���δ�������й��ɻ���Ԫ���±�*/
int b[9];                      /*��ʾ3X3����,b[4]Ϊ�ո�*/
int c[9];                      /*ȷ��1���ڵ�λ�ú�,�Ի����е�����ָ������*/
int count=0;                   /*�����ƶ�����������*/
int main()
{
   int i,j,k,t;
   void print();
   system("cls");
   puts("*****************************************************");
   puts("*         This is a program to Move Numbers.        *");
   puts("*****************************************************");
   printf(" >> Please enter original order of digits 1~8: ");
   for(i=0;i<8;i++)
      scanf("%d",&b[a[i]]);
               /*˳�����������ߵ�8������,����Ԫ�ص�˳����ָ�������Ԫ��a[i]����*/
   printf("The sorting process is as felow:\n");
   print();
   for(t=-1,j=0;j<8&&t==-1;j++)          /*ȷ������1���ڵ�λ��*/
      if(b[a[j]]==1) t=j;                 /*t:��¼����1���ڵ�λ��*/
   for(j=0;j<8;j++)     /*��������ָ������,������1���ڵ�λ�ö�Ϊ������*/
      c[j]=a[(j+t)%8];
   for(i=2;i<9;i++)         /*��2��ʼ���ε������ֵ�λ��*/
                        /*i:���ڴ���������,i��Ӧ�ڻ���Ӧ������ȷλ�þ���i-1*/
      for(j=i-1;j<8;j++)     /*��iӦ������ȷλ�ÿ�ʼ˳�����*/
	 if(b[c[j]]==i&&j!=i-1)      /*��i������ȷ��λ��*/
         {
            b[4]=i;          /*��i�Ƶ����ĵĿո���*/
	    b[c[j]]=0;print();     /*�ճ�iԭ�����ڵ�λ��,���*/
            for(k=j;k!=i-1;k--)    /*���ո���ǰ��i����ȷλ��֮���������������ƶ�һ��*/
            {
	       b[c[k]]=b[c[k-1]];    /*��������ƶ�*/
	       b[c[k-1]]=0;
               print();
            }
	    b[c[k]]=i;         /*���м������i������ȷ��λ��*/
            b[4]=0;            /*�ճ��м�Ŀո�*/
            print();
            break;
         }
	 else if(b[c[j]]==i) break;       /*����i����ȷ��λ��*/
    printf("\n Press any key to quit...");
    getch();
}
void print(void)        /*����ʽҪ���������*/
{
   int c;
   printf(" >> Step No.%2d  ",count++);
   for(c=0;c<9;c++)
      if(c%3==2) printf("%2d  ",b[c]);
      else  printf("%2d",b[c]);
   printf("\n");
}