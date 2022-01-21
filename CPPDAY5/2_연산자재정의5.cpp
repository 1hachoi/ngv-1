// 2_연산자재정의5 - 1번복사..
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	int n = 10;
	Point p(1, 1);

	std::cout << p << n; // operatror<<(cout, p)


	std::cout << n; // ok  cout.operator<<(int)
	std::cout << p; // ?   cout.operator<<(Point) 이 필요하다.
					// 그런데, cout 의 타입인 ostream 은 이미 만들어져 있다
					// 사용자가 수정할수 없다.
					// 1. cout.operator<<(Point) ==> 현실적으로 만들수 없다.
					// 2. operator<<(cout, p) 즉
					//    operator<<(ostream, Point)
}




