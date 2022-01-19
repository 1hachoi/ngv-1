#include <iostream>

// static 멤버 데이타는 결국 "접근지정자를 사용가능한 전역변수" 입니다.
// 1. 객체가 없어도 메모리에 놓인다.
// 2. 객체 생성시 static 이 아닌것만 객체메모리에 포함된다.

class Car
{
	int speed;
public:
	static int cnt;  // static member data(정적멤버 데이타)

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 반드시 클래스 외부에서 선언 되어야 합니다. 초기화도 여기서
int Car::cnt = 0;

int main()
{
	// 여기서 자동차 갯수 출력해 보세요.
	std::cout << Car::cnt << std::endl; // 0

	Car c1, c2;

	// static 멤버 데이타 접근 방법 2가지(public 에 있는 경우)
	// 1. 객체 이름으로 접근
	// 2. 클래스 이름으로 접근
	// 1, 2 모두 가능하지만 가독성을 위해서는 "클래스이름::" 로 접근하세요!
	// java, C# 등 다른 언어는 "클래스이름::"으로만 가능합니다.
	std::cout << c1.cnt   << std::endl; // 2 
	std::cout << Car::cnt << std::endl; // 2
}









