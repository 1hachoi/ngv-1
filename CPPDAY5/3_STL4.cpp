#include <iostream>
#include <vector>
#include <list>
#include <set> 
#include <deque> // "덱" 또는 "디큐" 라고 발음 합니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6, 7, 8, 9, 10 };
	std::list<int>   s = { 1,2,3,4,5,6, 7, 8, 9, 10 };
	std::deque<int>  d = { 1,2,3,4,5,6, 7, 8, 9, 10 };

	// [] 연산자는 연속된 메모리 컨테이너만 제공합니다.
	v[0] = 10; // ok
//	s[0] = 20; // error
	d[0] = 20; // ok.

	d.push_back(0); // ok. deque 는 전방 삽입 가능

	// 1. [] 를 사용하고 싶은데, 전방삽입 필요 없다. : vector
	// 2. [] 를 사용하고 싶은데, 전방삽입 필요 하다. : deque
	// 3. [] 필요 없고, 삽입삭제가 많다. : list

	// 4. 검색이 중요하고, 크기정렬도 필요 하다. : tree ( set )
	// 5. 검색이 가장 중요하고, 크기정렬도 필요 없다 : hash ( unordered_set)

	std::list<int> s2 = { 1,2,3 };
//	std::vector<int> v2(s2);
	std::vector<int> v2(s2.begin(), s2.end());

	std::vector< std::list<int> > v3(5);

	v3[0].push_back(10);
	v3[0].push_back(20);
	v3[0].push_back(30);

	v3[1].push_back(1);
	v3[1].push_back(2);

	std::vector< std::vector<int> > matrix(3, std::vector<int>(3) );

	matrix[0][0] = 10;
	matrix[1][2] = 10;
	matrix[2][1] = 10;

}





