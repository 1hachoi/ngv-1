#include <iostream>

// static 멤버 데이타는 언제 사용하나요 ?
// => 자주 사용되지는 않습니다. 
// => 그런데, 가끔 필요 합니다.



class Date
{
	int year;
	int month;
	int day;
	// 아래 데이타는 Date 객체당 한개가 있을필요 없습니다.
	// 
	static const int days[12]; // 초기화는 외부 선언부에서 만들어야 합니다.
public:
	Date(int y, int m, int d) : year(y), month(m), day(d)
	{
	}
	Date getNextWeek()
	{
		// 구현은 도전해 보세요.
		Date d(year, month, day + 7);
		return d;
	}
};
const int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 1, 19);
	Date d = today.getNextWeek(); // 1주일뒤의 날짜 반환
}