// 7_do_while1.c
#include <stdio.h>

int main()
{
	// 1. 사용자에게 정수 한개 입력 받으세요 ( scanf_s 함수 로 하세요, 변수이름 num )
	// 2. 입력된값이 10보다 크면 ( > 10) 다시 입력받으세요
	// 3. 입력된 정수값 화면에 출력하세요

	// 아래 처럼 하면은 최초 1회의 입력이 실행안됨니다.
	// 1. num 을 10이상의 값으로 초기화 하거나
	// 2. while 에 들어가기 전에 먼저 한번 scanf_s 실행
	int num = 0;

//	scanf_s("%d", &num);
	while (num > 10)
	{
		scanf_s("%d", &num);
	}

	printf("%d\n", num);

}