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
			for (auto p : v) // �ᱹ Shape* p �Դϴ�.
				p->Draw();   // error. p���� Draw �� �����ϴ�.
							 // �ٽ� : Shape* �δ� Shape �� �ִ� ����� ���ٰ���.
							 // 
			// �ذ�å 1. p�� Rect �� Circle �� ĳ������ Draw ȣ��
			//		    ((Rect*)p)->Draw(); 
			//		    �׷���, �ڵ� �ۼ��ô� Rect ���� Circle ���� �˼� ����.
			//			�׷���, ���ڵ忡���� �� �ذ�å�� ����Ҽ� ����.
			//	=> ������������ �ذ�
		}
	}
}
// �� �ڵ�� ��? ��� �����ϱ�� ?
// �ذ�å�� ����� ?


