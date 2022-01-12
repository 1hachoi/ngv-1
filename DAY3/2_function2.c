#include <stdio.h>

// 함수의 모양 - 78 page
// 인자와 반환값이 없는 모양
//void say_hello(void)   // 예전 표기법
void say_hello()         // 요즘은 이렇게 많이 합니다.
{
	printf("hello!!\n");

	// 반환값이 없을때
	return;  // 이렇게 하거나, return 자체를 생략 가능.

	printf("AA"); // 이문장은 절때 실행 안됨.
}

// 반환값만 있는 모양
int get10()
{
	// 함수가 값을 리턴하는 것은
	// CPU의 레지스터에 반환값을 넣어 두기로 약속하는 작업입니다.
	return 10;  // mov eax, 10 입니다.
	
}

// 인자와 반환값이 모두 있는 모양
int add(int a, int b)
{
	return a + b;
}

int main()
{
	// 함수를 사용하는 것 => "함수 호출"이라고 표현합니다.
	say_hello();

	// 반환값이 있는 함수를 호출할때
	int n = get10(); // 반환값을 받는 모양
			// call get10
			// mov n, eax 

	get10();         // 반환값을 받지 않는 모양 - 사용하지 않겠다는 의미	
			// call get10

	// 인자와 반환값이 모두 있는 경우
	int n2 = add(10, 20);
}




// godbolt.org  접속하세요