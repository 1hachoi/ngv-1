#include <stdio.h>

// 핵심 : 함수인자로 전달받는 변수들도 지역변수 입니다.
int add(int a, int b)
{
	int n = 0;

	// 현재 인자값은 esi, edi 에 있다.
	// 어셈블리를 직접 작성해서 esi, edi를 사용해도 된다.
	// 하지만, esi, edi는 계속 사용해야 하므로 (비싼 자원이므로)
	// esi, edi를 다시 메모리로 옮기고 사용하자
//	int a, b;
//	mov b, edi
//	mov a, esi    // 위에 함수 인자가 결국 이 3줄의 의미 입니다.

	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%p\n", &n);
	return a + b;
}

int main()
{
	int ret = add(1, 2); // 함수를 호출하는 것은
		
//	mov edi, 2 // 함수 인자를 약속된 곳에 넣어 놓고
//	mov esi, 1 // 32비트는 메모리에, 64비트는 CPU안에 있는 레지스터라는 공간에)  
//	call add주소   // add 함수로 이동.
}



