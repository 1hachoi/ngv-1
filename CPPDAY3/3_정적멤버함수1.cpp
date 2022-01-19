#include <iostream>

class Car
{
	int speed;
	static int cnt;  
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; } // 객체가 있어야만 호출 가능한 멤버함수
									// c1.get_count() 처럼 객체가 있어야 한다
	static int get_count() { return cnt; } // static 멤버 함수
									// 객체가 없어도 호출가능합니다.
									// Car::get_count()로 호출
};
int Car::cnt = 0; // private 멤버라도 외부 선언시 초기화는 허용됩니다.

int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1, c2;

	std::cout << c1.get_count() << std::endl; 
	std::cout << Car::get_count() << std::endl; // 2
}









