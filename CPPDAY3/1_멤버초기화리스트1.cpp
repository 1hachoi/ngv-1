// 1_����ʱ�ȭ����Ʈ1
#include <iostream>
#include <string>
// 85 page
class People
{
	std::string name;
	int age;
public:
	// ��� �ʱ�ȭ ����Ʈ : ������ () �ڿ� :�� ���� ����� �ʱ�ȭ �ϴ°�
	People(const std::string& n, int a) : name(n), age(a) // �ʱ�ȭ�Դϴ�
	{
//		name = n;  // �ʱ�ȭ�� �ƴ� ������ �ڵ� �Դϴ�.
//		age = a;
	}
};
int main()
{
	People p("kim", 20);

	int n1 = 0; // �ʱ�ȭ. ������ ����鼭 ���� �ִ°�

	int n2;     
	n2 = 0;     // ���� : ������ �����Ŀ� �ִ°�
	// int Ÿ�԰��� primitive Ÿ���� �� n1, n2 �ڵ�� ������ ���.

	std::string s1 = "kim"; // std::string s1("kim")
							// ��, ���ڰ� �Ѱ��� �����ڸ� �ѹ� ȣ���ؼ� �ʱ�ȭ
	std::string s2;		// ���ڰ� ���� ����Ʈ ������ ȣ��
	s2 = "kim";			// ���Կ����ڶ�� �Լ��� ȣ��.
}








