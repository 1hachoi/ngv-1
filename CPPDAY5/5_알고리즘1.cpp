// 5_알고리즘1 - 225 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	std::vector<int> v = { 1,2,3,4,5 };

	// 컨테이너에서 3을 찾는 것을 생각해 봅시다.
//	s.find(3); // 아주 쉽다.
//	v.find(3); // java style

	// STL 에서는 STL 에서 제공하는 대부분의 주요 함수가 
	// 멤버 함수가 아닌 일반 함수 입니다.
	// 검색 성공 : 요소를 가리키는 반복자
	// 실패시    : 마지막 다음 반복자(past the end)

	// find 같이 멤버 가 아닌 함수(템플릿)들을 STL에서 "알고리즘"이라고 합니다.
	auto p1 = std::find(s.begin(), s.end(), 3);
	auto p2 = std::find(v.begin(), v.end(), 3);

	if (p1 == s.end())
	{
		std::cout << "검색 실패" << std::endl;
	}
	else
	{
		std::cout << "성공 : " << *p1 << std::endl; // 3
	}
}
// STL 3대 요소 : Container, Iterator, Algorithm(find 같은 멤버가 아닌함수들)



