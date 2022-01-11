#include <stdio.h>

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int year = 2022;
	int month = 3;

	int lastyear = year - 1;

	int leapcount = (lastyear / 400) + (lastyear / 4) - (lastyear / 100);

	int weekofday = (year + leapcount) % 7;

	printf("%d �⵵�� 1�� 1���� %d����\n", year, weekofday);

	int isleapyear = (year % 400) == 0 || ((year % 4 == 0) && (year % 100 != 0));

	if (month > 2 && isleapyear)
		days[1] = 29;

	for (int i = 0; i < month - 1; i++) // i < 4 �� �ǹǷ� �迭�� 3�� index
	{
		weekofday += days[i];
	}
	weekofday = weekofday % 7;

	printf("%d �⵵�� %d�� 1���� %d����\n", year, month, weekofday);
}


