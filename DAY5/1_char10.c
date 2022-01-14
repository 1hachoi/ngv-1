// 1_char10.c - 124 page
#include <stdio.h>

int main()
{
	// 약간 어려운 이야기 입니다.
	char s1[] = "hello";  // 문자열 배열 char s1[6]
	char *s2 = "hello";   // 문자열 포인터

	printf("%d\n", sizeof(s1)); // 6
	printf("%d\n", sizeof(s2));

	*s1 = 'X'; // s1[0] = 'X' 와 동일
	*s2 = 'X'; // runtime error. 현재 문자열은 상수 메모리에 있다
	char a = *s2;
}