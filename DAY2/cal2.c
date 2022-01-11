#include <stdio.h>

// step2. 매월 날짜수가 다르다.

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month = 2;

	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 1; i <= days[month-1]; i++)
	{
		printf("%4d", i);

		if (i % 7 == 0)
			printf("\n");
	}
}