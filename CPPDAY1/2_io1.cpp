// 2_io1.cpp - 12 page
#include <cstdio>   // C 입출력함수  printf
#include <iostream> // C++ 입출력

int main()
{
	int n = 10;

	printf("%d\n", n); // C 출력
	std::cout << "n = " << n << std::endl; // C++ 출력
								// "\n";
		// 1. << 를 여러번 사용가능
		// 2. "%d" 등의 포맷 지시어 필요없다.
		// 3. 개행은 "\n" 또는 std::endl 
		// printf    : 함수
		// std::cout : "객체" 라는 개념

	// 표준 입력은 std::cin 입니다.
	scanf_s("%d", &n); // 
	std::cin >> n;     // 핵심 1. >> 연산자
						//     2. 주소가 아닌 변수이름만 표기.
}

