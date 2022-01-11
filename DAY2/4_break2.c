// 4_break2.c
#include <stdio.h>

// 1. 사용자가 -1을 입력할때 까지 계속 정수를 입력받아서
// 2. 입력된 모든 정수의 합을 출력해 보세요
// 3. -1은 합에 포함하지는 마세요

// break 사용하지 말고, scanf_s() 함수로 해보세요
// 방법 1. break 가 없을때 
int main()
{
	// 1. 변수가 몇개 필요 한가요 ? 잘생각하세요.
	int num = 0; // 입력값 보관
	int sum = 0; // 합을 보관할 변수

	/*
	while ( num != -1 )
	{
		scanf_s("%d", &num);

		if ( num != -1 )
			sum += num;
	}
	*/
	while (num != -1)
	{
		sum += num;

		scanf_s("%d", &num);

//		if (num != -1)
//			sum += num;
	}



	printf("합 : %d\n", sum);

	return 0;
}




