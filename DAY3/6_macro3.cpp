#include <stdio.h>

/*
//int square_int(int a)  // C스타일
int square(int a)
{
	return a * a;
}
// int 뿐 아니라 double 버전도 만들고 싶다.
// 1. C언어는 동일이름의 함수를 2개 이상 만들수 없다.
// 2. C++언어는 만들수 있다. 
//double square_double(double a)
double square(double a)
{
	return a * a;
}
*/

#define square(x)   ((x) * (x))

int main()
{
	printf("%d\n", square(3));
	printf("%f\n", square(3.4)); // 9

	int n = 3.4;
}
// 매크로 함수
// 장점 
// 1. 타입에 독립적인 함수 (위 square)
// 2. 빠르다. 함수 호출이 아닌 문자 치환 이므로

// 단점
// 1. 버그가 많다. ( 인자로 ++n 등을 전달하면 .... )