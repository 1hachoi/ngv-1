// ���ݱ��� ��� ������ "�޷�"�� ����� ���ô�.
// cal1.c
// �ٽ� : �޷� ������� ����ϱ�, 
//        % ������ ���, "%4d"�� ���
#include <stdio.h>

int main()
{
	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 1; i <= 31; i++)
	{
		printf("%4d", i);

		if (i % 7 == 0)
			printf("\n");
	}
}