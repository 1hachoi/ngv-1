// 1_char10.c - 124 page
#include <stdio.h>

int main()
{
	// �ణ ����� �̾߱� �Դϴ�.
	char s1[] = "hello";  // ���ڿ� �迭 char s1[6]
	char *s2 = "hello";   // ���ڿ� ������

	printf("%d\n", sizeof(s1)); // 6
	printf("%d\n", sizeof(s2));

	*s1 = 'X'; // s1[0] = 'X' �� ����
	*s2 = 'X'; // runtime error. ���� ���ڿ��� ��� �޸𸮿� �ִ�
	char a = *s2;
}