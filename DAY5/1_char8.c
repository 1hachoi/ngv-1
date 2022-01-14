#include <stdio.h>
#include <string.h>
// buffer overflow 를 사용한 의도적인 해킹을 할때 이 원리 사용.
void f1()
{
	char s[4];
	scanf("%s", s); // 문자열 입력은 이렇게 받으면 됩니다.
}

int main()
{
	f1(); // call f1 => push 돌아올주소 (주소를 메모리저장)
		  //		    jmp f1


//	char s1[] = "abcd";
//	char s2[2];
//	strcpy(s2, s1); // 어떻게 될지 예측해 보세요(우리가 만든 mystrcpy참고)

}

