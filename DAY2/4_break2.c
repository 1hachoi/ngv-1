// 4_break2.c
#include <stdio.h>

// 1. ����ڰ� -1�� �Է��Ҷ� ���� ��� ������ �Է¹޾Ƽ�
// 2. �Էµ� ��� ������ ���� ����� ������
// 3. -1�� �տ� ���������� ������

// break ������� ����, scanf_s() �Լ��� �غ�����
// ��� 1. break �� ������ 
int main()
{
	// 1. ������ � �ʿ� �Ѱ��� ? �߻����ϼ���.
	int num = 0; // �Է°� ����
	int sum = 0; // ���� ������ ����

	/*
	while ( num != -1 )
	{
		scanf_s("%d", &num);

		if ( num != -1 )
			sum += num;
	}
	*/
	while (num != -1)
	{
		sum += num;

		scanf_s("%d", &num);

//		if (num != -1)
//			sum += num;
	}



	printf("�� : %d\n", sum);

	return 0;
}




