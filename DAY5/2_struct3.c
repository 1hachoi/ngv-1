#include <stdio.h>

struct Point
{
	int x;
	int y;

};

int main()
{
	int n = 0;
	// 1. 초기화 방법 - 배열 처럼 {} 사용
	struct Point p1; // 초기화 안한 경우
	struct Point p2 = { 1, 2 };

	// 2. 멤버 접근 : . 과 -> 사용
	p2.x = 10;
	p2.y = 20;

	struct Point *p = &p2;

	p->x = 10;
	(*p).x = 10; // 위와 동일 합니다.


}