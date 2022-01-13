// 2_pointer7.c
// 포인터의 사칙연산 - 95 page
#include <stdio.h>

int main()
{
	int n = 10;
	int x[5] = { 1,2,3,4,5 };

	n = n + 1; // 정수는 1을 더하면 1이 증가 합니다.

	printf("%d\n", n );   // n의 값 출력하세요
	printf("%d\n", x[0]); // x 배열의 첫번째 요소 출력하세요
						  // 배열의 요소 접근은 항상 [] 연산자가 필요합니다.

	int *p1 = &n ;   // n의 주소 담으세요
	int *p2 = &x[0]; // x배열의 첫번째 요소 주소 담으세요 <<=== 핵심
	int *p3 = &x[4]; // x배열의 마지막 요소 주소

	printf("%p, %p\n", p2, p2 + 1); // 1000, 1004
									// 포인터에 1증가시 대상체 크기 만큼 증가
//	printf("%p\n", p2 + p3);// error

	printf("%d\n", p3-p2); // 2개의 주소 사이에 있는 
						// 대상체의 갯수
					// 주소차이 / sizeof(대상체)

	printf("%p\n", p3 * p2); // error
	printf("%p\n", p3 * 2);  // error
}






