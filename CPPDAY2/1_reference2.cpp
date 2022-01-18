// 1_reference2.cpp  - 43 page �Դϴ�.
#include <iostream>

void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value, a�� ���� ����ȵ�
	inc2(&b);// call by pointer, b�� �� �����.
	inc3(c); // call by reference. c�� �� ���� 

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}



