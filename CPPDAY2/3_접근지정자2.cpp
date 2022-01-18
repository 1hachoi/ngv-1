#include <iostream>

// struct vs class
// C++       : ���������� ������ ����Ʈ�� �����ΰ��� �ٸ��ϴ�.
// �ٸ� ��� : �������� �� ���� �ֽ��ϴ�.(value type vs reference type)

// 64 page ���� �Ʒ���..
//struct Bike  // ���������� ������ "public"  �� ����Ʈ �Դϴ�.
class Bike     // ���������� ������ "private" �� ����Ʈ �Դϴ�.
{
	int speed;
	int gear;

public:			
	void setGear(int g)
	{
		if (g < 1 || g > 20) return; 
		gear = g;
	}
	int getGear() { return gear; }
};
int main()
{
	Bike b;
}









