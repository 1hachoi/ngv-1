// 3_global2.c
#include <stdio.h>
int g;// = 0; // ���������� �ʱⰪ�� �������� ������ 0���� �ڵ��ʱ�ȭ
			  // �˴ϴ�.
			  // ���������� �����Ⱚ 
int main()
{
	int a, b, c, d, e, f, g, h, i;
	printf("%d\n", g);
	int n1 = 0;
	int n2;

	printf("%d\n", g); // 0
	printf("%d\n", n2); //  �����Ⱚ

	printf("�������� n1�� �ּ� : %p\n", &n1);
	printf("�������� n2�� �ּ� : %p\n", &n2);
	printf("�������� g�� �ּ� : %p\n", &g);
	printf("main�Լ��� �ּ�  :%p\n", &main); // �Լ��� �ּҰ� �ֽ��ϴ�.

}
// ���� : 115 �׸� ����

