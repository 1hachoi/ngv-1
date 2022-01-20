#include <iostream>
#include <vector>

// �ٽ� 3. ��� �Ļ� Ŭ������ ������ Ư¡�� �ݵ�� ��� Ŭ������ �־�� �Ѵ�.
//         ��� ������ "�׸��� �ִ�" �� �ݵ�� Draw() �� Shape ���� �־�� �Ѵ�.

// �ٽ� 4. �Ļ� Ŭ������ ������(override) �ϰ� �Ǵ� ��� ��� �Լ���
//		   �ݵ�� "�����Լ�(virtual)"�� �ؾ� �Ѵ�.

// �ٽ� 5. OCP ( Open Close Principle ) - 160 page
// 
//     ��� Ȯ�忡�� ���� �ְ�(Open, ���߿� class/module ���� �߰��Ǿ)
//     �ڵ� �������� ���� �־��(Close, ���� �ڵ忡�� ������ ����� �Ѵ�)
//     �� ��Ģ(Principle)

// Open Close Principle(OCP)��� �մϴ�.

// ������(�����Լ� ��� �ڵ�)�� OCP�� �����ϴ� ���� ���� �ڵ��Դϴ�.





class Shape 
{
	int color;
public:
	void setColor(int c) { color = c; } // �� �Լ��� ������ �ʿ�� �����ϴ�.
 
	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) {}

	void Draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r) { }

	void Draw() { std::cout << "Draw Circle" << std::endl; }
};

// ������ ������ �̷��� ���ο� ������ �߰� �߽��ϴ�.
class Triangle : public Shape
{
public:
	void Draw() { std::cout << "Draw Triangle" << std::endl; }
};


int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect(1, 1, 10, 10));

		else if (cmd == 2)
			v.push_back(new Circle(1, 1, 10));

		else if (cmd == 9)
		{
			for (auto p : v) 
				p->Draw();  // �� ǥ������, �׻� ���� �Լ��� ȣ���ϳ��� ?
							// ==> ��Ȳ�� ���� �ٸ��� �����մϴ�.
						    // ==> "������(Polymorphism)" �̶�� �Ҹ��� �����Դϴ�.
							// 
			// ��ü���� ����� 3�� Ư¡ : ĸ��ȭ, ���, ������(Polymorphism)

			// �������� ��?? �߿� �Ѱ��� ?
			// ĸ��ȭ : �ܺο� �߸��� ������� ��ü�� ���� ��ȣ(b.gear = -1 �� �ȵǰ�)
			// ���   : ����Ÿ���� Ȯ���ؼ� ���ο� Ÿ�Լ���
			// ������ : 
		}
	}
}



