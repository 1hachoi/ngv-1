#include <stdio.h>

// 어떤 문자열이 프로그램에서 여러번 사용되는데..
// 변하지 않은 문자열 이라면 char[] 보다 char* p = "hello" 가 좋을수도 있다.
int main()
{
	char s1[] = "welcome"; 
	char s2[] = "welcome";
	char *s3 = "welcome";
	char *s4 = "welcome";

	// 아래 4개의 결과중 같은 결과가 있을까요?
	printf("%p\n", s1); // 1
	printf("%p\n", s2); // 2
	printf("%p\n", s3); // 3
	printf("%p\n", s4); // 4
}