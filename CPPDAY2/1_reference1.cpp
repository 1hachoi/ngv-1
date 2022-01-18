// 1_reference1.cpp - 41 page
#include <iostream>

// 1. 기존 메모리의 별명
// 2. & 헷갈리지 마세요
//    &n;       // 이미 만들어진 변수 앞에 & 붙이면 주소를 구하는 것
//   int& r = n;// 이 표현은 레퍼런스를 선언하는 것. 

int main()
{
	int n = 10;
	int* p = &n; // 포인터!

	int& r = n; // 레퍼런스(reference)라는 개념
				// 기존 변수(메모리)에 대한 또 다른 이름을 부여.
	r = 20; // 결국 n = 20
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;
}
