#include <stdio.h>

// 함수이름짓는 방법에 대한 이야기
// 1. is_leap_year(): C++ 스타일(회사마다 부서 마다 다르므로 여러분 부서의 룰을따르세요)
// 2. isLeapYear()  : 파이썬 스타일( PEP 8번 문서)
// 3. IsLeapYear()  : 가장 사용하지 않는 스타일.


// divide & conquer(80)
// main 에서 모든 것을 작성하면 코드가 너무 복잡해 진다.
// 프로그램을 기능별로 최대한 분리해서 각 기능을 수행하는 함수를 먼저 작성한다.
int is_leap_year(int year)
{
	int ret = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
	
	// 함수 안에서는 결과를 호출자에게 보고만 하면 됩니다.
	// 아래 처럼 화면 출력등의 작업은 하지 마세요.
//	if (ret)
//		printf("윤년입니다.\n");

	return ret;
}

int main()
{
	int year = 2024;
	
	// year 가 윤년인지 알고 싶다.
//	int isLeapYear = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

	int ret = is_leap_year(year); 

	if (ret == 1) // 또는 if (ret )
		printf("윤년 입니다.\n");
	else
		printf("윤년이 아닙니다.\n");
	
}
