// 3_��������Լ�2 - 116 page
class Test
{
	int data;
	static int cnt;
public:
	// ������ ������ ��� ������
	static void foo()
	{
		data = 0;  // 1
		cnt = 0;   // 2
	}
	void goo()
	{
		data = 0; // 3
		cnt = 0;  // 4
	}
};
int Test::cnt = 0;

int main()
{
}