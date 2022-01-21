// 6_복사생성자5
// 6_복사생성자1
#include <iostream>

// 1. 생성자를 한개도 만들지 않으면 "디폴트 생성자 제공"
// 2. 복사 생성자를 만들지 않으면 "복사 생성자" 제공
class Point
{
	int x = 0, y = 0;
public:
	Point() {}
	Point(const Point& pt) : x(pt.x), y(pt.y)
	{
		std::cout << "복사생성자" << std::endl;
	}
};
// call by value 는 복사 생성자를 호출하는 표기법이다.
// void f1(Point pt) {} // Point pt = p1;

// const reference 는 객체생성이 아니다. 복사 생성자 호출 안됨.
void f1(const Point& pt) {} // const Point& pt = p1;

Point pt;

Point foo()
{
	return pt; // 이순간의 코드는
				// Point 리턴용임시객체(pt);
				// return 임시객체
}

int main()
{
	Point p1;
//	Point p2(p1);

	f1(p1);


}

