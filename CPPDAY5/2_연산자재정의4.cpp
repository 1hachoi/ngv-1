// 2_������������4 - 187 page
//#include <iostream>
#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(int n)    { printf("%d", n); return *this;}
		ostream& operator<<(double d) { printf("%f", d); return *this;}
	};
	ostream cout; // ���������� ������� ��ü(����)
}

int main()
{
	int n = 10;
	double d = 3.4;

	std::cout << n << d;

	std::cout.operator<<(n).operator<<(d);

	std::cout << n; // cout.operator<<(int)
	std::cout << d; // cout.operator<<(double)

//	p1 + p2; 
//	p1.operator+(p2); // �̷��� ���� ǥ���ص� �˴ϴ�.
}



