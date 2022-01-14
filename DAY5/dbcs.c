// dbcs.c
#include <stdio.h>
#include <Windows.h> 

int main()
{
	for (int i = 0; i < 256; i++)
	{
		printf("%d, %d\n", i, IsDBCSLeadByte(i));
	}
}
// 