//#define _CRT_SECURE_NO_WARNINGS   // VC에서 strcpy 등을 사용하고 싶을때
								// 위험하지만..
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abcd";
	char s2[3];

//	strcpy(s2, s1);    // 무조건 write

//	strncpy(s2, s1, 2); // 2자만 복사 해달라.

	strcpy_s(s2, 3, s1); // s1의 문자열의 갯수가 3보다 크면
						// write 하지 말고, 경고창 출력후 종료

}