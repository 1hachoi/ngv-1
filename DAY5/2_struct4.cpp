#include <stdio.h>

struct Point
{
	int x, y; // �̷��� �ص� �˴ϴ�.
};

// C��� ������ struct �ܾ� ���� ����ϱ� ���� ��� - 132
struct _Complex
{
	int real;
	int image;
};
typedef struct _Complex Complex;

int main()
{
	// ������ ��� �ڵ尡 ���� ���̼���.
	Point p1;			// C++����, C ����.
	struct Point p2;

	// �ᱹ �Ʒ� 2���� ���� �մϴ�.
	struct _Complex c1;
	Complex c2;

}