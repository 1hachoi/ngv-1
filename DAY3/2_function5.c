#include <stdio.h>

// 함수를 호출하기 전에 함수의 이름과 모양을 알려주면
// 컴파일러가 컴파일 할때 함수 정보를 알수 있다.
// 그래서, 호출시 잘못 사용하는 것을 정확히 확인할수 있게 된다.
// 이것을 "함수의 선언" 이라고 합니다.
// int add2(int a, int b);
int add2(int, int); // 선언시는 타입만 알려주면 되고, 변수명은 생략해도 됩니다.

// 함수를 선언할때는
// 1. 소스의 위쪽에 놓습니다.
// 2. 또는 별도의 헤더 파일로 분리합니다. => 오후에..



// 함수의 선언, 정의 호출 - 81page
int add1(int a, int b)
{
	return a + b;
}
int main()
{
	int ret1 = add1(1, 2);
	//	int ret2 = add1(1);    // error. add1은 인자가 2개 있어야 한다.

	int ret3 = add2(1, 2); 
	int ret4 = add2(1);   
}

int add2(int a, int b)
{
	return a + b;
}
