// ��ü ���� : Ÿ���� ���� ������
// ����      : �̹� ������� Ÿ���� ����ϸ� "�ڵ� ����"�� �ִ�ȭ �Ҽ� �ִ�
#include <iostream>
#include <vector>    
// STL : Standard Template Library
//       C++ ǥ�ؿ��� �����ϴ� 
//	     �̸� ������� "�Լ�" + "Ŭ����" �� �θ��� ���
//	     ��κ��� "���ø�"���� �����Ǿ� �ֽ��ϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::cout << v.size()     << std::endl; // ũ��         5
	std::cout << v.capacity() << std::endl; // �޸� ��뷮 5


	v.push_back(9); // ���� �Ѱ�(��9)�� �߰�

	std::cout << v.size()     << std::endl; // ũ��          6
	std::cout << v.capacity() << std::endl; // �޸� ��뷮  7
}

// 3:20 �� ���� �̾����ϴ�.

// v[3] = 