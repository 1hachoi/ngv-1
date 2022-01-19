#include <iostream>

class Car
{
	int speed;		// �Ϲ� ��� ����Ÿ(non static member data)
					// ��ü�� �Ѱ��� �����˴ϴ�.
					// �ٸ� ���� "�ν��Ͻ� �ʵ�" ��� �մϴ�.
public:
	static int cnt; // static ��� ����Ÿ
					// ��� ��ü�� ����,
					// �ٸ� ���� class �ʵ�, static �ʵ� ��� �մϴ�.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::cnt << std::endl; // 0

	Car c1, c2;

	std::cout << c1.cnt << std::endl; // 2 
	std::cout << Car::cnt << std::endl; // 2
}









