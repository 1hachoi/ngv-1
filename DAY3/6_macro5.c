#include <stdio.h>

//#define CHECK(x)  if (x < 70 ) printf("fail\n"); else printf("pass\n");

// 여러줄은 "\"로 연결합니다. ( 200 page 에 있습니다. )
#define CHECK(x)  if (x < 70 )				\
					  printf("fail\n");		\
				  else                      \
				      printf("pass\n");

int main()
{
	CHECK(80);   // 세미콜론은 있어도 되고 없어도 됩니다.


	int a;; // ok..
}