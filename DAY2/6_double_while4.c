// 6_double_while1.c - 52 page
#include <stdio.h>

int main()
{
	// 변수의 수명 : 자신을 선언한 블럭을 벗어나면 파괴 ( 내일 자세히)
	int n1 = 10;
	{
		int n2 = 10;
	}
	n1 = 20; // ok
//	n2 = 20; // error. n2라는 변수는 파괴 되었다



	int j = 1;
	int i = 1;

	while (i <= 9)
	{
		j = 1;        
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			++j;
		}
		++i;
	}





}