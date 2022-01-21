// 4_반복자1 - 220 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };
	std::list<int> s = { 1,2,3,4,5 };

	int* p1 = x; // 배열은 1번째 요소의 주소만 알면 모두 순회할수 있습니다.


	// STL 의 모든 컨테이너는 반복자만 꺼내면 모두 순회 할수 있습니다.
	auto p2 = s.begin();

	// 반복자(iterator)는 포인터와 사용법이 유사합니다.
	std::cout << *p2 << std::endl; // 1
	++p2;
	std::cout << *p2 << std::endl; // 2
}



