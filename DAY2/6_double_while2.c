#include <stdio.h>

int main()
{
	int j = 1;
	int i = 1;

	// 중첩된 반복문의 탈출(break)
	while (i <= 9)
	{
		j = 1;    
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;

			if (j == 5)
				break; // 1) 반복문을 모두 탈출
						// 2) inner loop 만 탈출
		}
		++i;
	}





}