// 6_복사생성자1
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
	// 복사 생성자 : Point pt(자신과같은타입객체)를 만들때 사용하는 생성자
	// 사용자가 만들지 않으면 컴파일러가 아래 코드 제공
	// => 하는일은 모든 멤버를 복사 해 줍니다.
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "복사생성자" << std::endl;
	}
};
int main()
{
	// 아래 4줄을 생각해 보세요
	Point p1;		// ok
//	Point p2(1);	// error.. Point(int) 모양의 생성자가 없다.
	Point p3(1,2);	// ok
	Point p4(p3);	// ok.. 왜 에러가 없을까 ?
					// 현재 "Point(Point)" 의 생성자가 있습니다.
					// => 사용자가 만들지 않으면 컴파일러가 제공해 줍니다
}
// 92 page 입니다.

// 3:00 부터 이어집니다.
