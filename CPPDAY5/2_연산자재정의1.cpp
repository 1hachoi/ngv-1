// 2_연산자재정의1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 다음중 가장 보기 좋은 코드는 ?
	Point p3 = Add(p1, p2);  // 1
	Point p4 = p1.Add(p2);   // 2
	Point p5 = p1 + p2;      // 3
}
