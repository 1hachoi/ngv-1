#include <iostream>

// 45 page
// ����ü : ���ο� ����Ÿ Ÿ���� ����� ����
struct Complex
{
	double real;
	double image;
};
// call by value �� �ǵ� : ȣ��� ������ ������ ���¸� �������� ����� ��
//					������, ���纻�� �����ǹǷ� ������尡 �ִ�.
// void foo(Complex c1)

// const reference : ���纻�� ������ �ʰ�
//					������ �������� �������̶�� ���
//					��, �б⸸ �ϰڴ�.
void foo(const Complex& c1)
{
//	c1.real = 0; // error
}
int main()
{
	Complex c = { 1,2 };
	foo(c);
}

// ������ ���� �ڵ�� ?
void goo(int n) {}			// 1
void goo(const int& n) {}	// 2

// �Լ� ���鶧
// 1. ������ ������ ���� �����Ϸ���
//  ==> ������ �Ǵ� ������ ��������
//  void inc(int* p) �Ǵ�
//  void inc(int& r)

// 2. ������ ���� �������� ��������
//   A. primitive type    : call by value �� �ϼ���   void foo( int n) {}
//   B. user defined type : const & �� �ϼ���         void foo( const Complex& n) {}