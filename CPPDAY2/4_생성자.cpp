// 4_������
#include <iostream>

class Bike     
{
//public:
	int speed;
	int gear;
public:
	void init()
	{
		speed = 10;
		gear = 3;
	}
};
int main()
{
//	Bike b = {10, 3}; // ��� �������Ÿ �� public �̸� �̷��� �ʱ�ȭ �Ҽ� �ִ�
					  // �׷���, �������Ÿ��  private �� ������ error
	Bike b;		// ��ü�� �����
	b.init();	// �ʱ�ȭ �Լ� ȣ��
	
}









