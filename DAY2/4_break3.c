// 4_break2.c
#include <stdio.h>

// break �� ����ϴ� ���.
int main()
{	
	int num = 0; 
	int sum = 0; 

	while (1)
	{
		scanf_s("%d", &num);

		if (num == -1)
			break;

		sum += num;
	}

	printf("�� : %d\n", sum);

	return 0;
}




