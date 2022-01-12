// 5_recursive1.c - 88
#include <stdio.h>

// 아래 코드는 "hello"를 무한히 호출할것 같지만, 결국 비정상종료(죽게)됩니다.
// => 인자가 없는 함수도 "return address"를 보관하기 위한 메모리를 사용하게 됩니다.
// => 그래서 아래처럼 자신을 계속 호출하면 언젠가는 메모리가 부족해서 비정상 종료합니다.

void f1()
{
	printf("hello\n");

//	f1(); // 자신이 다시 자신을 호출하는 코드 - recursive call
		  // 재귀 호출이라고 합니다.
}
int main()
{
	f1();   // call f1  => push 함수 호출종료후 돌아올 메모리 주소
			//             jmp  f1의 주소.

}