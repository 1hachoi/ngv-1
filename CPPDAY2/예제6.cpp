// 객체 지향 : 타입을 먼저 만들자
// 장점      : 이미 만들어진 타입을 사용하면 "코드 재사용"을 최대화 할수 있다
#include <iostream>
#include <vector>    
// STL : Standard Template Library
//       C++ 표준에서 제공하는 
//	     미리 만들어진 "함수" + "클래스" 를 부르는 용어
//	     대부분이 "템플릿"으로 구현되어 있습니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	std::cout << v.size()     << std::endl; // 크기         5
	std::cout << v.capacity() << std::endl; // 메모리 사용량 5


	v.push_back(9); // 끝에 한개(값9)를 추가

	std::cout << v.size()     << std::endl; // 크기          6
	std::cout << v.capacity() << std::endl; // 메모리 사용량  7
}

// 3:20 분 부터 이어집니다.

// v[3] = 