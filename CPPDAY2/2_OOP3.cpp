#include <iostream>

// C 보다 좋은 C++ 구조체
// 1. 구조체에 함수를 포함 할수 있다.

// C 언어 : 상태를 나타내는 데이타(구조체)와 데이타를 조작하는 함수가 분리되어 있다.
//         항상 함수 인자로 데이타(구조체)를 받아야 한다.

// C++ : 상태를 나타내는 데이타와 상태를 조작하는 함수를 묶자.

struct Rect
{
	// 멤버 데이타( 또는 필드(field))
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수( 또는 메소드(method))
	int getArea() {	return (right - left) * (bottom - top);	}
	void draw()   {	std::cout << "Draw Rect" << std::endl;	}
}; 
int main()
{
	Rect rc = { 1,1,10,10 };

//	int n = getRectArea(rc); // C 스타일
	
	int n = rc.getArea();// C++ 스타일


	// 주의 : 객체(변수)생성시 멤버 데이타는 객체당 한개 이지만
	//	     멤버 함수는 객체의 갯수에 상관없이 한개씩만 놓이게 됩니다.
	Rect r1 = { 1,1,2,2};  // r1용 left,top, right, bottom 이 생성
	Rect r2 = { 1,1,2,2 }; // r2용 left,top, right, bottom 이 생성
					// 하지만, 멤버 함수는 한개만.. r1, r2가 모두 공유. 
}





