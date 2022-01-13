// 2_pointer16.c
#include <stdio.h>

int main()
{
//	int n = 12345678;
	int n = 0x11223344;  // 16진수

	// 포인터 변수의 타입이 가지는 의미
	int   *p1 = &n;
	short *p2 = &n;
	char  *p3 = &n;

	printf("%x\n", *p1); // 11 22 33 44
	printf("%x\n", *p2); // 33 44
	printf("%x\n", *p3); // 44

	// 포인터 변수의 타입의 의미
	// "가리키는 곳에 있는 메모리의 데이타를 
	//  어떻게 해석할것인가 ?(정수, 실수 , 크기등)
}