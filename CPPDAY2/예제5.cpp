// ��ü ���� : Ÿ���� ���� ������
// ����      : �̹� ������� Ÿ���� ����ϸ� "�ڵ� ����"�� �ִ�ȭ �Ҽ� �ִ�
#include <iostream>
#include <vector>    

int main()
{
	std::vector<int> v; //ũ�Ⱑ 0�� �����迭(vector)

	int n = 0;

	while (1)
	{
		std::cin >> n;
		if (n == -1) break;

		v.push_back(n); // �ڵ����� �޸𸮰� �����ϸ鼭 ��� ���ϴ�.
	}
	std::cout << v.size() << " ��ŭ �Է��߽��ϴ�." << std::endl;
}


