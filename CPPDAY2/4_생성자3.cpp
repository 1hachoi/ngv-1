// 4_생성자3.cpp - 78 page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point()             { x = 0; y = 0; std::cout << "Point()" << std::endl; }
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; }

	// 소멸자 : 객체(변수)가 파괴될때 자동으로 호출되는 함수 - 82page
	//			필요한 경우만 만들면 된다.
	//			사용자가 만들지 않으면 컴파일러가 만들어 준다.(아무일도 안함)
	//			인자를 가질수 없다. 아래 모양으로만 만들수 있다.
	~Point(  )
	{
		std::cout << "~Point()" << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2(0, 0);		// 전통적인 표기법
	Point p3{0, 0};		// C++11 부터는 {} 초기화 가능
	Point p4 = { 0,0 }; // C++11 부터 이 표기법도 가능

//	Point p5(1); // error. 인자가 한개인 생성자는 없다.

	int n;    // 메모리 할당               => 변수(변하는 수, variable)
	Point pt; // 메모리 할당 + 생성자 호출  => 변수라는 용어보다 "객체(object)"
				//							라고 합니다.
				// 
	// 정확히는 "객체"는 : 세상에 존재하는 모든 것(사물) 입니다.
}

