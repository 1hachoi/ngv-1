// 2_struct2.c
#include <stdio.h>
// 130 page
struct Complex    // �� �ڵ�� �޸𸮸� ����ϴ� ���� �ƴ϶�
{                 // �����Ϸ����� ���ο� Ÿ���� �˷��ִ� ���Դϴ�.
	int real;
	int image;
};

int main()
{
	int n = 10;       // primitive type�� ���� �����
	struct Complex c; // user defined type�� ���� �����

	c.real = 3;   // *(&c + 0) = 3
	c.image = 4;  // *(&c + sizeof(real)) = 4
}
