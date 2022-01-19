// 8_상속과접근지정자1 - 134page
#include <iostream>

class Base
{
private:		// 자신의 멤버 함수와 "friend 함수" 만 접근가능 - 134 page
	int a;
protected:		// 자신의 멤버 함수, "자신의 friend", 
	int b;		// 파생 클래스 멤버 함수, 파생클래스의 friend 에서 접근 간으
public:
	int c;	    // 어디서든 접근 가능
};

// C++접근지정자 3개입니다. : private, protected, public
// 다른 언어는 : 위 3개 + 1~2개정도 더 있습니다.(internal, packaged 등)

// 파이썬이 "접근지정자가 없습니다." => 최대 단점으로 취급됩니다.

class Derived : public Base
{
	int d;
public:
	void foo()
	{
		// 파생 클래스 멤버 함수에서 기반 클래스 멤버 접근하기
		a = 10; // error. Base 에게서 물려는 받지만, 접근은 안됩니다.
				//		접근하려면 기반 클래스에 있는 함수를 통해서 해야 합니다.
				//			setA(10); // Base에 있는 함수라고 가정
		b = 10; // ok
		c = 10; // ok
	}
};
int main()
{
	Base base;
	base.a = 10; // error
	base.b = 10; // error
	base.c = 10; // ok

}



