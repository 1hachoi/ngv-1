#include <stdio.h>

int main()
{
	// 테트리스 한블럭
	int block[4][4] = { {0,0,0,0},
						{0,1,0,0},
						{0,1,1,1},
						{0,0,0,0} };

	// 그런데 Tetris 는 7개 블럭의 4가지 회전이 가능합니다.
	// int block[7][4][4][4] : 7개 블럭 * 4개 회전 * 4*4의 데이타


	for (int y = 0; y < 4; ++y)
	{
		for (int x = 0; x < 4; ++x)
		{
			if (block[y][x] == 1)
				printf("*");
			else
				printf(" ");
		}

		printf("\n");
	}


}