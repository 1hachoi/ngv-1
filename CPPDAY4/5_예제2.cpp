#include <iostream>
#include <vector>

class Shape {};

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
		: x(x), y(y), r(r) 	{ }

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
			v.push_back(new Rect(1,1,10,10) );

		else if (cmd == 2)
			v.push_back(new Circle(1,1,10));

		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();
		}
	}
}
// 위 코드는 왜? 어디서 에러일까요 ?
// 해결책은 뭘까요 ?


