#include <stdio.h>

// � ���ڿ��� ���α׷����� ������ ���Ǵµ�..
// ������ ���� ���ڿ� �̶�� char[] ���� char* p = "hello" �� �������� �ִ�.
int main()
{
	char s1[] = "welcome"; 
	char s2[] = "welcome";
	char *s3 = "welcome";
	char *s4 = "welcome";

	// �Ʒ� 4���� ����� ���� ����� �������?
	printf("%p\n", s1); // 1
	printf("%p\n", s2); // 2
	printf("%p\n", s3); // 3
	printf("%p\n", s4); // 4
}