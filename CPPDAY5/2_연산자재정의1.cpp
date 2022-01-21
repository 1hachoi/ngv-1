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
	Point p3 = Add(p1, p2);  // 1 C style
	Point p4 = p1.Add(p2);   // 2 java 진영
	Point p5 = p1 + p2;      // 3 C++ Style

	// a + b
	// 1. a 와 b가 모두 primitive type 이면 "그냥 덧셈수행"
	// 2. a 와 b중 한개라도 user type 이면
	//	  1. a.operator+(b)  를 찾고,, 
	//    2. 없으면 operator+(a, b)
}
