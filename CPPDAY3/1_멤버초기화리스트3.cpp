// 1_����ʱ�ȭ����Ʈ3
#include <iostream>

// �ٽ� 1. ��ü�� �����ϸ�
//		A. ��� ����Ÿ�� �����ڰ� ���� ȣ��ǰ�( ptFrom, ptTo)
//		B. �ڽ�(Rect)�� ������ �� ȣ��ȴ�

// 2. 

class Point
{
	int x, y;
public:
//	Point()             :x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) :x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

Point p1;
Point p2(0, 0);


class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	Rect() { std::cout << "Rect()" << std::endl; }
};

int main()
{
	Rect r; // �����, ȭ�� ��°�� ������ ������
}

