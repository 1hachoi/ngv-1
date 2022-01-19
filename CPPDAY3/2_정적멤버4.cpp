#include <iostream>

// 여러개 클래스에서 객체 갯수 관리기술 사용하려면 
// 전역변수라면 아래 처럼 이름이 달라야 했지만
int car_cnt = 0;
int truck_cnt = 0;

// static 으로 하면 아래 처럼 "cnt" 라는 동일한 이름 사용가능
class Truck
{
public:
	static int cnt;
};
int Truck::cnt = 0;

class Car
{
	int speed;		// 일반 멤버 데이타(non static member data)
					// 객체당 한개씩 생성됩니다.
					// 다른 언어는 "인스턴스 필드" 라고도 합니다.
public:
	static int cnt; // static 멤버 데이타
					// 모든 객체가 공유,
					// 다른 언어에서 class 필드, static 필드 라고도 합니다.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
int Car::cnt = 0;

int main()
{
	std::cout << Car::cnt << std::endl; // 0

	Car c1, c2;

	std::cout << c1.cnt << std::endl; // 2 
	std::cout << Car::cnt << std::endl; // 2
}









