// 2_pointer15.c - 97 page
#include <stdio.h>

int main()
{
	char c = 10;
	int n = 10;
	double d = 3.4;

	char *p1 = &c;
	int  *p2 = &n;
	double *p3 = &d;

	// �Ʒ� 6�� �ڵ� ��� �����ϼ���
	printf("%d\n", sizeof(c)); // 1
	printf("%d\n", sizeof(n)); // 4
	printf("%d\n", sizeof(d)); // 8
	printf("%d\n", sizeof(p1)); // 8
	printf("%d\n", sizeof(p2)); // 8
	printf("%d\n", sizeof(p3)); // 8

	// ��� Ÿ���� ������ ������ ũ�Ⱑ �����ϴ�.!
}


