#include <stdio.h>
#include <stdlib.h>
main()
{
	char fname[80];/*�����ļ���*/
	FILE *rfp;
	long count;/*�ļ��ַ�������*/

	system("cls");
	printf("Please input the file's name:\n");
	scanf("%s",fname);
	if((rfp=fopen(fname,"r"))==NULL)
	{
		printf("Can't open file %s.\n",fname);
		exit(1);
	}
	count=0;
	while(fgetc(rfp)!=EOF)
		count++;
	fclose(rfp);/*�ر��ļ�*/
	printf("There are %ld characters in file %s.\n",count,fname);
	puts("\n Press any key to quit...");
	getch();
}