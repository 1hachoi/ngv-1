// pe.c
#include <stdio.h>

int g1 = 0x11223344;
int g2 = 0x55667788;

int main()
{
	int n1 = 0;
	printf("hello\n");
	int* p1 = malloc(sizeof(int));
	char* s1 = "hello";

	// ���� �ּҵ��� ���� �����ϰ� ���ð� ���� �͵��� ������ ������

	printf("main �ּ� : %p\n", &main);
	printf("���������ּ� : %p\n", &g1);
	printf("��� �޸��ּ� : %p\n", s1);
	printf("�� �Ҵ�޸��ּ� : %p\n", p1);
	printf("���ú����ּ� : %p\n", &n1);
}

