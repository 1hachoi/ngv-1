// 2_pointer8.c - 104 page.. �迭�� ������
#include <stdio.h>

int main()
{
	int x[5] = { 1,2,3,4,5 };	

	// �迭�� ��Ҹ� �����ϴ� ��� 1. [] ������
	x[0] = 10;

	// ��� 2. �迭�� 1��° ����� ���� �ּҸ� �˸� ��� ��� ���ٰ����մϴ�.
	int *p = &x[0]; 

	*p = 10;
//	*p + 1 = 20; // error. �� �ڵ�� ���������� 1������ = 20
	*(p+1) = 20;  // p�� ����ؼ� 2��° ��ҿ� �־� ������
	*(p+4) = 30;  // �������� �־� ������

	// �ٽ� 2. �����͵� �迭ó��[] �˴ϴ�.
	p[1] = 10; // *(p+1) = 10

	// �ٽ� 3. �迭�� ������ ó�� * �˴ϴ�.
	*(x + 1) = 10; // x[1] = 10
	
	// 104 page �ڵ�
}

// ���� ������ 13:00  ���� �̾����ϴ�.



