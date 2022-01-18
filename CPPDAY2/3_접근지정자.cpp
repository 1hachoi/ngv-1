// 3_접근지정자- 74 page
#include <iostream>

// 캡슐화(encapsulation)
// 외부의 잘못된 사용으로 객체가 불안해 지는 것을 막는다.
// 객체의 상태 변경은 멤버 함수를 통해서만 할수 있게 하자.

// 멤버 데이타 : private 에 만들어서 외부에서 접근 못하게
// 멤버 함수   : public 에 만들어서 외부에서 접근 가능하게

// 접근지정자 : private, public, protected(내일, 상속시간에)

// 정보 은닉 : 외부에서는 setGear(), getGear() 함수만 알면된다.
//			 내부 멤버 데이타의 정보는 알필요 없다.




// 자전거 게임 프로그램을 만들고 있다.
// "자전거 타입"을 먼저 설계하자.
struct Bike
{
private:		// 이 아래 있는 멤버는 외부에서는 접근할수 없다.
				// 멤버 함수 에서만 접근 할수 있다.
	int speed;
	int gear;

public:			// 이 아래 있는 멤버는 어디서도 접근 가능하다.
	void setGear(int g)
	{
		if (g < 1 || g > 20) 
			return; // 잘못된 값인경우 gear를 변경하지 말고 무시(함수종료)!

		gear = g;// 멤버 함수 에서는 private 멤버 접근 가능
	}
	int getGear() { return gear; }
};
int main()
{
	Bike b;
//	b.speed = 100;
//	b.gear = -10; // error. private 멤버
	b.setGear(-10);

	int n = b.getGear();
}









