#include <stdio.h>

/*
//int square_int(int a)  // C��Ÿ��
int square(int a)
{
	return a * a;
}
// int �� �ƴ϶� double ������ ����� �ʹ�.
// 1. C���� �����̸��� �Լ��� 2�� �̻� ����� ����.
// 2. C++���� ����� �ִ�. 
//double square_double(double a)
double square(double a)
{
	return a * a;
}
*/

#define square(x)   ((x) * (x))

int main()
{
	printf("%d\n", square(3));
	printf("%f\n", square(3.4)); // 9

	int n = 3.4;
}
// ��ũ�� �Լ�
// ���� 
// 1. Ÿ�Կ� �������� �Լ� (�� square)
// 2. ������. �Լ� ȣ���� �ƴ� ���� ġȯ �̹Ƿ�

// ����
// 1. ���װ� ����. ( ���ڷ� ++n ���� �����ϸ� .... )