// 3_STL1 - 213 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	// �迭 vs vector
	// ������ : ���ӵ� �޸�, [] �� ��� ����
	// ������ : �迭�� ũ�� ���� �ȵ�
	//		   vector�� ũ�� ���� ����
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	v[0] = 10;
	v.resize(10);  // ũ�� ���� ����

}





