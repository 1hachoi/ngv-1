#include <stdio.h>

// 배열은 복사 될수 없으므로 error
void foo( int a, double b, int y[3]) // error
{
}

int main()
{
	int n = 10;
	double d = 3.4;
	int x[3] = { 1,2,3 };

	// 함수에 n, d, x 를 전달하고 싶습니다.
	foo(n, d, x); // error
}