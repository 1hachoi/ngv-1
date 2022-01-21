// 3_STL1 - 213 page
#include <iostream>
#include <vector>
#include <list>

int main()
{
	// 배열 vs vector
	// 유사점 : 연속된 메모리, [] 로 요소 접근
	// 차이점 : 배열은 크기 변경 안됨
	//		   vector는 크기 변경 가능
	int x[5] = { 1,2,3,4,5 };

	std::vector<int> v = { 1,2,3,4,5 };

	v[0] = 10;
	v.resize(10);  // 크기 변경 가능

}





