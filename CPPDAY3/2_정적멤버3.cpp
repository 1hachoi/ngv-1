#include <iostream>

// static ��� ����Ÿ�� �ᱹ "���������ڸ� ��밡���� ��������" �Դϴ�.
// 1. ��ü�� ��� �޸𸮿� ���δ�.
// 2. ��ü ������ static �� �ƴѰ͸� ��ü�޸𸮿� ���Եȴ�.

class Car
{
	int speed;
public:
	static int cnt;  // static member data(������� ����Ÿ)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static ��� ����Ÿ�� �ݵ�� Ŭ���� �ܺο��� ���� �Ǿ�� �մϴ�. �ʱ�ȭ�� ���⼭
int Car::cnt = 0;

int main()
{
	// ���⼭ �ڵ��� ���� ����� ������.
	std::cout << Car::cnt << std::endl; // 0

	Car c1, c2;

	// static ��� ����Ÿ ���� ��� 2����(public �� �ִ� ���)
	// 1. ��ü �̸����� ����
	// 2. Ŭ���� �̸����� ����
	// 1, 2 ��� ���������� �������� ���ؼ��� "Ŭ�����̸�::" �� �����ϼ���!
	// java, C# �� �ٸ� ���� "Ŭ�����̸�::"���θ� �����մϴ�.
	std::cout << c1.cnt   << std::endl; // 2 
	std::cout << Car::cnt << std::endl; // 2
}









