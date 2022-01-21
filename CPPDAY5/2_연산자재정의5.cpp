// 2_연산자재정의5 - 1번복사..
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};
int main()
{
	int n = 10;
	Point p(1, 1);

	std::cout << n; // ok
	std::cout << p; // ?
}




