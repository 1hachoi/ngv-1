// 4_function1.cpp - 28page..
// C 함수 보다 발전된 문법
#include <iostream>

// default parameter
// 주의 1. 함수를 선언과 구현으로 분리할때는, 선언에만 표기해야 한다.
// 주의 2. 마지막 인자부터 차례대로 지정해야 한다.

// void f2(int a = 0, int b, int c = 0) {} // error
// void f3(int a, int b = 0, int c    ) {} // error

void f1(int a, int b = 0, int c = 0);  // 함수의 선언

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


