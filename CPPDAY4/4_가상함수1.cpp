// 4_�����Լ�1 - 144 page
#include <iostream>

class Animal
{
	int age;
public:
//	void Cry() { std::cout << "Animal Cry()" << std::endl; }  // 1

	// virtual : �ش� �Լ��� dynamic binding �϶�� ���þ�
	virtual void Cry() { std::cout << "Animal Cry()" << std::endl; }  // 1
};
class Dog : public Animal
{
public:
	// override : ��� Ŭ������ ��� �Լ��� �Ļ� Ŭ������ �ٽ� ����� ��
	//			 �Լ� �̸��� ���ڰ� ������ ����
	//          ����) overloading : ������ ���°� �ٸ���.
	void Cry() { std::cout << "Dog Cry()" << std::endl; } // 2
};

int main()
{
	Animal a; a.Cry(); // 1
	Dog    d; d.Cry(); // 2

	Animal* p = &d;  // ��ü�� Dog �ε�, ������ Ÿ���� Animal �Դϴ�.

//	if ( ����ڰ��Է��Ѱ� == 1 ) 
//		p = &a;

	// �����Ϸ��� p�� "Animal*" Ÿ���̶�� ���� �˰� �ִ�.
	// ������, p�� ����Ű�� ���� ��ü�� ���������� �˼� ����.
	p->Cry(); // 1 ? 2
			  // 1�� : C++,   C#
			  // 2�� : java, swift, object-c. python rust
}

// p->Cry()�� � �Լ��� �����Ұ��ΰ� ? - "�Լ� ���ε�"

// 1. static binding : ������ �ð��� �����Ϸ��� �����ϴ� ��.
//					�����Ϸ��� ������ Ÿ�Ը� �˻�, ������ ��ü�� ������ �𸥴�.
//					������ ������ Ÿ�Կ� ���� ȣ��
//					Animal Cry ȣ��
// ������. �������� �ʴ�.
// C++, C#

// 2. dynamic binding : �����Ͻÿ� p�� ����Ű�� ���� �����ϴ� ���� �ڵ����
//					����ð��� p�� ����Ű�� �޸𸮸� �����Ŀ� �Լ� ����
//					���� �޸𸮿� �ִ� ��ü�� �Լ� ȣ��
//					Dog Cry ȣ��				
// ������. �������� �´�.!
// java, swift, python �� ��κ��� ��ü���� ���.
// C++ �� C# �� virtual function �� dynamic binding �϶�� ����.



// 10 : 50 �� ���� �̾� ���ϴ�.
