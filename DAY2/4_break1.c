// 4_break1.c - 47 page
#include <stdio.h>

int main()
{
	// �ݺ����� Ż���ϴ� 2���� ���

	// 1. ���ǹ��� �����̸� Ż��
	int cnt = 0;

	while (cnt < 10)
	{
		printf("hello\n");
		++cnt;
	}

	// 2. break ���
	cnt = 0;

	while (1)   // �׻� ���̴�. 
	{
		printf("hello\n");
		++cnt;

		if (cnt == 10)
			break;
	}

	// break : 1) switch - case ���� ���
	//         2) �ݺ����� Ż���Ҷ� ���

	return 0; 
}







