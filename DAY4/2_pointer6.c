#include <stdio.h>

void swap(int *px, int *py)
{
	// 구현해 보세요.
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main()
{
	
	int x = 10;
	int y = 20;
	
//	swap(x, y);  // 이렇게 하면 swap 안에서는 복사본으로 10,20 의 값을 받으므로
				// 절대 x, y 가 변경되지 않는다.!!!
	swap(&x, &y);


	printf("%d, %d\n", x, y); // 20, 10 
}

// 11:10 분 부터 이어집니다.