#include <iostream>
// 파일 분할 - 125 page
// Point.h
class Point
{
public:
	int x, y;
	Point(int a, int b);
	void set(int a, int b);
	void print() const;
};
// Point.cpp
#include "Point.h"

Point::Point(int a, int b) : x(a), y(b) {}

void Point::set(int a, int b)
{
	x = a;
	y = b;
}
void Point::print() const
{
	std::cout << x << ", " << y << std::endl;
}


int main()
{
}


