// 7_do_while1.c
#include <stdio.h>

int main()
{
	// 1. 사용자에게 정수 한개 입력 받으세요 ( scanf_s 함수 로 하세요, 변수이름 num )
	// 2. 입력된값이 10보다 크면 ( > 10) 다시 입력받으세요
	// 3. 입력된 정수값 화면에 출력하세요

	// while    : 조건식을 조사후 실행
	// do~while : 먼저 한번 실행후 조사 ( 54 page 중간 보세요)
	// 교재 참고해서 아래 코드 do ~ while로 변경하세요
	int num = 0;

	//	scanf_s("%d", &num);
	while (num > 10)
	{
		scanf_s("%d", &num);
	}

	printf("%d\n", num);

}