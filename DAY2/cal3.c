#include <stdio.h>

// step3. 1���� ������ �׻� "�Ͽ���"�� �ƴϴ�.
//      

int main()
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int month = 2;

	// weekofday : 1���� ���� ���������� �����ϴ� ����
	int weekofday = 2; // 0 :�Ͽ���, 1 :������, 2: ȭ���ϵ�....
					   // ��, ���� �ڵ�� ȭ�����̶�� ����

	printf(" SUN MON TUE WED THU FRI SAT\n");
	
	// �ٽ� : ���ϸ�ŭ "    " �� ����Ѵ�.
	for ( int i = 0; i < weekofday; i++)
		printf("    ");

	for (int i = 1; i <= days[month - 1]; i++)
	{
		printf("%4d", i);

//		if (i % 7 == 0)
		if ( (i + weekofday) % 7 == 0)
			printf("\n");
	}
}