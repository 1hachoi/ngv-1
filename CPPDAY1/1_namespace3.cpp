// 1_namespace3.cpp - 9 page
#include <algorithm> // 이 안에 다양한 C++ 표준 함수 제공
#include <stdio.h>
using namespace std;  // 초보시절에 많이 사용

int count = 0;

int main()
{
	int ret1 = std::min(10, 3); // C++ 표준 함수
						// 모든 C++ 표준은 "std" namespace 에 있습니다
	int ret2 = min(10, 3);

	printf("%d\n", count); // 왜 에러일까요 ?? 원인은 ??
						// 표준에 std::count()라는 함수가 있습니다.
						// "using namespace std" 때문에
						// 전역변수count 와 표준의 count()함수가 이름 충돌.
					
}