#include <stdio.h>

#define MAX 256		       // ��ũ�� ���
#define SQUARE(x)  x * x   // ��ũ�� �Լ�
#define SQUARE2(x)  ((x) * (x))   //�ִ��� ()�� ���� ����ض�!

int main()
{
	int arr[MAX];

	int n = 3;
//	int ret = SQUARE(n);   // n * n
//	int ret = SQUARE(n+1); // n + 1 * n + 1    �̹Ƿ� �߸��� ���
//	int ret = SQUARE2(n + 1); // ((n + 1) * (n + 1)) �̹Ƿ� 16!!
	int ret = SQUARE2(++n);   // ((++n) * (++n))

	printf("%d\n", ret);
}

