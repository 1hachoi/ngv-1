class Test
{
	int data = 0; // ok.. C++11 ���� ����
//	static int cnt = 0; // error. static ����� ���⼭ �ʱ�ȭ �ȵ˴ϴ�.
	static int cnt;

	static const int count = 0; // �̰ǵ˴ϴ�. 
							// static const int ��� ������ �ֽ��ϴ�
							// �ܺ� ���� ��� �˴ϴ�.
							// ����, �ܺ� �����ص� �˴ϴ�.
};
int Test::cnt = 0; // ���⼭ �ؾ� �մϴ�.

int main()
{

}