#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 언제 this를 활용하나요 ?
	void set(int x, int y) 
	{
		// 1. 변수 이름충돌등이 발생해서, 멤버에 접근하는 것을 명확히 하고 싶을때
		this->x = x;		
		this->y = y;		
	}
	// 2. this 를 반환하는 함수가 자주 사용됩니다.
	Point* foo() { return this;  }
	Point& goo()  { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20); // set(&p1, 10, 20)

	// 특정 멤버 함수를 연속해서 호출할수 있다.
	p1.goo().goo().goo();
	p1.foo()->foo()->foo();
	std::cout << "A" << "B" << std::endl;	
	std::cout.operator<<("A").operator<<("B").operator<<(std::endl);

	Point* p = &p1;

	// 멤버에 접근하려면 
	// x 가 public 이라면 아래 2줄은 완전히 동일
//	p->x = 10;
//	(*p).x = 10;

}








