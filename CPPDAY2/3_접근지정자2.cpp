#include <iostream>

// struct vs class
// C++       : 접근지정자 생략시 디폴트가 무엇인가만 다릅니다.
// 다른 언어 : 차이점이 꽤 많이 있습니다.(value type vs reference type)

// 64 page 제일 아래줄..
//struct Bike  // 접근지정자 생략시 "public"  이 디폴트 입니다.
class Bike     // 접근지정자 생략시 "private" 이 디폴트 입니다.
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









