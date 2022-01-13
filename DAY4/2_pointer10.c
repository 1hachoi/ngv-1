// 2_pointer10.c - 105 page
#include <stdio.h>

int main()
{
	int    n1 = 10;
	double d1 = 3.4;

	// 핵심 1. 모든 변수는 자신과 동일 타입변수로 초기화 될수 있다
	int    n2 = n1;
	double d2 = d1;

	// 핵심 2. 배열은 자신과 같은 타입으로 복사 될수 없다.
	//		   배열은 메모리 사용량이 많으므로 함부로 복사할수 없게 하기위해
	int x[3] = { 1,2,3 };
//	int y[3] = x; // ? 될까요 ? error.

}