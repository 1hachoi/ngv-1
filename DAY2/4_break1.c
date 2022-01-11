// 4_break1.c - 47 page
#include <stdio.h>

int main()
{
	// 반복문을 탈출하는 2가지 방법

	// 1. 조건문이 거짓이면 탈출
	int cnt = 0;

	while (cnt < 10)
	{
		printf("hello\n");
		++cnt;
	}

	// 2. break 사용
	cnt = 0;

	while (1)   // 항상 참이다. 
	{
		printf("hello\n");
		++cnt;

		if (cnt == 10)
			break;
	}

	// break : 1) switch - case 에서 사용
	//         2) 반복문을 탈출할때 사용

	return 0; 
}







