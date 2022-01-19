// 상수 멤버 함수는 선택이 아닙니다... 필수 문법 입니다.
// 객체의 상태를 변경하지 않은 모든 멤버 함수(getter) 는 반드시 
// 상수 멤버함수가 되어야 합니다. - 122page 제일 아래 부분

class Rect
{
	
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}
	int getArea() const { return w * h; }
};
//void foo(Rect r) // call by value : 복사본의 오버헤드가 있다.

void foo(const Rect& r) // const & 가 좋다.
{
	int n = r.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10); // 상수 객체 아님
	int n = r.getArea();  // ok. 
	foo(r);
}