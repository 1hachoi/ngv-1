#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	int type; // � �������� �����ϱ� ���� ��� ����Ÿ

	void setColor(int c) { color = c; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};



class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) 
	{
		type = 1;
	}

	void Draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r) 
	{
		type = 2;
	}

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
		else if (cmd == 8)
		{
			std::cout << "���° ������ ���纻�� ������ >> ";
			int k;
			std::cin >> k;

			// C ������ ǳ���� �����ںе��� ���� �ϴ� ����
			// �� �ڵ带 ���� ������ !
			// ���ο� ���� �߰��� �ڵ����(�߰�)�Ǿ�� �մϴ�.
			// "OCP"�� �������� �ʽ��ϴ�.
			switch (v[k]->type)
			{
			case 1: v.push_back(new Rect(1, 1, 10, 10)); break;
			case 2: v.push_back(new Circle(1, 1, 5)); break;
			}

		}
	}
}







