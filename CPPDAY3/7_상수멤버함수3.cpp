// ��� ��� �Լ��� ������ �ƴմϴ�... �ʼ� ���� �Դϴ�.
// ��ü�� ���¸� �������� ���� ��� ��� �Լ�(getter) �� �ݵ�� 
// ��� ����Լ��� �Ǿ�� �մϴ�. - 122page ���� �Ʒ� �κ�

class Rect
{
	
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d) : x(a), y(b), w(c), h(d) {}
	int getArea() const { return w * h; }
};
//void foo(Rect r) // call by value : ���纻�� ������尡 �ִ�.

void foo(const Rect& r) // const & �� ����.
{
	int n = r.getArea();
}

int main()
{
	Rect r(1, 1, 10, 10); // ��� ��ü �ƴ�
	int n = r.getArea();  // ok. 
	foo(r);
}