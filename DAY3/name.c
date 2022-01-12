// name.c
#include <stdio.h>

int num = 10;

int main()
{
	int num = 20;

	// 가까운 이름이 먼 이름을 가리게 됩니다.
	printf("%d\n", num); // 20
//	printf("%d\n", ::num); // 10 .. 전역변수 접근(C++ 코드입니다.)
							// :: =>"scope resolution" 연산자

							// 1. 그런데, 절대 같은 이름 사용하지 마세요!!!
							// 2. 전역변수 자체를 되도록 만들지 마세요
							//  ==> int days[12] 는 전역이어야 되지 않나요 ?
							// C 는 어쩔수 없습니다.(만들때도 있음)
							// C++은 다른 해결책 있습니다.
}