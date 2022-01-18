// 시나리오 2. Sub.h 와 Sub.cpp 로 함수를 분리해놓은 경우

// main2.cpp
#include "Sub.h"

int main()
{
	int n = Sub(10, 3);
}

// g++ main2.cpp  => sub 함수를 찾을수 없다는 에러.

// g++ main2.cpp sub.cpp  => ok.