#include <stdio.h>

struct Point
{
	int x;
	int y;

};

int main()
{
	int n = 0;
	// 1. �ʱ�ȭ ��� - �迭 ó�� {} ���
	struct Point p1; // �ʱ�ȭ ���� ���
	struct Point p2 = { 1, 2 };

	// 2. ��� ���� : . �� -> ���
	p2.x = 10;
	p2.y = 20;

	struct Point *p = &p2;

	p->x = 10;
	(*p).x = 10; // ���� ���� �մϴ�.


}