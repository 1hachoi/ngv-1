// 2_연산자재정의4 - 187 page
//#include <iostream>
#include <cstdio>

class ostream
{
public:
	void operator<<(int n)    { printf("%d", n); }
	void operator<<(double d) { printf("%f", d); }
};
ostream cout; // 전역적으로 만들어진 객체(변수)

int main()
{
	int n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)
}



