#include <iostream>

int main()
{
	// ����ڰ� -1�� �Է��Ҷ� ���� �Է� �޾ƾ� �մϴ�.
	// �׷���, ��� �Է°��� �����ϰ� �ͽ��ϴ�.
	// ��� �ұ�� ?
	int size = 5;  // �Ҵ�� �޸� ũ��
	int count = 0; // �Էµ� ����
	int n = 0;

	int* p = new int[size];

	while (1)
	{
		std::cin >> n;

		if (n == -1) break;

		p[count] = n; // ����
		++count;

		if (count == size)
		{
			size = size + 5;

			int* temp = new int[size];

			memcpy(temp, p, sizeof(int) * size - 5);

			delete[] p; // ���� ���� ����

			p = temp;
		}
	}
	// ���⼭
	// count : �Էµ� ����
	// size  : �Ҵ�� �޸� ũ��
	// count �� size�� �ٸ��� ����


	// ����Ŀ��� ���������δ� ���� ����
	delete[] p;

	// 
//	int* p1 = new int[10];

//	p1 = new int[20]; // C#, java, python : �̼��� p1�� ����Ű�� ���� �޸𸮴�
					//					�ڵ� ���� �˴ϴ�.
					// C/C++ : �ڵ����� �ȵ˴ϴ�. �޸� ���� �Դϴ�.
					//			�׷���, C/C++�� ���� ��ƴٰ� �մϴ�.


}

// 2:20 �п� �̾����ϴ�.

