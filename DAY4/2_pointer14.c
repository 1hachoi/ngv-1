// 2_pointer14.c - 105page 아래 부분이야기
#include <stdio.h>

int main()
{
	double d = 3.4;
	int n = d;

	printf("%d\n", sizeof(n)); // 4
	printf("%d\n", sizeof(d)); // 8

	int x[5] = { 1,2,3,4,5 };

	int *p = x; // x는 배열이지.. 주소가 아닙니다.
				// 그런데, 좌변이 포인터 변수가 있으면 &x[0] 으로 변경가능한것.

	printf("%d\n", sizeof(p)); // 8
	printf("%d\n", sizeof(x)); // 20

	p = &n; // ok...  p는 주소를 담는 변수이므로 당연한 코드
	x = &n; // error. x는 포인터 변수가 아닌 배열입니다.
			// x[0] = 정수값 으로만 값을 넣을수 있습니다.
			// x 자체는 변경될수 없습니다.(상수)
}






