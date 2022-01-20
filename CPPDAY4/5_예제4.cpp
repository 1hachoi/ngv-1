#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	void setColor(int c) { color = c; } 

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

class Triangle : public Shape
{
public:
	void Draw() { std::cout << "Draw Triangle" << std::endl; }
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
		else if (cmd == 8)
		{
			std::cout << "몇번째 도형의 복사본을 만들까요 >> ";
			int k;
			std::cin >> k; 

			// k번째 만든도형의 복사본을 만들어서 v 에 추가(push_back) 합니다.
			// 그런데, k번째 도형은 어떤 도형일까요 ?
			// 어떻게 코드를 만들어야 할까요 ?
		}
	}
}







