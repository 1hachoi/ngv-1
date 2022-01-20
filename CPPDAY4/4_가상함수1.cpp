// 4_가상함수1 - 144 page
#include <iostream>

class Animal
{
	int age;
public:
//	void Cry() { std::cout << "Animal Cry()" << std::endl; }  // 1

	// virtual : 해당 함수는 dynamic binding 하라는 지시어
	virtual void Cry() { std::cout << "Animal Cry()" << std::endl; }  // 1
};
class Dog : public Animal
{
public:
	// override : 기반 클래스의 멤버 함수를 파생 클래스가 다시 만드는 것
	//			 함수 이름과 인자가 완전히 동일
	//          참조) overloading : 인자의 형태가 다른것.
	void Cry() { std::cout << "Dog Cry()" << std::endl; } // 2
};

int main()
{
	Animal a; a.Cry(); // 1
	Dog    d; d.Cry(); // 2

	Animal* p = &d;  // 객체는 Dog 인데, 포인터 타입은 Animal 입니다.

//	if ( 사용자가입력한값 == 1 ) 
//		p = &a;

	// 컴파일러는 p가 "Animal*" 타입이라는 것은 알고 있다.
	// 하지만, p가 가리키는 곳의 객체가 무엇인지는 알수 없다.
	p->Cry(); // 1 ? 2
			  // 1번 : C++,   C#
			  // 2번 : java, swift, object-c. python rust
}

// p->Cry()를 어떤 함수에 연결할것인가 ? - "함수 바인딩"

// 1. static binding : 컴파일 시간에 컴파일러가 결정하는 것.
//					컴파일러는 포인터 타입만 알뿐, 가리는 객체의 종류는 모른다.
//					무조건 포인터 타입에 따라 호출
//					Animal Cry 호출
// 빠르다. 논리적이지 않다.
// C++, C#

// 2. dynamic binding : 컴파일시에 p가 가리키는 곳을 조사하는 기계어 코드생성
//					실행시간에 p가 가리키는 메모리를 조사후에 함수 결정
//					실제 메모리에 있는 개체의 함수 호출
//					Dog Cry 호출				
// 느리다. 논리적으로 맞다.!
// java, swift, python 등 대부분의 객체지향 언어.
// C++ 과 C# 의 virtual function 이 dynamic binding 하라는 문법.



// 10 : 50 분 부터 이어 집니다.
