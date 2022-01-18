// 2_OOP1 - 57
#include <iostream>

// OOP �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� �����ض�.
//			2. �׸���, Ÿ���� ����ؼ� �ڵ带 �ۼ��ض�.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
}; //<= ����, ����ü ���鶧 �����ݷ� �ʿ� �մϴ�.


int getRectArea(const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void drawRect(const Rect& rc)
{
	std::cout << "Draw Rect" << std::endl;
}
int main()
{
	Rect rc = { 1,1,10,10 };

	int n = getRectArea(rc);
}
// C ���  : Ÿ�� ���鶧 "���� Rect" ó���� ����� �ֽ��ϴ�.
// C++��� : Ÿ�� ���鶧 ���� �����ϰ�, ���ϰ� ����Ҽ� �ִ� ���� ���� ��������
//			C ����ü ���� + "�߰� ���� ����"

// 11:10 �� ���� �̾� ���ϴ�.