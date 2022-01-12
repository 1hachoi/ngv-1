#include <stdio.h>

// �Լ��̸����� ����� ���� �̾߱�
// 1. is_leap_year(): C++ ��Ÿ��(ȸ�縶�� �μ� ���� �ٸ��Ƿ� ������ �μ��� ������������)
// 2. isLeapYear()  : ���̽� ��Ÿ��( PEP 8�� ����)
// 3. IsLeapYear()  : ���� ������� �ʴ� ��Ÿ��.


// divide & conquer(80)
// main ���� ��� ���� �ۼ��ϸ� �ڵ尡 �ʹ� ������ ����.
// ���α׷��� ��ɺ��� �ִ��� �и��ؼ� �� ����� �����ϴ� �Լ��� ���� �ۼ��Ѵ�.
int is_leap_year(int year)
{
	int ret = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
	
	// �Լ� �ȿ����� ����� ȣ���ڿ��� ���� �ϸ� �˴ϴ�.
	// �Ʒ� ó�� ȭ�� ��µ��� �۾��� ���� ������.
//	if (ret)
//		printf("�����Դϴ�.\n");

	return ret;
}

int main()
{
	int year = 2024;
	
	// year �� �������� �˰� �ʹ�.
//	int isLeapYear = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

	int ret = is_leap_year(year); 

	if (ret == 1) // �Ǵ� if (ret )
		printf("���� �Դϴ�.\n");
	else
		printf("������ �ƴմϴ�.\n");
	
}
