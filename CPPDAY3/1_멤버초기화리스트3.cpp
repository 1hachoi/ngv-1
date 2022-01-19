// 1_멤버초기화리스트3
#include <iostream>

// 핵심 1. 객체를 생성하면
//		A. 멤버 데이타의 생성자가 먼저 호출되고( ptFrom, ptTo)
//		B. 자신(Rect)의 생성자 가 호출된다

// 2. 

class Point
{
	int x, y;
public:
//	Point()             :x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) :x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

Point p1;
Point p2(0, 0);


class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};

int main()
{
	Rect r; // 실행시, 화면 출력결과 예측해 보세요
}

