#include <stdio.h>

// �ٽ� : �Լ����ڷ� ���޹޴� �����鵵 �������� �Դϴ�.
int add(int a, int b)
{
	int n = 0;

	// ���� ���ڰ��� esi, edi �� �ִ�.
	// ��������� ���� �ۼ��ؼ� esi, edi�� ����ص� �ȴ�.
	// ������, esi, edi�� ��� ����ؾ� �ϹǷ� (��� �ڿ��̹Ƿ�)
	// esi, edi�� �ٽ� �޸𸮷� �ű�� �������
//	int a, b;
//	mov b, edi
//	mov a, esi    // ���� �Լ� ���ڰ� �ᱹ �� 3���� �ǹ� �Դϴ�.

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &n);
	return a + b;
}

int main()
{
	int ret = add(1, 2); // �Լ��� ȣ���ϴ� ����
		
//	mov edi, 2 // �Լ� ���ڸ� ��ӵ� ���� �־� ����
//	mov esi, 1 // 32��Ʈ�� �޸𸮿�, 64��Ʈ�� CPU�ȿ� �ִ� �������Ͷ�� ������)  
//	call add�ּ�   // add �Լ��� �̵�.
}


