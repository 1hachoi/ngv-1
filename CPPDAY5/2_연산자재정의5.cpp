// 2_������������5 - 1������..
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




