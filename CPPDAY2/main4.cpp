// square.h 만드세요
// extern "C" : C++ 컴파일러에게 현재 함수가 C로 만들어진 함수라고
//			   알려주는 지시어.

// C와 C++에서 모두 사용하는 헤더는 아래 처럼 작성되어야 합니다.
// 모든 C++ 컴파일러에는 "__cplusplus" 가 정의 되어 있습니다.

#ifdef __cplusplus
extern "C" {
#endif 

	int square(int a);

#ifdef __cplusplus
}
#endif 

// name mangling : C++ 컴파일러가 함수이름을 엉망으로 변경하는 현상
//		함수 오버로딩을 지원하기 위해.  godbolt.org에서 꼭 확인해보세요.

// g++ -x c square.c  -x cpp main.cpp



// square.c  만드세요. 반드시 .c 로 하세요
int square(int a)
{
	return a * a;
}

// main4.c => 반드시 .c로 하세요
#include "square.h"

int main()
{
	square(3);
}
// g++로 컴파일 방법 생각해 보세요.
// g++ main4.c square.c

