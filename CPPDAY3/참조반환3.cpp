#include <iostream>
// ������ȯ1
struct Point
{
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};
Point pt = { 1,2 }; // ������ü(����)

Point& f2()
{				
	return pt;
}
//-------------
Point& f3()
{
	Point p(1, 2);
	return p; // � ���� ? - ���� �̷��� �ϸ� �ȵ˴ϴ�.
				// ���������� ������ȯ �Ҽ� �����ϴ�.
				// �ı����� �ʴ� ��ü�� ���� ��ȯ �ؾ� �մϴ�.
				// �׷��� �� ���� "return by value" �ؾ� �մϴ�.
}

int main()
{

}






