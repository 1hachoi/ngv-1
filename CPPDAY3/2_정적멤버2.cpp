#include <iostream>

// 방법 2. 전역변수 cnt 사용
//   => 전역변수는 모든 객체가 공유한다. 갯수 파악가능.. 
// 그런데.. 
// 전역변수는 어디서나 접근가능하다. 안전하지 않다.
// 접근지정자로 보호할수 없을까 ? => 전역변수는 멤버가 아니므로 안된다.
int cnt = 0;

class Car
{
	int speed;
public:
	Car()  { ++cnt; }
	~Car() { --cnt; }
};

void foo()
{
	cnt = 100;
}
int main()
{
	Car c1, c2;
	foo();

	std::cout << cnt << std::endl; // 2
}


