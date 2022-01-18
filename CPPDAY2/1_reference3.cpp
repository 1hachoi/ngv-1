#include <iostream>
#include <algorithm> // �� �ȿ� C++ ǥ���� swap �� �ֽ��ϴ�.

// C���� ������ swap
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
// C++���� ������ swap
namespace Util
{
	template<typename T>
	inline void swap(T& r1, T& r2)
	{
		T temp = r1;
		r1 = r2;
		r2 = temp;
	}
}

int main()
{
	int x = 10, y = 20;	
	// C ��� : x,y ���� ����ǰ� �Ϸ��� �Լ� ���ڷ� "�ּ�"�� �����߸��Ѵ�.
	swap(&x, &y);
	Util::swap(x, y);

	std::swap(x, y);

	std::cout << x << std::endl; // 20
	std::cout << y << std::endl; // 10
}
/*
// iostream
namespace std
{
	cout;
}

// algorithm
namespace std
{
	swap()
	//void goo() {}
}

// 10:00 ���� �̾� ���ϴ�.