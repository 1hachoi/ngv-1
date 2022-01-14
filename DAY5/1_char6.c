#include <stdio.h>
// 아래 코드는 혼자 만들수 있다 : 초급 탈출
// 보면 이해 되는데, 만들려면 손이 따라오지 않는다. : 초급
// 전혀 모르겠다 ??
int mystrcpy( char *dst, char *src )
{
	int i = 0;
	while( 1 )
	{ 
		dst[i] = src[i];
		if (dst[i] == 0) break;
//		if (dst[i] == 0) return;
		++i;
	}
//	exit(0); // 이 코드느 프로그램의 종료
	return i - 1; // 복사한 문자의 갯수정도룰 알려주면 어떨까 ?
}

int main()
{
	char s1[] = "hello";
	char s2[6];

	mystrcpy(s2, s1);  // 만들어 봅시다.
					   // s1 문자열을 s2로 복사

	printf("%s\n", s2);
}