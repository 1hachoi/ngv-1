#include <stdio.h>
#include <string.h>
// buffer overflow �� ����� �ǵ����� ��ŷ�� �Ҷ� �� ���� ���.
void f1()
{
	char s[4];
	scanf("%s", s); // ���ڿ� �Է��� �̷��� ������ �˴ϴ�.
}

int main()
{
	f1(); // call f1 => push ���ƿ��ּ� (�ּҸ� �޸�����)
		  //		    jmp f1


//	char s1[] = "abcd";
//	char s2[2];
//	strcpy(s2, s1); // ��� ���� ������ ������(�츮�� ���� mystrcpy����)

}

