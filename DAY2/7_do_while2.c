// 7_do_while1.c
#include <stdio.h>

int main()
{
	// 1. ����ڿ��� ���� �Ѱ� �Է� �������� ( scanf_s �Լ� �� �ϼ���, �����̸� num )
	// 2. �ԷµȰ��� 10���� ũ�� ( > 10) �ٽ� �Է¹�������
	// 3. �Էµ� ������ ȭ�鿡 ����ϼ���

	// while    : ���ǽ��� ������ ����
	// do~while : ���� �ѹ� ������ ���� ( 54 page �߰� ������)
	// ���� �����ؼ� �Ʒ� �ڵ� do ~ while�� �����ϼ���
	int num = 0;

	//	scanf_s("%d", &num);
	while (num > 10)
	{
		scanf_s("%d", &num);
	}

	printf("%d\n", num);

}