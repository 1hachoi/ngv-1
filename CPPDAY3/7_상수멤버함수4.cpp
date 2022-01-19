#include <iostream>
#include <vector>

class Test
{
	int data = 0;
public:
	// 1. ���� �̸��� ��� ��� �Լ��� ���� ����� ���ÿ� ��������
	void foo()       { std::cout << "foo()"       << std::endl; } // 1
	void foo() const { std::cout << "foo() const" << std::endl; } // 2
};
int main()
{
	// ��� ������ ������
	Test t1;        
	t1.foo();		// 1.   ������ 2�� ȣ��

	const Test t2;
	t2.foo();		// 2.   ���ٸ� error

	std::vector<int>       v1 = { 1,2,3 };
	const std::vector<int> v2 = { 1,2,3 };

	// �Ʒ� 2�� ������ ������
	v1[0] = 10; // v1.operator[](0) �Դϴ�.
	v2[0] = 10; // error. v2.operator[](0) �Դϴ�.
	int n = v2[0]; // ok

	// ��, ���   vector �� "operator[]" �Լ��� ��ȯ����
	// ��, ���� vector �� "operator[]" �Լ��� ��ȯ���� ���°� �ٸ��ϴ�.

}

// 2:05 �п� �̾����ϴ�.
