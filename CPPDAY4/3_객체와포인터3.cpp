// 3_��ü��������
#include <iostream>
#include <vector>

class Shape
{
	int color;
};
class Rect : public Shape {};
class Circle : public Shape {};
//----------------------------------
int main()
{
	int n = 0;

	std::vector<Shape*> v;


	while (1)
	{
		std::cin >> n;

		if (n == 1)
		{
			Shape* p = new Rect;
			v.push_back(p);
		}
		else if (n == 2)
		{
			v.push_back(new Circle);
		}
		else if (n == -1)
			break;
	}

	std::cout << v.size() << "�� ���� ����" << std::endl;

	// ���̻� ������ �ʿ� ������ delete �ؾ� �մϴ�.
	for (auto p : v) // p�� Ÿ���� ??
		delete p;  // p�� ��� �ִ� �ּҿ� ����
					// ������!

	// v ��ü�� ���������̹Ƿ� 
}   // <== �̼��� �ı�.

// �ٽ� 
// std::vector<Rect> v(10) �� 
// std::vector<Rect*> v(10) �� �� �����ϼ���...