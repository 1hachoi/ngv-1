#include <stdio.h>

int main()
{
	int j = 1;
	int i = 1;

	// ��ø�� �ݺ����� Ż��(break)
	while (i <= 9)
	{
		j = 1;    
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;

			if (j == 5)
				break; // 1) �ݺ����� ��� Ż��
						// 2) inner loop �� Ż��
		}
		++i;
	}





}