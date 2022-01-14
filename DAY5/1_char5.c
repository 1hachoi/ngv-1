#include <stdio.h>

// 126 page 주제
int main()
{
	int n1 = 10;
	int n2 = n1; // ok

	int x1[3] = { 1,2,3 };
//	int x2[3] = x1; // error. 배열은 복사 될수 없다.

	//------------------
	char s1[] = "hello";
	char s2[6];
//	char s2[6] = s1; // error
//	s2 = s1; // error

	int i = 0;
	while (1)
	{
	
		s2[i] = s1[i];		
		if (s2[i] == 0) break;
		
		++i;
	}

	printf("%s\n", s1);
	printf("%s\n", s2);
}




