#include <iostream>
// 6_this1- 126    126 page 그림만 정확히 이해해 두세요.
class Point
{
	int x;
	int y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{
		x = a;		// this->x = a;
		y = b;		// this->y = b;
		std::cout << this << std::endl;

//		(*this).x = 10; == p1.x = 10
	}
};
int main()
{
	Point p1;
	Point p2;
	p1.set(10, 20); // set(&p1, 10, 20) 
	p2.set(10, 20);

	std::cout << &p1 << std::endl;
	std::cout << &p2 << std::endl;
}