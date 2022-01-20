#include <iostream>
#include <vector>

// 핵심 3. 모든 파생 클래스의 공통의 특징은 반드시 기반 클래스에 있어야 한다.
//         모든 도형을 "그릴수 있다" 면 반드시 Draw() 는 Shape 에도 있어야 한다.

// 핵심 4. 파생 클래스가 재정의(override) 하게 되는 모든 멤버 함수는
//		   반드시 "가상함수(virtual)"로 해야 한다.

// 핵심 5. OCP ( Open Close Principle ) - 160 page
// 
//     기능 확장에는 열려 있고(Open, 나중에 class/module 등이 추가되어도)
//     코드 수정에는 닫혀 있어야(Close, 기존 코드에는 수정이 없어야 한다)
//     는 원칙(Principle)

// Open Close Principle(OCP)라고 합니다.

// 다형성(가상함수 기반 코드)은 OCP를 만족하는 아주 좋은 코딩입니다.





class Shape 
{
	int color;
public:
	void setColor(int c) { color = c; } // 이 함수는 가상일 필요는 없습니다.
 
	virtual void Draw() { std::cout << "Draw Shape" << std::endl; }
};

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
		: x(x), y(y), r(r) { }

	void Draw() { std::cout << "Draw Circle" << std::endl; }
};

// 세월이 지나서 미래에 새로운 도형을 추가 했습니다.
class Triangle : public Shape
{
public:
	void Draw() { std::cout << "Draw Triangle" << std::endl; }
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
				p->Draw();  // 이 표현식은, 항상 같은 함수를 호출하나요 ?
							// ==> 상황에 따라 다르게 동작합니다.
						    // ==> "다형성(Polymorphism)" 이라고 불리는 개념입니다.
							// 
			// 객체지향 언어의 3대 특징 : 캡슐화, 상속, 다형성(Polymorphism)

			// 다형성은 왜?? 중요 한가요 ?
			// 캡슐화 : 외부에 잘못된 사용으로 객체의 상태 보호(b.gear = -1 가 안되게)
			// 상속   : 기존타입을 확장해서 새로운 타입설계
			// 다형성 : 
		}
	}
}



