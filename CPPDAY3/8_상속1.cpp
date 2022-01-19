// 8_상속1 - 132 page
#include <string>

// Person  : 기반 클래스(Base Class), Super Class, Parent Class
// Student : 파생 클래스(Derived Class), Sub Class, Child Class  등의 용어 사용


// 인간이 가지는 공통의 특징을 먼저 설계 한다.
class Person		
{
	std::string name;
	int age;
};
// 상속(inheritance) : 기존 클래스를 확장해서 새로운 
//					클래스를 만드는 문법

// C#     : class Student : Person
// python : class Student(Person)
// java   : class Student extends Person 
class Student : public Person
{
	int id;
};

class Professor : public Person
{
	int major;
};

int main()
{
	Student s;
	Professor p;
}