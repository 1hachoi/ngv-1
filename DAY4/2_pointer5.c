// 2_pointer5.c
#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;

	// x와 y값을 교환해 보세요
	int temp = x; // 1. 일단 변수를 하나 만들어서 x를 보관한다.
	x = y;
	y = temp;

	printf("%d, %d\n", x, y); // 20, 10 나오게 해보세요

	// 다시 교환하기
	temp = x;
	x = y;
	y = temp;
}
	