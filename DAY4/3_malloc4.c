#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	printf("�л��� �Է��� �ּ��� >> ");
	scanf("%d", &count);

	// 1. �л��� ��ŭ �޸� �Ҵ��� ��� �л��� ���� �Է� ��������
	int* score = (int*)malloc(sizeof(int) * count); //�ٽ� count ���� ��밡��

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i] ); // score�� ������ ���� �迭ó�� ��밡��.
	}

	// 2. �Էµ� ��� �л��� ������� ��� �ϼ���.

	int sum = 0;
	for (int i = 0; i < count; i++)
		sum += score[i];

	printf("average : %d\n", sum / count);

	// 3. ������������ �ݵ�� �Ҵ�� �޸𸮴� ���� �ϼ���..

	free(score);
}

