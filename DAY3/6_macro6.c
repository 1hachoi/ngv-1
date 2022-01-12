// 6_macro6.c- 183 page
#include <stdio.h>

#define MAX 256     // 심볼에 값을 지정하는 경우
//#define DEBUG       // 심볼만 정의 하는 경우

int main()
{
	int n = 10;

#ifdef _DEBUG
	printf("debug message : %d\n", n);
#endif
}

// gcc 6_macro6.c -E -P로 확인해 보세요.
// gcc 6_macro6.c -D DEBUG -E -P       ==> 185page
// 
// DEBUG가 정의 안된경우 "소스코드자체에서 제거 하겠다는것"


