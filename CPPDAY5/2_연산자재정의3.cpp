// 2_������������1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
	
	// ���׿����ڸ� ��� �Լ��� �����ϸ� ���ڴ� �Ѱ��� �˴ϴ�.
	Point operator+(const Point& p)
	{
		std::cout << "����Լ��� ���� operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
	
	friend Point operator+(const Point& p1, const Point& p2);
};
// �Ϲ� �Լ��� ������ operator+
Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "����� �ƴ� operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2;  // 1. p1.operator+(p2)   �� �˻�
						 // 2. operator+(p1, p2)  �� �˻�
	// ����� ���� ���� ? ����� �ƴ� �Լ��� �������� ?
	// ==> ������ ���⿡ ���� �ٸ��ϴ�.
	// ==> �׷���, ����� ����� �������� �ֽ��ϴ�
	int n = 10;
	Point p5 = p1 + p2; // p1.operator+(Point)
	Point p6 = p1 + n;  // p1.operator+(n)
	Point p7 = n  + p1; // n.operator+(Point) �� �Ҽ��� ����.
						// operator+(int, Point)�� �ؾ� �Ѵ�.
	// ��, 
	// "primitive type + user type" �� ����� �ƴ� �Լ��� �ؾ� �Ѵ�.

	// boiler plate : ������ �ڵ带 ��� ����� ���� �θ��� ���
}







