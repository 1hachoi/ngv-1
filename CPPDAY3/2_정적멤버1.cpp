// 2_�������1 - 110page
#include <iostream>

// �ڵ����� ��볪 ����� ������ ������ �˰� �ʹ�
// �����ڿ��� ++, �Ҹ��� -- �ϸ� ���� ������ ?
// ��� 1. ��� ����Ÿ cnt ���
//        => ��� ����Ÿ�� ��� ��ü�� ������ �����ȴ�.
//		  => Car ��ü�� ������ �����Ҽ��� ����.
class Car
{
	int speed;
public:
	int cnt;

	Car() : cnt(0) { ++cnt; }
	~Car()         { --cnt; }
};

int main()
{
	Car c1, c2;

	std::cout << c1.cnt << std::endl;
}