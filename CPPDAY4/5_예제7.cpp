#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }

	
//	virtual void Draw() {} // �̷��� �ϸ�
							// �Ļ� Ŭ������ �ݵ�� ���� �ʿ�� ����.
							// ������ ������ ������ ���� �ְڴٴ� ��

	virtual void Draw() const = 0; // �̷��� �ϸ� �ݵ�� ������ ���� �Դϴ�
	virtual Shape* Clone() const = 0;
};


class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h)
	{
	}
	void Draw() const override { std::cout << "Draw Rect" << std::endl; }

	Rect* Clone() const override
	{
		Rect* p = new Rect(x, y, w, h); // ���� ���� ���
		return p;
	}
};


class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r)
	{

	}
	void Draw() const override { std::cout << "Draw Circle" << std::endl; }

	Circle* Clone() const override
	{
		Circle* p = new Circle(x, y, r);
		return p;
	}
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

			v.push_back(v[k]->Clone()); 

		}
	}
}





