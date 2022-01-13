// 2_pointer3.c
// 왜 포인터를 사용하나요 ?? => 100
#include <stdio.h>
// call by value
void inc1(int x)
{
	++x;
}

int main()
{
	int n = 10;

	inc1(n);

	printf("n : %d\n", n); // 실행하지 말고 결과 예측해 보세요
					       // 메모리 그림 그리세요.
}