// 5_�˰���1 - 225 page
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // find, find_if ���� �˰���(������ƴ� �Ϲ��Լ�)
					 // ����� ����.

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int>   s = { 1,6,3,4,5 };

	// �־��� �������� 3�� ã�� �ʹ�.  "�� �˻�"
	auto p1 = std::find(s.begin(), s.end(), 3);

	// �־��� �������� ó�� ������ 3�� ����� ã�� �ʹ�. ?? -227page
	// ���� �˻�!
//	auto p2 = std::find_if(s.begin(), s.end(), foo );

	// C++11 ���� ���� ǥ����(lambda expression)�� �����˴ϴ�.
	// [] : ���� ǥ������ ���۵��� �˸��� ǥ����Դϴ�.
	auto p2 = std::find_if(s.begin(), s.end(), 
							[](int n) { return n % 3 == 0; } );

	std::cout << *p2 << std::endl;
}



