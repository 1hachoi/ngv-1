// 5_����1 - 152page
#include <iostream>
#include <vector>

// 1. ��� ������ Ÿ��ȭ �ϸ� ���ϴ�.

// 2. ��� Ŭ������ �ִٸ� "��� ������ ��� ����" �Ҽ� �ִ�.
//    ����� "���� Ÿ���� Ȯ���ؼ� ���ο� Ÿ�� ����" �� �ǹ� �� ������
//    Ÿ���� ���� ��� �����Ҷ��� ����Ѵ�.

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
	int x, y, r; // r : ������
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



