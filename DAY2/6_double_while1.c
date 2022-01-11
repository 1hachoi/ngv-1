// 6_double_while1.c - 52 page
#include <stdio.h>

// 구구단을 만들어 봅시다.

int main()
{
	int j = 1;
	int i = 1;
	
	// 반복문의 반복 ( 중첩된 반복문 )
	// 1. 반복문을 다시 반복하는 코드
	// 2. 
	while (i <= 9)
	{
		// 반복할 문장!!
		j = 1;         // 핵심. 안쪽 반복을 위한 변수를 반드시 reset 되어야 한다.
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;
		}
		++i;
	}





}