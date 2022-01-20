#include <iostream>
#include <vector>

// 디자인 패턴 : 이미 알려진 좋은 스타일의 객체지향 코드에 이름을 부여 한것
//      1994년 4명의 엔지니어가 쓴 "Design Pattern" 이라는 서적
//			GoF Design Pattern - 23개의 패턴.
//      Gangs Of Four

// 우리가 만든 Clone() 가상 함수는 "Prototype Pattern" 이라는 이름을 가지고 있습니다.


// Undo/Redo 를 하고 싶다. ==> "Command 패턴"을 공부해 보세요


// Refactoring : 기존에 작성된 코드의 구조를 변경하는 작업
//				실행결과는 동일(유사)하지만 보다 좋은 구조로 변경하는 것

// 리팩토링 책에 60여개의 기술(이름)을 이야기 합니다.
// 
// 아래 이름 이해 되는지 보세요
// "Replace Conditional(제어문) With Polymorphism(다형성)"




class Shape
{
	int color;
public:
	void setColor(int c) { color = c; }

	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }

	// 자신의 복사본을 만드는 가상함수는 항상 유용하게 활용될수 있습니다.
	virtual Shape* Clone()
	{
		Shape* p = new Shape;
		p->color = color;
		return p;
	}
};

class Rect : public Shape
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h)
	{
	}
	void Draw() { std::cout << "Draw Rect" << std::endl; }

//	virtual Shape* Clone()
	virtual Rect*  Clone()
	{
		Rect* p = new Rect(x, y, w, h); // 나와 같은 모양
		return p;
	}
};
// Clone()의 의미는 아래 2줄을 생각해 보세요
// Rect* p1 = new Rect(1,1,10,10);
// Rect* p2 = (Rect*)(p1->Clone());




class Circle : public Shape
{
	int x, y, r;
public:
	Circle(int x, int y, int r)
		: x(x), y(y), r(r)
	{
	
	}

	void Draw() { std::cout << "Draw Circle" << std::endl; }

//	virtual Shape* Clone()
	virtual Circle* Clone()
	{
		Circle* p = new Circle(x, y, r); 
		return p;
	}
};


int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
			v.push_back(new Rect(1, 1, 10, 10));

		else if (cmd == 2)
			v.push_back(new Circle(1, 1, 10));

		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();

		}
		else if (cmd == 8)
		{
			std::cout << "몇번째 도형의 복사본을 만들까요 >> ";
			int k;
			std::cin >> k;

			v.push_back( v[k]->Clone() ); // 다형성 활용
											// OCP 만족하는 코드
										// 미래에 다른 도형이 추가되어도
										// 이 코드는 수정될 필요 없다.!

		}
	}
}


// Point pt;
// Point pt(1,1)

// Point* p1 = new Point;
// Point* p2 = new Point(1,2);




