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
			std::cout << "���° ������ ���纻�� ������ >> ";
			int k;
			std::cin >> k; 

			// k��° ���絵���� ���纻�� ���� v �� �߰�(push_back) �մϴ�.
			// �׷���, k��° ������ � �����ϱ�� ?
			// ��� �ڵ带 ������ �ұ�� ?
		}
	}
}







