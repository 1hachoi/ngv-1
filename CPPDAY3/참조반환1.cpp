// ������ȯ1
struct Point
{
	int x;
	int y;
};

void f1(Point p1)  {} // call by value     : ���纻 ��ü ����
void f2(Point& p2) {} // call by reference : ���纻 ���� �ȵ�

int main()
{
	Point p = { 1,2 };

	f1(p);
	f2(p);
}