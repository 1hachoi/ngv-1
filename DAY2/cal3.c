#include <stdio.h>

// step3. 1일의 요일은 항상 "일요일"이 아니다.
//      

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month = 2;

	// weekofday : 1일이 무슨 요일인지를 관리하는 변수
	int weekofday = 2; // 0 :일요일, 1 :월요일, 2: 화요일등....
					   // 즉, 현재 코드는 화요일이라고 가정

	printf(" SUN MON TUE WED THU FRI SAT\n");
	
	// 핵심 : 요일만큼 "    " 을 출력한다.
	for ( int i = 0; i < weekofday; i++)
		printf("    ");

	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

//		if (i % 7 == 0)
		if ( (i + weekofday) % 7 == 0)
			printf("\n");
	}
}