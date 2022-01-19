#include <iostream>
// 참조반환1
struct Point
{
	int x;
	int y;

	~Point() { std::cout << "~Point()" << std::endl; }
};
Point pt = { 1,2 }; // 전역객체(변수)

Point& f2()
{				
	return pt;
}
//-------------
Point& f3()
{
	Point p(1, 2);
	return p; // 어떤 가요 ? - 절대 이렇게 하면 안됩니다.
				// 지역변수는 참조반환 할수 없습니다.
				// 파괴되지 않는 객체만 참조 반환 해야 합니다.
				// 그래서 이 경우는 "return by value" 해야 합니다.
}

int main()
{

}






