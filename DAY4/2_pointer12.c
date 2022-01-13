#include <stdio.h>

// 포인터를 사용하는 이유 2.
// 배열을 함수 인자로 보낼때는 배열의 1번째 요소의 주소를 보내는 방법밖에 없다.
// 배열을 함수에 전달할때는 :배열의 1번째요소의 주소와 갯수를 전달해야 합니다.
void foo(int *p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", p[i]); // 또는 *(p + i)
	}
}
int main()
{
	int x[3] = { 1,2,3 };
	int y[5] = { 1,2,3,4,5 };

	foo(&x[0], 3);
	foo(&y[0], 5);

	foo(x, 3); // pointer13.c 소스 참고.
	foo(y, 5);
}


// 2:00 부터 이어집니다.


