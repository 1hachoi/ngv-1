#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = {1,2,3,4,5};
	// �ݺ��ڸ� ��� ��� 
	// 1. ��� �Լ�
//	auto p1 = s.begin();
//	auto p2 = s.end();   // s�� raw array ��� �����̴�.


	// 2. ��� �� �ƴ� �Ϲ� �Լ� begin - C++11����
	auto p1 = std::begin(s);	// s�� raw array �̸� �迭�� 1��°����ּ�
								// auto �� int*
	auto p2 = std::end(s);

	// ����
	std::vector<int> v = { 1,2,3 };

	auto p3 = std::begin(v);
	auto p4 = begin(v); // std:: ��� ���� �����ϴ�.
						// ���� : ����(v) �� ���� �̸������� �ڵ� �˻��Ǵ±��
						//			�� �ֽ��ϴ�.

	// ����
	auto n = v.front(); //ù��° ��� ������.  1

	// ���� Ÿ���� �˰� ������ �Ʒ� ó�� �ϸ� �˴ϴ�.
	// RTTI ( 176 page ~ )
	std::cout << typeid(n).name() << std::endl;  // int
	std::cout << typeid(p3).name() << std::endl; 
				// std::vector<int>::iterator �ε�.. ���� �����ϰ� ���ɴϴ�.

}
// 2:05�� ���� �̾����ϴ�.


