#include <stdio.h>

// �λ���� ���α׷��� �ۼ��ϰ� �ʹ�. 3���� ����� �����ؾ� �Ѵ�.
// 1. ��� Ÿ���� �����ض�!
struct _People
{
	char name[32];
	int  age;
	char email[128];
};
typedef struct _People People;

int main()
{
	People p = { "kim", 20, "unknown" };

	People peo_arr[3] = { {"kim", 20, "unknown"},
						  {"lee", 15, "unknown"} };

	// 3��° ����� �̸� �Է� �ޱ�
	printf("�̸� >> ");
	scanf_s("%s", peo_arr[2].name ); // scanf�� 2��° ���ڷ� �ּҸ� �����µ�
									 // name�� �迭�̹Ƿ� �̸��� 1��°����� �ּ�
	printf("���� >> ");
	scanf_s("%d", &(peo_arr[2].age));

	printf("�̸��� >> ");
	scanf_s("%s", peo_arr[2].email);

	for (int i = 0 ; i < 3; i++)
	{
		printf("%s, %d, %s\n", peo_arr[i].name, peo_arr[i].age, peo_arr[i].email);
	}
}
