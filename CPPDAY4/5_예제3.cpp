#include <iostream>
#include <vector>

// 핵심 3. 모든 파생 클래스의 공통의 특징은 반드시 기반 클래스에 있어야 한다.
//         모든 도형을 "그릴수 있다" 면 반드시 Draw() 는 Shape 에도 있어야 한다.

// 핵심 4. 파생 클래스가 재정의(override) 하게 되는 모든 멤버 함수는
//		   반드시 "가상함수(virtual)"로 해야 한다.

class Shape 
{
public:
	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) {}

	void Draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r) { }

	void Draw() { std::cout << "Draw Circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect(1, 1, 10, 10));

		else if (cmd == 2)
			v.push_back(new Circle(1, 1, 10));

		else if (cmd == 9)
		{
			for (auto p : v) 
				p->Draw();   
		}
	}
}



