#include <stdio.h>

int main()
{
	int year = 2021;
	int lastyear = year - 1;

	int leapcount = (lastyear / 400) + (lastyear / 4) - (lastyear / 100);
	
	// year년 1월 1일의 요일은 ?
	int weekofday = (lastyear + leapcount) % 7;

	printf("%d 년도의 1월 1일은 %d요일\n", year, weekofday);
}

