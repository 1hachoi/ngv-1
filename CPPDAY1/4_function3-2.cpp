#include <iostream> 

// typename �Ǵ� class ����. ������ ����
/*
//template<typename T>
template<class T>	// ���� �Ϻ��� �����մϴ�.(typename�� �������� ǥ���)
T square(T a)
{
	return a * a;
}
*/
// C++17 : �Լ� ���ڷδ� auto �� ����Ҽ� ����.
// C++20 : �Լ� ���ڷ� auto ��밡��. �Ʒ� �ڵ�� ���ڵ�� ����
//		   ��, �Ʒ� �ڵ�� "�Լ��� �ƴ϶� template �Դϴ�."
auto square(auto a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);

	auto a = 3; // ������ �ϸ� "int a = 3" ���� ����˴ϴ�.
}



// 2:05 ���� �̾����ϴ�.

