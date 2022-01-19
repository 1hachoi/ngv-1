// 7_상수멤버함수1.cpp - 119 page
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// 상수 멤버 함수 문법 (const member function )
	// 멤버 함수 () 뒤에 const를 붙이는 문법
	// 해당 함수에서는 멤버의 값을 변경하지 않을것이라고 컴파일러에게 알려주는것
	void print() const 
	{
	//	x = 0;  // error. 상수 멤버함수 에서는 멤버의 값 변경 안됩니다.
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(0, 0);

	p.x = 10;      // error. x는 public 에 있지만 상수 이므로 120page
	p.set(10, 20); // error.  
	p.print();     // ok.. 
				// 핵심 : 상수객체는 "상수 멤버 함수만 호출할수 있다"
}


