// 2_������������1 - 182 
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// ������ ���� ���� ���� �ڵ�� ?
	Point p3 = Add(p1, p2);  // 1
	Point p4 = p1.Add(p2);   // 2
	Point p5 = p1 + p2;      // 3
}
