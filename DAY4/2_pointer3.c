// 2_pointer3.c
// �� �����͸� ����ϳ��� ?? => 100
#include <stdio.h>
// call by value
void inc1(int x)
{
	++x;
}

int main()
{
	int n = 10;

	inc1(n);

	printf("n : %d\n", n); // �������� ���� ��� ������ ������
					       // �޸� �׸� �׸�����.
}