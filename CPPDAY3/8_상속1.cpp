// 8_���1 - 132 page
#include <string>

// Person  : ��� Ŭ����(Base Class), Super Class, Parent Class
// Student : �Ļ� Ŭ����(Derived Class), Sub Class, Child Class  ���� ��� ���


// �ΰ��� ������ ������ Ư¡�� ���� ���� �Ѵ�.
class Person		
{
	std::string name;
	int age;
};
// ���(inheritance) : ���� Ŭ������ Ȯ���ؼ� ���ο� 
//					Ŭ������ ����� ����

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