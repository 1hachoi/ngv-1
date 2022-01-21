// 2_������������5 - 1������..
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& pt);
};
std::ostream& operator<<(std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y;
	return os;
}

int main()
{
	int n = 10;
	Point p(1, 1);

	std::cout << p << n; // operatror<<(cout, p)


	std::cout << n; // ok  cout.operator<<(int)
	std::cout << p; // ?   cout.operator<<(Point) �� �ʿ��ϴ�.
					// �׷���, cout �� Ÿ���� ostream �� �̹� ������� �ִ�
					// ����ڰ� �����Ҽ� ����.
					// 1. cout.operator<<(Point) ==> ���������� ����� ����.
					// 2. operator<<(cout, p) ��
					//    operator<<(ostream, Point)
}




