// 1_namespace3.cpp - 9 page
#include <algorithm> // �� �ȿ� �پ��� C++ ǥ�� �Լ� ����
#include <stdio.h>
using namespace std;  // �ʺ������� ���� ���

int count = 0;

int main()
{
	int ret1 = std::min(10, 3); // C++ ǥ�� �Լ�
						// ��� C++ ǥ���� "std" namespace �� �ֽ��ϴ�
	int ret2 = min(10, 3);

	printf("%d\n", count); // �� �����ϱ�� ?? ������ ??
						// ǥ�ؿ� std::count()��� �Լ��� �ֽ��ϴ�.
						// "using namespace std" ������
						// ��������count �� ǥ���� count()�Լ��� �̸� �浹.
					
}