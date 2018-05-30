/*
�ó���ʵ��ͳ��һ�������ļ����������������ַ�����
һ������һ�����з��޶���һ�����ɿո�ָ��������հ׷����Ʊ����ͻ��з�����
�ַ���ָ�ļ��е������ַ���Ҫ���������������ѡ�Ĳ�����
���û�ָ������Ҫ��ͳ�ơ������ǣ�
1 ͳ���ļ�����
w ͳ���ļ�����
c ͳ���ļ��ַ���
���û�δָ����ѡ�Ĳ��������ʾ����ͳ�ƶ�Ҫ��
���б�����ʱ�Ĳ�����һ�¸�ʽ������
-l -w -c �ļ� �ļ� ... �ļ�
���У�ǰ������ѡ����l��w��c�ĳ������ͳ���˳�����⣬
�����������һ����֣��磺-lwc��-cwl��-lw��-wl��-lc��-cl����cw�ȡ�
*/
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv )
{
	FILE *fp;
	int lflg,wflg,cflg; //* l, w, c������־ */
	int inlin;
	int inword;//* ���ں����ڱ�־ */
	int ccount,wcount,lcount; //* �ַ����֣��� ������ */
	int c;
	char *s;
	lflg=wflg=cflg=0;
	if(argc<2)
	{
		printf("To run this program, usage: program -l -w -c file1 file2 ... filen \n");
		exit(0);
	}
	while(--argc>=1&&(*++argv)[0]=='-')
	{
		for(s=argv[0]+1;*s!='\0';s++)
		{
			switch(*s)
			{
				case 'l': 
					lflg=1;
					break;
				case 'w':
					wflg=1;
					break;
				case 'c':
					cflg=1;
					break;
				default:
					puts("To run this program, usage: program -l -w -c file1 file2 ... filen");
					exit(0);
			}
		}
	}
	if(lflg==0&&wflg==0&&cflg==0)
		lflg=wflg=cflg=1;
	lcount=wcount=ccount=0;
	while(--argc>=0)
	{
		if((fp=fopen(*argv++,"r"))==NULL)	/* ��ֻ����ʽ���ļ� */
		{
			fprintf(stderr,"Can't open %s.\n",*argv);
			continue;
		}
		inword=inlin=0;
		while((c=fgetc(fp))!=EOF)
		{
			if(cflg)
				ccount++;
			if(wflg){
				if(c=='\n'||c==' '||c=='\t')
				inword=0;
			}
			else if(inword==0){
				wcount++;
				inword=1;
			}
			if(lflg){
				if(c=='\n')
					inlin=0;
			}
			else if(inlin==0){
				lcount++;
				inlin=1;
			}
		}
		fclose(fp);	/* �ر��ļ� */
	}
	if(lflg)
		printf(" Lines =         %d\n",lcount);
	if(wflg)
		printf(" Words =         %d\n",wcount);
	if(cflg)
		printf(" Characters =    %d\n",ccount);
}