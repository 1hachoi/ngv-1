// 1_char1.c - 117page
#include <stdio.h>

// 핵심 1. 컴퓨터는 정수와 실수만 보관 합니다.
//        => 정확히는 이진수(0, 1)만 보관합니다.
int main()
{
	int n = 65;

	printf("%d\n", n); // 65를 10진수로 출력해 달라
	printf("%x\n", n); // 65를 16진수로 출력해 달라
	printf("%c\n", n); // 65를 약속된 문자(ascii code)로 출력해달라

	// 아래 2줄은 동일합니다.
	int n1 = 65;
//	int n2 = A; // error. A는 키워드(if같은)도 아니고, 변수이름도 아닙니다.
	int n2 = 'A';  // 싱글 따옴표 사용

	// 아래 2줄의 차이점을 생각해 보세요
	int n3 = 9;     // int n3 = 9
	int n4 = '9';   // int n4 = 57

	printf("%d\n", n3);
	printf("%d\n", n4); // ? 얼마일까요 (119 표 참고 )
}







