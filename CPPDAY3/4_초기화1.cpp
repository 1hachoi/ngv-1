// 4_초기화1 - 117 

// C++98 시절의 잘 만든 코드!
class Point
{
	int x;
	int y;
public:
	Point()             : x(0), y(0) {}
	Point(int a)        : x(a), y(0) {}
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
	Point p1;
	Point p2(0, 0);
}