#include <iostream>
// ������ȯ1
struct Point
{
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};

Point pt = { 1,2 }; // ������ü(����)

Point f1()  // return by value
{
	return pt; // pt�� ������ �ӽð�ü�� �����ǰ�
		 	// �� �ӽð�ü�� ��ȯ�˴ϴ�.
			// 1. �ӽð�ü�� ������ �Լ� ȣ���� �ϴ� ������ ������ �ı� �˴ϴ�.
			// 2. �ӽð�ü�� ��ȣ�� ���ʿ� ���ϼ� ���ٴ� Ư¡�� �ֽ��ϴ�.
}

Point& f2()  // return by reference : ���Ͽ� �ӽð�ü�� ������ ����
{				//						pt ��ü�� ��ȯ�� �޶�.
	return pt;
}

int main()
{
//	f1().x = 10; // error. �ӽð�ü�� =�� ���ʿ� �ü� �����ϴ�.(lvalue �ƴ�)
//	f1();

//	f2();

	f2().x = 10; // ok. ok.. pt.x = 10 �� �ǹ�.

	std::cout << pt.x << std::endl;
	std::cout << "---------------------" << std::endl;
}






