#include <stdio.h>

int main()
{
	int j = 1;
	int i = 1;

	// 중첩된 반복문을 한번에 탈출하기
	int flag = 0;

	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;

			if (j == 5)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
		++i;
	}

	/*
	// C#, swift
	NAME1 while (조건)
	{
		NAME2 while (조건)
		{
			break NAME1;
		}
	}
	*/


}