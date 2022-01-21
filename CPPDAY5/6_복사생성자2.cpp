// 6_복사생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}
};

int main()
{
	// 모든 객체는 생성될때 "생성자"가 호출 되어야 합니다.
	Point p1;		// 디폴트 생성자 호출
	Point p2(p1);	// 컴파일러가 제공한 복사 생성자 사용
	Point p3 = p1;  // Point p3(p1) 과 동일 합니다. 역시 복사 생성자 사용

	p3 = p2; // p3.operator=(p1) 이 필요 합니다.
}

// special member function : 사용자가 만들지 않으면 컴파일러가 제공하는 것들
//					컴파일러 제공 버전이 하는일
// 디폴트 생성자 : 하는 일 없다.
// 소멸자		: 하는 일 없다.
// 복사생성자	: 하는 일 있다. 모든 멤버를 복사해준다.
// 대입연산자	: 하는 일 있다. 모든 멤버를 대입해준다.

