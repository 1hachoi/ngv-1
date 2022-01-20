// 3_객체와포인터
#include <iostream>

class Shape 
{
	int color; 
};
class Rect   : public Shape {};
class Circle : public Shape {};

/*
int main()
{
	{
		Rect r;    // 지역변수로 생성. 파괴 시점이 정해져 있다.
					// 사용자가 자유롭게 사용할수 없다.
		Circle c;
	}
}
*/

int main()
{
	int n = 0;

//	Rect arr[10];  // 미리 만들어진 Rect 10개.. Rect size 100k 정도로 크면
					//					필요 없는 것을 미리 만들어둘 필요 없다.

//	Rect* arr[10]; // 주소를 담을 공간은 미리 만들어 두자..(주소는 크지 않다.)

	Shape* arr[10];

	int count = 0;

	// Power Pointer 를 생각해 보세요
	while (1)
	{
		std::cin >> n;

		if (n == 1) // 사각형 생성 메뉴선택
		{
//			Rect* p = new Rect;
			arr[count] = new Rect;
			++count;
		}
		else if (n == 2) // 원 생성 메뉴 선택
		{
			arr[count] = new Circle;
			++count;
		}
	}
}