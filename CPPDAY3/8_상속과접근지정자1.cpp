// 8_��Ӱ�����������1 - 134page
#include <iostream>

class Base
{
private:		// �ڽ��� ��� �Լ��� "friend �Լ�" �� ���ٰ��� - 134 page
	int a;
protected:		// �ڽ��� ��� �Լ�, "�ڽ��� friend", 
	int b;		// �Ļ� Ŭ���� ��� �Լ�, �Ļ�Ŭ������ friend ���� ���� ����
public:
	int c;	    // ��𼭵� ���� ����
};

// C++���������� 3���Դϴ�. : private, protected, public
// �ٸ� ���� : �� 3�� + 1~2������ �� �ֽ��ϴ�.(internal, packaged ��)

// ���̽��� "���������ڰ� �����ϴ�." => �ִ� �������� ��޵˴ϴ�.

class Derived : public Base
{
	int d;
public:
	void foo()
	{
		// �Ļ� Ŭ���� ��� �Լ����� ��� Ŭ���� ��� �����ϱ�
		a = 10; // error. Base ���Լ� ������ ������, ������ �ȵ˴ϴ�.
				//		�����Ϸ��� ��� Ŭ������ �ִ� �Լ��� ���ؼ� �ؾ� �մϴ�.
				//			setA(10); // Base�� �ִ� �Լ���� ����
		b = 10; // ok
		c = 10; // ok
	}
};
int main()
{
	Base base;
	base.a = 10; // error
	base.b = 10; // error
	base.c = 10; // ok

}



