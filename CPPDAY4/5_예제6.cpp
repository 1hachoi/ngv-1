#include <iostream>
#include <vector>


class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }

	// �ڽ��� ���纻�� ����� �����Լ��� �׻� �����ϰ� Ȱ��ɼ� �ֽ��ϴ�.
	virtual Shape* Clone()
	{
		Shape* p = new Shape;
		p->color = color;
		return p;
	}
};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h)
	{
	}
	void Draw() { std::cout << "Draw Rect" << std::endl; }

	virtual Shape* Clone()
	{
		Rect* p = new Rect(x, y, w, h); // ���� ���� ���
		return p;
	}
};
// Clone()�� �ǹ̴� �Ʒ� 2���� ������ ������
// Rect* p1 = new Rect(1,1,10,10);
// Rect* p2 = p1->Clone();



class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r)
	{
	
	}

	void Draw() { std::cout << "Draw Circle" << std::endl; }

	virtual Shape* Clone()
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

			v.push_back( v[k]->Clone() ); // ������ Ȱ��
											// OCP �����ϴ� �ڵ�
										// �̷��� �ٸ� ������ �߰��Ǿ
										// �� �ڵ�� ������ �ʿ� ����.!

		}
	}
}







