// 4_break2.c
#include <stdio.h>

// break 를 사용하는 경우.
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

	printf("합 : %d\n", sum);

	return 0;
}




