// 5_�˰���1 - 225 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// �����̳ʿ��� 3�� ã�� ���� ������ ���ô�.
//	s.find(3); // ���� ����.
//	v.find(3); // java style

	// STL ������ STL ���� �����ϴ� ��κ��� �ֿ� �Լ��� 
	// ��� �Լ��� �ƴ� �Ϲ� �Լ� �Դϴ�.
	// �˻� ���� : ��Ҹ� ����Ű�� �ݺ���
	// ���н�    : ������ ���� �ݺ���(past the end)

	// find ���� ��� �� �ƴ� �Լ�(���ø�)���� STL���� "�˰���"�̶�� �մϴ�.
	auto p1 = std::find(s.begin(), s.end(), 3);
	auto p2 = std::find(v.begin(), v.end(), 3);

	if (p1 == s.end())
	{
		std::cout << "�˻� ����" << std::endl;
	}
	else
	{
		std::cout << "���� : " << *p1 << std::endl; // 3
	}
}
// STL 3�� ��� : Container, Iterator, Algorithm(find ���� ����� �ƴ��Լ���)



