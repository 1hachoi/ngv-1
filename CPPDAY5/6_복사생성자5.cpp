// 6_���������5
// 6_���������1
#include <iostream>

// 1. �����ڸ� �Ѱ��� ������ ������ "����Ʈ ������ ����"
// 2. ���� �����ڸ� ������ ������ "���� ������" ����
class Point
{
	int x = 0, y = 0;
public:
	Point() {}
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "���������" << std::endl;
	}
};
// call by value �� ���� �����ڸ� ȣ���ϴ� ǥ����̴�.
// void f1(Point pt) {} // Point pt = p1;

// const reference �� ��ü������ �ƴϴ�. ���� ������ ȣ�� �ȵ�.
void f1(const Point& pt) {} // const Point& pt = p1;

Point pt;

Point foo()
{
	return pt; // �̼����� �ڵ��
				// Point ���Ͽ��ӽð�ü(pt);
				// return �ӽð�ü
}

int main()
{
	Point p1;
//	Point p2(p1);

	f1(p1);


}

