/*
��ʽ�����: printf���

ִ������ : make
���˵����

1. ͷ�ļ�stdio.h�У�������printf����
2. age����������Ϊ��10��intΪ��������
3. height����������Ϊ72��ͬ����int
4. printf������ӡ����������
5. printf�к��и�ʽ��ռλ��: %d�������ᱻ�滻��

printf���еĸ�ʽ����ռλ����ת�����п�README�ļ���

TODO��

�����ܵ��޸�������룬�ڱ����ʱ�������������ϸ��������ʾ��
ִ��man 3 printf�����ĵ�����Ϥ������ռλ��
ɾ��Makefile�ļ����Լ�����дһ��������ex3


*/

#include <stdio.h>
#include <stdlib.h>//����std��Ӹ�libô���Ҽ�ס��������ˣ�����ϵͳ����ļһ�

int main()
{
	int age = 12;
	int height = 50;
	printf("I'm %d years old\n", age);//�Ҳ�������%d�����������ͣ�age�ڶ��ź��ʾ������
	printf("I'm %d inches tall\n", height);
	system("pause");//�����Ͳ���һ��������
	return 0;
}
