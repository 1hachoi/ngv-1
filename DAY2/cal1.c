// 지금까지 배운 내용을 "달력"을 만들어 봅시다.
// cal1.c
// 핵심 : 달력 모양으로 출력하기, 
//        % 연산자 사용, "%4d"로 출력
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