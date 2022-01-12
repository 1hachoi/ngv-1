#include <stdio.h>

// 핵심 1. 컴파일러는 파일의 1번째 줄부터 "한번만" 컴파일 한다.

// 함수의 선언, 정의 호출 - 81page
int add1(int a, int b)
{
	return a + b;
}
int main()
{
	int ret1 = add1(1, 2);
//	int ret2 = add1(1);    // error. add1은 인자가 2개 있어야 한다.

	int ret3 = add2(1, 2); // C언어 ok. C++ 언어 error
							// push 2
							// push 1  인자를 약속한 장소에 넣고
							// call add2함수주소 <== 이부분은 "링커가채워줘!"

	int ret4 = add2(1);    // 원래 C는 허용, C++은 에러
						// 그런데, 2번째 인자를 전달하지 않아 있으므로
						// 인자를 저장하기로 약속된 곳에 있던 쓰레기값을
						// 사용하게 된다. 버그의 원인.
						// 이소스를 VC가 아닌 gcc로 빌드해 보세요		
						// gcc 2_function4.c 
}

int add2(int a, int b)
{
	return a + b;
}
