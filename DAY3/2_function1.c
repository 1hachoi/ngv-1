// 기계과 : "아두이노"
// 2_function1.c
#include <stdio.h>

// 함수 : 특정 기능을 수행하는 코드의 집합
void print_menu()
{
	printf("1. 김밥\n");
	printf("2. 라면\n");
	printf("3. 국수\n");
}
int main()
{
	// 메뉴를 3번 출력하고 싶다.
	// 방법 1. 아래 코드를 3번 작성하면 된다.
	// 방법 2. 반복문을 사용한다. => 주어진 문장을 연속적으로 수행할때만 사용
	// 방법 3. 메뉴를 출력하는 부분을 함수로 분리하고
	//         필요할때 마다 호출한다.
	for (int i = 0; i < 3; i++)
	{
		printf("1. 김밥\n");
		printf("2. 라면\n");
		printf("3. 국수\n");
	}

	print_menu();

	// 다른 작업을 하다가.. 메뉴 출력이 필요 하면

	print_menu();
}



