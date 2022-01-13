#include <stdio.h>

//#define FREE(p) free(p); p = 0

#define FREE(p)  printf("free(p)\n"); printf("p = 0\n")

int main()
{
//	int *p = (int*)malloc(20);
//	FREE(p);

	int *p = 0;
//	FREE(p);


	// 과제.. 아래 2개의 코드가 에러가 없고, 정상동작하도록
	// 위에 FREE 변경해 보세요
	// 
	// 성공하신분은 "smkang@codenuri.co.kr" 로 선착순 1명
	// 
	// 힌트 : 교재에 소스있습니다.
//	if ( 0 )      // 거짓
//		FREE(p);  // 출력 없어야 합니다.

	if (1)
	{
		FREE(p);
	}
	else
	{
	}
}










