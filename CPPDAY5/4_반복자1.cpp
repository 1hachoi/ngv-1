// 4_�ݺ���1 - 220 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	std::list<int> s = { 1,2,3,4,5 };

	int* p1 = x; // �迭�� 1��° ����� �ּҸ� �˸� ��� ��ȸ�Ҽ� �ֽ��ϴ�.


	// STL �� ��� �����̳ʴ� �ݺ��ڸ� ������ ��� ��ȸ �Ҽ� �ֽ��ϴ�.
	auto p2 = s.begin();

	// �ݺ���(iterator)�� �����Ϳ� ������ �����մϴ�.
	std::cout << *p2 << std::endl; // 1
	++p2;
	std::cout << *p2 << std::endl; // 2
}



