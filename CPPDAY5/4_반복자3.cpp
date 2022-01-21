#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	
	auto p1 = s.begin();
	auto p2 = s.end();   // �������� �ƴ� ������ �������(����������� �����ּ�)...

	*p2 = 10; // ����.. ����ð� ����..

	// end()�� ���� �ݺ��ڴ� �ݵ�� �� �뵵�θ� ����ϼ���
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}



