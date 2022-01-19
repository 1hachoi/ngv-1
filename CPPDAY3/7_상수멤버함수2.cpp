// 7_�������Լ�1.cpp - 119 page
#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	// ��� ��� �Լ� ���� (const member function )
	// ��� �Լ� () �ڿ� const�� ���̴� ����
	// �ش� �Լ������� ����� ���� �������� �������̶�� �����Ϸ����� �˷��ִ°�
	void print() const 
	{
	//	x = 0;  // error. ��� ����Լ� ������ ����� �� ���� �ȵ˴ϴ�.
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	const Point p(0, 0);

	p.x = 10;      // error. x�� public �� ������ ��� �̹Ƿ� 120page
	p.set(10, 20); // error.  
	p.print();     // ok.. 
				// �ٽ� : �����ü�� "��� ��� �Լ��� ȣ���Ҽ� �ִ�"
}


