// 6_���������1
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
	// ���� ������ : Point pt(�ڽŰ�����Ÿ�԰�ü)�� ���鶧 ����ϴ� ������
	// ����ڰ� ������ ������ �����Ϸ��� �Ʒ� �ڵ� ����
	// => �ϴ����� ��� ����� ���� �� �ݴϴ�.
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "���������" << std::endl;
	}
};
int main()
{
	// �Ʒ� 4���� ������ ������
	Point p1;		// ok
//	Point p2(1);	// error.. Point(int) ����� �����ڰ� ����.
	Point p3(1,2);	// ok
	Point p4(p3);	// ok.. �� ������ ������ ?
					// ���� "Point(Point)" �� �����ڰ� �ֽ��ϴ�.
					// => ����ڰ� ������ ������ �����Ϸ��� ������ �ݴϴ�
}
// 92 page �Դϴ�.

// 3:00 ���� �̾����ϴ�.
