#include <stdio.h>

// �����͸� ����ϴ� ���� 2.
// �迭�� �Լ� ���ڷ� �������� �迭�� 1��° ����� �ּҸ� ������ ����ۿ� ����.
// �迭�� �Լ��� �����Ҷ��� :�迭�� 1��°����� �ּҿ� ������ �����ؾ� �մϴ�.
void foo(int *p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", p[i]); // �Ǵ� *(p + i)
	}
}
int main()
{
	int x[3] = { 1,2,3 };
	int y[5] = { 1,2,3,4,5 };

	foo(&x[0], 3);
	foo(&y[0], 5);

	foo(x, 3); // pointer13.c �ҽ� ����.
	foo(y, 5);
}


// 2:00 ���� �̾����ϴ�.

