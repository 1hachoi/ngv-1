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
	
	friend Point operator+(const Point& p1, const Point& p2);
};
// 일반 함수로 구현한 operator+
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "멤버가 아닌 operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)   를 검색
						 // 2. operator+(p1, p2)  를 검색
	// 멤버가 좋은 가요 ? 멤버가 아닌 함수가 좋은가요 ?
	// ==> 개발자 성향에 따라 다릅니다.
	// ==> 그런데, 멤버로 만들수 없을때가 있습니다
	int n = 10;
	Point p5 = p1 + p2; // p1.operator+(Point)
	Point p6 = p1 + n;  // p1.operator+(n)
	Point p7 = n  + p1; // n.operator+(Point) 로 할수는 없다.
						// operator+(int, Point)로 해야 한다.
	// 즉, 
	// "primitive type + user type" 은 멤버가 아닌 함수로 해야 한다.

	// boiler plate : 유사한 코드를 계속 만드는 것을 부르는 용어
}







