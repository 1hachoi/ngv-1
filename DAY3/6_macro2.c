#include <stdio.h>

#define MAX 256		       // 매크로 상수
#define SQUARE(x)  x * x   // 매크로 함수
#define SQUARE2(x)  ((x) * (x))   //최대한 ()를 많이 사용해라!

int main()
{
	int arr[MAX];

	int n = 3;
//	int ret = SQUARE(n);   // n * n
//	int ret = SQUARE(n+1); // n + 1 * n + 1    이므로 잘못된 결과
//	int ret = SQUARE2(n + 1); // ((n + 1) * (n + 1)) 이므로 16!!
	int ret = SQUARE2(++n);   // ((++n) * (++n))

	printf("%d\n", ret);
}

