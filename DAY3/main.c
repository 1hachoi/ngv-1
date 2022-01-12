// main.c ���弼��
#include <stdio.h> // �̸� ��ӵ� ���丮���� �˻�
#include "add.h"   // ���� ���丮 �˻�

int main()
{
	int ret = add(3, 4);

	printf("%d\n", ret);
}

// ������ ������ ���� - 
// gcc main.c   => add�� ��� �ִ��� �𸥴�.
// gcc add.c    => main �Լ��� ��� ����

// 1. �� �ҽ��� ���� �����ϸ� �Ѵ�.
// gcc main.c -c      ==> main.o ����     
//							�̾ȿ��� call "add�� �ּҸ� ä�����Ѵ�."
// gcc add.c  -c      ==> add.o  ����

// cl main.c /c   => main.obj

// dir �ؼ� ���� Ȯ���� ������

// 2. �ΰ��� ��������(.o, .obj)�� �����ؼ� �������� ����
// ld��� ���α׷��ε�.. gcc����� ����ϸ� �ڵ����� ld ����

// 
// gcc main.o add.o     ===> a.exe
//   �ᱹ(ld main.o add.o �̷��� �ϰ� �˴ϴ�.)

// 3. a.exe ����




