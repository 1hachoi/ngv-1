#include <stdio.h>

int main()
{
	char s1[5] = { 'h', 'e', 'l', 'l', 'o' };  // �̷��� �ϸ� �迭�� ũ�⵵ �׻� �˰�			
												// �־�� �Ѵ�.
//	printf("%s\n", s1);

	char s2[6] = { 'h', 'e', 'l', 'l', 'o', 0 };// ���� 0�� �ֱ�� ����մϴ�.

	//------------------------------------
	int i = 0;
	while (1) // ���� ����
	{
		if (s2[i] == 0) break;
		printf("%c", s2[i]);
		++i;
	}
	//-------------------------
	printf("%c\n", s2[0]); // ���� ���
	printf("%s\n", s2);    // �� �ݺ���ó�� �����Ǿ� �ֽ��ϴ�.
	//-------------------

	int x[3] = { 1,2,3 };
	
	// �Ʒ� 2�� ������ ���� ��Ȯ�� �˾� �μ���
//	f1(x[0]); // x[0] �� ��, ��, 1�� f1 �Լ��� ���� f1(1)�� �ǹ�.
//	f2(x);    // ���ڷ� �迭�̸� ����, �ᱹ, �迭�� 1��° ����� �ּ� ����
			  // f2(&x[0])
}
//void f1(int a) {}
//void f2(int *a) {}






