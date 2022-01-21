#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5 };
	
	auto p1 = s.begin();
	auto p2 = s.end();   // 마지막이 아닌 마지막 다음요소(마지막요소의 다음주소)...

	*p2 = 10; // 버그.. 실행시간 에러..

	// end()로 얻은 반복자는 반드시 비교 용도로만 사용하세요
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}



