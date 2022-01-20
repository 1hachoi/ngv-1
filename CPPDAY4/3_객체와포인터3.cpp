// 3_객체와포인터
#include <iostream>
#include <vector>

class Shape
{
	int color;
};
class Rect : public Shape {};
class Circle : public Shape {};
//----------------------------------
int main()
{
	int n = 0;

	std::vector<Shape*> v;


	while (1)
	{
		std::cin >> n;

		if (n == 1)
		{
			Shape* p = new Rect;
			v.push_back(p);
		}
		else if (n == 2)
		{
			v.push_back(new Circle);
		}
		else if (n == -1)
			break;
	}

	std::cout << v.size() << "의 도형 생성" << std::endl;

	// 더이상 도형이 필요 없으면 delete 해야 합니다.
	for (auto p : v) // p의 타입은 ??
		delete p;  // p가 담고 있는 주소에 가서
					// 지워라!

	// v 자체는 지역변수이므로 
}   // <== 이순간 파괴.

// 핵심 
// std::vector<Rect> v(10) 과 
// std::vector<Rect*> v(10) 을 잘 구별하세요...