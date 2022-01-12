// 4_static1.c - 85page
#include <stdio.h>

int count = 0; // ���α׷� ������ �ı����� �ʴ´�.
			   // ��� �Լ��� ���� �����ϴ�. 
			   // �ϳ��� �Լ������� ����Ұ��̶��.. �����ϴ�.

// ���ǥ�� ��ȯ�ϴ� �Լ�
int get_wait_number()
{
//	int count = 0; // ��������, �Լ� ȣ�� ����� �ı�.
	static int count = 0; // life cycle �� ���������� �����ϰ�
						  // visibility �� ���������� �����ϴ�.
						  // 1. static �޸𸮿� ���δ�.(���������� ����)
						  // 2. ���α׷� ����� �޸𸮿� ���δ�.
						  // 3. �ʱ�ȭ�� �Լ��� ���� ����ɶ� 1ȸ�� �ʱ�ȭ
						  // 4. ���� ȣ�⿡���� �ʱ�ȭ �ڵ� ���� �ȵ�.
						  // 5. �ʱⰪ ������ �ڵ����� 0 �˴ϴ�.(static �޸� Ư¡)
	++count;
	return count;
}
int main()
{
	printf("%d\n", get_wait_number());
	printf("%d\n", get_wait_number());
//	count = 200; // error�� ������ �ϰ� �ʹ�.
	printf("%d\n", get_wait_number());
}