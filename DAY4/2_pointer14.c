// 2_pointer14.c - 105page �Ʒ� �κ��̾߱�
#include <stdio.h>

int main()
{
	double d = 3.4;
	int n = d;

	printf("%d\n", sizeof(n)); // 4
	printf("%d\n", sizeof(d)); // 8

	int x[5] = { 1,2,3,4,5 };

	int *p = x; // x�� �迭����.. �ּҰ� �ƴմϴ�.
				// �׷���, �º��� ������ ������ ������ &x[0] ���� ���氡���Ѱ�.

	printf("%d\n", sizeof(p)); // 8
	printf("%d\n", sizeof(x)); // 20

	p = &n; // ok...  p�� �ּҸ� ��� �����̹Ƿ� �翬�� �ڵ�
	x = &n; // error. x�� ������ ������ �ƴ� �迭�Դϴ�.
			// x[0] = ������ ���θ� ���� ������ �ֽ��ϴ�.
			// x ��ü�� ����ɼ� �����ϴ�.(���)
}






