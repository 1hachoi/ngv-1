// 1_��Ӱ�������1
#include <string>

class Person
{
	std::string name;
	int age;
public:
//	Person() {} // Person �� ���� ����Ʈ �����ڸ� ������ �ʴ� ��찡
				// �� ������ �ֽ��ϴ�. �̸��� ���� ����� ������ ���� �ʴ�.

	Person(const std::string& s, int a)
		: name(s), age(a)
	{
	}
};

class Student : public Person
{
	int id; // �й�
public:
	// ������ ���� id �ʱ�ȭ �غ�����
//	Student(int n) : id(n) {} // ==> : Person(), id(n)  �� ����ǹǷ� error

	// ��� Ŭ������ ����Ʈ �����ڰ� ���ٸ� �Ʒ� ó�� �����ڸ� �����ؾ� �մϴ�
	Student(const std::string& s, int a, int n) 
			: Person(s, a), id(n) {}
};
//----------------------
class Employee : public Person
{
	// ��� ����Ÿ�� �߰��Ұ��� ���µ�...
public:
	// �����Ϸ��� ���� ����Ʈ �����ڰ� �Ʒ��� ���� ������ �����Դϴ�.
//	Employee() : Person() {}  

	// �ᱹ �̰�쵵 ����ڰ� ���ڰ� �ִ� �����ڸ� ���� 
	// ��� Ŭ������ �����ؾ� �մϴ�. - C++98 ����
//	Employee(const std::string& s, int a) : Person(s, a) {}

	// C++11 ���ʹ� �Ʒ� ������ ������ϴ�.
	// ������ ����̶�� ����
	using Person::Person; // Ŭ�����̸�::�������̸�



	// ��� �Լ��� � �߰�.
	void work() {}	
};

int main()
{
	Person p("kim", 30);
	Student s("lee", 20, 100);

	Employee e;
}