#include <iostream>

// 45 page
// 구조체 : 새로운 데이타 타입을 만드는 문법
struct Complex
{
	double real;
	double image;
};
// call by value 의 의도 : 호출시 전달한 인자의 상태를 변경하지 말라는 것
//					하지만, 복사본이 생성되므로 오버헤드가 있다.
// void foo(Complex c1)

// const reference : 복사본을 만들지 않고
//					원본도 수정하지 않을것이라는 약속
//					즉, 읽기만 하겠다.
void foo(const Complex& c1)
{
//	c1.real = 0; // error
}
int main()
{
	Complex c = { 1,2 };
	foo(c);
}

// 다음중 좋은 코드는 ?
void goo(int n) {}			// 1
void goo(const int& n) {}	// 2

// 함수 만들때
// 1. 전달한 인자의 값을 변경하려면
//  ==> 포인터 또는 참조로 받으세요
//  void inc(int* p) 또는
//  void inc(int& r)

// 2. 인자의 값을 변경하지 않으려면
//   A. primitive type    : call by value 로 하세요   void foo( int n) {}
//   B. user defined type : const & 로 하세요         void foo( const Complex& n) {}