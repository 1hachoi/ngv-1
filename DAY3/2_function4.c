#include <stdio.h>

// �ٽ� 1. �����Ϸ��� ������ 1��° �ٺ��� "�ѹ���" ������ �Ѵ�.

// �Լ��� ����, ���� ȣ�� - 81page
int add1(int a, int b)
{
	return a + b;
}
int main()
{
	int ret1 = add1(1, 2);
//	int ret2 = add1(1);    // error. add1�� ���ڰ� 2�� �־�� �Ѵ�.

	int ret3 = add2(1, 2); // C��� ok. C++ ��� error
							// push 2
							// push 1  ���ڸ� ����� ��ҿ� �ְ�
							// call add2�Լ��ּ� <== �̺κ��� "��Ŀ��ä����!"

	int ret4 = add2(1);    // ���� C�� ���, C++�� ����
						// �׷���, 2��° ���ڸ� �������� �ʾ� �����Ƿ�
						// ���ڸ� �����ϱ�� ��ӵ� ���� �ִ� �����Ⱚ��
						// ����ϰ� �ȴ�. ������ ����.
						// �̼ҽ��� VC�� �ƴ� gcc�� ������ ������		
						// gcc 2_function4.c 
}

int add2(int a, int b)
{
	return a + b;
}
