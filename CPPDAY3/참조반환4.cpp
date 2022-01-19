#include <iostream>
class Test
{
	int data;
public:
	~Test() { std::cout << "~Test" << std::endl; }

	Test foo()
	{
		return *this;
	}
};
int main()
{
	Test t;
	t.foo().foo().foo().foo().foo();
}