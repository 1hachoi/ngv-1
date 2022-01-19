#include <iostream>
#include <vector>

class Test
{
	int data = 0;
public:
	// 1. 동일 이름의 상수 멤버 함수의 비상수 멤버를 동시에 제공가능
	void foo()       { std::cout << "foo()"       << std::endl; } // 1
	void foo() const { std::cout << "foo() const" << std::endl; } // 2
};
int main()
{
	// 결과 예측해 보세요
	Test t1;        
	t1.foo();		// 1.   없으면 2번 호출

	const Test t2;
	t2.foo();		// 2.   없다면 error

	std::vector<int>       v1 = { 1,2,3 };
	const std::vector<int> v2 = { 1,2,3 };

	// 아래 2줄 예상해 보세요
	v1[0] = 10; // v1.operator[](0) 입니다.
	v2[0] = 10; // error. v2.operator[](0) 입니다.
	int n = v2[0]; // ok

	// 즉, 상수   vector 의 "operator[]" 함수의 반환값과
	// 즉, 비상수 vector 의 "operator[]" 함수의 반환값의 형태가 다릅니다.

}

// 2:05 분에 이어집니다.
