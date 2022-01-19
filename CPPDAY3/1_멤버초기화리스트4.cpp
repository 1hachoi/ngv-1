#include <iostream>

// 88 page 제일 아래 부분 이야기
// 주의 사항 : 멤버 초기화리스트가 실행되는 순서는
//			초기화 코드 순서가 아니라 멤버가 놓이 순서대로 초기화 된다.
class Point
{
public:
	int x;
	int y;
//	int x;

	Point() : y(0), x(y) {} // 절대 이렇게 하지 마세요
							// 항상 멤버가 놓은 순서대로 초기화 하세요
							// : x(0) , y(0)
};

int main()
{
	Point p;
	std::cout << p.x << std::endl; // 쓰레기값
	std::cout << p.y << std::endl; // 0
}