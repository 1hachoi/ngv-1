// 3_��ü��������
#include <iostream>

class Shape 
{
	int color; 
};
class Rect   : public Shape {};
class Circle : public Shape {};

/*
int main()
{
	{
		Rect r;    // ���������� ����. �ı� ������ ������ �ִ�.
					// ����ڰ� �����Ӱ� ����Ҽ� ����.
		Circle c;
	}
}
*/

int main()
{
	int n = 0;

//	Rect arr[10];  // �̸� ������� Rect 10��.. Rect size 100k ������ ũ��
					//					�ʿ� ���� ���� �̸� ������ �ʿ� ����.

//	Rect* arr[10]; // �ּҸ� ���� ������ �̸� ����� ����..(�ּҴ� ũ�� �ʴ�.)

	Shape* arr[10];

	int count = 0;

	// Power Pointer �� ������ ������
	while (1)
	{
		std::cin >> n;

		if (n == 1) // �簢�� ���� �޴�����
		{
//			Rect* p = new Rect;
			arr[count] = new Rect;
			++count;
		}
		else if (n == 2) // �� ���� �޴� ����
		{
			arr[count] = new Circle;
			++count;
		}
	}
}