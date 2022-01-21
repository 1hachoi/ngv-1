// 2_연산자재정의1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	// 이항연산자를 멤버 함수로 구현하면 인자는 한개가 됩니다.
	Point operator+(const Point& p)
	{
		std::cout << "멤버함수로 만든 operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
};


int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)   를 검색
						 // 2. operator+(p1, p2)  를 검색

}
