// 1_reference1.cpp - 41 page
#include <iostream>

// 1. ���� �޸��� ����
// 2. & �򰥸��� ������
//    &n;       // �̹� ������� ���� �տ� & ���̸� �ּҸ� ���ϴ� ��
//   int& r = n;// �� ǥ���� ���۷����� �����ϴ� ��. 

int main()
{
	int n = 10;
	int* p = &n; // ������!

	int& r = n; // ���۷���(reference)��� ����
				// ���� ����(�޸�)�� ���� �� �ٸ� �̸��� �ο�.
	r = 20; // �ᱹ n = 20
	std::cout << &n << std::endl;
	std::cout << &r << std::endl;
}
