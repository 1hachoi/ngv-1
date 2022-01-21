// 1_friend.cpp - 75 page
class Bike
{
	int gear;
public:

	// friend 함수로 등록 : 멤버 함수는 아니지만
	//					   private 멤버에 접근할수 있게 해달라는 의미.
	// 1. 멤버 함수로 하면 되지 않나요 ? ==> 멤버로 하기 어려울때가 있습니다(연산자재정의)
	// 2. 캡슐화를 위배 하므로 나쁘지 않나요? => 네, 비판이 많은 문법입니다.
	//										다른 언어에는 없습니다.
	friend void foo();
};

void foo()
{
	Bike b;
	b.gear = 10;
}


int main()
{
	foo();
}