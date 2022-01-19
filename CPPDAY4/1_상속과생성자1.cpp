// 1_상속과생성자1
#include <string>

class Person
{
	std::string name;
	int age;
public:
//	Person() {} // Person 의 경우는 디폴트 생성자를 만들지 않는 경우가
				// 더 많을수 있습니다. 이름이 없는 사람의 생성은 좋지 않다.

	Person(const std::string& s, int a)
		: name(s), age(a)
	{
	}
};

class Student : public Person
{
	int id; // 학번
public:
	// 생성자 만들어서 id 초기화 해보세요
//	Student(int n) : id(n) {} // ==> : Person(), id(n)  로 변경되므로 error

	// 기반 클래스에 디폴트 생성자가 없다면 아래 처럼 생성자를 제공해야 합니다
	Student(const std::string& s, int a, int n) 
			: Person(s, a), id(n) {}
};
//----------------------
class Employee : public Person
{
	// 멤버 데이타는 추가할것이 없는데...
public:
	// 컴파일러가 만든 디폴트 생성자가 아래와 같기 때문에 에러입니다.
//	Employee() : Person() {}  

	// 결국 이경우도 사용자가 인자가 있는 생성자를 만들어서 
	// 기반 클래스에 전달해야 합니다. - C++98 까지
//	Employee(const std::string& s, int a) : Person(s, a) {}

	// C++11 부터는 아래 문법이 생겼습니다.
	// 생성자 상속이라는 문법
	using Person::Person; // 클래스이름::생성자이름



	// 멤버 함수만 몇개 추가.
	void work() {}	
};

int main()
{
	Person p("kim", 30);
	Student s("lee", 20, 100);

	Employee e;
}