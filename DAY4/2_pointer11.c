#include <stdio.h>

// �迭�� ���� �ɼ� �����Ƿ� error
void foo( int a, double b, int y[3]) // error
{
}

int main()
{
	int n = 10;
	double d = 3.4;
	int x[3] = { 1,2,3 };

	// �Լ��� n, d, x �� �����ϰ� �ͽ��ϴ�.
	foo(n, d, x); // error
}