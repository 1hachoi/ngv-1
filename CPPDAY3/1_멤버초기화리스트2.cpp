// 1_����ʱ�ȭ����Ʈ2

class Test
{
	const int c; // ����� ��� ����Ÿ�� ������
public:
	Test(int n) : c(n)
	{
//		c = n; // �ɱ�� ?
	}
};
int main()
{
	Test t(10);

	const int c1 = 10; // �ʱ�ȭ ����

	const int c2; // error
	c2 = 10; // error
}