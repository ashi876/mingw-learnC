

/*
  ִ�������������
    $ make ex1
  �����ִ�У�
    $ ./ex1
  ʹ��������
    $ CFLAGS="-Wall" make ex1
  ������棺
    warning: implicit declaration of function ��puts�� ...
  ��ȥ������͵����ͷ�ļ�
   #include <stdio.h>

  TODO:
  ɾ����������ֵ����ⲿ�֣����뿴����ʲô����
  ���ӡ�����ı�
  �鿴man puts

����Ϊԭע�ͣ�
���£�
makefile�����¿ο�ʼ����
*/

#include <stdio.h>
#include <stdlib.h> //û���������ʹ��pause��һϵͳ���ע�͵����п���
int main(int argc, char *argv[])
{
  (system("pause"));//������ͣ
  puts("hello world");
  puts("�����ĵ�ѡ��936�����ansi����");
  (system("pause"));//ѧϰ��ͣ����
  return 0;
}
