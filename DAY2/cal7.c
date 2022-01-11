#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	//-------------------------------------------
	// ���⿡ cal6.c �ȿ� �迭 �Ʒ� �ڵ� ���� ������ �����ؿ�����
	int year = 2022;
	int month = 3;


	int lastyear = year - 1;

	int leapcount = (lastyear / 400) + (lastyear / 4) - (lastyear / 100);

	int weekofday = (year + leapcount) % 7;

	int isleapyear = (year % 400) == 0 || ((year % 4 == 0) && (year % 100 != 0));

	if (month > 2 && isleapyear)
		days[1] = 29;

	for (int i = 0; i < month - 1; i++) 
	{
		weekofday += days[i];
	}
	weekofday = weekofday % 7;

	//---------------------------------------

	printf(" SUN MON TUE WED THU FRI SAT\n");

	for (int i = 0; i < weekofday; i++)
		printf("    ");

	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

		if ((i + weekofday) % 7 == 0)
			printf("\n");
	}
}