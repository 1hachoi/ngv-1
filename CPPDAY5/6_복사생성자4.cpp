#include <iostream>

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
	// ����ڰ� ����� ���� ������
	// ���� ������ ����� �̸� ���� �Ǿ� �ֽ��ϴ�. �� �Ʒ�ó�� �ؾ� �մϴ�.
	Buffer(const Buffer& b) : size(b.size)
	{
		// �����Ͱ� �ƴ� ���� �׳� ����
		// size = b.size;

		// �������� ���
		// �ʿ��� ũ���� �޸� �Ҵ���
		// �޸� ���� ��ü�� ����
		buff = new int[size];

		memcpy(buff, b.buff, sizeof(int) * size);
	}

};
int main()
{
	Buffer b1(64);
	Buffer b2 = b1; // Buffer b2(b1)
}

// ���̽� �Ͻ� �е�..
// s1 = [1,2,[1,2] ];
// s2 = s1   // ���� ����

// s3 = s1.copy() // ���� ����

// import deepcopy
// s4 = deepcopy.copy(s1) // ���� ����
//	// deep
