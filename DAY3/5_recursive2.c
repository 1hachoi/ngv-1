// 5_recursive2.c
#include <stdio.h>

// 관례적으로 재귀 호출은
// 1. 반드시 종료 조건이 있어야 합니다.
// 2. 보통은 함수 인자를 사용해서 종료조건을 만들게 됩니다.

void f1(int cnt)
{
	if (cnt == 0) 
		return;   // 종료

	printf("hello\n"); // 기능수행

	f1(cnt - 1); // 재귀 호출. 단, 인자의 변화가 있어야 한다.
}
int main()
{
	f1(5);
}