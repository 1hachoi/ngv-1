// 4_생성자
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
//	Bike b = {10, 3}; // 모든 멤버데이타 가 public 이면 이렇게 초기화 할수 있다
					  // 그런데, 멤버데이타가  private 에 있으면 error
	Bike b;		// 객체를 만들고
	b.init();	// 초기화 함수 호출
	
}









