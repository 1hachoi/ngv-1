#include <stdio.h>
#include <Windows.h> 

int main()
{
	char s[] = "ABCD�����ٶ�";
	char* p = s;
	while (*p)
	{
		printf("%s\n", p);
//		p = p + 1;

		if (IsDBCSLeadByte(*p))
			p = p + 2;
		else
			p = p + 1;
	}
}
// ����1 byte, �ѱ� 2byte�� MBCS �Ǵ� DBCS ��� �մϴ�.
// multi byte char set,  double byte character set


