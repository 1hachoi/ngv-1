// 6_double_while1.c - 52 page
#include <stdio.h>

int main()
{
	// ������ ���� : �ڽ��� ������ ���� ����� �ı� ( ���� �ڼ���)
	int n1 = 10;
	{
		int n2 = 10;
	}
	n1 = 20; // ok
//	n2 = 20; // error. n2��� ������ �ı� �Ǿ���



	int j = 1;
	int i = 1;

	while (i <= 9)
	{
		j = 1;        
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;
		}
		++i;
	}





}