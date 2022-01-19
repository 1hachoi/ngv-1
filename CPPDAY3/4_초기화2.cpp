// 4_초기화1 - 117 

class Point
{
	int x = 0;
	int y = 0; // C++11 부터 가능한 코드. "필드 초기화"
public:
	Point() {}
	Point(int a) : x(a) {}
	Point(int a, int b) : x(a), y(b) {}
};
//----------------
class Point
{
	int x;
	int y;
public:
	Point() : x(0), y(0) {}
	Point(int a) : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};


int main()
{
	Point p1;
	Point p2(0, 0);
}