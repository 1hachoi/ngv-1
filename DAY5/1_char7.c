#include <stdio.h>
#include <string.h> // C ǥ���������ϴ� �پ��� ���ڿ� �Լ��� �ֽ��ϴ�.
					// ��� strxxx() ������ �̸��� ������ �ֽ��ϴ�.
int main()
{
	char s1[] = "hello";
	char s2[6];

//	s2 = s1; // ������ ����
//	strcpy(s2, s1);			// ǥ�� �Լ��ε�, ���Ȼ� ������ �ɼ� �־
							// �Ϻ� �����Ϸ��� ���ο� �Լ��� ����϶�� ����
							// �� ���⵵ �մϴ�.
	strcpy_s(s2, 6, s1);    // ���Ȼ� ������ �Լ�(2��° ���ڴ� �迭��ũ��)

	// �Ʒ� �ڵ�� "s1,s2 �� ��� "hello"�� ����������"
	// 1��° ����� �ּҴ� �ٸ��Ƿ� �׻� false �Դϴ�.
	if (s2 == s1)
		printf("���� ���ڿ�\n");
	else 
		printf("�ٸ� ���ڿ�\n");

	//--------------------------------
	char s3[] = "abcd";
	char s4[] = "abcd"; // "abcx"

	int ret = strcmp(s3, s4); // ���ڿ��� ������ 0
							  // �ٸ� ���, s3�� ũ�� ���, ������ ����
	printf("%d\n", ret);

	if (strcmp(s3, s4) == 0)
		printf("���� ���ڿ�\n");
	//---------------------
	char s5[] = "hello";

	printf("%d\n", sizeof(s5)); // �迭�� ����ϴ� �޸� ũ��  6
	printf("%d\n", strlen(s5)); // ���ڿ��� ���� 5


	char s6[10] = "abcd";
	printf("%d\n", sizeof(s6)); // ?
	printf("%d\n", strlen(s6)); // ?
}

// lexicographical compare : 1���� ���� ���������� �� �Ѵٴ� ���� �ǹ�.






