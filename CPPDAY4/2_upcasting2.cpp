#include <iostream>

class Animal
{
public:
	int age;
};
class Dog : public Animal {};
class Cat : public Animal {};

//void NewYear(Dog* p) // Dog 만 처리하는 함수
void NewYear(Animal* p) // 동종(모든 동물, Animal 파생 클래스)를 처리하는 함수
{
	++(p->age);
}
int main()
{
	Dog d;
	Cat c;
	NewYear(&d);
	NewYear(&c);

//	Dog* woori[4]; //  Dog 객체 4개의 주소를 담을수 있다.
	Animal* woori[4]; // 모든 종류의 동물 4개의 주소를 담는 배열!
					// 동종을 보관하는 컨테이너(여러개를 담는 도구)를 만들기.

	woori[0] = &d;
	woori[1] = &c;
}

// 9:35 분에 이어집니다.