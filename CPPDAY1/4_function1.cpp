// 4_function1.cpp - 28page..
// C �Լ� ���� ������ ����
#include <iostream>

// default parameter
// ���� 1. �Լ��� ����� �������� �и��Ҷ���, ���𿡸� ǥ���ؾ� �Ѵ�.
// ���� 2. ������ ���ں��� ���ʴ�� �����ؾ� �Ѵ�.

// void f2(int a = 0, int b, int c = 0) {} // error
// void f3(int a, int b = 0, int c    ) {} // error

void f1(int a, int b = 0, int c = 0);  // �Լ��� ����

int main()
{
	f1(1, 2, 3); // 1, 2, 3
	f1(1, 2);	 // 1, 2, 0
	f1(1);		 // 1, 0, 0
}
void f1(int a, int b /*= 0*/, int c /*= 0*/)
{
	std::cout << a << ", " << b << ", " << c << std::endl;
}


