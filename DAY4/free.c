#include <stdio.h>

//#define FREE(p) free(p); p = 0

#define FREE(p)  printf("free(p)\n"); printf("p = 0\n")

int main()
{
//	int *p = (int*)malloc(20);
//	FREE(p);

	int *p = 0;
//	FREE(p);


	// ����.. �Ʒ� 2���� �ڵ尡 ������ ����, �������ϵ���
	// ���� FREE ������ ������
	// 
	// �����Ͻź��� "smkang@codenuri.co.kr" �� ������ 1��
	// 
	// ��Ʈ : ���翡 �ҽ��ֽ��ϴ�.
//	if ( 0 )      // ����
//		FREE(p);  // ��� ����� �մϴ�.

	if (1)
	{
		FREE(p);
	}
	else
	{
	}
}










