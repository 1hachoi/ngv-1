// 2_pointer5.c
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	// x�� y���� ��ȯ�� ������
	int temp = x; // 1. �ϴ� ������ �ϳ� ���� x�� �����Ѵ�.
	x = y;
	y = temp;

	printf("%d, %d\n", x, y); // 20, 10 ������ �غ�����

	// �ٽ� ��ȯ�ϱ�
	temp = x;
	x = y;
	y = temp;
}
	