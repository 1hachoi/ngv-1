#include <iostream>

class Point
{
	int x;
	int y;
public:
	// ���� this�� Ȱ���ϳ��� ?
	void set(int x, int y) 
	{
		// 1. ���� �̸��浹���� �߻��ؼ�, ����� �����ϴ� ���� ��Ȯ�� �ϰ� ������
		this->x = x;		
		this->y = y;		
	}
	// 2. this �� ��ȯ�ϴ� �Լ��� ���� ���˴ϴ�.
	Point* foo() { return this;  }
	Point& goo()  { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20); // set(&p1, 10, 20)

	// Ư�� ��� �Լ��� �����ؼ� ȣ���Ҽ� �ִ�.
	p1.goo().goo().goo();
	p1.foo()->foo()->foo();
	std::cout << "A" << "B" << std::endl;	
	std::cout.operator<<("A").operator<<("B").operator<<(std::endl);

	Point* p = &p1;

	// ����� �����Ϸ��� 
	// x �� public �̶�� �Ʒ� 2���� ������ ����
//	p->x = 10;
//	(*p).x = 10;

}








