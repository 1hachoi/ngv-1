#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0;
	printf("학생수 입력해 주세요 >> ");
	scanf("%d", &count);

	// 1. 학생수 만큼 메모리 할당후 모든 학생의 점수 입력 받으세요
	int* score = (int*)malloc(sizeof(int) * count); //핵심 count 변수 사용가능

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i] ); // score는 포인터 지만 배열처럼 사용가능.
	}

	// 2. 입력된 모든 학생의 평균점수 출력 하세요.

	int sum = 0;
	for (int i = 0; i < count; i++)
		sum += score[i];

	printf("average : %d\n", sum / count);

	// 3. 끝나기전에는 반드시 할당된 메모리는 제거 하세요..

	free(score);
}

