#include <iostream>

class Animal
{
public:
	int age;
};
class Dog : public Animal {};
class Cat : public Animal {};

//void NewYear(Dog* p) // Dog �� ó���ϴ� �Լ�
void NewYear(Animal* p) // ����(��� ����, Animal �Ļ� Ŭ����)�� ó���ϴ� �Լ�
{
	++(p->age);
}
int main()
{
	Dog d;
	Cat c;
	NewYear(&d);
	NewYear(&c);

//	Dog* woori[4]; //  Dog ��ü 4���� �ּҸ� ������ �ִ�.
	Animal* woori[4]; // ��� ������ ���� 4���� �ּҸ� ��� �迭!
					// ������ �����ϴ� �����̳�(�������� ��� ����)�� �����.

	woori[0] = &d;
	woori[1] = &c;
}

// 9:35 �п� �̾����ϴ�.