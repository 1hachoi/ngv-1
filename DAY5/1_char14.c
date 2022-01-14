// 1_char14.c
#include <stdio.h>

int main()
{
	char    s1[] =  "ABCD�����ٶ�"; // DBCS �Դϴ�.
	wchar_t s2[] = L"ABCD�����ٶ�"; // wide charater set(UNICODE)

	printf("%d\n", sizeof(s1)); // 13
	printf("%d\n", strlen(s1)); // 12

	printf("%d\n", sizeof(s2)); // 18(�ι��ڵ� 2����Ʈ)
	printf("%d\n", strlen(s2)); // 1

	printf("%d\n", wcslen(s2)); // 8
}
// 0 ~ 65536
// ���� : ����... �ƽ�Ű �ڵ�� ����,
//        A => 65

// DBCS    : strxxx() �Լ� ��� , 1����Ʈ 0�� ���ڿ� ������ ����
//			�����蹮�� ���� ǥ���ȵ�
// UNICODE : wcsxxx() �Լ� ��� , 2����Ʈ 0�� ���ڿ� ������ ����
//          �����蹮�� ���� ǥ������(��, �Ϻ� ������ī������ �ȵ�)
// 
// ���ͳ����� ����Ÿ "ABCD"�� �ְ� �޾� ���ô�.
// => UNICODE ��� "8" ����Ʈ�� �����ؾ� �Ѵ�.

// ���ͳ� ����� ���� ����Ÿ�� �ٿ� ���ô�.(UTF-8)
// ���� (0 ~ 127 )    : 1byte ���.
// 128 ~ xxx : 2byte
// xxx ~ xxx : 3byte ==> �ѱ�.
// xxx ~ 256 : 4byte

// unicode.org




