//#define _CRT_SECURE_NO_WARNINGS   // VC���� strcpy ���� ����ϰ� ������
								// ����������..
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abcd";
	char s2[3];

//	strcpy(s2, s1);    // ������ write

//	strncpy(s2, s1, 2); // 2�ڸ� ���� �ش޶�.

	strcpy_s(s2, 3, s1); // s1�� ���ڿ��� ������ 3���� ũ��
						// write ���� ����, ���â ����� ����

}