#include <stdio.h>

// call by value : �Լ� ���ڷ� �� ����, �Լ� �ȿ��� � ���� �ص�
//					main ���� ������ ������ ���� ������� �ʴ´�.

// call by reference : �Լ� ���ڷ� ������ �ּ� ����,
//					�Լ��� main ���� ������ ������ ���� �����Ҽ� �ִ�.

// �����͸� ����ϴ� ����
// 1. �Լ����� ���ڷ� ���޵� ������ �����ϰ� ������!!!

void inc1(int *p)
{
//	++p; // �ּ� ��ü�� ����
	++(*p); // ���� ���� ++
}

int main()
{
	int n = 10;

//	inc1(n);  // �� ����
	inc2(&n); // �ּ� ����

	printf("n : %d\n", n); 
}