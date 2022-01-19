// 2_정적멤버1 - 110page
#include <iostream>

// 자동차가 몇대나 만들어 졌는지 갯수를 알고 싶다
// 생성자에서 ++, 소멸자 -- 하면 되지 않을까 ?
// 방법 1. 멤버 데이타 cnt 사용
//        => 멤버 데이타는 모든 객체가 별도로 생성된다.
//		  => Car 객체의 갯수를 관리할수는 없다.
class Car
{
	int speed;
public:
	int cnt;

	Car() : cnt(0) { ++cnt; }
	~Car()         { --cnt; }
};

int main()
{
	Car c1, c2;

	std::cout << c1.cnt << std::endl;
}