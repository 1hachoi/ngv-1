// 3_malloc3.c
#include <stdio.h>
#include <stdlib.h>

// malloc �Լ��� ����� ������ ���ô�.
// ��ȯ Ÿ���� "void*" �Դϴ�.=> ���� �ȹ�� ����.
/*
void* malloc(int size)
{
	// �޸𸮸� �Ҵ��ϴ� OS�Լ��� ȣ��
	// �Ҵ�� �޸� �ּ� ��ȯ
	return �ּ�;
}
*/

#define FREE(p)  free(p); p = 0

int main()
{
	// malloc - 113 page �Ʒ� �̾߱�
	// malloc �� ���޵� ũ���� �޸𸮸� �Ҵ��һ� �Դϴ�.
	// �޸𸮸� ��������� ��������� ��ȯ�� �ּҸ� � Ÿ����
	// �����Ϳ� �������� ���� �޶� ���ϴ�.
	// C   : void* => �ٸ� Ÿ��* �� �Ͻ��� ��ȯ ����
	// C++ : void* => �ٸ� Ÿ��* �� �Ͻ��� ��ȯ �ȵ�.
	//					����� ��ȯ ����
	int    *p1 = (int*)malloc(40);
	double *p2 = (double*)malloc(40);

	*p1 = 10;  // 4����Ʈ������ ����
	*p2 = 3.4; // 8����Ʈ ������ ����

	free(p1);
	free(p2);

	// ������ ���� �ڵ�� ?
	int *p3 = (int*)malloc(40);					// 1
	int *p4 = (int*)malloc(sizeof(int) * 10);	// 2 ==> ���� �ڵ�

	free(p3);
//	free(p4);
	FREE(p4);
}




