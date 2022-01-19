#include <iostream>

class Car
{
	int speed;
	static int cnt;  
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // ��ü�� �־�߸� ȣ�� ������ ����Լ�
									// c1.get_count() ó�� ��ü�� �־�� �Ѵ�
	static int get_count() { return cnt; } // static ��� �Լ�
									// ��ü�� ��� ȣ�Ⱑ���մϴ�.
									// Car::get_count()�� ȣ��
};
int Car::cnt = 0; // private ����� �ܺ� ����� �ʱ�ȭ�� ���˴ϴ�.

int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1, c2;

	std::cout << c1.get_count() << std::endl; 
	std::cout << Car::get_count() << std::endl; // 2
}









