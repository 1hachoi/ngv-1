#include <iostream>
// �׻� �н��Ҷ�, main �Լ� 1��° ���� ����ɶ� �޸𸮸� �׸��� �־�� �մϴ�.
class Buffer
{
	int* buff;
	int size;
public:
	Buffer(int sz) : size(sz)
	{
		buff = new int[size];
	}
	~Buffer()
	{
		delete[] buff;
	}
};
int main()
{
	Buffer b1(64);
	//--------- ��������� ���� ���µ�
	// �Ʒ� �ڵ尡 ���� �Դϴ�. �����غ�����
	Buffer b2 = b1; // Buffer b2(b1)
					// ���� ������ ȣ��
					// �����Ϸ��� ������ ���� ���
}