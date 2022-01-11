// 5_continue1.c
#include <stdio.h>

int main()
{
	int cnt = 0;

	while (cnt < 10)
	{
		printf("%d\n", cnt); // 여기는 항상 실행

		++cnt;

		if (cnt % 2 == 1)
		{
			printf("홀수 인 경우만 여기를 실행하고 싶다.\n");
		}
	}
	//-------------------
	cnt = 0;

	while (cnt < 10)
	{
		printf("%d\n", cnt); // 여기는 항상 실행

		++cnt;

		if (cnt % 2 == 0)
			continue; // 반복문의 처음(조건식)으로 이동합니다.

		printf("홀수 인 경우만 여기를 실행하고 싶다.\n");
	}
	return 0;
}



