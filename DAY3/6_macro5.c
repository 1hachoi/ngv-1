#include <stdio.h>

//#define CHECK(x)  if (x < 70 ) printf("fail\n"); else printf("pass\n");

// �������� "\"�� �����մϴ�. ( 200 page �� �ֽ��ϴ�. )
#define CHECK(x)  if (x < 70 )				\
					  printf("fail\n");		\
				  else                      \
				      printf("pass\n");

int main()
{
	CHECK(80);   // �����ݷ��� �־ �ǰ� ��� �˴ϴ�.


	int a;; // ok..
}