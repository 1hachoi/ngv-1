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
	Point p3 = Add(p1, p2);  // 1 C style
	Point p4 = p1.Add(p2);   // 2 java ����
	Point p5 = p1 + p2;      // 3 C++ Style

	// a + b
	// 1. a �� b�� ��� primitive type �̸� "�׳� ��������"
	// 2. a �� b�� �Ѱ��� user type �̸�
	//	  1. a.operator+(b)  �� ã��,, 
	//    2. ������ operator+(a, b)
}
