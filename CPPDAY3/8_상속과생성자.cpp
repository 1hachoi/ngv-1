// 8_상속과생성자 - 135 page
#include <iostream>

class Base
{
	int data;
public:
	Base()                { std::cout << "Base()" << std::end; }
	Base(int a) : data(a) { std::cout << "Base(int)" << std::end; }
	~Base()				  { std::cout << "~Base()" << std::end; }
};

class Derived : public  Base
{
public:
	Derived()		{ std::cout << "Derived()" << std::end; }
	Derived(int a)  { std::cout << "Derived(int)" << std::end; }
	~Derived()		{ std::cout << "~Derived()" << std::end; }
};
int main()
{
	Derived d1;
}