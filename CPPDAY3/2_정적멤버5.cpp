#include <iostream>

// static ��� ����Ÿ�� ���� ����ϳ��� ?
// => ���� �������� �ʽ��ϴ�. 
// => �׷���, ���� �ʿ� �մϴ�.



class Date
{
	int year;
	int month;
	int day;
	// �Ʒ� ����Ÿ�� Date ��ü�� �Ѱ��� �����ʿ� �����ϴ�.
	// 
	static const int days[12]; // �ʱ�ȭ�� �ܺ� ����ο��� ������ �մϴ�.
public:
	Date(int y, int m, int d) : year(y), month(m), day(d)
	{
	}
	Date getNextWeek()
	{
		// ������ ������ ������.
		Date d(year, month, day + 7);
		return d;
	}
};
const int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date today(2022, 1, 19);
	Date d = today.getNextWeek(); // 1���ϵ��� ��¥ ��ȯ
}