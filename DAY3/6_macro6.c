// 6_macro6.c- 183 page
#include <stdio.h>

#define MAX 256     // �ɺ��� ���� �����ϴ� ���
//#define DEBUG       // �ɺ��� ���� �ϴ� ���

int main()
{
	int n = 10;

#ifdef _DEBUG
	printf("debug message : %d\n", n);
#endif
}

// gcc 6_macro6.c -E -P�� Ȯ���� ������.
// gcc 6_macro6.c -D DEBUG -E -P       ==> 185page
// 
// DEBUG�� ���� �ȵȰ�� "�ҽ��ڵ���ü���� ���� �ϰڴٴ°�"


