// 2_io1.cpp - 12 page
#include <cstdio>   // C ������Լ�  printf
#include <iostream> // C++ �����

int main()
{
	int n = 10;

	printf("%d\n", n); // C ���
	std::cout << "n = " << n << std::endl; // C++ ���
								// "\n";
		// 1. << �� ������ ��밡��
		// 2. "%d" ���� ���� ���þ� �ʿ����.
		// 3. ������ "\n" �Ǵ� std::endl 
		// printf    : �Լ�
		// std::cout : "��ü" ��� ����

	// ǥ�� �Է��� std::cin �Դϴ�.
	scanf_s("%d", &n); // 
	std::cin >> n;     // �ٽ� 1. >> ������
						//     2. �ּҰ� �ƴ� �����̸��� ǥ��.
}

