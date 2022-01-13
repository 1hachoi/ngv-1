#include <stdio.h>

// call by value : 함수 인자로 값 전달, 함수 안에서 어떤 일을 해도
//					main 에서 전달한 변수의 값은 변경되지 않는다.

// call by reference : 함수 인자로 변수의 주소 전달,
//					함수가 main 에서 전달한 변수의 값을 수정할수 있다.

// 포인터를 사용하는 이유
// 1. 함수에서 인자로 전달된 변수를 수정하고 싶을때!!!

void inc1(int *p)
{
//	++p; // 주소 자체의 증가
	++(*p); // 따라간 곳을 ++
}

int main()
{
	int n = 10;

//	inc1(n);  // 값 전달
	inc2(&n); // 주소 전달

	printf("n : %d\n", n); 
}