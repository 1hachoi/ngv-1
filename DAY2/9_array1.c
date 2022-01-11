// 9_array1.c
#include <stdio.h>

int main()
{
	// 1. 사용자에게 2개의 정수를 입력받아 보세요(변수이름 n1, n2로)
	int n1 = 0, n2 = 0;

	scanf_s("%d", &n1);
	scanf_s("%d", &n2);

	// 2. 5개 정수를 입력 받아 보세요.
	int a, b, d, e, f;

	// 5번 scanf()를 실행해야 하므로 반복문을 사용할수 없을까요 ?
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", ? ); // 일반 변수를 사용하면 ?를 채울수 없다.
	}
}