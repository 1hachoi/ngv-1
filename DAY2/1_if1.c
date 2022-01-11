// 1_if1.c
// 빌드 : ctrl + F5 
// vs 사용시 "scanf" 대신 "scanf_s" 를 사용하라는 에러가 있습니다.
#define _CRT_SECURE_NO_WARNINGS  // 그냥 scanf를 사용하겠다는 의미.
#include <stdio.h>

int main()
{
	int score = 0;
	
	printf("점수를 입력해 주세요 >> ");
	scanf("%d", &score);

	// 1. 기본 모양
//	if (score >= 70) {
//		printf("pass\n");
//	}


	// 2. 실행할 문장이 한개라면 {} 제외 가능. - 35 page
//	if (score >= 70) 
//		printf("pass\n");


	// 3. 참이 아닌 경우
/*
	if (score >= 70)
		printf("pass\n");
	else {
		printf("fail\n");
		printf("재시험 보세요\n"); // 실행할 문장이 하나라면 {} 생략가능.
	}
*/
	// 4. 중첩된 if 문
	if (score < 70)
	{
		printf("fail\n");

		if (score > 50)
		{
			printf("재시험기회가 있습니다.\n"); // 50 ~ 70 사이인 경우
		}
	}

	// 5. 가장 복잡한 형태 : if ~ else if ~ else
	if (score > 70)
	{
		printf("70 초과\n");
	}
	else if (score > 50)
	{
		printf("50 초과\n");
	} 
	else
	{
		printf("50 이하\n");
	}



	
	printf("이문장은 항상 실행됩니다\n");
	return 0;
}


