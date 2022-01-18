// 2_OOP1 - 57
#include <iostream>

// OOP 핵심 1. 프로그램에서 필요한 타입을 먼저 설계해라.
//			2. 그리고, 타입을 사용해서 코드를 작성해라.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
}; //<= 주의, 구조체 만들때 세미콜론 필요 합니다.


int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void drawRect(const Rect& rc)
{
	std::cout << "Draw Rect" << std::endl;
}
int main()
{
	Rect rc = { 1,1,10,10 };

	int n = getRectArea(rc);
}
// C 언어  : 타입 만들때 "위의 Rect" 처럼만 만들수 있습니다.
// C++언어 : 타입 만들때 보다 안전하고, 편리하게 사용할수 있는 보다 많은 문법제공
//			C 구조체 문법 + "추가 문법 제공"

// 11:10 분 부터 이어 집니다.