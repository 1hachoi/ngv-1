// 3_��������Լ�2 - 116 page
class Test
{
	int data;
	static int cnt;
public:
	// ������ ������ ��� ������. 
	// static ��� ����Ÿ, static ��� �Լ��� Ư¡�� ��Ȯ�� �˸� �˴ϴ�

	// �ٽ� : static ��� �Լ� ������ static ����� ���� �����մϴ�.
	static void foo()
	{
		data = 0;  // 1 error. ��ü�� �־�� �޸𸮿� �ִ�
		cnt = 0;   // 2 ok. ��ü�� ��� �޸𸮿� �ִ�.
	}
	// non static ��� �Լ��� ��� ����� ���� ����
	void goo()
	{
		data = 0; // 3 ok
		cnt = 0;  // 4 ok
	}
};
int Test::cnt = 0;

int main()
{
	Test::foo(); // static ��� �Լ��� ��ü���� ȣ�Ⱑ��
	Test t;
	t.foo();
}