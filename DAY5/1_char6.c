#include <stdio.h>
// �Ʒ� �ڵ�� ȥ�� ����� �ִ� : �ʱ� Ż��
// ���� ���� �Ǵµ�, ������� ���� ������� �ʴ´�. : �ʱ�
// ���� �𸣰ڴ� ??
int mystrcpy( char *dst, char *src )
{
	int i = 0;
	while( 1 )
	{ 
		dst[i] = src[i];
		if (dst[i] == 0) break;
//		if (dst[i] == 0) return;
		++i;
	}
//	exit(0); // �� �ڵ�� ���α׷��� ����
	return i - 1; // ������ ������ ���������� �˷��ָ� ��� ?
}

int main()
{
	char s1[] = "hello";
	char s2[6];

	mystrcpy(s2, s1);  // ����� ���ô�.
					   // s1 ���ڿ��� s2�� ����

	printf("%s\n", s2);
}