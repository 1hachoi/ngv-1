// 1_if1.c
// ���� : ctrl + F5 
// vs ���� "scanf" ��� "scanf_s" �� ����϶�� ������ �ֽ��ϴ�.
#define _CRT_SECURE_NO_WARNINGS  // �׳� scanf�� ����ϰڴٴ� �ǹ�.
#include <stdio.h>

int main()
{
	int score = 0;
	
	printf("������ �Է��� �ּ��� >> ");
	scanf("%d", &score);

	// 1. �⺻ ���
//	if (score >= 70) {
//		printf("pass\n");
//	}


	// 2. ������ ������ �Ѱ���� {} ���� ����. - 35 page
//	if (score >= 70) 
//		printf("pass\n");


	// 3. ���� �ƴ� ���
/*
	if (score >= 70)
		printf("pass\n");
	else {
		printf("fail\n");
		printf("����� ������\n"); // ������ ������ �ϳ���� {} ��������.
	}
*/
	// 4. ��ø�� if ��
	if (score < 70)
	{
		printf("fail\n");

		if (score > 50)
		{
			printf("������ȸ�� �ֽ��ϴ�.\n"); // 50 ~ 70 ������ ���
		}
	}

	// 5. ���� ������ ���� : if ~ else if ~ else
	if (score > 70)
	{
		printf("70 �ʰ�\n");
	}
	else if (score > 50)
	{
		printf("50 �ʰ�\n");
	} 
	else
	{
		printf("50 ����\n");
	}



	
	printf("�̹����� �׻� ����˴ϴ�\n");
	return 0;
}


