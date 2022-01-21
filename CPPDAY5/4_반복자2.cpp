// 4_반복자1 - 220 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// list 와 vector 의 메모리 구조는 완전히 다릅니다.
	// 하지만 반복자만 꺼내면 동일한 방법(++)으로 열거 할수 있습니다.
	auto p1 = s.begin();
	auto p2 = v.begin();

	// p1, p2는 사용법 동일 합니다.
	// 포인터로 생각하면 됩니다.
	++p1;
	++p2;

	std::cout << *p1 << std::endl;
	std::cout << *p2 << std::endl;	

	// 반복자(iterator)의 디자인 철학 : 모든 컨테이너를 동일하게 열거
	//===============================
	// 반복자 타입 - 복잡 합니다.
	std::vector<int> v2 = { 1,2,3 };

	std::vector<int>::iterator p3 = v2.begin(); // 정확한 모양
											// C++98 시절에는 이렇게 사용
											// 221 page위 쪽
	// 요즘은 대부분 위처럼 하지 않고 auto 사용
	

}



