// 2_upcasting1- 140
#include <iostream>

class Animal
{
	int age;
public:
	void Cry() {}
};
class Dog : public Animal
{
	int color;
public:
	void setColor(int c) { color = c; }
};
int main()
{
	Dog d;
	Dog* p1 = &d; // ok
//	double* p2 = &d; // error.
					 // 물론 (double*)&d 처럼 캐스팅하면 되긴 합니다.
					 // 하지만, 논리적으로 말이 되지 않는 코드.
	Animal* p3 = &d; // ok..
					 // 핵심 : 기반 클래스 포인터로 파생 클래스를
					 //      가리킬수 있다. "upcasting"
					 //      d 는 Dog 이지만 메모리 위쪽에는 Animal로 부터
					 //		 상속받은 멤버가 있으므로.. "Animal 모양이다"
					 // ==> 모든 객체지향 언어의 특징
	//-----------------------------------
	// 하지만 p3 는 "Animal*" 이므로
	// 컴파일러는 p3가 Animal을 가리킨다고 생각한다.
	// Animal의 멤버만 사용가능하다.(C++, java, C#)
	p3->Cry();       // ok
	p3->setColor(5); // 될까요 ? error

	// p3가 가리키는 곳이 Dog라는 확신이 있고
	// Dog의 멤버 접근이 필요 하면
	// 캐스팅해서 접근 합니다
	((Dog*)p3)->setColor(5);
			// 그런데, 이순간 p3 가리키는 곳이 Dog가 아니면 
			// 실행시간 오류 발생.
}

// 1. Animal* 로 Dog의 주소를 담을수 있다.
// 2. 하지만 Animal* 로는 Animal 멤버만 접근 가능
// 3. Dog 멤버도 접근하려면 캐스팅 필요



	// 참고.. 파이썬은 컴파일 시에는 에러를 내지 않고, 실행시에
	//		메모리 조사해서 Dog 가 아니면 runtime error
