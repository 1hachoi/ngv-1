// ���� CPU�� ���ڰ迭�̸� "intel", AMD �� ���ڰ迭�Դϴ�.
// ����Ѷ�迭�̸� "motorola"��� ����� ������

#include <stdio.h>

int main()
{
	int n = 0x11223344;

	char  *p = &n;

	if (*p == 0x44)
		printf("intel �迭\n");
	else if (*p == 0x11)
		printf("motorola �迭\n");
	else
		printf("�˼� ���� ��Ű����\n");
}
// ���ڵ尡 �߿��� ����
// ����PC =====> ��Ʈ��ũ�� ����Ÿ���� =====>����Ѷ� PC