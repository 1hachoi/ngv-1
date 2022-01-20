// 5_예제1 - 152page
#include <iostream>
#include <vector>

// 1. 모든 도형을 타입화 하면 편리하다.

// 2. 기반 클래스가 있다면 "모든 도형을 묶어서 관리" 할수 있다.
//    상속은 "기존 타입을 확장해서 새로운 타입 설계" 의 의미 도 있지만
//    타입의 군을 묶어서 관리할때도 사용한다.

class Shape {};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h)      
	{
	}
	void Draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape
{
	int x, y, r; // r : 반지름
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r)
	{
	}
	void Draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() 
{
//	std::vector<Rect*> v1;
//	std::vector<Circle*> v2;

	std::vector<Shape*> v;
}



