// 1_if2.c
#include <stdio.h>

int main()
{
	int score1 = 30;
	int score2 = 90;

	// 조건문을 만드는 다양한 표기법 - 38 page
//	if (score1 > 30)  // 30은 포함 안됨. 따라서 거짓
//	if (score1 >= 30) // 30 포함
//	if (score1)       // 변수 이름만 넣은 경우, 0이면 거짓, 0이 아니면 참.
					  // python 등의 일부 언어는 지원 안함
//	if ( score1 == 40) // 상등비교
//	if ( score1 != 40) // 상등비교	
//	if ( score1 = 40)  // 주의!!!, 대입후, score1 조사 하므로 항상 참.
//	if ( 40 == score1)  // 안전한 코드를 위해 이렇게 비교 하자.
						// 실수로 "==" 대신 "=" 하면 에러이다.
	if ( !score1)       // score1이 0 이면 참
	{
		printf("true\n");
	}

	// 짝수, 홀수 조사 - 38 page 아래.
	if ( score1 % 2 == 0 )
		printf("짝수\n");

	// 2개 이상의 조건을 조사 : && ||    => 39 page
//	if (score1 >= 30 && score2 >= 90)  // 둘다 참이면 참
	if (score1 >= 30 || score2 >= 90)  // 둘중에 하나라도 참이면 참
	{
	}

	// 아래 코드의 실행결과 예측해 보세요
	score1 = 90;
	score2 = 30;
//	if (score1 >= 95 && ++score2 > 20)  // ++score2실행안됨
//	if (score1 >= 85 && ++score2 > 20)  // ++score2실행됨  ( 40page아래)
//	if (score1 >= 95 || ++score2 > 20) // ++score2실행됨
	if (score1 >= 85 || ++score2 > 20) // ++score2실행안됨
	{
	}

	printf("%d\n", score2); // 1. 30    2. 31

	// 일부 언어는 조건식에서 ()를 사용하지 않습니다.
//	if score1 > 10:			// python, swift 등..
//	{
//	}


	return 0;
}
// 11:05 분에 시작.!



