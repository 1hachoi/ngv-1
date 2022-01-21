#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[5] = {1,2,3,4,5};
	// 반복자를 얻는 방법 
	// 1. 멤버 함수
//	auto p1 = s.begin();
//	auto p2 = s.end();   // s가 raw array 라면 에러이다.


	// 2. 멤버 가 아닌 일반 함수 begin - C++11부터
	auto p1 = std::begin(s);	// s가 raw array 이면 배열의 1번째요소주소
								// auto 는 int*
	auto p2 = std::end(s);

	// 참고
	std::vector<int> v = { 1,2,3 };

	auto p3 = std::begin(v);
	auto p4 = begin(v); // std:: 없어도 에러 없습니다.
						// 이유 : 인자(v) 가 속한 이름공간을 자동 검색되는기능
						//			이 있습니다.

	// 참고
	auto n = v.front(); //첫번째 요소 꺼내기.  1

	// 참고 타입을 알고 싶으면 아래 처럼 하면 됩니다.
	// RTTI ( 176 page ~ )
	std::cout << typeid(n).name() << std::endl;  // int
	std::cout << typeid(p3).name() << std::endl; 
				// std::vector<int>::iterator 인데.. 좀더 복잡하게 나옵니다.

}
// 2:05분 부터 이어집니다.


