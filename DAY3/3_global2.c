// 3_global2.c
#include <stdio.h>
int g;// = 0; // 전역변수는 초기값을 지정하지 않으면 0으로 자동초기화
			  // 됩니다.
			  // 지역변수는 쓰레기값 
int main()
{
	int a, b, c, d, e, f, g, h, i;
	printf("%d\n", g);
	int n1 = 0;
	int n2;

	printf("%d\n", g); // 0
	printf("%d\n", n2); //  쓰레기값

	printf("지역변수 n1의 주소 : %p\n", &n1);
	printf("지역변수 n2의 주소 : %p\n", &n2);
	printf("전역변수 g의 주소 : %p\n", &g);
	printf("main함수의 주소  :%p\n", &main); // 함수도 주소가 있습니다.

}
// 교재 : 115 그림 참고

