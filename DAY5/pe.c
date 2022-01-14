// pe.c
#include <stdio.h>

int g1 = 0x11223344;
int g2 = 0x55667788;

int main()
{
	int n1 = 0;
	printf("hello\n");
	int* p1 = malloc(sizeof(int));
	char* s1 = "hello";

	// 다음 주소들을 보고 근접하게 나올거 같은 것들을 생각해 보세요

	printf("main 주소 : %p\n", &main);
	printf("전역변수주소 : %p\n", &g1);
	printf("상수 메모리주소 : %p\n", s1);
	printf("힙 할당메모리주소 : %p\n", p1);
	printf("스택변수주소 : %p\n", &n1);
}

