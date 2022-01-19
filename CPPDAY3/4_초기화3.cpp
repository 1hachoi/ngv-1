#include <iostream>

int g = 10;

class Test
{
	int data = ++g;
public:
	Test()      {}
	Test(int n) : data(n) {}
};

int main()
{
	Test t1;
	Test t2(10);
	std::cout << g << std::endl; // ??
}