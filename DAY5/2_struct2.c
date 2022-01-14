// 2_struct2.c
#include <stdio.h>
// 130 page
struct Complex    // 이 코드는 메모리를 사용하는 것이 아니라
{                 // 컴파일러에게 새로운 타입을 알려주는 것입니다.
	int real;
	int image;
};

int main()
{
	int n = 10;       // primitive type의 변수 만들기
	struct Complex c; // user defined type의 변수 만들기

	c.real = 3;   // *(&c + 0) = 3
	c.image = 4;  // *(&c + sizeof(real)) = 4
}
