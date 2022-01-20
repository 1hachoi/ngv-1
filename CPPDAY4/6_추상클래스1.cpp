// 6_추상클래스1 - 168 page

// 추상 클래스( Abstract Class) : 순수 가상함수가 한개 이상 있는 클래스
// 특징 : 추상 클래스는 객체를 만들수 없다.
// 의도 : 파생 클래스를 만들때 "Draw"를 반드시 만들라고 지시 하는것

class Shape
{
public:
	virtual void Draw() = 0; // 순수 가상함수 ( pure virtual function )
};
class Rect : public Shape
{
public:
	// Draw()의 구현부를 제공하지 않으면 Rect 도 추상 클래스 이다.
	// Rect를 사용할수 있게 하려면 Draw 를 재정의 해야 한다.
	void Draw() override {}
};

int main()
{
	Shape s;  // error. 추상클래스는 객체 생성 안됨.
	Shape* p; // ok
	Rect r;   // ok. Draw()구현부가 있으므로.
}