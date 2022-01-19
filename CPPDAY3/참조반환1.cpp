// 참조반환1
struct Point
{
	int x;
	int y;
};

void f1(Point p1)  {} // call by value     : 복사본 객체 생성
void f2(Point& p2) {} // call by reference : 복사본 생성 안됨

int main()
{
	Point p = { 1,2 };

	f1(p);
	f2(p);
}