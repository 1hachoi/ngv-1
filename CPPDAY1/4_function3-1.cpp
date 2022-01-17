#include <iostream> 

template<typename T>
T square(T a)
{
	return a * a;
}

int main()
{
	square(3); // 이 코드를 보고 square()가 함수라고 오해 하는 경우가 있습니다.
			   // square는 함수가 아닙니다.
			   // square<int>(3);

	// 함수 주소를 생각해 봅시다.
//	printf("%p\n", &square); // 될까요 ? error
	printf("%p\n", &square<int>); // ok.. 이게 함수의 주소 입니다.
	printf("%p\n", &square<double>); // ok.. 이순간 square<double>을생성하고
									// 주소 출력
}


