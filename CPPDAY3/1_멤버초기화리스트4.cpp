#include <iostream>

// 88 page ���� �Ʒ� �κ� �̾߱�
// ���� ���� : ��� �ʱ�ȭ����Ʈ�� ����Ǵ� ������
//			�ʱ�ȭ �ڵ� ������ �ƴ϶� ����� ���� ������� �ʱ�ȭ �ȴ�.
class Point
{
public:
	int x;
	int y;
//	int x;

	Point() : y(0), x(y) {} // ���� �̷��� ���� ������
							// �׻� ����� ���� ������� �ʱ�ȭ �ϼ���
							// : x(0) , y(0)
};

int main()
{
	Point p;
	std::cout << p.x << std::endl; // �����Ⱚ
	std::cout << p.y << std::endl; // 0
}