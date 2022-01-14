#include <stdio.h>
#include <Windows.h> 

int main()
{
	char s[] = "ABCD가나다라";
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
// 영어1 byte, 한글 2byte를 MBCS 또는 DBCS 라고 합니다.
// multi byte char set,  double byte character set


