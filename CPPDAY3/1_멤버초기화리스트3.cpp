// 1_멤버초기화리스트3
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             :x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) :x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

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

