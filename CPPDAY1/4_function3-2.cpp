#include <iostream> 

// typename 또는 class 가능. 완전히 동일
/*
//template<typename T>
template<class T>	// 위와 완벽히 동일합니다.(typename이 나오기전 표기법)
T square(T a)
{
	return a * a;
}
*/
// C++17 : 함수 인자로는 auto 를 사용할수 없다.
// C++20 : 함수 인자로 auto 사용가능. 아래 코드는 위코드와 동일
//		   즉, 아래 코드는 "함수가 아니라 template 입니다."
auto square(auto a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);

	auto a = 3; // 컴파일 하면 "int a = 3" 으로 변경됩니다.
}



// 2:05 부터 이어집니다.

