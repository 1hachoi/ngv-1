#include <stdio.h>

void swap(int *px, int *py)
{
	// ������ ������.
	int temp = *px;
	*px = *py;
	*py = temp;
}

int main()
{
	
	int x = 10;
	int y = 20;
	
//	swap(x, y);  // �̷��� �ϸ� swap �ȿ����� ���纻���� 10,20 �� ���� �����Ƿ�
				// ���� x, y �� ������� �ʴ´�.!!!
	swap(&x, &y);


	printf("%d, %d\n", x, y); // 20, 10 
}

// 11:10 �� ���� �̾����ϴ�.