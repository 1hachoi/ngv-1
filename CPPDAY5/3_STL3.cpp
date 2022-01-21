#include <iostream>
#include <vector>
#include <list>
#include <set> 

// 입력된 데이타를 메모리에 어떤 형태로 보관할것인가 ??
//  => 자료구조(Data structure) 라고 합니다.
//  => 컴퓨터 공학과 1 ~ 2 학년에 "전공필수"로 배우는 학문입니다. 가장중요 

// vector : 연속된 메모리, 삽입삭제가 느리고, 순회는 빠르다. 선형 컨테이너

// list   : 떨어진 메모리, 삽입삭제가 빠르고, 순회는 느리다. 선형 컨테이너
// 
// tree(set) : 크기를 비교해서 저장, 검색 빠르다. 입력순서는 알수 없지만
//											   크기순서대로 보관
// 
// hash(unordered_set) : 바구니 번호(캐비냇번호)를 얻어서 저장
//						가장 빠른 검색, 크기 순서, 입력순서 모두 알수 없다

// C++ 에서는 위와 같은 자료 구조를 클래스로 만들어 놓았습니다.
// 216 page
// C++     : 컨테이너(Container) 라고 부릅니다.
// 다른언어 : 컬렉션(Collection) 이라고 하는 경우가 많습니다.

int main()
{						
	std::vector<int> v = { 1,2,3,4,5,6, 7, 8, 9, 10 };
	std::list<int>   s = { 1,2,3,4,5,6, 7, 8, 9, 10 };

	// 컨테이너 핵심 1. 거의 모두 템플릿 입니다.
	//              2. 멤버 함수 이름이 유사 합니다. - 217 page그림참고
	v.push_back(10);
	s.push_back(10);

	// 3. vector 는 앞에 삽입/삭제 할수 없습니다.
	v.push_back(10); // ok
//	v.push_front(10); // error
					// 오버헤드가 크므로.. 앞에 넣는 작업을 해야 한다면
					// vector 말고, list 등을 사용하라는 의미!

	// 4. 반환과 제거는 동시에 되지 않는다. - 218 page
	std::list<int> s2 = { 1,2,3 };

	int n = s2.back(); // 반환만 됩니다.  (3)
					   // s2에서 3이 제거된것은 아님

	s2.pop_back();     // 제거만 됩니다.

	int n2 = s2.pop_back(); // error. pop_back()은 제거만 되고 void 반환.
}





