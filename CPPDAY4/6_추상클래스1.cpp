// 6_�߻�Ŭ����1 - 168 page

// �߻� Ŭ����( Abstract Class) : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : �߻� Ŭ������ ��ü�� ����� ����.
// �ǵ� : �Ļ� Ŭ������ ���鶧 "Draw"�� �ݵ�� ������ ���� �ϴ°�

class Shape
{
public:
	virtual void Draw() = 0; // ���� �����Լ� ( pure virtual function )
};
class Rect : public Shape
{
public:
	// Draw()�� �����θ� �������� ������ Rect �� �߻� Ŭ���� �̴�.
	// Rect�� ����Ҽ� �ְ� �Ϸ��� Draw �� ������ �ؾ� �Ѵ�.
	void Draw() override {}
};

int main()
{
	Shape s;  // error. �߻�Ŭ������ ��ü ���� �ȵ�.
	Shape* p; // ok
	Rect r;   // ok. Draw()�����ΰ� �����Ƿ�.
}