#include <stdio.h>

int main()
{
	int year = 2021;
	int lastyear = year - 1;

	int leapcount = (lastyear / 400) + (lastyear / 4) - (lastyear / 100);
	
	// year�� 1�� 1���� ������ ?
	int weekofday = (lastyear + leapcount) % 7;

	printf("%d �⵵�� 1�� 1���� %d����\n", year, weekofday);
}

