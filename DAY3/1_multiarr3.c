#include <stdio.h>

int main()
{
	// ��Ʈ���� �Ѻ�
	int block[4][4] = { {0,0,0,0},
						{0,1,0,0},
						{0,1,1,1},
						{0,0,0,0} };

	// �׷��� Tetris �� 7�� ���� 4���� ȸ���� �����մϴ�.
	// int block[7][4][4][4] : 7�� �� * 4�� ȸ�� * 4*4�� ����Ÿ


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