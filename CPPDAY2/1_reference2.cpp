// 1_reference2.cpp  - 43 page 입니다.
#include <iostream>

void inc1(int  n) { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 10, b = 10, c = 10;

	inc1(a); // call by value, a의 값은 변경안됨
	inc2(&b);// call by pointer, b의 값 변경됨.
	inc3(c); // call by reference. c의 값 변경 

	std::cout << a << std::endl; // 10
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}



