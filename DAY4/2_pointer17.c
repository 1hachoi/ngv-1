// 현재 CPU가 인텔계열이면 "intel", AMD 는 인텔계열입니다.
// 모토롤라계열이면 "motorola"라고 출력해 보세요

#include <stdio.h>

int main()
{
	int n = 0x11223344;

	char  *p = &n;

	if (*p == 0x44)
		printf("intel 계열\n");
	else if (*p == 0x11)
		printf("motorola 계열\n");
	else
		printf("알수 없는 아키텍쳐\n");
}
// 이코드가 중요한 이유
// 인텔PC =====> 네트워크로 데이타전송 =====>모토롤라 PC