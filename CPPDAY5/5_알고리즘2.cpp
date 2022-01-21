// 5_알고리즘1 - 225 page
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // find, find_if 같은 알고리즘(멤버가아닌 일반함수)
					 // 사용을 위해.

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int>   s = { 1,6,3,4,5 };

	// 주어진 구간에서 3을 찾고 싶다.  "값 검색"
	auto p1 = std::find(s.begin(), s.end(), 3);

	// 주어진 구간에서 처음 나오는 3의 배수를 찾고 싶다. ?? -227page
	// 조건 검색!
//	auto p2 = std::find_if(s.begin(), s.end(), foo );

	// C++11 부터 람다 표현식(lambda expression)에 지원됩니다.
	// [] : 람다 표현식이 시작됨을 알리는 표기법입니다.
	auto p2 = std::find_if(s.begin(), s.end(), 
							[](int n) { return n % 3 == 0; } );

	std::cout << *p2 << std::endl;
}



