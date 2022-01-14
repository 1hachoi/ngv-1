// 1_char12.c
#include <stdio.h>

// 119 page 열어 두세요.
int main()
{
	char s1[] = "abcd"; // 메모리 구조 생각해 보세요
	char s2[] = "ABCD가나다라"; // 한글은 어떻게 되나요 ?

	printf("%c, %d\n", s2[3], s2[3]); // 'D', 68 
	printf("%c, %d\n", s2[4], s2[4]);

	printf("%d\n", sizeof(s2)); // 13
}
// 문자열 해석할때
// 0 ~ 127 : 알파벳과 숫자로 (ascii )
// 128 ~   : 2바이트로 된 문자라고 가정하고 하자.
//           128 * 256 개의 문자표현가능.
//			ex) 김 : 201, 123 처럼 2바이트
//			    박 : 208, 157

// 영문 : 1byte, 한글 : 2byte => MBCS(multi byte char set)