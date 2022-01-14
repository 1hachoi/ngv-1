#include <stdio.h>

int main()
{
	// 여러문자를 보관하고 싶다면
	// => 배열로 하면 됩니다.
//	int x[5] = { 'h', 'e', 'l', 'l', 'o' };

	// 한개의 문자는 1바이트면 충분 합니다.
	// int 대신 char 로 하는 것이 좋습니다.
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };

	// 핵심 1. %c 로 하면 정수가 아닌 "문자"로 출력 가능
	printf("%c", x[0]);
	printf("%c", x[1]);
	printf("%c", x[2]);
	printf("%c", x[3]);
	printf("%c", x[4]);

	for ( int i = 0; i < 5; i++)
		printf("%c", x[i]);


}





