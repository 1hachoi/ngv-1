// 5_continue1.c
#include <stdio.h>

int main()
{
	int cnt = 0;

	while (cnt < 10)
	{
		printf("%d\n", cnt); // ����� �׻� ����

		++cnt;

		if (cnt % 2 == 1)
		{
			printf("Ȧ�� �� ��츸 ���⸦ �����ϰ� �ʹ�.\n");
		}
	}
	//-------------------
	cnt = 0;

	while (cnt < 10)
	{
		printf("%d\n", cnt); // ����� �׻� ����

		++cnt;

		if (cnt % 2 == 0)
			continue; // �ݺ����� ó��(���ǽ�)���� �̵��մϴ�.

		printf("Ȧ�� �� ��츸 ���⸦ �����ϰ� �ʹ�.\n");
	}
	return 0;
}



