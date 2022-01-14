#include <stdio.h>

struct Point
{
	int x, y; // 이렇게 해도 됩니다.
};

// C언어 시절에 struct 단어 없이 사용하기 위한 기법 - 132
struct _Complex
{
	int real;
	int image;
};
typedef struct _Complex Complex;

int main()
{
	// 다음중 어느 코드가 편리해 보이세요.
	Point p1;			// C++가능, C 에러.
	struct Point p2;

	// 결국 아래 2줄은 동일 합니다.
	struct _Complex c1;
	Complex c2;

}