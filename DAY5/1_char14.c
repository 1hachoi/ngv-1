// 1_char14.c
#include <stdio.h>

int main()
{
	char    s1[] =  "ABCD가나다라"; // DBCS 입니다.
	wchar_t s2[] = L"ABCD가나다라"; // wide charater set(UNICODE)

	printf("%d\n", sizeof(s1)); // 13
	printf("%d\n", strlen(s1)); // 12

	printf("%d\n", sizeof(s2)); // 18(널문자도 2바이트)
	printf("%d\n", strlen(s2)); // 1

	printf("%d\n", wcslen(s2)); // 8
}
// 0 ~ 65536
// 영어 : 앞쪽... 아스키 코드와 동일,
//        A => 65

// DBCS    : strxxx() 함수 사용 , 1바이트 0을 문자열 끝으로 생각
//			전세계문자 동시 표현안됨
// UNICODE : wcsxxx() 함수 사용 , 2바이트 0을 문자열 끝으로 생각
//          전세계문자 동시 표현가능(단, 일부 아프리카언어등은 안됨)
// 
// 인터넷으로 데이타 "ABCD"를 주고 받아 봅시다.
// => UNICODE 라면 "8" 바이트를 전달해야 한다.

// 인터넷 통신을 위해 데이타를 줄여 봅시다.(UTF-8)
// 영어 (0 ~ 127 )    : 1byte 사용.
// 128 ~ xxx : 2byte
// xxx ~ xxx : 3byte ==> 한글.
// xxx ~ 256 : 4byte

// unicode.org




