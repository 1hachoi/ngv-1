#include <iostream>
#include <algorithm> // 이 안에 C++ 표준의 swap 이 있습니다.

// C언어로 구현한 swap
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
// C++언어로 구현한 swap
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
	// C 언어 : x,y 값을 변경되게 하려면 함수 인자로 "주소"를 보내야만한다.
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

// 10:00 부터 이어 집니다.