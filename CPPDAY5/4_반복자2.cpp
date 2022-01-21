// 4_�ݺ���1 - 220 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// list �� vector �� �޸� ������ ������ �ٸ��ϴ�.
	// ������ �ݺ��ڸ� ������ ������ ���(++)���� ���� �Ҽ� �ֽ��ϴ�.
	auto p1 = s.begin();
	auto p2 = v.begin();

	// p1, p2�� ���� ���� �մϴ�.
	// �����ͷ� �����ϸ� �˴ϴ�.
	++p1;
	++p2;

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;	

	// �ݺ���(iterator)�� ������ ö�� : ��� �����̳ʸ� �����ϰ� ����
	//===============================
	// �ݺ��� Ÿ�� - ���� �մϴ�.
	std::vector<int> v2 = { 1,2,3 };

	std::vector<int>::iterator p3 = v2.begin(); // ��Ȯ�� ���
											// C++98 �������� �̷��� ���
											// 221 page�� ��
	// ������ ��κ� ��ó�� ���� �ʰ� auto ���
	

}



