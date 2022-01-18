// 객체 지향 : 타입을 먼저 만들자
// 장점      : 이미 만들어진 타입을 사용하면 "코드 재사용"을 최대화 할수 있다
#include <iostream>
#include <vector>    // 이미 C++ 표준에 vector(동적배열)이 있습니다.

int main()
{
	int x[5] = { 1,2,3,4,5 }; // 배열 : 크기 변경이 안됩니다.
	
	std::vector<int> v = { 1,2,3,4,5 }; // 크기 변경이 가능합니다.
										// "벡터" 혹은 "동적배열"이라고도 합니다.
	// vector는 사용법이 배열과 동일합니다
	v[0] = 10;
	v[1] = 20;

	v.resize(10);

	std::cout << v.size() << std::endl;


}

