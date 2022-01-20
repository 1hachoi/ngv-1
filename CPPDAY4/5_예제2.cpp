#include <iostream>
#include <vector>

class Shape {};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) {}

	void Draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape
{
	int x, y, r; 
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r) 	{ }

	void Draw() { std::cout << "Draw Circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect(1,1,10,10) );

		else if (cmd == 2)
			v.push_back(new Circle(1,1,10));

		else if (cmd == 9)
		{
			for (auto p : v) // 결국 Shape* p 입니다.
				p->Draw();   // error. p에는 Draw 가 없습니다.
							 // 핵심 : Shape* 로는 Shape 에 있는 멤버만 접근가능.
							 // 
			// 해결책 1. p를 Rect 나 Circle 로 캐스팅후 Draw 호출
			//		    ((Rect*)p)->Draw(); 
			//		    그런데, 코드 작성시는 Rect 인지 Circle 인지 알수 없다.
			//			그래서, 이코드에서는 이 해결책은 사용할수 없다.
			//	=> 다음예제에서 해결
		}
	}
}
// 위 코드는 왜? 어디서 에러일까요 ?
// 해결책은 뭘까요 ?


