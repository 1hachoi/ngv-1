// 4_������3.cpp - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }

	// �Ҹ��� : ��ü(����)�� �ı��ɶ� �ڵ����� ȣ��Ǵ� �Լ� - 82page
	//			�ʿ��� ��츸 ����� �ȴ�.
	//			����ڰ� ������ ������ �����Ϸ��� ����� �ش�.(�ƹ��ϵ� ����)
	//			���ڸ� ������ ����. �Ʒ� ������θ� ����� �ִ�.
	~Point(  )
	{
		std::cout << "~Point()" << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2(0, 0);		// �������� ǥ���
	Point p3{0, 0};		// C++11 ���ʹ� {} �ʱ�ȭ ����
	Point p4 = { 0,0 }; // C++11 ���� �� ǥ����� ����

//	Point p5(1); // error. ���ڰ� �Ѱ��� �����ڴ� ����.

	int n;    // �޸� �Ҵ�               => ����(���ϴ� ��, variable)
	Point pt; // �޸� �Ҵ� + ������ ȣ��  => ������� ���� "��ü(object)"
				//							��� �մϴ�.
				// 
	// ��Ȯ���� "��ü"�� : ���� �����ϴ� ��� ��(�繰) �Դϴ�.
}

